inline SettingBuzzer_init() {
  buzzeroneBbuzzer = false;
  buzzeroneBend = false;
}
inline TimerBuzzer_init() {
  buzzeroneCbuzzer = false;
  buzzeroneCend = false;
  buzzeroneDbuzzer = false;
  buzzeroneDend = false;
  buzzerThreebuzzer = false;
  buzzerThreeend = false;
}

mtype = { idle, boil, keep, error, high, save, milk, open, close, locked, unlocked, running, stop};

bool coversensor = false;
bool coverclosed = false;

bool timerbutton = false;
bool timerstopstart = false;
bool timerrunstartA = false;
bool timerrunstartB = false;
bool timerrunstartC = false;
bool timertimeout = false;
bool timerbuzzerT = false;

bool buzzeroneCbuzzer = false;
bool buzzeroneCend = false;

bool buzzeroneDbuzzer = false;
bool buzzeroneDend = false;

bool buzzerThreebuzzer = false;
bool buzzerThreeend = false;

bool settingbutton = false;
bool settingstart = false;
bool settingbuzzerS = false;

bool buzzeroneBbuzzer = false;
bool buzzeroneBend = false;

bool buzzeroneend = false;

bool watererror = false;

bool lockbutton = false;
bool locklock = false;

bool supplybutton = false;
bool boilbutton = false;
bool erroroccurred = false;

bool potsupply = false;
bool potbuzzerP = false;

mtype Buzzerone = stop;
mtype BuzzeroneB = stop;
mtype BuzzeroneC = stop;
mtype BuzzeroneD = stop;
mtype BuzzerThree = stop;
mtype Cover = open;
mtype Lock = unlocked;
mtype Pot = idle;
mtype Setting = high;
mtype Timer = stop;

