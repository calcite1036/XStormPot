
mtype = { idle, boil, keep, error, high, save, milk, open, close, locked, unlocked, running, stop};

typedef Time {
  byte minute;
  byte second;
}

byte dt = 0;

bool coversensor = false;
short coveropenwait = 0;
short coverclosewait = 0;
bool coverclosed = false;

bool timerbutton = false;
short timerstopwait = 0;
short timerstopend = 0;
bool timerstopstart = false;
short timerrunwait = 0;
bool timerrunstartA = false;
short Ltimerruncounter = 0;
short timerruncounter = 0;
bool timerrunpulse = false;
short Ltimerrunreset = 0;
short timerrunreset = 0;
bool timerrunstartB = false;
bool timerrunstartC = false;
Time timertime;
bool timerbuzzerT = false;

short buzzeroneCrunwait = 0;
bool buzzeroneCbuzzer = false;
bool buzzeroneCend = false;

short buzzeroneDrunwait = 0;
bool buzzeroneDbuzzer = false;
bool buzzeroneDend = false;

short buzzerThreerunwait = 0;
bool buzzerThreebuzzer = false;
bool buzzerThreeend = false;

bool settingbutton = false;
short settingwait = 0;
bool settingstart = false;
short settingsetting = 0;
bool settingbuzzerS = false;

short buzzeroneBrunwait = 0;
bool buzzeroneBbuzzer = false;
bool buzzeroneBend = false;

bool watersensor[4] = {false,false,false,false}
bool fullsensor = false;

bool lockbutton = false;
short lockunlockedwait = 0;
short locklockedwait = 0;
bool locklock = false;

bool plug = false;
bool supplybutton = false;
bool boilbutton = false;
bool erroroccurred = false;

short potboilmodewait = 0;
short potbuzzerwait = 0;
bool potboillamp = false;
bool potkeeplamp = false;
bool potsupply = false;
bool potbuzzerP = false;

mtype BuzzeroneB = stop;
mtype BuzzeroneC = stop;
mtype BuzzeroneD = stop;
mtype BuzzerThree = stop;
mtype Cover = open;
mtype Lock = unlocked;
mtype Pot = idle;
mtype Setting = high;
mtype Timer = stop;

mtype NBuzzeroneB = stop;
mtype NBuzzeroneC = stop;
mtype NBuzzeroneD = stop;
mtype NBuzzerThree = stop;
mtype NCover = open;
mtype NLock = unlocked;
mtype NPot = idle;
mtype NSetting = high;
mtype NTimer = stop;