mtype NBuzzerone = stop;
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
    :: watererror = true
    :: watererror = false
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
    if
    :: timertimeout = true
    :: timertimeout = false
    fi;
    
    /* decide next cover state */
    if
    :: (Cover == open) ->
        coverclosed = false;
        if
        :: coversensor -> NCover = close
        :: else -> NCover = Cover
        fi
    :: (Cover == close) ->
        coverclosed = true;
        if
        :: !coversensor -> NCover = open
        :: else -> NCover = Cover
        fi
    fi;
    
    /* decide next timer state */
    if
    :: (Timer == stop) ->
       timerstopstart = timerbutton && coverclosed;
       if
       :: (BuzzeroneC == stop) ->
          buzzeroneCbuzzer = false;
          buzzeroneCend = false;
          if
          :: timerstopstart -> NBuzzeroneC = running
          :: else -> NBuzzeroneC = BuzzeroneC
          fi
       :: (BuzzeroneC == running) ->
          buzzeroneCend = true;
          buzzeroneCbuzzer = true;
          NBuzzeroneC = stop 
       fi;
       bool timerstopend = false;
       if
       :: !timerbutton -> timerstopend = true
       :: timerstopend = false
       fi;
       timerbuzzerT = buzzeroneCbuzzer;
       if
       :: timerstopend -> NTimer = running; timerstopstart = false; timerstopend = false; TimerBuzzer_init()
       :: else -> NTimer = Timer
       fi
    :: (Timer == running) ->
       bool timerrunreset = false;
       if
       :: timerbutton && coverclosed -> timerrunreset = true
       :: timerrunreset = false
       fi;
       
       timerrunstartA = timerbutton && !timerrunreset && coverclosed;
       if
       :: (BuzzeroneC == stop) ->
          buzzeroneCbuzzer = false;
          buzzeroneCend = false;
          if
          :: timerrunstartA -> NBuzzeroneC = running
          :: else -> NBuzzeroneC = BuzzeroneC
          fi
       :: (BuzzeroneC == running) ->
          buzzeroneCend = true;
          buzzeroneCbuzzer = true;
          NBuzzeroneC = stop
       fi;
       
       timerrunstartB = timerbutton && timerrunreset && coverclosed;
       if
       :: (BuzzeroneD == stop) ->
          buzzeroneDbuzzer = false;
          buzzeroneDend = false;
          if
          :: timerrunstartB -> NBuzzeroneD = running
          :: else -> NBuzzeroneD = BuzzeroneD
          fi
       :: (BuzzeroneD == running) ->
          buzzeroneDend = true;
          buzzeroneDbuzzer = true;
          NBuzzeroneD = stop
       fi;
       
       timerrunstartC = timertimeout;
       if
       ::(BuzzerThree == stop) ->
          buzzerThreebuzzer = false;
          buzzerThreeend = false;
          if
          :: timerrunstartC -> NBuzzerThree = running
          :: else -> NBuzzerThree = BuzzerThree
          fi
       ::(BuzzerThree == running) ->
          buzzerThreeend = true;
          buzzerThreebuzzer = true;
          NBuzzerThree = stop
       fi;
       if 
       :: buzzeroneDend || buzzerThreeend -> NTimer = stop; timerrunstartA = false; timerrunreset = false; timerrunstartB = false; timerrunstartC = false; TimerBuzzer_init()
       :: else -> NTimer = Timer
       fi
    fi;
    
    /* decide next setting state */
    if
    :: settingbutton && coverclosed -> settingstart = true
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
       buzzeroneBend = true;
       buzzeroneBbuzzer = true;
       NBuzzeroneB = stop
    fi;
    if
    :: buzzeroneBend && coverclosed -> 
       if
       :: Setting == high -> NSetting = save; SettingBuzzer_init()
       :: Setting == save -> NSetting = milk; SettingBuzzer_init()
       :: Setting == milk -> NSetting = high; SettingBuzzer_init()
       fi
    :: else -> NSetting = Setting
    fi;
    
    /* decide next lock state */
    if
    ::(Lock == unlocked) ->
      locklock = false;
      if
      ::(!coverclosed || potsupply) -> NLock = unlocked
      :: lockbutton -> NLock = locked
      :: else -> NLock = Lock
      fi
    ::(Lock == locked) ->
      locklock = true;
      if
      ::(!coverclosed || potsupply) -> NLock = unlocked
      :: lockbutton -> NLock = unlocked
      :: else -> NLock = Lock
      fi;
    fi;
    
    /* decide next pot state */
    if
    ::(Pot == idle) ->
        potsupply = false;
        potbuzzerP = false;
        if
        ::(coverclosed && !watererror) -> NPot = boil
        :: else -> NPot = Pot
        fi
    ::(Pot == boil) ->
        potsupply = false;
        potbuzzerP = false;
        bool potboilmodewait = false;
        if
        :: potboilmodewait = true
        :: potboilmodewait = false
        fi;
        if
        :: erroroccurred -> NPot = error; potbuzzerP = true; potboilmodewait = 0
        :: else ->
           if
           ::(!coverclosed || watererror) -> NPot = idle; potboilmodewait = false
           :: else ->
              if
              :: potboilmodewait -> NPot = keep; potboilmodewait = false
              :: else -> NPot = Pot
              fi
           fi
        fi
    ::(Pot == keep) ->
        if
        ::(supplybutton && !watererror && coverclosed && NLock == unlocked) -> potsupply = true
        :: else -> potsupply = false
        fi;
        if
        ::(Buzzerone == stop) ->
          potbuzzerP = false;
          buzzeroneend = false;
          if
          :: boilbutton -> NBuzzerone = running
          :: else -> NBuzzerone = Buzzerone
          fi
        ::(Buzzerone == running) ->
          potbuzzerP = true;
          buzzeroneend = true;
          NBuzzerone = stop
        fi;
        if
        :: erroroccurred -> NPot = error; potbuzzerP = true
        :: else ->
           if
           ::(!coverclosed || watererror) -> NPot = idle 
           :: else ->
              if
              ::(buzzeroneend && !potsupply) ->  NPot = boil
              :: else -> NPot = Pot
              fi
           fi
        fi
    ::(Pot == error) -> 
        potsupply = false;
        potbuzzerP = true;
        NPot = Pot
    fi
    }
    
check: skip;
    
    atomic {
    Buzzerone = NBuzzerone;
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