active proctype Main(){
  do
  :: atomic {
    /* random input */
    if
    :: dt = 32
    fi;
    if
    :: coversensor = true
    :: coversensor = false
    fi;
    if
    :: timerbutton = true
    :: timerbutton = false
    fi;
    if
    :: settingbutton = true
    :: settingbutton = false
    fi;
    if
    :: watersensor[0] = true
    :: watersensor[0] = false
    fi;
    if
    :: watersensor[1] = true
    :: watersensor[1] = false
    fi;
    if
    :: watersensor[2] = true
    :: watersensor[2] = false
    fi;
    if
    :: watersensor[3] = true
    :: watersensor[3] = false
    fi;
    if
    :: fullsensor = true
    :: fullsensor = false
    fi;
    if
    :: boilbutton = true
    :: boilbutton = false
    fi;
    if
    :: lockbutton = true
    :: lockbutton = false
    fi;
    if
    :: supplybutton = true
    :: supplybutton = false
    fi;
    if
    :: erroroccurred = true
    :: erroroccurred = false
    fi;
    
    /* decide next cover state */
    if
    :: (Cover == open) ->
        coverclosed = false;
        if
        :: coversensor -> coveropenwait = coveropenwait + dt
        :: else -> coveropenwait = 0
        fi;
        if
        :: coversensor && coveropenwait >= 3000 -> NCover = close; coveropenwait = 0
        :: else -> NCover = Cover
        fi
    :: (Cover == close) ->
        coverclosed = true;
        if
        :: !coversensor -> coverclosewait = coverclosewait + dt
        :: else -> coverclosewait = 0
        fi;
        if
        :: !coversensor && coverclosewait >= 1000 -> NCover = open; coverclosewait = 0
        :: else -> NCover = Cover
        fi
    fi;
    
    /* decide next timer state */
    if
    :: (Timer == stop) ->
       timerstopstart = !timerbutton && (timerstopwait >= 100) && coverclosed;
       if
       :: (BuzzeroneC == stop) ->
          buzzeroneCbuzzer = false;
          buzzeroneCend = false;
          if
          :: timerstopstart -> NBuzzeroneC = running
          :: else -> NBuzzeroneC = BuzzeroneC
          fi
       :: (BuzzeroneC == running) ->
          buzzeroneCrunwait = buzzeroneCrunwait + dt;
          if
          :: (buzzeroneCrunwait <= 50) -> buzzeroneCbuzzer = true
          :: else -> buzzeroneCbuzzer = false
          fi;
          if
          :: (buzzeroneCrunwait >= 50) -> buzzeroneCend = true
          :: else -> buzzeroneCend = false
          fi;
          if
          :: (buzzeroneCrunwait >= 50) -> NBuzzeroneC = stop; buzzeroneCrunwait = 0
          :: else -> NBuzzeroneC = BuzzeroneC
          fi
       fi;
       if
       :: timerbutton -> timerstopwait = timerstopwait + dt
       :: else -> timerstopwait = 0
       fi;
       if
       :: !timerbutton && !buzzeroneCend -> timerstopend = timerstopend + dt
       :: else -> timerstopend = 0
       fi;
       if
       :: buzzeroneCend && coverclosed -> 
          if
          :: timertime.minute == 60 -> timertime.minute = 0; timertime.second = 0
          :: else -> timertime.minute = timertime.minute + 1; timertime.second = 0
          fi
       :: else -> skip
       fi;
       timerbuzzerT = buzzeroneCbuzzer;
       if
       :: (timerstopend >= 1000 && timertime.minute != 0) -> NTimer = running; timerstopstart = false; timerstopend = 0; timerstopwait = 0
       :: else -> NTimer = Timer
       fi
    :: (Timer == running) ->
       timerrunstartA = !timerbutton && timerrunwait >= 100 && coverclosed;
       if
       :: timerbutton && coverclosed -> timerrunwait = timerrunwait + dt
       :: else -> timerrunwait = 0
       fi;
       timerruncounter = (Ltimerruncounter + dt) % 1000;
       timerrunpulse = Ltimerruncounter > timerruncounter;
       if
       :: timerbutton && coverclosed -> timerrunreset = Ltimerrunreset + dt
       :: else -> timerrunreset = 0
       fi;
       
       if
       :: (BuzzeroneC == stop) ->
          buzzeroneCbuzzer = false;
          buzzeroneCend = false;
          if
          :: timerrunstartA -> NBuzzeroneC = running
          :: else -> NBuzzeroneC = BuzzeroneC
          fi
       :: (BuzzeroneC == running) ->
          buzzeroneCrunwait = buzzeroneCrunwait + dt;
          if
          :: (buzzeroneCrunwait <= 50) -> buzzeroneCbuzzer = true
          :: else -> buzzeroneCbuzzer = false
          fi;
          if
          :: (buzzeroneCrunwait >= 50) -> buzzeroneCend = true
          :: else -> buzzeroneCend = false
          fi;
          if
          :: (buzzeroneCrunwait >= 50) -> NBuzzeroneC = stop; buzzeroneCrunwait = 0
          :: else -> NBuzzeroneC = BuzzeroneC
          fi
       fi;
       
       timerrunstartB = !timerbutton & timerrunreset >= 3000 && coverclosed;
       timerrunstartC = timertime.minute == 0 && timertime.second == 0;
       
       if
       :: (BuzzeroneD == stop) ->
          buzzeroneDbuzzer = false;
          buzzeroneDend = false;
          if
          :: timerrunstartB -> NBuzzeroneD = running
          :: else -> NBuzzeroneD = BuzzeroneD
          fi
       :: (BuzzeroneD == running) ->
          buzzeroneDrunwait = buzzeroneDrunwait + dt;
          if
          :: (buzzeroneDrunwait <= 100) -> buzzeroneDbuzzer = true
          :: else -> buzzeroneDbuzzer = false
          fi;
          if
          :: (buzzeroneDrunwait >= 100) -> buzzeroneDend = true
          :: else -> buzzeroneDend = false
          fi;
          if
          :: (buzzeroneDrunwait >= 100) -> NBuzzeroneD = stop; buzzeroneDrunwait = 0
          :: else -> NBuzzeroneD = BuzzeroneD
          fi
       fi;
       
       if
       ::(BuzzerThree == stop) ->
         buzzerThreebuzzer = false;
         buzzerThreeend = false;
         if
         :: timerrunstartC -> NBuzzerThree = running
         :: else -> NBuzzerThree = BuzzerThree
         fi
       ::(BuzzerThree == running) ->
         buzzerThreerunwait = buzzerThreerunwait + dt;
         if
         :: buzzerThreerunwait <= 100 -> buzzerThreebuzzer = true
         :: buzzerThreerunwait >= 200 && buzzerThreerunwait <= 300 -> buzzerThreebuzzer = true
         :: buzzerThreerunwait >= 400 && buzzerThreerunwait <= 500 -> buzzerThreebuzzer = true
         :: else -> buzzerThreebuzzer = false
         fi;
         if
         :: buzzerThreerunwait >= 500 -> buzzerThreeend = true
         :: else -> buzzerThreeend = false
         fi;
         if
         :: buzzerThreerunwait >= 500 -> NBuzzerThree = stop; buzzerThreerunwait = 0
         :: else -> NBuzzerThree = BuzzerThree
         fi
       fi;
       if
       :: buzzeroneDend -> timertime.minute = 0; timertime.second = 0
       :: buzzeroneCend && coverclosed && Ltimerrunreset < 3000 -> 
          if
          :: timertime.minute == 60 -> timertime.minute = 0; timertime.second = 0
          :: else -> timertime.minute = timertime.minute + 1; timertime.second = 0
          fi
       :: timerrunpulse ->
          if
          :: timertime.minute == 0 && timertime.second == 0 -> skip
          :: else ->
             if
             :: timertime.second == 0 -> timertime.minute = timertime.minute - 1; timertime.second = 59
             :: else -> timertime.second = timertime.second - 1
             fi
          fi 
       :: else -> skip
       fi;
       if 
       :: buzzeroneDend || buzzerThreeend -> NTimer = stop; timerrunwait = 0; timerrunstartA = false; Ltimerruncounter = 0; timerruncounter = 0; timerrunpulse = false; Ltimerrunreset = 0; timerrunreset = 0; timerrunstartB = false; timerrunstartC = false
       :: else -> NTimer = Timer
       fi
    fi;
    
    /* decide next setting state */
    if
    :: Setting == high -> settingsetting = 0;
    :: Setting == save -> settingsetting = 1;
    :: Setting == milk -> settingsetting = 2;
    fi;
    if
    :: settingwait >= 100 && !settingbutton && coverclosed -> settingstart = true
    :: else -> settingstart = false
    fi;    
    if
    :: (BuzzeroneB == stop) ->
       buzzeroneBbuzzer = false;
       buzzeroneBend = false;
       if
       :: settingstart -> NBuzzeroneB = running
       :: else -> NBuzzeroneB = BuzzeroneB
       fi
    :: (BuzzeroneB == running) ->
       buzzeroneBrunwait = buzzeroneBrunwait + dt;
       if
       :: (buzzeroneBrunwait <= 100) -> buzzeroneBbuzzer = true
       :: else -> buzzeroneBbuzzer = false
       fi;
       if
       :: (buzzeroneBrunwait >= 100) -> buzzeroneBend = true
       :: else -> buzzeroneBend = false
       fi;
       if
       :: (buzzeroneBrunwait >= 100) -> NBuzzeroneB = stop
       :: else -> NBuzzeroneB = BuzzeroneB
       fi
    fi;
    if
    :: settingbutton -> settingwait = settingwait + dt
    :: else -> settingwait = 0
    fi;
    if
    :: buzzeroneBend && coverclosed -> 
       if
       :: Setting == high -> NSetting = save
       :: Setting == save -> NSetting = milk
       :: Setting == milk -> NSetting = high
       fi
    :: else -> NSetting = Setting
    fi;
    
    /* decide next lock state */
    if
    ::(Lock == unlocked) ->
      locklock = false;
      if
      ::(!coverclosed || potsupply) -> NLock = unlocked
      ::(!lockbutton && lockunlockedwait >= 100) -> NLock = locked
      :: else -> NLock = Lock
      fi;
      if
      :: NLock == unlocked && lockbutton -> lockunlockedwait = lockunlockedwait + dt
      :: else -> lockunlockedwait = 0
      fi
    ::(Lock == locked) ->
      locklock = true;
      if
      ::(!coverclosed || potsupply) -> NLock = unlocked
      ::(!lockbutton && locklockedwait >= 100) -> NLock = unlocked
      :: else -> NLock = Lock
      fi;
      if
      :: NLock = locked && lockbutton -> locklockedwait = locklockedwait + dt
      :: else -> locklockedwait = 0
      fi
    fi;
    
    /* decide next pot state */
    if
    ::(Pot == idle) ->
        potboillamp = false;
        potkeeplamp = false;
        potsupply = false;
        potbuzzerP = false;
        if
        ::(coverclosed && !fullsensor && (watersensor[0] || watersensor[1] || watersensor[2] || watersensor[3])) -> NPot = boil
        :: else -> NPot = Pot
        fi
    ::(Pot == boil) ->
        potboillamp = true;
        potkeeplamp = false;
        potsupply = false;
        potbuzzerP = false;
        potboilmodewait = potboilmodewait + dt;
        if
        :: erroroccurred -> NPot = error; potboilmodewait = 0
        :: else ->
           if
           ::(!coverclosed || fullsensor || !(watersensor[0] || watersensor[1] || watersensor[2] || watersensor[3])) -> NPot = idle; potboilmodewait = 0
           :: else ->
              if
              :: potboilmodewait >= 100 -> NPot = keep; potboilmodewait = 0
              :: else -> NPot = Pot
              fi
           fi
        fi
    ::(Pot == keep) ->
        potboillamp = false;
        potkeeplamp = true;
        if
        ::(supplybutton && !fullsensor && (watersensor[0] || watersensor[1] || watersensor[2] || watersensor[3]) && coverclosed && NLock == unlocked) -> potsupply = true
        :: else -> potsupply = false
        fi;
        potbuzzerP = false;
        if
        :: erroroccurred -> NPot = error
        :: else ->
           if
           ::(!coverclosed || fullsensor || !(watersensor[0] || watersensor[1] || watersensor[2] || watersensor[3])) -> NPot = idle
           :: else ->
              if
              ::(boilbutton && !potsupply) ->  NPot = boil
              :: else -> NPot = Pot
              fi
           fi
        fi
    ::(Pot == error) -> 
        potboillamp = false;
        potkeeplamp = false;
        potsupply = false;
        if
        :: potbuzzerwait >= 100 -> potbuzzerP = false
        :: else -> potbuzzerP = true
        fi;
        if
        :: potbuzzerP = true -> potbuzzerwait = potbuzzerwait + dt
        :: else -> potbuzzerwait = 0
        fi;
        NPot = Pot
    fi;
    
check: skip;

    Ltimerruncounter = timerruncounter;
    Ltimerrunreset = timerrunreset;
    BuzzeroneB = NBuzzeroneB;
    BuzzeroneC = NBuzzeroneC;
    BuzzeroneD = NBuzzeroneD;
    BuzzerThree = NBuzzerThree;
    Cover = NCover;
    Setting = NSetting;
    Pot = NPot;
    Timer = NTimer;
    Lock = NLock
  }
  od
}

ltl trait1 {[](Main@check -> (Pot == idle && coverclosed && watererror -> NPot != boil))}
ltl trait2 {[](Main@check -> (Pot == keep && potsupply -> NPot != boil))}
ltl trait3 {[](Main@check -> ((Pot == boil || Pot == keep) && erroroccurred -> NPot == error))}
ltl trait4 {[](Main@check -> ((Pot == boil || Pot == keep) && watererror -> NPot == idle))}
ltl trait5 {[](Main@check -> ((Pot == boil || Pot == keep) && !coverclosed -> NPot == idle))}