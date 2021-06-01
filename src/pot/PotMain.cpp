#include "PotMain.h"

struct PotlibTime {
  int mark;
  union {
    struct TupleIntInt* Time;
  } value;
};

struct TupleIntInt {
  int mark;
  int member0;
  int member1;
};

struct StateBuzzerThreeBuzzerThree {
  int mark;
  int fresh;
  int tag;
};

struct StateBuzzerOneDBuzzerOneD {
  int mark;
  int fresh;
  int tag;
};

struct StateBuzzerOneCBuzzerOneC {
  int mark;
  int fresh;
  int tag;
};

struct StateTimerTimer {
  int mark;
  int fresh;
  int tag;
};

struct StateBuzzerOneBBuzzerOneB {
  int mark;
  int fresh;
  int tag;
};

struct StateSettingSetting {
  int mark;
  int fresh;
  int tag;
};

struct StateLockLock {
  int mark;
  int fresh;
  int tag;
};

struct StateCoverCover {
  int mark;
  int fresh;
  int tag;
};

struct StateBuzzerOneBuzzerOne {
  int mark;
  int fresh;
  int tag;
};

struct StatePotPot {
  int mark;
  int fresh;
  int tag;
};

struct MemoryWaterWater {
  int init;
  int fullSensor[2];
  int waterSensor1[2];
  int waterSensor2[2];
  int waterSensor3[2];
  int waterSensor4[2];
  int closed[2];
  int water[2];
};

struct MemoryBuzzerThreeBuzzerThreeRun {
  int init;
  int wait[2];
};

struct MemoryBuzzerThreeBuzzerThreeStop {
  int init;
};

struct MemoryBuzzerThreeBuzzerThree {
  int init;
  int start[2];
  int dt[2];
  int buzzer[2];
  int end[2];
  struct StateBuzzerThreeBuzzerThree* state;
  union {
    struct MemoryBuzzerThreeBuzzerThreeRun Run;
    struct MemoryBuzzerThreeBuzzerThreeStop Stop;
  } statebody;
};

struct MemoryBuzzerOneDBuzzerOneDRun {
  int init;
  int wait[2];
};

struct MemoryBuzzerOneDBuzzerOneDStop {
  int init;
};

struct MemoryBuzzerOneDBuzzerOneD {
  int init;
  int start[2];
  int dt[2];
  int buzzer[2];
  int end[2];
  struct StateBuzzerOneDBuzzerOneD* state;
  union {
    struct MemoryBuzzerOneDBuzzerOneDRun Run;
    struct MemoryBuzzerOneDBuzzerOneDStop Stop;
  } statebody;
};

struct MemoryBuzzerOneCBuzzerOneCRun {
  int init;
  int wait[2];
};

struct MemoryBuzzerOneCBuzzerOneCStop {
  int init;
};

struct MemoryBuzzerOneCBuzzerOneC {
  int init;
  int start[2];
  int dt[2];
  int buzzer[2];
  int end[2];
  struct StateBuzzerOneCBuzzerOneC* state;
  union {
    struct MemoryBuzzerOneCBuzzerOneCRun Run;
    struct MemoryBuzzerOneCBuzzerOneCStop Stop;
  } statebody;
};

struct MemoryTimerTimerRun {
  int init;
  int counter[2];
  int pulse[2];
  int resetInput[2];
  int startA[2];
  int startB[2];
  int startC[2];
  int waitInput[2];
  struct MemoryBuzzerThreeBuzzerThree newnode10;
  int buzzerTC[2];
  int endC[2];
  struct MemoryBuzzerOneCBuzzerOneC newnode8;
  int buzzerTA[2];
  int endA[2];
  struct MemoryBuzzerOneDBuzzerOneD newnode9;
  int buzzerTB[2];
  int endB[2];
};

struct MemoryTimerTimerStop {
  int init;
  int endInput[2];
  int start[2];
  int waitInput[2];
  struct MemoryBuzzerOneCBuzzerOneC newnode7;
  int end[2];
};

struct MemoryTimerTimer {
  int init;
  int timerButton[2];
  int closed[2];
  int dt[2];
  struct PotlibTime* time[2];
  int buzzerT[2];
  struct StateTimerTimer* state;
  union {
    struct MemoryTimerTimerRun Run;
    struct MemoryTimerTimerStop Stop;
  } statebody;
};

struct MemoryBuzzerOneBBuzzerOneBRun {
  int init;
  int wait[2];
};

struct MemoryBuzzerOneBBuzzerOneBStop {
  int init;
};

struct MemoryBuzzerOneBBuzzerOneB {
  int init;
  int start[2];
  int dt[2];
  int buzzer[2];
  int end[2];
  struct StateBuzzerOneBBuzzerOneB* state;
  union {
    struct MemoryBuzzerOneBBuzzerOneBRun Run;
    struct MemoryBuzzerOneBBuzzerOneBStop Stop;
  } statebody;
};

struct MemorySettingSettingHighMode {
  int init;
  int start[2];
  int wait[2];
  struct MemoryBuzzerOneBBuzzerOneB newnode11;
  int end[2];
};

struct MemorySettingSettingMilkMode {
  int init;
  int start[2];
  int wait[2];
  struct MemoryBuzzerOneBBuzzerOneB newnode13;
  int end[2];
};

struct MemorySettingSettingSaveMode {
  int init;
  int start[2];
  int wait[2];
  struct MemoryBuzzerOneBBuzzerOneB newnode12;
  int end[2];
};

struct MemorySettingSetting {
  int init;
  int settingButton[2];
  int closed[2];
  int dt[2];
  int setting[2];
  int buzzerS[2];
  struct StateSettingSetting* state;
  union {
    struct MemorySettingSettingHighMode HighMode;
    struct MemorySettingSettingMilkMode MilkMode;
    struct MemorySettingSettingSaveMode SaveMode;
  } statebody;
};

struct MemoryLockLockLocked {
  int init;
  int wait[2];
};

struct MemoryLockLockUnlocked {
  int init;
  int wait[2];
};

struct MemoryLockLock {
  int init;
  int lockButton[2];
  int closed[2];
  int supply[2];
  int dt[2];
  int lock[2];
  struct StateLockLock* state;
  union {
    struct MemoryLockLockLocked Locked;
    struct MemoryLockLockUnlocked Unlocked;
  } statebody;
};

struct MemoryCoverCoverClose {
  int init;
  int wait[2];
};

struct MemoryCoverCoverOpen {
  int init;
  int wait[2];
};

struct MemoryCoverCover {
  int init;
  int coverSensor[2];
  int dt[2];
  int closed[2];
  struct StateCoverCover* state;
  union {
    struct MemoryCoverCoverClose Close;
    struct MemoryCoverCoverOpen Open;
  } statebody;
};

struct MemoryHeaterHeater {
  int init;
  int setting[2];
  int thermistor[2];
  int heater[2];
  int dt[2];
  int t[2];
  int tg[2];
};

struct MemoryBoiledBoiled {
  int init;
  int thermistor[2];
  int dt[2];
  int boiled[2];
  int reached[2];
  int wait[2];
};

struct MemoryBuzzerOneBuzzerOneRun {
  int init;
  int wait[2];
};

struct MemoryBuzzerOneBuzzerOneStop {
  int init;
};

struct MemoryBuzzerOneBuzzerOne {
  int init;
  int start[2];
  int dt[2];
  int buzzer[2];
  int end[2];
  struct StateBuzzerOneBuzzerOne* state;
  union {
    struct MemoryBuzzerOneBuzzerOneRun Run;
    struct MemoryBuzzerOneBuzzerOneStop Stop;
  } statebody;
};

struct MemoryBoilBoil {
  int init;
  int boilButton[2];
  int dt[2];
  int boil[2];
  int buzzerP[2];
  int start[2];
  int wait[2];
  struct MemoryBuzzerOneBuzzerOne newnode17;
};

struct MemoryPotPotBoilMode {
  int init;
  struct MemoryBoiledBoiled newnode14;
  int boiled[2];
};

struct MemoryPotPotErrorMode {
  int init;
  int buzzerWait[2];
};

struct MemoryPotPotIdleMode {
  int init;
};

struct MemoryPotPotKeepMode {
  int init;
  int errorA[2];
  int errorB[2];
  int mcounter[2];
  int mdown[2];
  int mpulse[2];
  int mtemp[2];
  struct MemoryBoilBoil newnode15;
  int boil[2];
  struct MemoryHeaterHeater newnode16;
};

struct MemoryPotPot {
  int init;
  int plug[2];
  int closed[2];
  int water[2];
  int thermistor[2];
  int locklamp[2];
  int supplyButton[2];
  int boilButton[2];
  int keeptemp[2];
  int dt[2];
  int heater[2];
  int battery[2];
  int temperature[2];
  int boillamp[2];
  int keeplamp[2];
  int supply[2];
  int buzzerP[2];
  struct StatePotPot* state;
  union {
    struct MemoryPotPotBoilMode BoilMode;
    struct MemoryPotPotErrorMode ErrorMode;
    struct MemoryPotPotIdleMode IdleMode;
    struct MemoryPotPotKeepMode KeepMode;
  } statebody;
};

struct MemoryPotMainMain {
  int init;
  int pressedA[2];
  int pressedB[2];
  int pressedC[2];
  int elapsed[2];
  int heater[2];
  int battery[2];
  int time[2];
  int temperature[2];
  int boillamp[2];
  int keeplamp[2];
  int locklamp[2];
  int mode[2];
  int buzzer[2];
  int water[2];
  int supply[2];
  int test[2];
  int dt[2];
  struct MemoryCoverCover newnode1;
  int closed[2];
  struct MemoryTimerTimer newnode2;
  struct PotlibTime* timer[2];
  int buzzerT[2];
  struct MemorySettingSetting newnode3;
  int keeptemp[2];
  int buzzerS[2];
  struct MemoryWaterWater newnode4;
  struct MemoryPotPot newnode5;
  int buzzerP[2];
  struct MemoryLockLock newnode6;
};

int clock;
int period = 107;
int current_side;

struct PotlibTime memory_PotlibTime[2];
int size_PotlibTime = 2;
int counter_PotlibTime = 0;

struct TupleIntInt memory_TupleIntInt[2];
int size_TupleIntInt = 2;
int counter_TupleIntInt = 0;

struct StateBuzzerThreeBuzzerThree memory_StateBuzzerThreeBuzzerThree[2];
int size_StateBuzzerThreeBuzzerThree = 2;
int counter_StateBuzzerThreeBuzzerThree = 0;

struct StateBuzzerOneDBuzzerOneD memory_StateBuzzerOneDBuzzerOneD[2];
int size_StateBuzzerOneDBuzzerOneD = 2;
int counter_StateBuzzerOneDBuzzerOneD = 0;

struct StateBuzzerOneCBuzzerOneC memory_StateBuzzerOneCBuzzerOneC[2];
int size_StateBuzzerOneCBuzzerOneC = 2;
int counter_StateBuzzerOneCBuzzerOneC = 0;

struct StateTimerTimer memory_StateTimerTimer[2];
int size_StateTimerTimer = 2;
int counter_StateTimerTimer = 0;

struct StateBuzzerOneBBuzzerOneB memory_StateBuzzerOneBBuzzerOneB[2];
int size_StateBuzzerOneBBuzzerOneB = 2;
int counter_StateBuzzerOneBBuzzerOneB = 0;

struct StateSettingSetting memory_StateSettingSetting[2];
int size_StateSettingSetting = 2;
int counter_StateSettingSetting = 0;

struct StateLockLock memory_StateLockLock[2];
int size_StateLockLock = 2;
int counter_StateLockLock = 0;

struct StateCoverCover memory_StateCoverCover[2];
int size_StateCoverCover = 2;
int counter_StateCoverCover = 0;

struct StateBuzzerOneBuzzerOne memory_StateBuzzerOneBuzzerOne[2];
int size_StateBuzzerOneBuzzerOne = 2;
int counter_StateBuzzerOneBuzzerOne = 0;

struct StatePotPot memory_StatePotPot[2];
int size_StatePotPot = 2;
int counter_StatePotPot = 0;

struct MemoryPotMainMain memory;

static struct PotlibTime* PotlibTime_Time(struct TupleIntInt*);
static void mark_PotlibTime(struct PotlibTime*, int);
static void free_PotlibTime(struct PotlibTime*);
static struct TupleIntInt* TupleIntInt_Cons(int, int);
static void mark_TupleIntInt(struct TupleIntInt*, int);
static void free_TupleIntInt(struct TupleIntInt*);
static struct StateBuzzerThreeBuzzerThree* StateBuzzerThreeBuzzerThree_Run();
static struct StateBuzzerThreeBuzzerThree* StateBuzzerThreeBuzzerThree_Stop();
static void mark_StateBuzzerThreeBuzzerThree(struct StateBuzzerThreeBuzzerThree*, int);
static void free_StateBuzzerThreeBuzzerThree(struct StateBuzzerThreeBuzzerThree*);
static struct StateBuzzerOneDBuzzerOneD* StateBuzzerOneDBuzzerOneD_Run();
static struct StateBuzzerOneDBuzzerOneD* StateBuzzerOneDBuzzerOneD_Stop();
static void mark_StateBuzzerOneDBuzzerOneD(struct StateBuzzerOneDBuzzerOneD*, int);
static void free_StateBuzzerOneDBuzzerOneD(struct StateBuzzerOneDBuzzerOneD*);
static struct StateBuzzerOneCBuzzerOneC* StateBuzzerOneCBuzzerOneC_Run();
static struct StateBuzzerOneCBuzzerOneC* StateBuzzerOneCBuzzerOneC_Stop();
static void mark_StateBuzzerOneCBuzzerOneC(struct StateBuzzerOneCBuzzerOneC*, int);
static void free_StateBuzzerOneCBuzzerOneC(struct StateBuzzerOneCBuzzerOneC*);
static struct StateTimerTimer* StateTimerTimer_Run();
static struct StateTimerTimer* StateTimerTimer_Stop();
static void mark_StateTimerTimer(struct StateTimerTimer*, int);
static void free_StateTimerTimer(struct StateTimerTimer*);
static struct StateBuzzerOneBBuzzerOneB* StateBuzzerOneBBuzzerOneB_Run();
static struct StateBuzzerOneBBuzzerOneB* StateBuzzerOneBBuzzerOneB_Stop();
static void mark_StateBuzzerOneBBuzzerOneB(struct StateBuzzerOneBBuzzerOneB*, int);
static void free_StateBuzzerOneBBuzzerOneB(struct StateBuzzerOneBBuzzerOneB*);
static struct StateSettingSetting* StateSettingSetting_HighMode();
static struct StateSettingSetting* StateSettingSetting_MilkMode();
static struct StateSettingSetting* StateSettingSetting_SaveMode();
static void mark_StateSettingSetting(struct StateSettingSetting*, int);
static void free_StateSettingSetting(struct StateSettingSetting*);
static struct StateLockLock* StateLockLock_Locked();
static struct StateLockLock* StateLockLock_Unlocked();
static void mark_StateLockLock(struct StateLockLock*, int);
static void free_StateLockLock(struct StateLockLock*);
static struct StateCoverCover* StateCoverCover_Close();
static struct StateCoverCover* StateCoverCover_Open();
static void mark_StateCoverCover(struct StateCoverCover*, int);
static void free_StateCoverCover(struct StateCoverCover*);
static struct StateBuzzerOneBuzzerOne* StateBuzzerOneBuzzerOne_Run();
static struct StateBuzzerOneBuzzerOne* StateBuzzerOneBuzzerOne_Stop();
static void mark_StateBuzzerOneBuzzerOne(struct StateBuzzerOneBuzzerOne*, int);
static void free_StateBuzzerOneBuzzerOne(struct StateBuzzerOneBuzzerOne*);
static struct StatePotPot* StatePotPot_BoilMode();
static struct StatePotPot* StatePotPot_ErrorMode();
static struct StatePotPot* StatePotPot_IdleMode();
static struct StatePotPot* StatePotPot_KeepMode();
static void mark_StatePotPot(struct StatePotPot*, int);
static void free_StatePotPot(struct StatePotPot*);
static int Potlib_mtot(int);
static int Potlib_mtoi(int);
static struct PotlibTime* Potlib_incMinute(struct PotlibTime*);
static int Potlib_displayTime(struct PotlibTime*);
static struct PotlibTime* Potlib_decSecond(struct PotlibTime*);
static void update_WaterWater_water(struct MemoryWaterWater*);
static void update_WaterWater(struct MemoryWaterWater*);
static void free_WaterWater(struct MemoryWaterWater*);
static void header_init_BuzzerThreeBuzzerThree_state(struct MemoryBuzzerThreeBuzzerThree*);
static void update_BuzzerThreeBuzzerThreeRun_buzzer(struct MemoryBuzzerThreeBuzzerThree*);
static void update_BuzzerThreeBuzzerThreeRun_end(struct MemoryBuzzerThreeBuzzerThree*);
static void init_BuzzerThreeBuzzerThreeRun_wait(struct MemoryBuzzerThreeBuzzerThree*);
static void update_BuzzerThreeBuzzerThreeRun_wait(struct MemoryBuzzerThreeBuzzerThree*);
static void update_BuzzerThreeBuzzerThreeRun_state(struct MemoryBuzzerThreeBuzzerThree*);
static void update_BuzzerThreeBuzzerThreeStop_buzzer(struct MemoryBuzzerThreeBuzzerThree*);
static void update_BuzzerThreeBuzzerThreeStop_end(struct MemoryBuzzerThreeBuzzerThree*);
static void update_BuzzerThreeBuzzerThreeStop_state(struct MemoryBuzzerThreeBuzzerThree*);
static void update_BuzzerThreeBuzzerThree(struct MemoryBuzzerThreeBuzzerThree*);
static void free_BuzzerThreeBuzzerThree(struct MemoryBuzzerThreeBuzzerThree*);
static void header_init_BuzzerOneDBuzzerOneD_state(struct MemoryBuzzerOneDBuzzerOneD*);
static void update_BuzzerOneDBuzzerOneDRun_buzzer(struct MemoryBuzzerOneDBuzzerOneD*);
static void update_BuzzerOneDBuzzerOneDRun_end(struct MemoryBuzzerOneDBuzzerOneD*);
static void init_BuzzerOneDBuzzerOneDRun_wait(struct MemoryBuzzerOneDBuzzerOneD*);
static void update_BuzzerOneDBuzzerOneDRun_wait(struct MemoryBuzzerOneDBuzzerOneD*);
static void update_BuzzerOneDBuzzerOneDRun_state(struct MemoryBuzzerOneDBuzzerOneD*);
static void update_BuzzerOneDBuzzerOneDStop_buzzer(struct MemoryBuzzerOneDBuzzerOneD*);
static void update_BuzzerOneDBuzzerOneDStop_end(struct MemoryBuzzerOneDBuzzerOneD*);
static void update_BuzzerOneDBuzzerOneDStop_state(struct MemoryBuzzerOneDBuzzerOneD*);
static void update_BuzzerOneDBuzzerOneD(struct MemoryBuzzerOneDBuzzerOneD*);
static void free_BuzzerOneDBuzzerOneD(struct MemoryBuzzerOneDBuzzerOneD*);
static void header_init_BuzzerOneCBuzzerOneC_state(struct MemoryBuzzerOneCBuzzerOneC*);
static void update_BuzzerOneCBuzzerOneCRun_buzzer(struct MemoryBuzzerOneCBuzzerOneC*);
static void update_BuzzerOneCBuzzerOneCRun_end(struct MemoryBuzzerOneCBuzzerOneC*);
static void init_BuzzerOneCBuzzerOneCRun_wait(struct MemoryBuzzerOneCBuzzerOneC*);
static void update_BuzzerOneCBuzzerOneCRun_wait(struct MemoryBuzzerOneCBuzzerOneC*);
static void update_BuzzerOneCBuzzerOneCRun_state(struct MemoryBuzzerOneCBuzzerOneC*);
static void update_BuzzerOneCBuzzerOneCStop_buzzer(struct MemoryBuzzerOneCBuzzerOneC*);
static void update_BuzzerOneCBuzzerOneCStop_end(struct MemoryBuzzerOneCBuzzerOneC*);
static void update_BuzzerOneCBuzzerOneCStop_state(struct MemoryBuzzerOneCBuzzerOneC*);
static void update_BuzzerOneCBuzzerOneC(struct MemoryBuzzerOneCBuzzerOneC*);
static void free_BuzzerOneCBuzzerOneC(struct MemoryBuzzerOneCBuzzerOneC*);
static void header_init_TimerTimer_time(struct MemoryTimerTimer*);
static void header_init_TimerTimer_state(struct MemoryTimerTimer*);
static void update_TimerTimerRun_buzzerT(struct MemoryTimerTimer*);
static void init_TimerTimerRun_counter(struct MemoryTimerTimer*);
static void update_TimerTimerRun_counter(struct MemoryTimerTimer*);
static void update_TimerTimerRun_pulse(struct MemoryTimerTimer*);
static void init_TimerTimerRun_resetInput(struct MemoryTimerTimer*);
static void update_TimerTimerRun_resetInput(struct MemoryTimerTimer*);
static void update_TimerTimerRun_startA(struct MemoryTimerTimer*);
static void update_TimerTimerRun_startB(struct MemoryTimerTimer*);
static void update_TimerTimerRun_startC(struct MemoryTimerTimer*);
static void update_TimerTimerRun_time(struct MemoryTimerTimer*);
static void init_TimerTimerRun_waitInput(struct MemoryTimerTimer*);
static void update_TimerTimerRun_waitInput(struct MemoryTimerTimer*);
static void input_TimerTimerRun_newnode10_start(struct MemoryTimerTimer*);
static void input_TimerTimerRun_newnode10_dt(struct MemoryTimerTimer*);
static void update_TimerTimerRun_newnode10(struct MemoryTimerTimer*);
static void input_TimerTimerRun_newnode8_start(struct MemoryTimerTimer*);
static void input_TimerTimerRun_newnode8_dt(struct MemoryTimerTimer*);
static void update_TimerTimerRun_newnode8(struct MemoryTimerTimer*);
static void input_TimerTimerRun_newnode9_start(struct MemoryTimerTimer*);
static void input_TimerTimerRun_newnode9_dt(struct MemoryTimerTimer*);
static void update_TimerTimerRun_newnode9(struct MemoryTimerTimer*);
static void update_TimerTimerRun_state(struct MemoryTimerTimer*);
static void init_TimerTimerStop_endInput(struct MemoryTimerTimer*);
static void update_TimerTimerStop_endInput(struct MemoryTimerTimer*);
static void update_TimerTimerStop_start(struct MemoryTimerTimer*);
static void update_TimerTimerStop_time(struct MemoryTimerTimer*);
static void init_TimerTimerStop_waitInput(struct MemoryTimerTimer*);
static void update_TimerTimerStop_waitInput(struct MemoryTimerTimer*);
static void input_TimerTimerStop_newnode7_start(struct MemoryTimerTimer*);
static void input_TimerTimerStop_newnode7_dt(struct MemoryTimerTimer*);
static void update_TimerTimerStop_newnode7(struct MemoryTimerTimer*);
static void update_TimerTimerStop_state(struct MemoryTimerTimer*);
static void update_TimerTimer(struct MemoryTimerTimer*);
static void free_TimerTimer(struct MemoryTimerTimer*);
static void header_init_BuzzerOneBBuzzerOneB_state(struct MemoryBuzzerOneBBuzzerOneB*);
static void update_BuzzerOneBBuzzerOneBRun_buzzer(struct MemoryBuzzerOneBBuzzerOneB*);
static void update_BuzzerOneBBuzzerOneBRun_end(struct MemoryBuzzerOneBBuzzerOneB*);
static void init_BuzzerOneBBuzzerOneBRun_wait(struct MemoryBuzzerOneBBuzzerOneB*);
static void update_BuzzerOneBBuzzerOneBRun_wait(struct MemoryBuzzerOneBBuzzerOneB*);
static void update_BuzzerOneBBuzzerOneBRun_state(struct MemoryBuzzerOneBBuzzerOneB*);
static void update_BuzzerOneBBuzzerOneBStop_buzzer(struct MemoryBuzzerOneBBuzzerOneB*);
static void update_BuzzerOneBBuzzerOneBStop_end(struct MemoryBuzzerOneBBuzzerOneB*);
static void update_BuzzerOneBBuzzerOneBStop_state(struct MemoryBuzzerOneBBuzzerOneB*);
static void update_BuzzerOneBBuzzerOneB(struct MemoryBuzzerOneBBuzzerOneB*);
static void free_BuzzerOneBBuzzerOneB(struct MemoryBuzzerOneBBuzzerOneB*);
static void header_init_SettingSetting_setting(struct MemorySettingSetting*);
static void header_init_SettingSetting_state(struct MemorySettingSetting*);
static void update_SettingSettingHighMode_setting(struct MemorySettingSetting*);
static void update_SettingSettingHighMode_start(struct MemorySettingSetting*);
static void init_SettingSettingHighMode_wait(struct MemorySettingSetting*);
static void update_SettingSettingHighMode_wait(struct MemorySettingSetting*);
static void input_SettingSettingHighMode_newnode11_start(struct MemorySettingSetting*);
static void input_SettingSettingHighMode_newnode11_dt(struct MemorySettingSetting*);
static void update_SettingSettingHighMode_newnode11(struct MemorySettingSetting*);
static void update_SettingSettingHighMode_state(struct MemorySettingSetting*);
static void update_SettingSettingMilkMode_setting(struct MemorySettingSetting*);
static void update_SettingSettingMilkMode_start(struct MemorySettingSetting*);
static void init_SettingSettingMilkMode_wait(struct MemorySettingSetting*);
static void update_SettingSettingMilkMode_wait(struct MemorySettingSetting*);
static void input_SettingSettingMilkMode_newnode13_start(struct MemorySettingSetting*);
static void input_SettingSettingMilkMode_newnode13_dt(struct MemorySettingSetting*);
static void update_SettingSettingMilkMode_newnode13(struct MemorySettingSetting*);
static void update_SettingSettingMilkMode_state(struct MemorySettingSetting*);
static void update_SettingSettingSaveMode_setting(struct MemorySettingSetting*);
static void update_SettingSettingSaveMode_start(struct MemorySettingSetting*);
static void init_SettingSettingSaveMode_wait(struct MemorySettingSetting*);
static void update_SettingSettingSaveMode_wait(struct MemorySettingSetting*);
static void input_SettingSettingSaveMode_newnode12_start(struct MemorySettingSetting*);
static void input_SettingSettingSaveMode_newnode12_dt(struct MemorySettingSetting*);
static void update_SettingSettingSaveMode_newnode12(struct MemorySettingSetting*);
static void update_SettingSettingSaveMode_state(struct MemorySettingSetting*);
static void update_SettingSetting(struct MemorySettingSetting*);
static void free_SettingSetting(struct MemorySettingSetting*);
static void header_init_LockLock_lock(struct MemoryLockLock*);
static void header_init_LockLock_state(struct MemoryLockLock*);
static void update_LockLockLocked_lock(struct MemoryLockLock*);
static void init_LockLockLocked_wait(struct MemoryLockLock*);
static void update_LockLockLocked_wait(struct MemoryLockLock*);
static void update_LockLockLocked_state(struct MemoryLockLock*);
static void update_LockLockUnlocked_lock(struct MemoryLockLock*);
static void init_LockLockUnlocked_wait(struct MemoryLockLock*);
static void update_LockLockUnlocked_wait(struct MemoryLockLock*);
static void update_LockLockUnlocked_state(struct MemoryLockLock*);
static void update_LockLock(struct MemoryLockLock*);
static void free_LockLock(struct MemoryLockLock*);
static void header_init_CoverCover_state(struct MemoryCoverCover*);
static void update_CoverCoverClose_closed(struct MemoryCoverCover*);
static void init_CoverCoverClose_wait(struct MemoryCoverCover*);
static void update_CoverCoverClose_wait(struct MemoryCoverCover*);
static void update_CoverCoverClose_state(struct MemoryCoverCover*);
static void update_CoverCoverOpen_closed(struct MemoryCoverCover*);
static void init_CoverCoverOpen_wait(struct MemoryCoverCover*);
static void update_CoverCoverOpen_wait(struct MemoryCoverCover*);
static void update_CoverCoverOpen_state(struct MemoryCoverCover*);
static void update_CoverCover(struct MemoryCoverCover*);
static void free_CoverCover(struct MemoryCoverCover*);
static void update_HeaterHeater_dt(struct MemoryHeaterHeater*);
static void update_HeaterHeater_heater(struct MemoryHeaterHeater*);
static void init_HeaterHeater_t(struct MemoryHeaterHeater*);
static void update_HeaterHeater_t(struct MemoryHeaterHeater*);
static void update_HeaterHeater_tg(struct MemoryHeaterHeater*);
static void update_HeaterHeater(struct MemoryHeaterHeater*);
static void free_HeaterHeater(struct MemoryHeaterHeater*);
static void update_BoiledBoiled_boiled(struct MemoryBoiledBoiled*);
static void init_BoiledBoiled_reached(struct MemoryBoiledBoiled*);
static void update_BoiledBoiled_reached(struct MemoryBoiledBoiled*);
static void init_BoiledBoiled_wait(struct MemoryBoiledBoiled*);
static void update_BoiledBoiled_wait(struct MemoryBoiledBoiled*);
static void update_BoiledBoiled(struct MemoryBoiledBoiled*);
static void free_BoiledBoiled(struct MemoryBoiledBoiled*);
static void header_init_BuzzerOneBuzzerOne_state(struct MemoryBuzzerOneBuzzerOne*);
static void update_BuzzerOneBuzzerOneRun_buzzer(struct MemoryBuzzerOneBuzzerOne*);
static void update_BuzzerOneBuzzerOneRun_end(struct MemoryBuzzerOneBuzzerOne*);
static void init_BuzzerOneBuzzerOneRun_wait(struct MemoryBuzzerOneBuzzerOne*);
static void update_BuzzerOneBuzzerOneRun_wait(struct MemoryBuzzerOneBuzzerOne*);
static void update_BuzzerOneBuzzerOneRun_state(struct MemoryBuzzerOneBuzzerOne*);
static void update_BuzzerOneBuzzerOneStop_buzzer(struct MemoryBuzzerOneBuzzerOne*);
static void update_BuzzerOneBuzzerOneStop_end(struct MemoryBuzzerOneBuzzerOne*);
static void update_BuzzerOneBuzzerOneStop_state(struct MemoryBuzzerOneBuzzerOne*);
static void update_BuzzerOneBuzzerOne(struct MemoryBuzzerOneBuzzerOne*);
static void free_BuzzerOneBuzzerOne(struct MemoryBuzzerOneBuzzerOne*);
static void update_BoilBoil_start(struct MemoryBoilBoil*);
static void init_BoilBoil_wait(struct MemoryBoilBoil*);
static void update_BoilBoil_wait(struct MemoryBoilBoil*);
static void input_BoilBoil_newnode17_start(struct MemoryBoilBoil*);
static void input_BoilBoil_newnode17_dt(struct MemoryBoilBoil*);
static void update_BoilBoil_newnode17(struct MemoryBoilBoil*);
static void update_BoilBoil(struct MemoryBoilBoil*);
static void free_BoilBoil(struct MemoryBoilBoil*);
static void header_init_PotPot_state(struct MemoryPotPot*);
static void update_PotPotBoilMode_battery(struct MemoryPotPot*);
static void update_PotPotBoilMode_boillamp(struct MemoryPotPot*);
static void update_PotPotBoilMode_buzzerP(struct MemoryPotPot*);
static void update_PotPotBoilMode_heater(struct MemoryPotPot*);
static void update_PotPotBoilMode_keeplamp(struct MemoryPotPot*);
static void update_PotPotBoilMode_supply(struct MemoryPotPot*);
static void update_PotPotBoilMode_temperature(struct MemoryPotPot*);
static void input_PotPotBoilMode_newnode14_thermistor(struct MemoryPotPot*);
static void input_PotPotBoilMode_newnode14_dt(struct MemoryPotPot*);
static void update_PotPotBoilMode_newnode14(struct MemoryPotPot*);
static void update_PotPotBoilMode_state(struct MemoryPotPot*);
static void update_PotPotErrorMode_battery(struct MemoryPotPot*);
static void update_PotPotErrorMode_boillamp(struct MemoryPotPot*);
static void update_PotPotErrorMode_buzzerP(struct MemoryPotPot*);
static void init_PotPotErrorMode_buzzerWait(struct MemoryPotPot*);
static void update_PotPotErrorMode_buzzerWait(struct MemoryPotPot*);
static void update_PotPotErrorMode_heater(struct MemoryPotPot*);
static void update_PotPotErrorMode_keeplamp(struct MemoryPotPot*);
static void update_PotPotErrorMode_supply(struct MemoryPotPot*);
static void update_PotPotErrorMode_temperature(struct MemoryPotPot*);
static void update_PotPotErrorMode_state(struct MemoryPotPot*);
static void update_PotPotIdleMode_battery(struct MemoryPotPot*);
static void update_PotPotIdleMode_boillamp(struct MemoryPotPot*);
static void update_PotPotIdleMode_buzzerP(struct MemoryPotPot*);
static void update_PotPotIdleMode_heater(struct MemoryPotPot*);
static void update_PotPotIdleMode_keeplamp(struct MemoryPotPot*);
static void update_PotPotIdleMode_supply(struct MemoryPotPot*);
static void update_PotPotIdleMode_temperature(struct MemoryPotPot*);
static void update_PotPotIdleMode_state(struct MemoryPotPot*);
static void update_PotPotKeepMode_battery(struct MemoryPotPot*);
static void update_PotPotKeepMode_boillamp(struct MemoryPotPot*);
static void init_PotPotKeepMode_errorA(struct MemoryPotPot*);
static void update_PotPotKeepMode_errorA(struct MemoryPotPot*);
static void update_PotPotKeepMode_errorB(struct MemoryPotPot*);
static void update_PotPotKeepMode_keeplamp(struct MemoryPotPot*);
static void init_PotPotKeepMode_mcounter(struct MemoryPotPot*);
static void update_PotPotKeepMode_mcounter(struct MemoryPotPot*);
static void update_PotPotKeepMode_mdown(struct MemoryPotPot*);
static void update_PotPotKeepMode_mpulse(struct MemoryPotPot*);
static void init_PotPotKeepMode_mtemp(struct MemoryPotPot*);
static void update_PotPotKeepMode_mtemp(struct MemoryPotPot*);
static void update_PotPotKeepMode_supply(struct MemoryPotPot*);
static void update_PotPotKeepMode_temperature(struct MemoryPotPot*);
static void input_PotPotKeepMode_newnode15_boilButton(struct MemoryPotPot*);
static void input_PotPotKeepMode_newnode15_dt(struct MemoryPotPot*);
static void update_PotPotKeepMode_newnode15(struct MemoryPotPot*);
static void input_PotPotKeepMode_newnode16_setting(struct MemoryPotPot*);
static void input_PotPotKeepMode_newnode16_thermistor(struct MemoryPotPot*);
static void update_PotPotKeepMode_newnode16(struct MemoryPotPot*);
static void update_PotPotKeepMode_state(struct MemoryPotPot*);
static void update_PotPot(struct MemoryPotPot*);
static void free_PotPot(struct MemoryPotPot*);
static void header_init_PotMainMain_elapsed(struct MemoryPotMainMain*);
static void header_init_PotMainMain_locklamp(struct MemoryPotMainMain*);
static void update_PotMainMain_buzzer(struct MemoryPotMainMain*);
static void update_PotMainMain_dt(struct MemoryPotMainMain*);
static void update_PotMainMain_mode(struct MemoryPotMainMain*);
static void update_PotMainMain_test(struct MemoryPotMainMain*);
static void update_PotMainMain_time(struct MemoryPotMainMain*);
static void input_PotMainMain_newnode1_coverSensor(struct MemoryPotMainMain*);
static void input_PotMainMain_newnode1_dt(struct MemoryPotMainMain*);
static void update_PotMainMain_newnode1(struct MemoryPotMainMain*);
static void input_PotMainMain_newnode2_timerButton(struct MemoryPotMainMain*);
static void input_PotMainMain_newnode2_closed(struct MemoryPotMainMain*);
static void input_PotMainMain_newnode2_dt(struct MemoryPotMainMain*);
static void update_PotMainMain_newnode2(struct MemoryPotMainMain*);
static void input_PotMainMain_newnode3_settingButton(struct MemoryPotMainMain*);
static void input_PotMainMain_newnode3_closed(struct MemoryPotMainMain*);
static void input_PotMainMain_newnode3_dt(struct MemoryPotMainMain*);
static void update_PotMainMain_newnode3(struct MemoryPotMainMain*);
static void input_PotMainMain_newnode4_fullSensor(struct MemoryPotMainMain*);
static void input_PotMainMain_newnode4_waterSensor1(struct MemoryPotMainMain*);
static void input_PotMainMain_newnode4_waterSensor2(struct MemoryPotMainMain*);
static void input_PotMainMain_newnode4_waterSensor3(struct MemoryPotMainMain*);
static void input_PotMainMain_newnode4_waterSensor4(struct MemoryPotMainMain*);
static void input_PotMainMain_newnode4_closed(struct MemoryPotMainMain*);
static void update_PotMainMain_newnode4(struct MemoryPotMainMain*);
static void input_PotMainMain_newnode5_plug(struct MemoryPotMainMain*);
static void input_PotMainMain_newnode5_closed(struct MemoryPotMainMain*);
static void input_PotMainMain_newnode5_water(struct MemoryPotMainMain*);
static void input_PotMainMain_newnode5_thermistor(struct MemoryPotMainMain*);
static void input_PotMainMain_newnode5_locklamp(struct MemoryPotMainMain*);
static void input_PotMainMain_newnode5_supplyButton(struct MemoryPotMainMain*);
static void input_PotMainMain_newnode5_boilButton(struct MemoryPotMainMain*);
static void input_PotMainMain_newnode5_keeptemp(struct MemoryPotMainMain*);
static void input_PotMainMain_newnode5_dt(struct MemoryPotMainMain*);
static void update_PotMainMain_newnode5(struct MemoryPotMainMain*);
static void input_PotMainMain_newnode6_lockButton(struct MemoryPotMainMain*);
static void input_PotMainMain_newnode6_closed(struct MemoryPotMainMain*);
static void input_PotMainMain_newnode6_supply(struct MemoryPotMainMain*);
static void input_PotMainMain_newnode6_dt(struct MemoryPotMainMain*);
static void update_PotMainMain_newnode6(struct MemoryPotMainMain*);
static void update_PotMainMain(struct MemoryPotMainMain*);
static void free_PotMainMain(struct MemoryPotMainMain*);
static void refresh_mark();
extern void input(int*, int*, int*, int*);
extern void output(int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*);

static struct PotlibTime* PotlibTime_Time(struct TupleIntInt* value) {
  struct PotlibTime* x;
  while (1) {
    counter_PotlibTime++;
    counter_PotlibTime %= size_PotlibTime;
    if (memory_PotlibTime[counter_PotlibTime].mark < clock) {
      x = memory_PotlibTime + counter_PotlibTime; break;
    }
  }
  x->mark = 0;
  x->value.Time = value;
  return x;
}

static void mark_PotlibTime(struct PotlibTime* x, int mark) {
  if (mark > x->mark) { x->mark = mark; }
  mark_TupleIntInt(x->value.Time, mark);
}

static void free_PotlibTime(struct PotlibTime* x) {
  x->mark = 0;
  free_TupleIntInt(x->value.Time);
}

static struct TupleIntInt* TupleIntInt_Cons(int member0, int member1) {
  struct TupleIntInt* x;
  while (1) {
    counter_TupleIntInt++;
    counter_TupleIntInt %= size_TupleIntInt;
    if (memory_TupleIntInt[counter_TupleIntInt].mark < clock) {
      x = memory_TupleIntInt + counter_TupleIntInt; break;
    }
  }
  x->mark = 0;
  x->member0 = member0;
  x->member1 = member1;
  return x;
}

static void mark_TupleIntInt(struct TupleIntInt* x, int mark) {
  if (mark > x->mark) { x->mark = mark; }
}

static void free_TupleIntInt(struct TupleIntInt* x) {
  x->mark = 0;
}

static struct StateBuzzerThreeBuzzerThree* StateBuzzerThreeBuzzerThree_Run() {
  struct StateBuzzerThreeBuzzerThree* x;
  while (1) {
    counter_StateBuzzerThreeBuzzerThree++;
    counter_StateBuzzerThreeBuzzerThree %= size_StateBuzzerThreeBuzzerThree;
    if (memory_StateBuzzerThreeBuzzerThree[counter_StateBuzzerThreeBuzzerThree].mark < clock) {
      x = memory_StateBuzzerThreeBuzzerThree + counter_StateBuzzerThreeBuzzerThree; break;
    }
  }
  x->mark = 0;
  x->fresh = 1;
  x->tag = 0;
  return x;
}

static struct StateBuzzerThreeBuzzerThree* StateBuzzerThreeBuzzerThree_Stop() {
  struct StateBuzzerThreeBuzzerThree* x;
  while (1) {
    counter_StateBuzzerThreeBuzzerThree++;
    counter_StateBuzzerThreeBuzzerThree %= size_StateBuzzerThreeBuzzerThree;
    if (memory_StateBuzzerThreeBuzzerThree[counter_StateBuzzerThreeBuzzerThree].mark < clock) {
      x = memory_StateBuzzerThreeBuzzerThree + counter_StateBuzzerThreeBuzzerThree; break;
    }
  }
  x->mark = 0;
  x->fresh = 1;
  x->tag = 1;
  return x;
}

static void mark_StateBuzzerThreeBuzzerThree(struct StateBuzzerThreeBuzzerThree* x, int mark) {
  if (mark > x->mark) { x->mark = mark; }
}

static void free_StateBuzzerThreeBuzzerThree(struct StateBuzzerThreeBuzzerThree* x) {
  x->mark = 0;
}

static struct StateBuzzerOneDBuzzerOneD* StateBuzzerOneDBuzzerOneD_Run() {
  struct StateBuzzerOneDBuzzerOneD* x;
  while (1) {
    counter_StateBuzzerOneDBuzzerOneD++;
    counter_StateBuzzerOneDBuzzerOneD %= size_StateBuzzerOneDBuzzerOneD;
    if (memory_StateBuzzerOneDBuzzerOneD[counter_StateBuzzerOneDBuzzerOneD].mark < clock) {
      x = memory_StateBuzzerOneDBuzzerOneD + counter_StateBuzzerOneDBuzzerOneD; break;
    }
  }
  x->mark = 0;
  x->fresh = 1;
  x->tag = 0;
  return x;
}

static struct StateBuzzerOneDBuzzerOneD* StateBuzzerOneDBuzzerOneD_Stop() {
  struct StateBuzzerOneDBuzzerOneD* x;
  while (1) {
    counter_StateBuzzerOneDBuzzerOneD++;
    counter_StateBuzzerOneDBuzzerOneD %= size_StateBuzzerOneDBuzzerOneD;
    if (memory_StateBuzzerOneDBuzzerOneD[counter_StateBuzzerOneDBuzzerOneD].mark < clock) {
      x = memory_StateBuzzerOneDBuzzerOneD + counter_StateBuzzerOneDBuzzerOneD; break;
    }
  }
  x->mark = 0;
  x->fresh = 1;
  x->tag = 1;
  return x;
}

static void mark_StateBuzzerOneDBuzzerOneD(struct StateBuzzerOneDBuzzerOneD* x, int mark) {
  if (mark > x->mark) { x->mark = mark; }
}

static void free_StateBuzzerOneDBuzzerOneD(struct StateBuzzerOneDBuzzerOneD* x) {
  x->mark = 0;
}

static struct StateBuzzerOneCBuzzerOneC* StateBuzzerOneCBuzzerOneC_Run() {
  struct StateBuzzerOneCBuzzerOneC* x;
  while (1) {
    counter_StateBuzzerOneCBuzzerOneC++;
    counter_StateBuzzerOneCBuzzerOneC %= size_StateBuzzerOneCBuzzerOneC;
    if (memory_StateBuzzerOneCBuzzerOneC[counter_StateBuzzerOneCBuzzerOneC].mark < clock) {
      x = memory_StateBuzzerOneCBuzzerOneC + counter_StateBuzzerOneCBuzzerOneC; break;
    }
  }
  x->mark = 0;
  x->fresh = 1;
  x->tag = 0;
  return x;
}

static struct StateBuzzerOneCBuzzerOneC* StateBuzzerOneCBuzzerOneC_Stop() {
  struct StateBuzzerOneCBuzzerOneC* x;
  while (1) {
    counter_StateBuzzerOneCBuzzerOneC++;
    counter_StateBuzzerOneCBuzzerOneC %= size_StateBuzzerOneCBuzzerOneC;
    if (memory_StateBuzzerOneCBuzzerOneC[counter_StateBuzzerOneCBuzzerOneC].mark < clock) {
      x = memory_StateBuzzerOneCBuzzerOneC + counter_StateBuzzerOneCBuzzerOneC; break;
    }
  }
  x->mark = 0;
  x->fresh = 1;
  x->tag = 1;
  return x;
}

static void mark_StateBuzzerOneCBuzzerOneC(struct StateBuzzerOneCBuzzerOneC* x, int mark) {
  if (mark > x->mark) { x->mark = mark; }
}

static void free_StateBuzzerOneCBuzzerOneC(struct StateBuzzerOneCBuzzerOneC* x) {
  x->mark = 0;
}

static struct StateTimerTimer* StateTimerTimer_Run() {
  struct StateTimerTimer* x;
  while (1) {
    counter_StateTimerTimer++;
    counter_StateTimerTimer %= size_StateTimerTimer;
    if (memory_StateTimerTimer[counter_StateTimerTimer].mark < clock) {
      x = memory_StateTimerTimer + counter_StateTimerTimer; break;
    }
  }
  x->mark = 0;
  x->fresh = 1;
  x->tag = 0;
  return x;
}

static struct StateTimerTimer* StateTimerTimer_Stop() {
  struct StateTimerTimer* x;
  while (1) {
    counter_StateTimerTimer++;
    counter_StateTimerTimer %= size_StateTimerTimer;
    if (memory_StateTimerTimer[counter_StateTimerTimer].mark < clock) {
      x = memory_StateTimerTimer + counter_StateTimerTimer; break;
    }
  }
  x->mark = 0;
  x->fresh = 1;
  x->tag = 1;
  return x;
}

static void mark_StateTimerTimer(struct StateTimerTimer* x, int mark) {
  if (mark > x->mark) { x->mark = mark; }
}

static void free_StateTimerTimer(struct StateTimerTimer* x) {
  x->mark = 0;
}

static struct StateBuzzerOneBBuzzerOneB* StateBuzzerOneBBuzzerOneB_Run() {
  struct StateBuzzerOneBBuzzerOneB* x;
  while (1) {
    counter_StateBuzzerOneBBuzzerOneB++;
    counter_StateBuzzerOneBBuzzerOneB %= size_StateBuzzerOneBBuzzerOneB;
    if (memory_StateBuzzerOneBBuzzerOneB[counter_StateBuzzerOneBBuzzerOneB].mark < clock) {
      x = memory_StateBuzzerOneBBuzzerOneB + counter_StateBuzzerOneBBuzzerOneB; break;
    }
  }
  x->mark = 0;
  x->fresh = 1;
  x->tag = 0;
  return x;
}

static struct StateBuzzerOneBBuzzerOneB* StateBuzzerOneBBuzzerOneB_Stop() {
  struct StateBuzzerOneBBuzzerOneB* x;
  while (1) {
    counter_StateBuzzerOneBBuzzerOneB++;
    counter_StateBuzzerOneBBuzzerOneB %= size_StateBuzzerOneBBuzzerOneB;
    if (memory_StateBuzzerOneBBuzzerOneB[counter_StateBuzzerOneBBuzzerOneB].mark < clock) {
      x = memory_StateBuzzerOneBBuzzerOneB + counter_StateBuzzerOneBBuzzerOneB; break;
    }
  }
  x->mark = 0;
  x->fresh = 1;
  x->tag = 1;
  return x;
}

static void mark_StateBuzzerOneBBuzzerOneB(struct StateBuzzerOneBBuzzerOneB* x, int mark) {
  if (mark > x->mark) { x->mark = mark; }
}

static void free_StateBuzzerOneBBuzzerOneB(struct StateBuzzerOneBBuzzerOneB* x) {
  x->mark = 0;
}

static struct StateSettingSetting* StateSettingSetting_HighMode() {
  struct StateSettingSetting* x;
  while (1) {
    counter_StateSettingSetting++;
    counter_StateSettingSetting %= size_StateSettingSetting;
    if (memory_StateSettingSetting[counter_StateSettingSetting].mark < clock) {
      x = memory_StateSettingSetting + counter_StateSettingSetting; break;
    }
  }
  x->mark = 0;
  x->fresh = 1;
  x->tag = 0;
  return x;
}

static struct StateSettingSetting* StateSettingSetting_MilkMode() {
  struct StateSettingSetting* x;
  while (1) {
    counter_StateSettingSetting++;
    counter_StateSettingSetting %= size_StateSettingSetting;
    if (memory_StateSettingSetting[counter_StateSettingSetting].mark < clock) {
      x = memory_StateSettingSetting + counter_StateSettingSetting; break;
    }
  }
  x->mark = 0;
  x->fresh = 1;
  x->tag = 1;
  return x;
}

static struct StateSettingSetting* StateSettingSetting_SaveMode() {
  struct StateSettingSetting* x;
  while (1) {
    counter_StateSettingSetting++;
    counter_StateSettingSetting %= size_StateSettingSetting;
    if (memory_StateSettingSetting[counter_StateSettingSetting].mark < clock) {
      x = memory_StateSettingSetting + counter_StateSettingSetting; break;
    }
  }
  x->mark = 0;
  x->fresh = 1;
  x->tag = 2;
  return x;
}

static void mark_StateSettingSetting(struct StateSettingSetting* x, int mark) {
  if (mark > x->mark) { x->mark = mark; }
}

static void free_StateSettingSetting(struct StateSettingSetting* x) {
  x->mark = 0;
}

static struct StateLockLock* StateLockLock_Locked() {
  struct StateLockLock* x;
  while (1) {
    counter_StateLockLock++;
    counter_StateLockLock %= size_StateLockLock;
    if (memory_StateLockLock[counter_StateLockLock].mark < clock) {
      x = memory_StateLockLock + counter_StateLockLock; break;
    }
  }
  x->mark = 0;
  x->fresh = 1;
  x->tag = 0;
  return x;
}

static struct StateLockLock* StateLockLock_Unlocked() {
  struct StateLockLock* x;
  while (1) {
    counter_StateLockLock++;
    counter_StateLockLock %= size_StateLockLock;
    if (memory_StateLockLock[counter_StateLockLock].mark < clock) {
      x = memory_StateLockLock + counter_StateLockLock; break;
    }
  }
  x->mark = 0;
  x->fresh = 1;
  x->tag = 1;
  return x;
}

static void mark_StateLockLock(struct StateLockLock* x, int mark) {
  if (mark > x->mark) { x->mark = mark; }
}

static void free_StateLockLock(struct StateLockLock* x) {
  x->mark = 0;
}

static struct StateCoverCover* StateCoverCover_Close() {
  struct StateCoverCover* x;
  while (1) {
    counter_StateCoverCover++;
    counter_StateCoverCover %= size_StateCoverCover;
    if (memory_StateCoverCover[counter_StateCoverCover].mark < clock) {
      x = memory_StateCoverCover + counter_StateCoverCover; break;
    }
  }
  x->mark = 0;
  x->fresh = 1;
  x->tag = 0;
  return x;
}

static struct StateCoverCover* StateCoverCover_Open() {
  struct StateCoverCover* x;
  while (1) {
    counter_StateCoverCover++;
    counter_StateCoverCover %= size_StateCoverCover;
    if (memory_StateCoverCover[counter_StateCoverCover].mark < clock) {
      x = memory_StateCoverCover + counter_StateCoverCover; break;
    }
  }
  x->mark = 0;
  x->fresh = 1;
  x->tag = 1;
  return x;
}

static void mark_StateCoverCover(struct StateCoverCover* x, int mark) {
  if (mark > x->mark) { x->mark = mark; }
}

static void free_StateCoverCover(struct StateCoverCover* x) {
  x->mark = 0;
}

static struct StateBuzzerOneBuzzerOne* StateBuzzerOneBuzzerOne_Run() {
  struct StateBuzzerOneBuzzerOne* x;
  while (1) {
    counter_StateBuzzerOneBuzzerOne++;
    counter_StateBuzzerOneBuzzerOne %= size_StateBuzzerOneBuzzerOne;
    if (memory_StateBuzzerOneBuzzerOne[counter_StateBuzzerOneBuzzerOne].mark < clock) {
      x = memory_StateBuzzerOneBuzzerOne + counter_StateBuzzerOneBuzzerOne; break;
    }
  }
  x->mark = 0;
  x->fresh = 1;
  x->tag = 0;
  return x;
}

static struct StateBuzzerOneBuzzerOne* StateBuzzerOneBuzzerOne_Stop() {
  struct StateBuzzerOneBuzzerOne* x;
  while (1) {
    counter_StateBuzzerOneBuzzerOne++;
    counter_StateBuzzerOneBuzzerOne %= size_StateBuzzerOneBuzzerOne;
    if (memory_StateBuzzerOneBuzzerOne[counter_StateBuzzerOneBuzzerOne].mark < clock) {
      x = memory_StateBuzzerOneBuzzerOne + counter_StateBuzzerOneBuzzerOne; break;
    }
  }
  x->mark = 0;
  x->fresh = 1;
  x->tag = 1;
  return x;
}

static void mark_StateBuzzerOneBuzzerOne(struct StateBuzzerOneBuzzerOne* x, int mark) {
  if (mark > x->mark) { x->mark = mark; }
}

static void free_StateBuzzerOneBuzzerOne(struct StateBuzzerOneBuzzerOne* x) {
  x->mark = 0;
}

static struct StatePotPot* StatePotPot_BoilMode() {
  struct StatePotPot* x;
  while (1) {
    counter_StatePotPot++;
    counter_StatePotPot %= size_StatePotPot;
    if (memory_StatePotPot[counter_StatePotPot].mark < clock) {
      x = memory_StatePotPot + counter_StatePotPot; break;
    }
  }
  x->mark = 0;
  x->fresh = 1;
  x->tag = 0;
  return x;
}

static struct StatePotPot* StatePotPot_ErrorMode() {
  struct StatePotPot* x;
  while (1) {
    counter_StatePotPot++;
    counter_StatePotPot %= size_StatePotPot;
    if (memory_StatePotPot[counter_StatePotPot].mark < clock) {
      x = memory_StatePotPot + counter_StatePotPot; break;
    }
  }
  x->mark = 0;
  x->fresh = 1;
  x->tag = 1;
  return x;
}

static struct StatePotPot* StatePotPot_IdleMode() {
  struct StatePotPot* x;
  while (1) {
    counter_StatePotPot++;
    counter_StatePotPot %= size_StatePotPot;
    if (memory_StatePotPot[counter_StatePotPot].mark < clock) {
      x = memory_StatePotPot + counter_StatePotPot; break;
    }
  }
  x->mark = 0;
  x->fresh = 1;
  x->tag = 2;
  return x;
}

static struct StatePotPot* StatePotPot_KeepMode() {
  struct StatePotPot* x;
  while (1) {
    counter_StatePotPot++;
    counter_StatePotPot %= size_StatePotPot;
    if (memory_StatePotPot[counter_StatePotPot].mark < clock) {
      x = memory_StatePotPot + counter_StatePotPot; break;
    }
  }
  x->mark = 0;
  x->fresh = 1;
  x->tag = 3;
  return x;
}

static void mark_StatePotPot(struct StatePotPot* x, int mark) {
  if (mark > x->mark) { x->mark = mark; }
}

static void free_StatePotPot(struct StatePotPot* x) {
  x->mark = 0;
}

static int Potlib_mtot(int mode) {
  int _tmpvar74 = mode;
  int _tmpvar75;
  if (_tmpvar74 == 0) {
    _tmpvar75 = 98;
  } else if (_tmpvar74 == 2) {
    _tmpvar75 = 90;
  } else {
    _tmpvar75 = 60;
  }
  return _tmpvar75;
}

static int Potlib_mtoi(int mode) {
  int _tmpvar76 = mode;
  int _tmpvar77;
  if (_tmpvar76 == 0) {
    _tmpvar77 = 1;
  } else if (_tmpvar76 == 2) {
    _tmpvar77 = 2;
  } else {
    _tmpvar77 = 3;
  }
  return _tmpvar77;
}

static struct PotlibTime* Potlib_incMinute(struct PotlibTime* time) {
  struct PotlibTime* _tmpvar78 = time;
  struct PotlibTime* _tmpvar79;
  if (_tmpvar78->value.Time->member0 == 60
      &&_tmpvar78->value.Time->member1 == 0) {
    _tmpvar79 = PotlibTime_Time(TupleIntInt_Cons(1, 0));
  } else {
    int m = _tmpvar78->value.Time->member0;
    _tmpvar79 = PotlibTime_Time(TupleIntInt_Cons((m + 1), 0));
  }
  return _tmpvar79;
}

static int Potlib_displayTime(struct PotlibTime* time) {
  struct PotlibTime* _tmpvar80 = time;
  int _tmpvar81;
  if (_tmpvar80->value.Time->member1 == 0) {
    int m = _tmpvar80->value.Time->member0;
    _tmpvar81 = m;
  } else {
    int m = _tmpvar80->value.Time->member0;
    _tmpvar81 = (m + 1);
  }
  return _tmpvar81;
}

static struct PotlibTime* Potlib_decSecond(struct PotlibTime* time) {
  struct PotlibTime* _tmpvar82 = time;
  struct PotlibTime* _tmpvar83;
  if (_tmpvar82->value.Time->member0 == 0
      &&_tmpvar82->value.Time->member1 == 0) {
    _tmpvar83 = PotlibTime_Time(TupleIntInt_Cons(0, 0));
  } else if (_tmpvar82->value.Time->member1 == 0) {
    int m = _tmpvar82->value.Time->member0;
    _tmpvar83 = PotlibTime_Time(TupleIntInt_Cons((m - 1), 59));
  } else {
    int m = _tmpvar82->value.Time->member0;
    int s = _tmpvar82->value.Time->member1;
    _tmpvar83 = PotlibTime_Time(TupleIntInt_Cons(m, (s - 1)));
  }
  return _tmpvar83;
}

static void update_WaterWater_water(struct MemoryWaterWater* memory) {
  int _tmpvar6;
  if ((! memory->closed[current_side])) {
    _tmpvar6 = 6;
  } else {
    int _tmpvar5;
    if (memory->fullSensor[current_side]) {
      _tmpvar5 = 5;
    } else {
      int _tmpvar4;
      if (memory->waterSensor4[current_side]) {
        _tmpvar4 = 4;
      } else {
        int _tmpvar3;
        if (memory->waterSensor3[current_side]) {
          _tmpvar3 = 3;
        } else {
          int _tmpvar2;
          if (memory->waterSensor2[current_side]) {
            _tmpvar2 = 2;
          } else {
            int _tmpvar1;
            if (memory->waterSensor1[current_side]) {
              _tmpvar1 = 1;
            } else {
              _tmpvar1 = 0;
            }
            _tmpvar2 = _tmpvar1;
          }
          _tmpvar3 = _tmpvar2;
        }
        _tmpvar4 = _tmpvar3;
      }
      _tmpvar5 = _tmpvar4;
    }
    _tmpvar6 = _tmpvar5;
  }
  memory->water[current_side] = _tmpvar6;
}

static void update_WaterWater(struct MemoryWaterWater* memory) {
  int entry = clock;
  clock = entry + 1;
  clock = entry + 2;
  update_WaterWater_water(memory);
  clock = entry + 3;
  memory->init = 0;
}

static void free_WaterWater(struct MemoryWaterWater* memory) {
  if (memory->init) return;
  memory->init = 1;
}

static void header_init_BuzzerThreeBuzzerThree_state(struct MemoryBuzzerThreeBuzzerThree* memory) {
  memory->state = StateBuzzerThreeBuzzerThree_Stop();
}

static void update_BuzzerThreeBuzzerThreeRun_buzzer(struct MemoryBuzzerThreeBuzzerThree* memory) {
  int _tmpvar9;
  if ((memory->statebody.Run.wait[current_side] <= 100)) {
    _tmpvar9 = 1;
  } else {
    int _tmpvar8;
    if (((200 <= memory->statebody.Run.wait[current_side]) && (memory->statebody.Run.wait[current_side] <= 300))) {
      _tmpvar8 = 1;
    } else {
      int _tmpvar7;
      if (((400 <= memory->statebody.Run.wait[current_side]) && (memory->statebody.Run.wait[current_side] <= 500))) {
        _tmpvar7 = 1;
      } else {
        _tmpvar7 = 0;
      }
      _tmpvar8 = _tmpvar7;
    }
    _tmpvar9 = _tmpvar8;
  }
  memory->buzzer[current_side] = _tmpvar9;
}

static void update_BuzzerThreeBuzzerThreeRun_end(struct MemoryBuzzerThreeBuzzerThree* memory) {
  int _tmpvar10;
  if ((memory->statebody.Run.wait[current_side] >= 500)) {
    _tmpvar10 = 1;
  } else {
    _tmpvar10 = 0;
  }
  memory->end[current_side] = _tmpvar10;
}

static void init_BuzzerThreeBuzzerThreeRun_wait(struct MemoryBuzzerThreeBuzzerThree* memory) {
  memory->statebody.Run.wait[!current_side] = 0;
}

static void update_BuzzerThreeBuzzerThreeRun_wait(struct MemoryBuzzerThreeBuzzerThree* memory) {
  memory->statebody.Run.wait[current_side] =
    (memory->statebody.Run.wait[!current_side] + memory->dt[current_side]);
}

static void update_BuzzerThreeBuzzerThreeRun_state(struct MemoryBuzzerThreeBuzzerThree* memory) {
  struct StateBuzzerThreeBuzzerThree* _tmpvar11;
  if ((memory->statebody.Run.wait[current_side] >= 500)) {
    _tmpvar11 = StateBuzzerThreeBuzzerThree_Stop();
  } else {
    _tmpvar11 = memory->state;
  }
  memory->state = _tmpvar11;
}

static void update_BuzzerThreeBuzzerThreeStop_buzzer(struct MemoryBuzzerThreeBuzzerThree* memory) {
  memory->buzzer[current_side] = 0;
}

static void update_BuzzerThreeBuzzerThreeStop_end(struct MemoryBuzzerThreeBuzzerThree* memory) {
  memory->end[current_side] = 0;
}

static void update_BuzzerThreeBuzzerThreeStop_state(struct MemoryBuzzerThreeBuzzerThree* memory) {
  struct StateBuzzerThreeBuzzerThree* _tmpvar12;
  if (memory->start[current_side]) {
    _tmpvar12 = StateBuzzerThreeBuzzerThree_Run();
  } else {
    _tmpvar12 = memory->state;
  }
  memory->state = _tmpvar12;
}

static void update_BuzzerThreeBuzzerThree(struct MemoryBuzzerThreeBuzzerThree* memory) {
  int entry = clock;
  if (memory->init) {
    header_init_BuzzerThreeBuzzerThree_state(memory);
    mark_StateBuzzerThreeBuzzerThree(memory->state, entry + 2);
  }
  clock = entry + 1;
  if (memory->state->tag == 0) {
    if (memory->state->fresh) {
      memory->statebody.Run.init = 1;
    }
    memory->state->fresh = 0;
    mark_StateBuzzerThreeBuzzerThree(memory->state, entry + 6);
    if (memory->statebody.Run.init) {
      init_BuzzerThreeBuzzerThreeRun_wait(memory);
    }
    clock = entry + 2;
    update_BuzzerThreeBuzzerThreeRun_wait(memory);
    clock = entry + 3;
    update_BuzzerThreeBuzzerThreeRun_end(memory);
    clock = entry + 4;
    update_BuzzerThreeBuzzerThreeRun_buzzer(memory);
    clock = entry + 5;
    update_BuzzerThreeBuzzerThreeRun_state(memory);
    mark_StateBuzzerThreeBuzzerThree(memory->state, entry + clock + 1);
    clock = entry + 6;
    memory->statebody.Run.init = 0;
  } else {
    if (memory->state->fresh) {
      memory->statebody.Stop.init = 1;
    }
    memory->state->fresh = 0;
    mark_StateBuzzerThreeBuzzerThree(memory->state, entry + 5);
    clock = entry + 2;
    update_BuzzerThreeBuzzerThreeStop_end(memory);
    clock = entry + 3;
    update_BuzzerThreeBuzzerThreeStop_buzzer(memory);
    clock = entry + 4;
    update_BuzzerThreeBuzzerThreeStop_state(memory);
    mark_StateBuzzerThreeBuzzerThree(memory->state, entry + clock + 1);
    clock = entry + 5;
    memory->statebody.Stop.init = 0;
  }
  memory->init = 0;
}

static void free_BuzzerThreeBuzzerThree(struct MemoryBuzzerThreeBuzzerThree* memory) {
  if (memory->init) return;
  if (memory->state->fresh) {
  }
  free_StateBuzzerThreeBuzzerThree(memory->state);
  memory->init = 1;
}

static void header_init_BuzzerOneDBuzzerOneD_state(struct MemoryBuzzerOneDBuzzerOneD* memory) {
  memory->state = StateBuzzerOneDBuzzerOneD_Stop();
}

static void update_BuzzerOneDBuzzerOneDRun_buzzer(struct MemoryBuzzerOneDBuzzerOneD* memory) {
  int _tmpvar13;
  if ((memory->statebody.Run.wait[current_side] <= 100)) {
    _tmpvar13 = 1;
  } else {
    _tmpvar13 = 0;
  }
  memory->buzzer[current_side] = _tmpvar13;
}

static void update_BuzzerOneDBuzzerOneDRun_end(struct MemoryBuzzerOneDBuzzerOneD* memory) {
  int _tmpvar14;
  if ((memory->statebody.Run.wait[current_side] >= 100)) {
    _tmpvar14 = 1;
  } else {
    _tmpvar14 = 0;
  }
  memory->end[current_side] = _tmpvar14;
}

static void init_BuzzerOneDBuzzerOneDRun_wait(struct MemoryBuzzerOneDBuzzerOneD* memory) {
  memory->statebody.Run.wait[!current_side] = 0;
}

static void update_BuzzerOneDBuzzerOneDRun_wait(struct MemoryBuzzerOneDBuzzerOneD* memory) {
  memory->statebody.Run.wait[current_side] =
    (memory->statebody.Run.wait[!current_side] + memory->dt[current_side]);
}

static void update_BuzzerOneDBuzzerOneDRun_state(struct MemoryBuzzerOneDBuzzerOneD* memory) {
  struct StateBuzzerOneDBuzzerOneD* _tmpvar15;
  if ((memory->statebody.Run.wait[current_side] >= 100)) {
    _tmpvar15 = StateBuzzerOneDBuzzerOneD_Stop();
  } else {
    _tmpvar15 = memory->state;
  }
  memory->state = _tmpvar15;
}

static void update_BuzzerOneDBuzzerOneDStop_buzzer(struct MemoryBuzzerOneDBuzzerOneD* memory) {
  memory->buzzer[current_side] = 0;
}

static void update_BuzzerOneDBuzzerOneDStop_end(struct MemoryBuzzerOneDBuzzerOneD* memory) {
  memory->end[current_side] = 0;
}

static void update_BuzzerOneDBuzzerOneDStop_state(struct MemoryBuzzerOneDBuzzerOneD* memory) {
  struct StateBuzzerOneDBuzzerOneD* _tmpvar16;
  if (memory->start[current_side]) {
    _tmpvar16 = StateBuzzerOneDBuzzerOneD_Run();
  } else {
    _tmpvar16 = memory->state;
  }
  memory->state = _tmpvar16;
}

static void update_BuzzerOneDBuzzerOneD(struct MemoryBuzzerOneDBuzzerOneD* memory) {
  int entry = clock;
  if (memory->init) {
    header_init_BuzzerOneDBuzzerOneD_state(memory);
    mark_StateBuzzerOneDBuzzerOneD(memory->state, entry + 2);
  }
  clock = entry + 1;
  if (memory->state->tag == 0) {
    if (memory->state->fresh) {
      memory->statebody.Run.init = 1;
    }
    memory->state->fresh = 0;
    mark_StateBuzzerOneDBuzzerOneD(memory->state, entry + 6);
    if (memory->statebody.Run.init) {
      init_BuzzerOneDBuzzerOneDRun_wait(memory);
    }
    clock = entry + 2;
    update_BuzzerOneDBuzzerOneDRun_wait(memory);
    clock = entry + 3;
    update_BuzzerOneDBuzzerOneDRun_end(memory);
    clock = entry + 4;
    update_BuzzerOneDBuzzerOneDRun_buzzer(memory);
    clock = entry + 5;
    update_BuzzerOneDBuzzerOneDRun_state(memory);
    mark_StateBuzzerOneDBuzzerOneD(memory->state, entry + clock + 1);
    clock = entry + 6;
    memory->statebody.Run.init = 0;
  } else {
    if (memory->state->fresh) {
      memory->statebody.Stop.init = 1;
    }
    memory->state->fresh = 0;
    mark_StateBuzzerOneDBuzzerOneD(memory->state, entry + 5);
    clock = entry + 2;
    update_BuzzerOneDBuzzerOneDStop_end(memory);
    clock = entry + 3;
    update_BuzzerOneDBuzzerOneDStop_buzzer(memory);
    clock = entry + 4;
    update_BuzzerOneDBuzzerOneDStop_state(memory);
    mark_StateBuzzerOneDBuzzerOneD(memory->state, entry + clock + 1);
    clock = entry + 5;
    memory->statebody.Stop.init = 0;
  }
  memory->init = 0;
}

static void free_BuzzerOneDBuzzerOneD(struct MemoryBuzzerOneDBuzzerOneD* memory) {
  if (memory->init) return;
  if (memory->state->fresh) {
  }
  free_StateBuzzerOneDBuzzerOneD(memory->state);
  memory->init = 1;
}

static void header_init_BuzzerOneCBuzzerOneC_state(struct MemoryBuzzerOneCBuzzerOneC* memory) {
  memory->state = StateBuzzerOneCBuzzerOneC_Stop();
}

static void update_BuzzerOneCBuzzerOneCRun_buzzer(struct MemoryBuzzerOneCBuzzerOneC* memory) {
  int _tmpvar17;
  if ((memory->statebody.Run.wait[current_side] <= 100)) {
    _tmpvar17 = 1;
  } else {
    _tmpvar17 = 0;
  }
  memory->buzzer[current_side] = _tmpvar17;
}

static void update_BuzzerOneCBuzzerOneCRun_end(struct MemoryBuzzerOneCBuzzerOneC* memory) {
  int _tmpvar18;
  if ((memory->statebody.Run.wait[current_side] >= 100)) {
    _tmpvar18 = 1;
  } else {
    _tmpvar18 = 0;
  }
  memory->end[current_side] = _tmpvar18;
}

static void init_BuzzerOneCBuzzerOneCRun_wait(struct MemoryBuzzerOneCBuzzerOneC* memory) {
  memory->statebody.Run.wait[!current_side] = 0;
}

static void update_BuzzerOneCBuzzerOneCRun_wait(struct MemoryBuzzerOneCBuzzerOneC* memory) {
  memory->statebody.Run.wait[current_side] =
    (memory->statebody.Run.wait[!current_side] + memory->dt[current_side]);
}

static void update_BuzzerOneCBuzzerOneCRun_state(struct MemoryBuzzerOneCBuzzerOneC* memory) {
  struct StateBuzzerOneCBuzzerOneC* _tmpvar19;
  if ((memory->statebody.Run.wait[current_side] >= 100)) {
    _tmpvar19 = StateBuzzerOneCBuzzerOneC_Stop();
  } else {
    _tmpvar19 = memory->state;
  }
  memory->state = _tmpvar19;
}

static void update_BuzzerOneCBuzzerOneCStop_buzzer(struct MemoryBuzzerOneCBuzzerOneC* memory) {
  memory->buzzer[current_side] = 0;
}

static void update_BuzzerOneCBuzzerOneCStop_end(struct MemoryBuzzerOneCBuzzerOneC* memory) {
  memory->end[current_side] = 0;
}

static void update_BuzzerOneCBuzzerOneCStop_state(struct MemoryBuzzerOneCBuzzerOneC* memory) {
  struct StateBuzzerOneCBuzzerOneC* _tmpvar20;
  if (memory->start[current_side]) {
    _tmpvar20 = StateBuzzerOneCBuzzerOneC_Run();
  } else {
    _tmpvar20 = memory->state;
  }
  memory->state = _tmpvar20;
}

static void update_BuzzerOneCBuzzerOneC(struct MemoryBuzzerOneCBuzzerOneC* memory) {
  int entry = clock;
  if (memory->init) {
    header_init_BuzzerOneCBuzzerOneC_state(memory);
    mark_StateBuzzerOneCBuzzerOneC(memory->state, entry + 2);
  }
  clock = entry + 1;
  if (memory->state->tag == 0) {
    if (memory->state->fresh) {
      memory->statebody.Run.init = 1;
    }
    memory->state->fresh = 0;
    mark_StateBuzzerOneCBuzzerOneC(memory->state, entry + 6);
    if (memory->statebody.Run.init) {
      init_BuzzerOneCBuzzerOneCRun_wait(memory);
    }
    clock = entry + 2;
    update_BuzzerOneCBuzzerOneCRun_wait(memory);
    clock = entry + 3;
    update_BuzzerOneCBuzzerOneCRun_end(memory);
    clock = entry + 4;
    update_BuzzerOneCBuzzerOneCRun_buzzer(memory);
    clock = entry + 5;
    update_BuzzerOneCBuzzerOneCRun_state(memory);
    mark_StateBuzzerOneCBuzzerOneC(memory->state, entry + clock + 1);
    clock = entry + 6;
    memory->statebody.Run.init = 0;
  } else {
    if (memory->state->fresh) {
      memory->statebody.Stop.init = 1;
    }
    memory->state->fresh = 0;
    mark_StateBuzzerOneCBuzzerOneC(memory->state, entry + 5);
    clock = entry + 2;
    update_BuzzerOneCBuzzerOneCStop_end(memory);
    clock = entry + 3;
    update_BuzzerOneCBuzzerOneCStop_buzzer(memory);
    clock = entry + 4;
    update_BuzzerOneCBuzzerOneCStop_state(memory);
    mark_StateBuzzerOneCBuzzerOneC(memory->state, entry + clock + 1);
    clock = entry + 5;
    memory->statebody.Stop.init = 0;
  }
  memory->init = 0;
}

static void free_BuzzerOneCBuzzerOneC(struct MemoryBuzzerOneCBuzzerOneC* memory) {
  if (memory->init) return;
  if (memory->state->fresh) {
  }
  free_StateBuzzerOneCBuzzerOneC(memory->state);
  memory->init = 1;
}

static void header_init_TimerTimer_time(struct MemoryTimerTimer* memory) {
  memory->time[!current_side] = PotlibTime_Time(TupleIntInt_Cons(0, 0));
}

static void header_init_TimerTimer_state(struct MemoryTimerTimer* memory) {
  memory->state = StateTimerTimer_Stop();
}

static void update_TimerTimerRun_buzzerT(struct MemoryTimerTimer* memory) {
  memory->buzzerT[current_side] =
    ((memory->statebody.Run.buzzerTA[current_side] || memory->statebody.Run.buzzerTB[current_side]) || memory->statebody.Run.buzzerTC[current_side]);
}

static void init_TimerTimerRun_counter(struct MemoryTimerTimer* memory) {
  memory->statebody.Run.counter[!current_side] = 0;
}

static void update_TimerTimerRun_counter(struct MemoryTimerTimer* memory) {
  memory->statebody.Run.counter[current_side] =
    ((memory->statebody.Run.counter[!current_side] + memory->dt[current_side]) % 1000);
}

static void update_TimerTimerRun_pulse(struct MemoryTimerTimer* memory) {
  memory->statebody.Run.pulse[current_side] =
    (memory->statebody.Run.counter[!current_side] > memory->statebody.Run.counter[current_side]);
}

static void init_TimerTimerRun_resetInput(struct MemoryTimerTimer* memory) {
  memory->statebody.Run.resetInput[!current_side] = 0;
}

static void update_TimerTimerRun_resetInput(struct MemoryTimerTimer* memory) {
  int _tmpvar21;
  if (memory->timerButton[current_side]) {
    _tmpvar21 = (memory->statebody.Run.resetInput[!current_side] + memory->dt[current_side]);
  } else {
    _tmpvar21 = 0;
  }
  memory->statebody.Run.resetInput[current_side] = _tmpvar21;
}

static void update_TimerTimerRun_startA(struct MemoryTimerTimer* memory) {
  memory->statebody.Run.startA[current_side] =
    (((! memory->timerButton[current_side]) && (memory->statebody.Run.waitInput[!current_side] >= 100)) && memory->closed[current_side]);
}

static void update_TimerTimerRun_startB(struct MemoryTimerTimer* memory) {
  memory->statebody.Run.startB[current_side] =
    ((! memory->timerButton[current_side]) && (memory->statebody.Run.resetInput[!current_side] >= 3000));
}

static void update_TimerTimerRun_startC(struct MemoryTimerTimer* memory) {
  memory->statebody.Run.startC[current_side] =
    (Potlib_displayTime(memory->time[current_side]) == 0);
}

static void update_TimerTimerRun_time(struct MemoryTimerTimer* memory) {
  struct PotlibTime* _tmpvar24;
  if (memory->statebody.Run.endB[current_side]) {
    _tmpvar24 = PotlibTime_Time(TupleIntInt_Cons(0, 0));
  } else {
    struct PotlibTime* _tmpvar23;
    if (((memory->statebody.Run.endA[current_side] && memory->closed[current_side]) && (memory->statebody.Run.resetInput[!current_side] < 3000))) {
      _tmpvar23 = Potlib_incMinute(memory->time[!current_side]);
    } else {
      struct PotlibTime* _tmpvar22;
      if (memory->statebody.Run.pulse[current_side]) {
        _tmpvar22 = Potlib_decSecond(memory->time[!current_side]);
      } else {
        _tmpvar22 = memory->time[!current_side];
      }
      _tmpvar23 = _tmpvar22;
    }
    _tmpvar24 = _tmpvar23;
  }
  memory->time[current_side] = _tmpvar24;
}

static void init_TimerTimerRun_waitInput(struct MemoryTimerTimer* memory) {
  memory->statebody.Run.waitInput[!current_side] = 0;
}

static void update_TimerTimerRun_waitInput(struct MemoryTimerTimer* memory) {
  int _tmpvar25;
  if (memory->timerButton[current_side]) {
    _tmpvar25 = (memory->statebody.Run.waitInput[!current_side] + memory->dt[current_side]);
  } else {
    _tmpvar25 = 0;
  }
  memory->statebody.Run.waitInput[current_side] = _tmpvar25;
}

static void input_TimerTimerRun_newnode10_start(struct MemoryTimerTimer* memory) {
  memory->statebody.Run.newnode10.start[current_side] =
    memory->statebody.Run.startC[current_side];
}

static void input_TimerTimerRun_newnode10_dt(struct MemoryTimerTimer* memory) {
  memory->statebody.Run.newnode10.dt[current_side] =
    memory->dt[current_side];
}

static void update_TimerTimerRun_newnode10(struct MemoryTimerTimer* memory) {
  input_TimerTimerRun_newnode10_start(memory);
  input_TimerTimerRun_newnode10_dt(memory);
  if (memory->statebody.Run.init) {
    memory->statebody.Run.newnode10.init = 1;
  }
  update_BuzzerThreeBuzzerThree(&(memory->statebody.Run.newnode10));
  memory->statebody.Run.buzzerTC[current_side] = memory->statebody.Run.newnode10.buzzer[current_side];
  memory->statebody.Run.endC[current_side] = memory->statebody.Run.newnode10.end[current_side];
}

static void input_TimerTimerRun_newnode8_start(struct MemoryTimerTimer* memory) {
  memory->statebody.Run.newnode8.start[current_side] =
    memory->statebody.Run.startA[current_side];
}

static void input_TimerTimerRun_newnode8_dt(struct MemoryTimerTimer* memory) {
  memory->statebody.Run.newnode8.dt[current_side] = memory->dt[current_side];
}

static void update_TimerTimerRun_newnode8(struct MemoryTimerTimer* memory) {
  input_TimerTimerRun_newnode8_start(memory);
  input_TimerTimerRun_newnode8_dt(memory);
  if (memory->statebody.Run.init) {
    memory->statebody.Run.newnode8.init = 1;
  }
  update_BuzzerOneCBuzzerOneC(&(memory->statebody.Run.newnode8));
  memory->statebody.Run.buzzerTA[current_side] = memory->statebody.Run.newnode8.buzzer[current_side];
  memory->statebody.Run.endA[current_side] = memory->statebody.Run.newnode8.end[current_side];
}

static void input_TimerTimerRun_newnode9_start(struct MemoryTimerTimer* memory) {
  memory->statebody.Run.newnode9.start[current_side] =
    memory->statebody.Run.startB[current_side];
}

static void input_TimerTimerRun_newnode9_dt(struct MemoryTimerTimer* memory) {
  memory->statebody.Run.newnode9.dt[current_side] = memory->dt[current_side];
}

static void update_TimerTimerRun_newnode9(struct MemoryTimerTimer* memory) {
  input_TimerTimerRun_newnode9_start(memory);
  input_TimerTimerRun_newnode9_dt(memory);
  if (memory->statebody.Run.init) {
    memory->statebody.Run.newnode9.init = 1;
  }
  update_BuzzerOneDBuzzerOneD(&(memory->statebody.Run.newnode9));
  memory->statebody.Run.buzzerTB[current_side] = memory->statebody.Run.newnode9.buzzer[current_side];
  memory->statebody.Run.endB[current_side] = memory->statebody.Run.newnode9.end[current_side];
}

static void update_TimerTimerRun_state(struct MemoryTimerTimer* memory) {
  struct StateTimerTimer* _tmpvar26;
  if ((memory->statebody.Run.endB[current_side] || memory->statebody.Run.endC[current_side])) {
    _tmpvar26 = StateTimerTimer_Stop();
  } else {
    _tmpvar26 = memory->state;
  }
  memory->state = _tmpvar26;
}

static void init_TimerTimerStop_endInput(struct MemoryTimerTimer* memory) {
  memory->statebody.Stop.endInput[!current_side] = 0;
}

static void update_TimerTimerStop_endInput(struct MemoryTimerTimer* memory) {
  int _tmpvar27;
  if (((! memory->timerButton[current_side]) && (! memory->statebody.Stop.end[current_side]))) {
    _tmpvar27 = (memory->statebody.Stop.endInput[!current_side] + memory->dt[current_side]);
  } else {
    _tmpvar27 = 0;
  }
  memory->statebody.Stop.endInput[current_side] = _tmpvar27;
}

static void update_TimerTimerStop_start(struct MemoryTimerTimer* memory) {
  memory->statebody.Stop.start[current_side] =
    (((! memory->timerButton[current_side]) && (memory->statebody.Stop.waitInput[!current_side] >= 100)) && memory->closed[current_side]);
}

static void update_TimerTimerStop_time(struct MemoryTimerTimer* memory) {
  struct PotlibTime* _tmpvar28;
  if ((memory->statebody.Stop.end[current_side] && memory->closed[current_side])) {
    _tmpvar28 = Potlib_incMinute(memory->time[!current_side]);
  } else {
    _tmpvar28 = memory->time[!current_side];
  }
  memory->time[current_side] = _tmpvar28;
}

static void init_TimerTimerStop_waitInput(struct MemoryTimerTimer* memory) {
  memory->statebody.Stop.waitInput[!current_side] = 0;
}

static void update_TimerTimerStop_waitInput(struct MemoryTimerTimer* memory) {
  int _tmpvar29;
  if (memory->timerButton[current_side]) {
    _tmpvar29 = (memory->statebody.Stop.waitInput[!current_side] + memory->dt[current_side]);
  } else {
    _tmpvar29 = 0;
  }
  memory->statebody.Stop.waitInput[current_side] = _tmpvar29;
}

static void input_TimerTimerStop_newnode7_start(struct MemoryTimerTimer* memory) {
  memory->statebody.Stop.newnode7.start[current_side] =
    memory->statebody.Stop.start[current_side];
}

static void input_TimerTimerStop_newnode7_dt(struct MemoryTimerTimer* memory) {
  memory->statebody.Stop.newnode7.dt[current_side] =
    memory->dt[current_side];
}

static void update_TimerTimerStop_newnode7(struct MemoryTimerTimer* memory) {
  input_TimerTimerStop_newnode7_start(memory);
  input_TimerTimerStop_newnode7_dt(memory);
  if (memory->statebody.Stop.init) {
    memory->statebody.Stop.newnode7.init = 1;
  }
  update_BuzzerOneCBuzzerOneC(&(memory->statebody.Stop.newnode7));
  memory->buzzerT[current_side] = memory->statebody.Stop.newnode7.buzzer[current_side];
  memory->statebody.Stop.end[current_side] = memory->statebody.Stop.newnode7.end[current_side];
}

static void update_TimerTimerStop_state(struct MemoryTimerTimer* memory) {
  struct StateTimerTimer* _tmpvar30;
  if (((memory->statebody.Stop.endInput[current_side] >= 1000) && (Potlib_displayTime(
  memory->time[current_side]) != 0))) {
    _tmpvar30 = StateTimerTimer_Run();
  } else {
    _tmpvar30 = memory->state;
  }
  memory->state = _tmpvar30;
}

static void update_TimerTimer(struct MemoryTimerTimer* memory) {
  int entry = clock;
  if (memory->init) {
    header_init_TimerTimer_time(memory);
    mark_PotlibTime(memory->time[!current_side], entry + 2);
  }
  if (memory->init) {
    header_init_TimerTimer_state(memory);
    mark_StateTimerTimer(memory->state, entry + 2);
  }
  clock = entry + 1;
  if (memory->state->tag == 0) {
    if (memory->state->fresh) {
      memory->statebody.Run.init = 1;
    }
    memory->state->fresh = 0;
    mark_PotlibTime(memory->time[!current_side], entry + 23);
    mark_StateTimerTimer(memory->state, entry + 33);
    if (memory->statebody.Run.init) {
      init_TimerTimerRun_waitInput(memory);
    }
    if (memory->statebody.Run.init) {
      init_TimerTimerRun_resetInput(memory);
    }
    if (memory->statebody.Run.init) {
      init_TimerTimerRun_counter(memory);
    }
    clock = entry + 2;
    update_TimerTimerRun_waitInput(memory);
    clock = entry + 3;
    update_TimerTimerRun_startB(memory);
    clock = entry + 4;
    update_TimerTimerRun_startA(memory);
    clock = entry + 5;
    update_TimerTimerRun_resetInput(memory);
    clock = entry + 6;
    update_TimerTimerRun_counter(memory);
    clock = entry + 7;
    update_TimerTimerRun_pulse(memory);
    clock = entry + 8;
    update_TimerTimerRun_newnode9(memory);
    clock = entry + 15;
    update_TimerTimerRun_newnode8(memory);
    clock = entry + 22;
    update_TimerTimerRun_time(memory);
    mark_PotlibTime(memory->time[current_side], entry + 1 + period);
    clock = entry + 23;
    update_TimerTimerRun_startC(memory);
    clock = entry + 24;
    update_TimerTimerRun_newnode10(memory);
    clock = entry + 31;
    update_TimerTimerRun_buzzerT(memory);
    clock = entry + 32;
    update_TimerTimerRun_state(memory);
    mark_StateTimerTimer(memory->state, entry + clock + 1);
    clock = entry + 33;
    memory->statebody.Run.init = 0;
    if (memory->state->fresh) {
      free_BuzzerThreeBuzzerThree(&(memory->statebody.Run.newnode10));
      free_BuzzerOneCBuzzerOneC(&(memory->statebody.Run.newnode8));
      free_BuzzerOneDBuzzerOneD(&(memory->statebody.Run.newnode9));
    }
  } else {
    if (memory->state->fresh) {
      memory->statebody.Stop.init = 1;
    }
    memory->state->fresh = 0;
    mark_PotlibTime(memory->time[!current_side], entry + 12);
    mark_StateTimerTimer(memory->state, entry + 14);
    if (memory->statebody.Stop.init) {
      init_TimerTimerStop_waitInput(memory);
    }
    if (memory->statebody.Stop.init) {
      init_TimerTimerStop_endInput(memory);
    }
    clock = entry + 2;
    update_TimerTimerStop_waitInput(memory);
    clock = entry + 3;
    update_TimerTimerStop_start(memory);
    clock = entry + 4;
    update_TimerTimerStop_newnode7(memory);
    clock = entry + 11;
    update_TimerTimerStop_time(memory);
    mark_PotlibTime(memory->time[current_side], entry + 1 + period);
    clock = entry + 12;
    update_TimerTimerStop_endInput(memory);
    clock = entry + 13;
    update_TimerTimerStop_state(memory);
    mark_StateTimerTimer(memory->state, entry + clock + 1);
    clock = entry + 14;
    memory->statebody.Stop.init = 0;
    if (memory->state->fresh) {
      free_BuzzerOneCBuzzerOneC(&(memory->statebody.Stop.newnode7));
    }
  }
  memory->init = 0;
}

static void free_TimerTimer(struct MemoryTimerTimer* memory) {
  if (memory->init) return;
  if (memory->state->fresh) {
  } else if (memory->state->tag == 0) {
    free_PotlibTime(memory->time[current_side]);
    free_BuzzerThreeBuzzerThree(&(memory->statebody.Run.newnode10));
    free_BuzzerOneCBuzzerOneC(&(memory->statebody.Run.newnode8));
    free_BuzzerOneDBuzzerOneD(&(memory->statebody.Run.newnode9));
  } else if (memory->state->tag == 1) {
    free_PotlibTime(memory->time[current_side]);
    free_BuzzerOneCBuzzerOneC(&(memory->statebody.Stop.newnode7));
  }
  free_StateTimerTimer(memory->state);
  memory->init = 1;
}

static void header_init_BuzzerOneBBuzzerOneB_state(struct MemoryBuzzerOneBBuzzerOneB* memory) {
  memory->state = StateBuzzerOneBBuzzerOneB_Stop();
}

static void update_BuzzerOneBBuzzerOneBRun_buzzer(struct MemoryBuzzerOneBBuzzerOneB* memory) {
  int _tmpvar31;
  if ((memory->statebody.Run.wait[current_side] <= 100)) {
    _tmpvar31 = 1;
  } else {
    _tmpvar31 = 0;
  }
  memory->buzzer[current_side] = _tmpvar31;
}

static void update_BuzzerOneBBuzzerOneBRun_end(struct MemoryBuzzerOneBBuzzerOneB* memory) {
  int _tmpvar32;
  if ((memory->statebody.Run.wait[current_side] >= 100)) {
    _tmpvar32 = 1;
  } else {
    _tmpvar32 = 0;
  }
  memory->end[current_side] = _tmpvar32;
}

static void init_BuzzerOneBBuzzerOneBRun_wait(struct MemoryBuzzerOneBBuzzerOneB* memory) {
  memory->statebody.Run.wait[!current_side] = 0;
}

static void update_BuzzerOneBBuzzerOneBRun_wait(struct MemoryBuzzerOneBBuzzerOneB* memory) {
  memory->statebody.Run.wait[current_side] =
    (memory->statebody.Run.wait[!current_side] + memory->dt[current_side]);
}

static void update_BuzzerOneBBuzzerOneBRun_state(struct MemoryBuzzerOneBBuzzerOneB* memory) {
  struct StateBuzzerOneBBuzzerOneB* _tmpvar33;
  if ((memory->statebody.Run.wait[current_side] >= 100)) {
    _tmpvar33 = StateBuzzerOneBBuzzerOneB_Stop();
  } else {
    _tmpvar33 = memory->state;
  }
  memory->state = _tmpvar33;
}

static void update_BuzzerOneBBuzzerOneBStop_buzzer(struct MemoryBuzzerOneBBuzzerOneB* memory) {
  memory->buzzer[current_side] = 0;
}

static void update_BuzzerOneBBuzzerOneBStop_end(struct MemoryBuzzerOneBBuzzerOneB* memory) {
  memory->end[current_side] = 0;
}

static void update_BuzzerOneBBuzzerOneBStop_state(struct MemoryBuzzerOneBBuzzerOneB* memory) {
  struct StateBuzzerOneBBuzzerOneB* _tmpvar34;
  if (memory->start[current_side]) {
    _tmpvar34 = StateBuzzerOneBBuzzerOneB_Run();
  } else {
    _tmpvar34 = memory->state;
  }
  memory->state = _tmpvar34;
}

static void update_BuzzerOneBBuzzerOneB(struct MemoryBuzzerOneBBuzzerOneB* memory) {
  int entry = clock;
  if (memory->init) {
    header_init_BuzzerOneBBuzzerOneB_state(memory);
    mark_StateBuzzerOneBBuzzerOneB(memory->state, entry + 2);
  }
  clock = entry + 1;
  if (memory->state->tag == 0) {
    if (memory->state->fresh) {
      memory->statebody.Run.init = 1;
    }
    memory->state->fresh = 0;
    mark_StateBuzzerOneBBuzzerOneB(memory->state, entry + 6);
    if (memory->statebody.Run.init) {
      init_BuzzerOneBBuzzerOneBRun_wait(memory);
    }
    clock = entry + 2;
    update_BuzzerOneBBuzzerOneBRun_wait(memory);
    clock = entry + 3;
    update_BuzzerOneBBuzzerOneBRun_end(memory);
    clock = entry + 4;
    update_BuzzerOneBBuzzerOneBRun_buzzer(memory);
    clock = entry + 5;
    update_BuzzerOneBBuzzerOneBRun_state(memory);
    mark_StateBuzzerOneBBuzzerOneB(memory->state, entry + clock + 1);
    clock = entry + 6;
    memory->statebody.Run.init = 0;
  } else {
    if (memory->state->fresh) {
      memory->statebody.Stop.init = 1;
    }
    memory->state->fresh = 0;
    mark_StateBuzzerOneBBuzzerOneB(memory->state, entry + 5);
    clock = entry + 2;
    update_BuzzerOneBBuzzerOneBStop_end(memory);
    clock = entry + 3;
    update_BuzzerOneBBuzzerOneBStop_buzzer(memory);
    clock = entry + 4;
    update_BuzzerOneBBuzzerOneBStop_state(memory);
    mark_StateBuzzerOneBBuzzerOneB(memory->state, entry + clock + 1);
    clock = entry + 5;
    memory->statebody.Stop.init = 0;
  }
  memory->init = 0;
}

static void free_BuzzerOneBBuzzerOneB(struct MemoryBuzzerOneBBuzzerOneB* memory) {
  if (memory->init) return;
  if (memory->state->fresh) {
  }
  free_StateBuzzerOneBBuzzerOneB(memory->state);
  memory->init = 1;
}

static void header_init_SettingSetting_setting(struct MemorySettingSetting* memory) {
  memory->setting[!current_side] = 0;
}

static void header_init_SettingSetting_state(struct MemorySettingSetting* memory) {
  memory->state = StateSettingSetting_HighMode();
}

static void update_SettingSettingHighMode_setting(struct MemorySettingSetting* memory) {
  memory->setting[current_side] = 0;
}

static void update_SettingSettingHighMode_start(struct MemorySettingSetting* memory) {
  memory->statebody.HighMode.start[current_side] =
    (((memory->statebody.HighMode.wait[!current_side] >= 100) && (! memory->settingButton[current_side])) && memory->closed[current_side]);
}

static void init_SettingSettingHighMode_wait(struct MemorySettingSetting* memory) {
  memory->statebody.HighMode.wait[!current_side] = 0;
}

static void update_SettingSettingHighMode_wait(struct MemorySettingSetting* memory) {
  int _tmpvar35;
  if (memory->settingButton[current_side]) {
    _tmpvar35 = (memory->statebody.HighMode.wait[!current_side] + memory->dt[current_side]);
  } else {
    _tmpvar35 = 0;
  }
  memory->statebody.HighMode.wait[current_side] = _tmpvar35;
}

static void input_SettingSettingHighMode_newnode11_start(struct MemorySettingSetting* memory) {
  memory->statebody.HighMode.newnode11.start[current_side] =
    memory->statebody.HighMode.start[current_side];
}

static void input_SettingSettingHighMode_newnode11_dt(struct MemorySettingSetting* memory) {
  memory->statebody.HighMode.newnode11.dt[current_side] =
    memory->dt[current_side];
}

static void update_SettingSettingHighMode_newnode11(struct MemorySettingSetting* memory) {
  input_SettingSettingHighMode_newnode11_start(memory);
  input_SettingSettingHighMode_newnode11_dt(memory);
  if (memory->statebody.HighMode.init) {
    memory->statebody.HighMode.newnode11.init = 1;
  }
  update_BuzzerOneBBuzzerOneB(&(memory->statebody.HighMode.newnode11));
  memory->buzzerS[current_side] = memory->statebody.HighMode.newnode11.buzzer[current_side];
  memory->statebody.HighMode.end[current_side] = memory->statebody.HighMode.newnode11.end[current_side];
}

static void update_SettingSettingHighMode_state(struct MemorySettingSetting* memory) {
  struct StateSettingSetting* _tmpvar36;
  if ((memory->statebody.HighMode.end[current_side] && memory->closed[current_side])) {
    _tmpvar36 = StateSettingSetting_SaveMode();
  } else {
    _tmpvar36 = memory->state;
  }
  memory->state = _tmpvar36;
}

static void update_SettingSettingMilkMode_setting(struct MemorySettingSetting* memory) {
  memory->setting[current_side] = 1;
}

static void update_SettingSettingMilkMode_start(struct MemorySettingSetting* memory) {
  memory->statebody.MilkMode.start[current_side] =
    (((memory->statebody.MilkMode.wait[!current_side] >= 100) && (! memory->settingButton[current_side])) && memory->closed[current_side]);
}

static void init_SettingSettingMilkMode_wait(struct MemorySettingSetting* memory) {
  memory->statebody.MilkMode.wait[!current_side] = 0;
}

static void update_SettingSettingMilkMode_wait(struct MemorySettingSetting* memory) {
  int _tmpvar37;
  if (memory->settingButton[current_side]) {
    _tmpvar37 = (memory->statebody.MilkMode.wait[!current_side] + memory->dt[current_side]);
  } else {
    _tmpvar37 = 0;
  }
  memory->statebody.MilkMode.wait[current_side] = _tmpvar37;
}

static void input_SettingSettingMilkMode_newnode13_start(struct MemorySettingSetting* memory) {
  memory->statebody.MilkMode.newnode13.start[current_side] =
    memory->statebody.MilkMode.start[current_side];
}

static void input_SettingSettingMilkMode_newnode13_dt(struct MemorySettingSetting* memory) {
  memory->statebody.MilkMode.newnode13.dt[current_side] =
    memory->dt[current_side];
}

static void update_SettingSettingMilkMode_newnode13(struct MemorySettingSetting* memory) {
  input_SettingSettingMilkMode_newnode13_start(memory);
  input_SettingSettingMilkMode_newnode13_dt(memory);
  if (memory->statebody.MilkMode.init) {
    memory->statebody.MilkMode.newnode13.init = 1;
  }
  update_BuzzerOneBBuzzerOneB(&(memory->statebody.MilkMode.newnode13));
  memory->buzzerS[current_side] = memory->statebody.MilkMode.newnode13.buzzer[current_side];
  memory->statebody.MilkMode.end[current_side] = memory->statebody.MilkMode.newnode13.end[current_side];
}

static void update_SettingSettingMilkMode_state(struct MemorySettingSetting* memory) {
  struct StateSettingSetting* _tmpvar38;
  if ((memory->statebody.MilkMode.end[current_side] && memory->closed[current_side])) {
    _tmpvar38 = StateSettingSetting_HighMode();
  } else {
    _tmpvar38 = memory->state;
  }
  memory->state = _tmpvar38;
}

static void update_SettingSettingSaveMode_setting(struct MemorySettingSetting* memory) {
  memory->setting[current_side] = 2;
}

static void update_SettingSettingSaveMode_start(struct MemorySettingSetting* memory) {
  memory->statebody.SaveMode.start[current_side] =
    (((memory->statebody.SaveMode.wait[!current_side] >= 100) && (! memory->settingButton[current_side])) && memory->closed[current_side]);
}

static void init_SettingSettingSaveMode_wait(struct MemorySettingSetting* memory) {
  memory->statebody.SaveMode.wait[!current_side] = 0;
}

static void update_SettingSettingSaveMode_wait(struct MemorySettingSetting* memory) {
  int _tmpvar39;
  if (memory->settingButton[current_side]) {
    _tmpvar39 = (memory->statebody.SaveMode.wait[!current_side] + memory->dt[current_side]);
  } else {
    _tmpvar39 = 0;
  }
  memory->statebody.SaveMode.wait[current_side] = _tmpvar39;
}

static void input_SettingSettingSaveMode_newnode12_start(struct MemorySettingSetting* memory) {
  memory->statebody.SaveMode.newnode12.start[current_side] =
    memory->statebody.SaveMode.start[current_side];
}

static void input_SettingSettingSaveMode_newnode12_dt(struct MemorySettingSetting* memory) {
  memory->statebody.SaveMode.newnode12.dt[current_side] =
    memory->dt[current_side];
}

static void update_SettingSettingSaveMode_newnode12(struct MemorySettingSetting* memory) {
  input_SettingSettingSaveMode_newnode12_start(memory);
  input_SettingSettingSaveMode_newnode12_dt(memory);
  if (memory->statebody.SaveMode.init) {
    memory->statebody.SaveMode.newnode12.init = 1;
  }
  update_BuzzerOneBBuzzerOneB(&(memory->statebody.SaveMode.newnode12));
  memory->buzzerS[current_side] = memory->statebody.SaveMode.newnode12.buzzer[current_side];
  memory->statebody.SaveMode.end[current_side] = memory->statebody.SaveMode.newnode12.end[current_side];
}

static void update_SettingSettingSaveMode_state(struct MemorySettingSetting* memory) {
  struct StateSettingSetting* _tmpvar40;
  if ((memory->statebody.SaveMode.end[current_side] && memory->closed[current_side])) {
    _tmpvar40 = StateSettingSetting_MilkMode();
  } else {
    _tmpvar40 = memory->state;
  }
  memory->state = _tmpvar40;
}

static void update_SettingSetting(struct MemorySettingSetting* memory) {
  int entry = clock;
  if (memory->init) {
    header_init_SettingSetting_setting(memory);
  }
  if (memory->init) {
    header_init_SettingSetting_state(memory);
    mark_StateSettingSetting(memory->state, entry + 2);
  }
  clock = entry + 1;
  if (memory->state->tag == 0) {
    if (memory->state->fresh) {
      memory->statebody.HighMode.init = 1;
    }
    memory->state->fresh = 0;
    mark_StateSettingSetting(memory->state, entry + 13);
    if (memory->statebody.HighMode.init) {
      init_SettingSettingHighMode_wait(memory);
    }
    clock = entry + 2;
    update_SettingSettingHighMode_wait(memory);
    clock = entry + 3;
    update_SettingSettingHighMode_start(memory);
    clock = entry + 4;
    update_SettingSettingHighMode_setting(memory);
    clock = entry + 5;
    update_SettingSettingHighMode_newnode11(memory);
    clock = entry + 12;
    update_SettingSettingHighMode_state(memory);
    mark_StateSettingSetting(memory->state, entry + clock + 1);
    clock = entry + 13;
    memory->statebody.HighMode.init = 0;
    if (memory->state->fresh) {
      free_BuzzerOneBBuzzerOneB(&(memory->statebody.HighMode.newnode11));
    }
  } else if (memory->state->tag == 1) {
    if (memory->state->fresh) {
      memory->statebody.MilkMode.init = 1;
    }
    memory->state->fresh = 0;
    mark_StateSettingSetting(memory->state, entry + 13);
    if (memory->statebody.MilkMode.init) {
      init_SettingSettingMilkMode_wait(memory);
    }
    clock = entry + 2;
    update_SettingSettingMilkMode_wait(memory);
    clock = entry + 3;
    update_SettingSettingMilkMode_start(memory);
    clock = entry + 4;
    update_SettingSettingMilkMode_setting(memory);
    clock = entry + 5;
    update_SettingSettingMilkMode_newnode13(memory);
    clock = entry + 12;
    update_SettingSettingMilkMode_state(memory);
    mark_StateSettingSetting(memory->state, entry + clock + 1);
    clock = entry + 13;
    memory->statebody.MilkMode.init = 0;
    if (memory->state->fresh) {
      free_BuzzerOneBBuzzerOneB(&(memory->statebody.MilkMode.newnode13));
    }
  } else {
    if (memory->state->fresh) {
      memory->statebody.SaveMode.init = 1;
    }
    memory->state->fresh = 0;
    mark_StateSettingSetting(memory->state, entry + 13);
    if (memory->statebody.SaveMode.init) {
      init_SettingSettingSaveMode_wait(memory);
    }
    clock = entry + 2;
    update_SettingSettingSaveMode_wait(memory);
    clock = entry + 3;
    update_SettingSettingSaveMode_start(memory);
    clock = entry + 4;
    update_SettingSettingSaveMode_setting(memory);
    clock = entry + 5;
    update_SettingSettingSaveMode_newnode12(memory);
    clock = entry + 12;
    update_SettingSettingSaveMode_state(memory);
    mark_StateSettingSetting(memory->state, entry + clock + 1);
    clock = entry + 13;
    memory->statebody.SaveMode.init = 0;
    if (memory->state->fresh) {
      free_BuzzerOneBBuzzerOneB(&(memory->statebody.SaveMode.newnode12));
    }
  }
  memory->init = 0;
}

static void free_SettingSetting(struct MemorySettingSetting* memory) {
  if (memory->init) return;
  if (memory->state->fresh) {
  } else if (memory->state->tag == 0) {
    free_BuzzerOneBBuzzerOneB(&(memory->statebody.HighMode.newnode11));
  } else if (memory->state->tag == 1) {
    free_BuzzerOneBBuzzerOneB(&(memory->statebody.MilkMode.newnode13));
  } else if (memory->state->tag == 2) {
    free_BuzzerOneBBuzzerOneB(&(memory->statebody.SaveMode.newnode12));
  }
  free_StateSettingSetting(memory->state);
  memory->init = 1;
}

static void header_init_LockLock_lock(struct MemoryLockLock* memory) {
  memory->lock[!current_side] = 0;
}

static void header_init_LockLock_state(struct MemoryLockLock* memory) {
  memory->state = StateLockLock_Unlocked();
}

static void update_LockLockLocked_lock(struct MemoryLockLock* memory) {
  memory->lock[current_side] = 1;
}

static void init_LockLockLocked_wait(struct MemoryLockLock* memory) {
  memory->statebody.Locked.wait[!current_side] = 0;
}

static void update_LockLockLocked_wait(struct MemoryLockLock* memory) {
  int _tmpvar41;
  if (memory->lockButton[current_side]) {
    _tmpvar41 = (memory->statebody.Locked.wait[!current_side] + memory->dt[current_side]);
  } else {
    _tmpvar41 = 0;
  }
  memory->statebody.Locked.wait[current_side] = _tmpvar41;
}

static void update_LockLockLocked_state(struct MemoryLockLock* memory) {
  struct StateLockLock* _tmpvar44;
  if ((! memory->closed[current_side])) {
    _tmpvar44 = memory->state;
  } else {
    struct StateLockLock* _tmpvar43;
    if (memory->supply[current_side]) {
      _tmpvar43 = StateLockLock_Unlocked();
    } else {
      struct StateLockLock* _tmpvar42;
      if (((! memory->lockButton[current_side]) && (memory->statebody.Locked.wait[!current_side] >= 100))) {
        _tmpvar42 = StateLockLock_Unlocked();
      } else {
        _tmpvar42 = memory->state;
      }
      _tmpvar43 = _tmpvar42;
    }
    _tmpvar44 = _tmpvar43;
  }
  memory->state = _tmpvar44;
}

static void update_LockLockUnlocked_lock(struct MemoryLockLock* memory) {
  memory->lock[current_side] = 0;
}

static void init_LockLockUnlocked_wait(struct MemoryLockLock* memory) {
  memory->statebody.Unlocked.wait[!current_side] = 0;
}

static void update_LockLockUnlocked_wait(struct MemoryLockLock* memory) {
  int _tmpvar45;
  if (memory->lockButton[current_side]) {
    _tmpvar45 = (memory->statebody.Unlocked.wait[!current_side] + memory->dt[current_side]);
  } else {
    _tmpvar45 = 0;
  }
  memory->statebody.Unlocked.wait[current_side] = _tmpvar45;
}

static void update_LockLockUnlocked_state(struct MemoryLockLock* memory) {
  struct StateLockLock* _tmpvar47;
  if (((! memory->closed[current_side]) || memory->supply[current_side])) {
    _tmpvar47 = memory->state;
  } else {
    struct StateLockLock* _tmpvar46;
    if (((! memory->lockButton[current_side]) && (memory->statebody.Unlocked.wait[!current_side] >= 100))) {
      _tmpvar46 = StateLockLock_Locked();
    } else {
      _tmpvar46 = memory->state;
    }
    _tmpvar47 = _tmpvar46;
  }
  memory->state = _tmpvar47;
}

static void update_LockLock(struct MemoryLockLock* memory) {
  int entry = clock;
  if (memory->init) {
    header_init_LockLock_lock(memory);
  }
  if (memory->init) {
    header_init_LockLock_state(memory);
    mark_StateLockLock(memory->state, entry + 2);
  }
  clock = entry + 1;
  if (memory->state->tag == 0) {
    if (memory->state->fresh) {
      memory->statebody.Locked.init = 1;
    }
    memory->state->fresh = 0;
    mark_StateLockLock(memory->state, entry + 5);
    if (memory->statebody.Locked.init) {
      init_LockLockLocked_wait(memory);
    }
    clock = entry + 2;
    update_LockLockLocked_wait(memory);
    clock = entry + 3;
    update_LockLockLocked_lock(memory);
    clock = entry + 4;
    update_LockLockLocked_state(memory);
    mark_StateLockLock(memory->state, entry + clock + 1);
    clock = entry + 5;
    memory->statebody.Locked.init = 0;
  } else {
    if (memory->state->fresh) {
      memory->statebody.Unlocked.init = 1;
    }
    memory->state->fresh = 0;
    mark_StateLockLock(memory->state, entry + 5);
    if (memory->statebody.Unlocked.init) {
      init_LockLockUnlocked_wait(memory);
    }
    clock = entry + 2;
    update_LockLockUnlocked_wait(memory);
    clock = entry + 3;
    update_LockLockUnlocked_lock(memory);
    clock = entry + 4;
    update_LockLockUnlocked_state(memory);
    mark_StateLockLock(memory->state, entry + clock + 1);
    clock = entry + 5;
    memory->statebody.Unlocked.init = 0;
  }
  memory->init = 0;
}

static void free_LockLock(struct MemoryLockLock* memory) {
  if (memory->init) return;
  if (memory->state->fresh) {
  }
  free_StateLockLock(memory->state);
  memory->init = 1;
}

static void header_init_CoverCover_state(struct MemoryCoverCover* memory) {
  memory->state = StateCoverCover_Open();
}

static void update_CoverCoverClose_closed(struct MemoryCoverCover* memory) {
  memory->closed[current_side] = 1;
}

static void init_CoverCoverClose_wait(struct MemoryCoverCover* memory) {
  memory->statebody.Close.wait[!current_side] = 0;
}

static void update_CoverCoverClose_wait(struct MemoryCoverCover* memory) {
  int _tmpvar48;
  if ((! memory->coverSensor[current_side])) {
    _tmpvar48 = (memory->statebody.Close.wait[!current_side] + memory->dt[current_side]);
  } else {
    _tmpvar48 = 0;
  }
  memory->statebody.Close.wait[current_side] = _tmpvar48;
}

static void update_CoverCoverClose_state(struct MemoryCoverCover* memory) {
  struct StateCoverCover* _tmpvar49;
  if (((! memory->coverSensor[current_side]) && (memory->statebody.Close.wait[current_side] >= 1000))) {
    _tmpvar49 = StateCoverCover_Open();
  } else {
    _tmpvar49 = memory->state;
  }
  memory->state = _tmpvar49;
}

static void update_CoverCoverOpen_closed(struct MemoryCoverCover* memory) {
  memory->closed[current_side] = 0;
}

static void init_CoverCoverOpen_wait(struct MemoryCoverCover* memory) {
  memory->statebody.Open.wait[!current_side] = 0;
}

static void update_CoverCoverOpen_wait(struct MemoryCoverCover* memory) {
  int _tmpvar50;
  if (memory->coverSensor[current_side]) {
    _tmpvar50 = (memory->statebody.Open.wait[!current_side] + memory->dt[current_side]);
  } else {
    _tmpvar50 = 0;
  }
  memory->statebody.Open.wait[current_side] = _tmpvar50;
}

static void update_CoverCoverOpen_state(struct MemoryCoverCover* memory) {
  struct StateCoverCover* _tmpvar51;
  if ((memory->coverSensor[current_side] && (memory->statebody.Open.wait[current_side] >= 3000))) {
    _tmpvar51 = StateCoverCover_Close();
  } else {
    _tmpvar51 = memory->state;
  }
  memory->state = _tmpvar51;
}

static void update_CoverCover(struct MemoryCoverCover* memory) {
  int entry = clock;
  if (memory->init) {
    header_init_CoverCover_state(memory);
    mark_StateCoverCover(memory->state, entry + 2);
  }
  clock = entry + 1;
  if (memory->state->tag == 0) {
    if (memory->state->fresh) {
      memory->statebody.Close.init = 1;
    }
    memory->state->fresh = 0;
    mark_StateCoverCover(memory->state, entry + 5);
    if (memory->statebody.Close.init) {
      init_CoverCoverClose_wait(memory);
    }
    clock = entry + 2;
    update_CoverCoverClose_wait(memory);
    clock = entry + 3;
    update_CoverCoverClose_closed(memory);
    clock = entry + 4;
    update_CoverCoverClose_state(memory);
    mark_StateCoverCover(memory->state, entry + clock + 1);
    clock = entry + 5;
    memory->statebody.Close.init = 0;
  } else {
    if (memory->state->fresh) {
      memory->statebody.Open.init = 1;
    }
    memory->state->fresh = 0;
    mark_StateCoverCover(memory->state, entry + 5);
    if (memory->statebody.Open.init) {
      init_CoverCoverOpen_wait(memory);
    }
    clock = entry + 2;
    update_CoverCoverOpen_wait(memory);
    clock = entry + 3;
    update_CoverCoverOpen_closed(memory);
    clock = entry + 4;
    update_CoverCoverOpen_state(memory);
    mark_StateCoverCover(memory->state, entry + clock + 1);
    clock = entry + 5;
    memory->statebody.Open.init = 0;
  }
  memory->init = 0;
}

static void free_CoverCover(struct MemoryCoverCover* memory) {
  if (memory->init) return;
  if (memory->state->fresh) {
  }
  free_StateCoverCover(memory->state);
  memory->init = 1;
}

static void update_HeaterHeater_dt(struct MemoryHeaterHeater* memory) {
  memory->dt[current_side] =
    (memory->t[current_side] - memory->t[!current_side]);
}

static void update_HeaterHeater_heater(struct MemoryHeaterHeater* memory) {
  int _tmpvar52;
  if ((memory->thermistor[current_side] < memory->tg[current_side])) {
    _tmpvar52 = 1;
  } else {
    _tmpvar52 = 0;
  }
  memory->heater[current_side] = _tmpvar52;
}

static void init_HeaterHeater_t(struct MemoryHeaterHeater* memory) {
  memory->t[!current_side] = 0;
}

static void update_HeaterHeater_t(struct MemoryHeaterHeater* memory) {
  memory->t[current_side] = memory->thermistor[current_side];
}

static void update_HeaterHeater_tg(struct MemoryHeaterHeater* memory) {
  memory->tg[current_side] = Potlib_mtot(memory->setting[current_side]);
}

static void update_HeaterHeater(struct MemoryHeaterHeater* memory) {
  int entry = clock;
  clock = entry + 1;
  if (memory->init) {
    init_HeaterHeater_t(memory);
  }
  clock = entry + 2;
  update_HeaterHeater_tg(memory);
  clock = entry + 3;
  update_HeaterHeater_t(memory);
  clock = entry + 4;
  update_HeaterHeater_heater(memory);
  clock = entry + 5;
  update_HeaterHeater_dt(memory);
  clock = entry + 6;
  memory->init = 0;
}

static void free_HeaterHeater(struct MemoryHeaterHeater* memory) {
  if (memory->init) return;
  memory->init = 1;
}

static void update_BoiledBoiled_boiled(struct MemoryBoiledBoiled* memory) {
  int _tmpvar53;
  if ((memory->wait[current_side] >= 180000)) {
    _tmpvar53 = 1;
  } else {
    _tmpvar53 = 0;
  }
  memory->boiled[current_side] = _tmpvar53;
}

static void init_BoiledBoiled_reached(struct MemoryBoiledBoiled* memory) {
  memory->reached[!current_side] = 0;
}

static void update_BoiledBoiled_reached(struct MemoryBoiledBoiled* memory) {
  int _tmpvar54;
  if ((memory->thermistor[current_side] >= 100)) {
    _tmpvar54 = 1;
  } else {
    _tmpvar54 = memory->reached[!current_side];
  }
  memory->reached[current_side] = _tmpvar54;
}

static void init_BoiledBoiled_wait(struct MemoryBoiledBoiled* memory) {
  memory->wait[!current_side] = 0;
}

static void update_BoiledBoiled_wait(struct MemoryBoiledBoiled* memory) {
  int _tmpvar55;
  if (memory->reached[current_side]) {
    _tmpvar55 = (memory->wait[!current_side] + memory->dt[current_side]);
  } else {
    _tmpvar55 = memory->wait[!current_side];
  }
  memory->wait[current_side] = _tmpvar55;
}

static void update_BoiledBoiled(struct MemoryBoiledBoiled* memory) {
  int entry = clock;
  clock = entry + 1;
  if (memory->init) {
    init_BoiledBoiled_wait(memory);
  }
  if (memory->init) {
    init_BoiledBoiled_reached(memory);
  }
  clock = entry + 2;
  update_BoiledBoiled_reached(memory);
  clock = entry + 3;
  update_BoiledBoiled_wait(memory);
  clock = entry + 4;
  update_BoiledBoiled_boiled(memory);
  clock = entry + 5;
  memory->init = 0;
}

static void free_BoiledBoiled(struct MemoryBoiledBoiled* memory) {
  if (memory->init) return;
  memory->init = 1;
}

static void header_init_BuzzerOneBuzzerOne_state(struct MemoryBuzzerOneBuzzerOne* memory) {
  memory->state = StateBuzzerOneBuzzerOne_Stop();
}

static void update_BuzzerOneBuzzerOneRun_buzzer(struct MemoryBuzzerOneBuzzerOne* memory) {
  int _tmpvar56;
  if ((memory->statebody.Run.wait[current_side] <= 100)) {
    _tmpvar56 = 1;
  } else {
    _tmpvar56 = 0;
  }
  memory->buzzer[current_side] = _tmpvar56;
}

static void update_BuzzerOneBuzzerOneRun_end(struct MemoryBuzzerOneBuzzerOne* memory) {
  int _tmpvar57;
  if ((memory->statebody.Run.wait[current_side] >= 100)) {
    _tmpvar57 = 1;
  } else {
    _tmpvar57 = 0;
  }
  memory->end[current_side] = _tmpvar57;
}

static void init_BuzzerOneBuzzerOneRun_wait(struct MemoryBuzzerOneBuzzerOne* memory) {
  memory->statebody.Run.wait[!current_side] = 0;
}

static void update_BuzzerOneBuzzerOneRun_wait(struct MemoryBuzzerOneBuzzerOne* memory) {
  memory->statebody.Run.wait[current_side] =
    (memory->statebody.Run.wait[!current_side] + memory->dt[current_side]);
}

static void update_BuzzerOneBuzzerOneRun_state(struct MemoryBuzzerOneBuzzerOne* memory) {
  struct StateBuzzerOneBuzzerOne* _tmpvar58;
  if ((memory->statebody.Run.wait[current_side] >= 100)) {
    _tmpvar58 = StateBuzzerOneBuzzerOne_Stop();
  } else {
    _tmpvar58 = memory->state;
  }
  memory->state = _tmpvar58;
}

static void update_BuzzerOneBuzzerOneStop_buzzer(struct MemoryBuzzerOneBuzzerOne* memory) {
  memory->buzzer[current_side] = 0;
}

static void update_BuzzerOneBuzzerOneStop_end(struct MemoryBuzzerOneBuzzerOne* memory) {
  memory->end[current_side] = 0;
}

static void update_BuzzerOneBuzzerOneStop_state(struct MemoryBuzzerOneBuzzerOne* memory) {
  struct StateBuzzerOneBuzzerOne* _tmpvar59;
  if (memory->start[current_side]) {
    _tmpvar59 = StateBuzzerOneBuzzerOne_Run();
  } else {
    _tmpvar59 = memory->state;
  }
  memory->state = _tmpvar59;
}

static void update_BuzzerOneBuzzerOne(struct MemoryBuzzerOneBuzzerOne* memory) {
  int entry = clock;
  if (memory->init) {
    header_init_BuzzerOneBuzzerOne_state(memory);
    mark_StateBuzzerOneBuzzerOne(memory->state, entry + 2);
  }
  clock = entry + 1;
  if (memory->state->tag == 0) {
    if (memory->state->fresh) {
      memory->statebody.Run.init = 1;
    }
    memory->state->fresh = 0;
    mark_StateBuzzerOneBuzzerOne(memory->state, entry + 6);
    if (memory->statebody.Run.init) {
      init_BuzzerOneBuzzerOneRun_wait(memory);
    }
    clock = entry + 2;
    update_BuzzerOneBuzzerOneRun_wait(memory);
    clock = entry + 3;
    update_BuzzerOneBuzzerOneRun_end(memory);
    clock = entry + 4;
    update_BuzzerOneBuzzerOneRun_buzzer(memory);
    clock = entry + 5;
    update_BuzzerOneBuzzerOneRun_state(memory);
    mark_StateBuzzerOneBuzzerOne(memory->state, entry + clock + 1);
    clock = entry + 6;
    memory->statebody.Run.init = 0;
  } else {
    if (memory->state->fresh) {
      memory->statebody.Stop.init = 1;
    }
    memory->state->fresh = 0;
    mark_StateBuzzerOneBuzzerOne(memory->state, entry + 5);
    clock = entry + 2;
    update_BuzzerOneBuzzerOneStop_end(memory);
    clock = entry + 3;
    update_BuzzerOneBuzzerOneStop_buzzer(memory);
    clock = entry + 4;
    update_BuzzerOneBuzzerOneStop_state(memory);
    mark_StateBuzzerOneBuzzerOne(memory->state, entry + clock + 1);
    clock = entry + 5;
    memory->statebody.Stop.init = 0;
  }
  memory->init = 0;
}

static void free_BuzzerOneBuzzerOne(struct MemoryBuzzerOneBuzzerOne* memory) {
  if (memory->init) return;
  if (memory->state->fresh) {
  }
  free_StateBuzzerOneBuzzerOne(memory->state);
  memory->init = 1;
}

static void update_BoilBoil_start(struct MemoryBoilBoil* memory) {
  memory->start[current_side] =
    ((! memory->boilButton[current_side]) && (memory->wait[!current_side] >= 100));
}

static void init_BoilBoil_wait(struct MemoryBoilBoil* memory) {
  memory->wait[!current_side] = 0;
}

static void update_BoilBoil_wait(struct MemoryBoilBoil* memory) {
  int _tmpvar60;
  if (memory->boilButton[current_side]) {
    _tmpvar60 = (memory->wait[!current_side] + memory->dt[current_side]);
  } else {
    _tmpvar60 = 0;
  }
  memory->wait[current_side] = _tmpvar60;
}

static void input_BoilBoil_newnode17_start(struct MemoryBoilBoil* memory) {
  memory->newnode17.start[current_side] = memory->start[current_side];
}

static void input_BoilBoil_newnode17_dt(struct MemoryBoilBoil* memory) {
  memory->newnode17.dt[current_side] = memory->dt[current_side];
}

static void update_BoilBoil_newnode17(struct MemoryBoilBoil* memory) {
  input_BoilBoil_newnode17_start(memory);
  input_BoilBoil_newnode17_dt(memory);
  if (memory->init) {
    memory->newnode17.init = 1;
  }
  update_BuzzerOneBuzzerOne(&(memory->newnode17));
  memory->buzzerP[current_side] = memory->newnode17.buzzer[current_side];
  memory->boil[current_side] = memory->newnode17.end[current_side];
}

static void update_BoilBoil(struct MemoryBoilBoil* memory) {
  int entry = clock;
  clock = entry + 1;
  if (memory->init) {
    init_BoilBoil_wait(memory);
  }
  clock = entry + 2;
  update_BoilBoil_wait(memory);
  clock = entry + 3;
  update_BoilBoil_start(memory);
  clock = entry + 4;
  update_BoilBoil_newnode17(memory);
  clock = entry + 11;
  memory->init = 0;
}

static void free_BoilBoil(struct MemoryBoilBoil* memory) {
  if (memory->init) return;
  free_BuzzerOneBuzzerOne(&(memory->newnode17));
  memory->init = 1;
}

static void header_init_PotPot_state(struct MemoryPotPot* memory) {
  memory->state = StatePotPot_IdleMode();
}

static void update_PotPotBoilMode_battery(struct MemoryPotPot* memory) {
  memory->battery[current_side] = 1;
}

static void update_PotPotBoilMode_boillamp(struct MemoryPotPot* memory) {
  memory->boillamp[current_side] = 1;
}

static void update_PotPotBoilMode_buzzerP(struct MemoryPotPot* memory) {
  memory->buzzerP[current_side] = 0;
}

static void update_PotPotBoilMode_heater(struct MemoryPotPot* memory) {
  int _tmpvar61;
  if ((memory->thermistor[current_side] < 100)) {
    _tmpvar61 = 1;
  } else {
    _tmpvar61 = 0;
  }
  memory->heater[current_side] = _tmpvar61;
}

static void update_PotPotBoilMode_keeplamp(struct MemoryPotPot* memory) {
  memory->keeplamp[current_side] = 0;
}

static void update_PotPotBoilMode_supply(struct MemoryPotPot* memory) {
  memory->supply[current_side] = 0;
}

static void update_PotPotBoilMode_temperature(struct MemoryPotPot* memory) {
  memory->temperature[current_side] = memory->thermistor[current_side];
}

static void input_PotPotBoilMode_newnode14_thermistor(struct MemoryPotPot* memory) {
  memory->statebody.BoilMode.newnode14.thermistor[current_side] =
    memory->thermistor[current_side];
}

static void input_PotPotBoilMode_newnode14_dt(struct MemoryPotPot* memory) {
  memory->statebody.BoilMode.newnode14.dt[current_side] =
    memory->dt[current_side];
}

static void update_PotPotBoilMode_newnode14(struct MemoryPotPot* memory) {
  input_PotPotBoilMode_newnode14_thermistor(memory);
  input_PotPotBoilMode_newnode14_dt(memory);
  if (memory->statebody.BoilMode.init) {
    memory->statebody.BoilMode.newnode14.init = 1;
  }
  update_BoiledBoiled(&(memory->statebody.BoilMode.newnode14));
  memory->statebody.BoilMode.boiled[current_side] = memory->statebody.BoilMode.newnode14.boiled[current_side];
}

static void update_PotPotBoilMode_state(struct MemoryPotPot* memory) {
  struct StatePotPot* _tmpvar64;
  if ((memory->thermistor[current_side] > 110)) {
    _tmpvar64 = StatePotPot_ErrorMode();
  } else {
    struct StatePotPot* _tmpvar63;
    if ((((! memory->closed[current_side]) || (memory->water[current_side] == 0)) || (memory->water[current_side] == 5))) {
      _tmpvar63 = StatePotPot_IdleMode();
    } else {
      struct StatePotPot* _tmpvar62;
      if (memory->statebody.BoilMode.boiled[current_side]) {
        _tmpvar62 = StatePotPot_KeepMode();
      } else {
        _tmpvar62 = memory->state;
      }
      _tmpvar63 = _tmpvar62;
    }
    _tmpvar64 = _tmpvar63;
  }
  memory->state = _tmpvar64;
}

static void update_PotPotErrorMode_battery(struct MemoryPotPot* memory) {
  memory->battery[current_side] = 0;
}

static void update_PotPotErrorMode_boillamp(struct MemoryPotPot* memory) {
  memory->boillamp[current_side] = 0;
}

static void update_PotPotErrorMode_buzzerP(struct MemoryPotPot* memory) {
  int _tmpvar65;
  if ((memory->statebody.ErrorMode.buzzerWait[current_side] >= 30000)) {
    _tmpvar65 = 0;
  } else {
    _tmpvar65 = 1;
  }
  memory->buzzerP[current_side] = _tmpvar65;
}

static void init_PotPotErrorMode_buzzerWait(struct MemoryPotPot* memory) {
  memory->statebody.ErrorMode.buzzerWait[!current_side] = 0;
}

static void update_PotPotErrorMode_buzzerWait(struct MemoryPotPot* memory) {
  memory->statebody.ErrorMode.buzzerWait[current_side] =
    (memory->statebody.ErrorMode.buzzerWait[!current_side] + memory->dt[current_side]);
}

static void update_PotPotErrorMode_heater(struct MemoryPotPot* memory) {
  memory->heater[current_side] = 0;
}

static void update_PotPotErrorMode_keeplamp(struct MemoryPotPot* memory) {
  memory->keeplamp[current_side] = 0;
}

static void update_PotPotErrorMode_supply(struct MemoryPotPot* memory) {
  memory->supply[current_side] = 0;
}

static void update_PotPotErrorMode_temperature(struct MemoryPotPot* memory) {
  memory->temperature[current_side] = memory->thermistor[current_side];
}

static void update_PotPotErrorMode_state(struct MemoryPotPot* memory) {
  memory->state = memory->state;
}

static void update_PotPotIdleMode_battery(struct MemoryPotPot* memory) {
  memory->battery[current_side] = 1;
}

static void update_PotPotIdleMode_boillamp(struct MemoryPotPot* memory) {
  memory->boillamp[current_side] = 0;
}

static void update_PotPotIdleMode_buzzerP(struct MemoryPotPot* memory) {
  memory->buzzerP[current_side] = 0;
}

static void update_PotPotIdleMode_heater(struct MemoryPotPot* memory) {
  memory->heater[current_side] = 0;
}

static void update_PotPotIdleMode_keeplamp(struct MemoryPotPot* memory) {
  memory->keeplamp[current_side] = 0;
}

static void update_PotPotIdleMode_supply(struct MemoryPotPot* memory) {
  memory->supply[current_side] = 0;
}

static void update_PotPotIdleMode_temperature(struct MemoryPotPot* memory) {
  memory->temperature[current_side] = 200;
}

static void update_PotPotIdleMode_state(struct MemoryPotPot* memory) {
  struct StatePotPot* _tmpvar66;
  if (((memory->closed[current_side] && (memory->water[current_side] != 5)) && (memory->water[current_side] != 0))) {
    _tmpvar66 = StatePotPot_BoilMode();
  } else {
    _tmpvar66 = memory->state;
  }
  memory->state = _tmpvar66;
}

static void update_PotPotKeepMode_battery(struct MemoryPotPot* memory) {
  memory->battery[current_side] = 1;
}

static void update_PotPotKeepMode_boillamp(struct MemoryPotPot* memory) {
  memory->boillamp[current_side] = 0;
}

static void init_PotPotKeepMode_errorA(struct MemoryPotPot* memory) {
  memory->statebody.KeepMode.errorA[!current_side] = 0;
}

static void update_PotPotKeepMode_errorA(struct MemoryPotPot* memory) {
  int _tmpvar67;
  if ((memory->thermistor[current_side] > 98)) {
    _tmpvar67 = (memory->statebody.KeepMode.errorA[!current_side] + memory->dt[current_side]);
  } else {
    _tmpvar67 = 0;
  }
  memory->statebody.KeepMode.errorA[current_side] = _tmpvar67;
}

static void update_PotPotKeepMode_errorB(struct MemoryPotPot* memory) {
  int _tmpvar68;
  if ((memory->statebody.KeepMode.mdown[current_side] && ((Potlib_mtot(
  memory->keeptemp[current_side]) - memory->thermistor[current_side]) >= 8))) {
    _tmpvar68 = 1;
  } else {
    _tmpvar68 = 0;
  }
  memory->statebody.KeepMode.errorB[current_side] = _tmpvar68;
}

static void update_PotPotKeepMode_keeplamp(struct MemoryPotPot* memory) {
  memory->keeplamp[current_side] = 1;
}

static void init_PotPotKeepMode_mcounter(struct MemoryPotPot* memory) {
  memory->statebody.KeepMode.mcounter[!current_side] = 0;
}

static void update_PotPotKeepMode_mcounter(struct MemoryPotPot* memory) {
  memory->statebody.KeepMode.mcounter[current_side] =
    ((memory->statebody.KeepMode.mcounter[!current_side] + memory->dt[current_side]) % 60000);
}

static void update_PotPotKeepMode_mdown(struct MemoryPotPot* memory) {
  memory->statebody.KeepMode.mdown[current_side] =
    (memory->statebody.KeepMode.mtemp[!current_side] > memory->statebody.KeepMode.mtemp[current_side]);
}

static void update_PotPotKeepMode_mpulse(struct MemoryPotPot* memory) {
  memory->statebody.KeepMode.mpulse[current_side] =
    (memory->statebody.KeepMode.mcounter[!current_side] > memory->statebody.KeepMode.mcounter[current_side]);
}

static void init_PotPotKeepMode_mtemp(struct MemoryPotPot* memory) {
  memory->statebody.KeepMode.mtemp[!current_side] = 0;
}

static void update_PotPotKeepMode_mtemp(struct MemoryPotPot* memory) {
  int _tmpvar69;
  if (memory->statebody.KeepMode.mpulse[current_side]) {
    _tmpvar69 = memory->thermistor[current_side];
  } else {
    _tmpvar69 = memory->statebody.KeepMode.mtemp[!current_side];
  }
  memory->statebody.KeepMode.mtemp[current_side] = _tmpvar69;
}

static void update_PotPotKeepMode_supply(struct MemoryPotPot* memory) {
  int _tmpvar70;
  if ((((((memory->supplyButton[current_side] && (memory->water[current_side] != 0)) && (memory->water[current_side] != 5)) && memory->closed[current_side]) && memory->battery[current_side]) && (! memory->locklamp[current_side]))) {
    _tmpvar70 = 1;
  } else {
    _tmpvar70 = 0;
  }
  memory->supply[current_side] = _tmpvar70;
}

static void update_PotPotKeepMode_temperature(struct MemoryPotPot* memory) {
  memory->temperature[current_side] = memory->thermistor[current_side];
}

static void input_PotPotKeepMode_newnode15_boilButton(struct MemoryPotPot* memory) {
  memory->statebody.KeepMode.newnode15.boilButton[current_side] =
    memory->boilButton[current_side];
}

static void input_PotPotKeepMode_newnode15_dt(struct MemoryPotPot* memory) {
  memory->statebody.KeepMode.newnode15.dt[current_side] =
    memory->dt[current_side];
}

static void update_PotPotKeepMode_newnode15(struct MemoryPotPot* memory) {
  input_PotPotKeepMode_newnode15_boilButton(memory);
  input_PotPotKeepMode_newnode15_dt(memory);
  if (memory->statebody.KeepMode.init) {
    memory->statebody.KeepMode.newnode15.init = 1;
  }
  update_BoilBoil(&(memory->statebody.KeepMode.newnode15));
  memory->statebody.KeepMode.boil[current_side] = memory->statebody.KeepMode.newnode15.boil[current_side];
  memory->buzzerP[current_side] = memory->statebody.KeepMode.newnode15.buzzerP[current_side];
}

static void input_PotPotKeepMode_newnode16_setting(struct MemoryPotPot* memory) {
  memory->statebody.KeepMode.newnode16.setting[current_side] =
    memory->keeptemp[current_side];
}

static void input_PotPotKeepMode_newnode16_thermistor(struct MemoryPotPot* memory) {
  memory->statebody.KeepMode.newnode16.thermistor[current_side] =
    memory->thermistor[current_side];
}

static void update_PotPotKeepMode_newnode16(struct MemoryPotPot* memory) {
  input_PotPotKeepMode_newnode16_setting(memory);
  input_PotPotKeepMode_newnode16_thermistor(memory);
  if (memory->statebody.KeepMode.init) {
    memory->statebody.KeepMode.newnode16.init = 1;
  }
  update_HeaterHeater(&(memory->statebody.KeepMode.newnode16));
  memory->heater[current_side] = memory->statebody.KeepMode.newnode16.heater[current_side];
}

static void update_PotPotKeepMode_state(struct MemoryPotPot* memory) {
  struct StatePotPot* _tmpvar73;
  if ((((memory->thermistor[current_side] > 110) || (memory->statebody.KeepMode.errorA[current_side] >= 180000)) || memory->statebody.KeepMode.errorB[current_side])) {
    _tmpvar73 = StatePotPot_ErrorMode();
  } else {
    struct StatePotPot* _tmpvar72;
    if ((((! memory->closed[current_side]) || (memory->water[current_side] == 0)) || (memory->water[current_side] == 5))) {
      _tmpvar72 = StatePotPot_IdleMode();
    } else {
      struct StatePotPot* _tmpvar71;
      if ((memory->statebody.KeepMode.boil[current_side] && (! memory->supply[current_side]))) {
        _tmpvar71 = StatePotPot_BoilMode();
      } else {
        _tmpvar71 = memory->state;
      }
      _tmpvar72 = _tmpvar71;
    }
    _tmpvar73 = _tmpvar72;
  }
  memory->state = _tmpvar73;
}

static void update_PotPot(struct MemoryPotPot* memory) {
  int entry = clock;
  if (memory->init) {
    header_init_PotPot_state(memory);
    mark_StatePotPot(memory->state, entry + 2);
  }
  clock = entry + 1;
  if (memory->state->tag == 0) {
    if (memory->state->fresh) {
      memory->statebody.BoilMode.init = 1;
    }
    memory->state->fresh = 0;
    mark_StatePotPot(memory->state, entry + 16);
    clock = entry + 2;
    update_PotPotBoilMode_temperature(memory);
    clock = entry + 3;
    update_PotPotBoilMode_supply(memory);
    clock = entry + 4;
    update_PotPotBoilMode_keeplamp(memory);
    clock = entry + 5;
    update_PotPotBoilMode_heater(memory);
    clock = entry + 6;
    update_PotPotBoilMode_buzzerP(memory);
    clock = entry + 7;
    update_PotPotBoilMode_boillamp(memory);
    clock = entry + 8;
    update_PotPotBoilMode_battery(memory);
    clock = entry + 9;
    update_PotPotBoilMode_newnode14(memory);
    clock = entry + 15;
    update_PotPotBoilMode_state(memory);
    mark_StatePotPot(memory->state, entry + clock + 1);
    clock = entry + 16;
    memory->statebody.BoilMode.init = 0;
    if (memory->state->fresh) {
      free_BoiledBoiled(&(memory->statebody.BoilMode.newnode14));
    }
  } else if (memory->state->tag == 1) {
    if (memory->state->fresh) {
      memory->statebody.ErrorMode.init = 1;
    }
    memory->state->fresh = 0;
    mark_StatePotPot(memory->state, entry + 11);
    if (memory->statebody.ErrorMode.init) {
      init_PotPotErrorMode_buzzerWait(memory);
    }
    clock = entry + 2;
    update_PotPotErrorMode_temperature(memory);
    clock = entry + 3;
    update_PotPotErrorMode_supply(memory);
    clock = entry + 4;
    update_PotPotErrorMode_keeplamp(memory);
    clock = entry + 5;
    update_PotPotErrorMode_heater(memory);
    clock = entry + 6;
    update_PotPotErrorMode_buzzerWait(memory);
    clock = entry + 7;
    update_PotPotErrorMode_buzzerP(memory);
    clock = entry + 8;
    update_PotPotErrorMode_boillamp(memory);
    clock = entry + 9;
    update_PotPotErrorMode_battery(memory);
    clock = entry + 10;
    update_PotPotErrorMode_state(memory);
    mark_StatePotPot(memory->state, entry + clock + 1);
    clock = entry + 11;
    memory->statebody.ErrorMode.init = 0;
  } else if (memory->state->tag == 2) {
    if (memory->state->fresh) {
      memory->statebody.IdleMode.init = 1;
    }
    memory->state->fresh = 0;
    mark_StatePotPot(memory->state, entry + 10);
    clock = entry + 2;
    update_PotPotIdleMode_temperature(memory);
    clock = entry + 3;
    update_PotPotIdleMode_supply(memory);
    clock = entry + 4;
    update_PotPotIdleMode_keeplamp(memory);
    clock = entry + 5;
    update_PotPotIdleMode_heater(memory);
    clock = entry + 6;
    update_PotPotIdleMode_buzzerP(memory);
    clock = entry + 7;
    update_PotPotIdleMode_boillamp(memory);
    clock = entry + 8;
    update_PotPotIdleMode_battery(memory);
    clock = entry + 9;
    update_PotPotIdleMode_state(memory);
    mark_StatePotPot(memory->state, entry + clock + 1);
    clock = entry + 10;
    memory->statebody.IdleMode.init = 0;
  } else {
    if (memory->state->fresh) {
      memory->statebody.KeepMode.init = 1;
    }
    memory->state->fresh = 0;
    mark_StatePotPot(memory->state, entry + 33);
    if (memory->statebody.KeepMode.init) {
      init_PotPotKeepMode_mtemp(memory);
    }
    if (memory->statebody.KeepMode.init) {
      init_PotPotKeepMode_mcounter(memory);
    }
    if (memory->statebody.KeepMode.init) {
      init_PotPotKeepMode_errorA(memory);
    }
    clock = entry + 2;
    update_PotPotKeepMode_temperature(memory);
    clock = entry + 3;
    update_PotPotKeepMode_mcounter(memory);
    clock = entry + 4;
    update_PotPotKeepMode_mpulse(memory);
    clock = entry + 5;
    update_PotPotKeepMode_mtemp(memory);
    clock = entry + 6;
    update_PotPotKeepMode_mdown(memory);
    clock = entry + 7;
    update_PotPotKeepMode_keeplamp(memory);
    clock = entry + 8;
    update_PotPotKeepMode_errorB(memory);
    clock = entry + 9;
    update_PotPotKeepMode_errorA(memory);
    clock = entry + 10;
    update_PotPotKeepMode_boillamp(memory);
    clock = entry + 11;
    update_PotPotKeepMode_battery(memory);
    clock = entry + 12;
    update_PotPotKeepMode_supply(memory);
    clock = entry + 13;
    update_PotPotKeepMode_newnode16(memory);
    clock = entry + 20;
    update_PotPotKeepMode_newnode15(memory);
    clock = entry + 32;
    update_PotPotKeepMode_state(memory);
    mark_StatePotPot(memory->state, entry + clock + 1);
    clock = entry + 33;
    memory->statebody.KeepMode.init = 0;
    if (memory->state->fresh) {
      free_BoilBoil(&(memory->statebody.KeepMode.newnode15));
      free_HeaterHeater(&(memory->statebody.KeepMode.newnode16));
    }
  }
  memory->init = 0;
}

static void free_PotPot(struct MemoryPotPot* memory) {
  if (memory->init) return;
  if (memory->state->fresh) {
  } else if (memory->state->tag == 0) {
    free_BoiledBoiled(&(memory->statebody.BoilMode.newnode14));
  } else if (memory->state->tag == 3) {
    free_BoilBoil(&(memory->statebody.KeepMode.newnode15));
    free_HeaterHeater(&(memory->statebody.KeepMode.newnode16));
  }
  free_StatePotPot(memory->state);
  memory->init = 1;
}

static void header_init_PotMainMain_elapsed(struct MemoryPotMainMain* memory) {
  memory->elapsed[!current_side] = 0;
}

static void header_init_PotMainMain_locklamp(struct MemoryPotMainMain* memory) {
  memory->locklamp[!current_side] = 0;
}

static void update_PotMainMain_buzzer(struct MemoryPotMainMain* memory) {
  memory->buzzer[current_side] =
    ((memory->buzzerT[current_side] || memory->buzzerS[current_side]) || memory->buzzerP[current_side]);
}

static void update_PotMainMain_dt(struct MemoryPotMainMain* memory) {
  memory->dt[current_side] =
    (memory->elapsed[current_side] - memory->elapsed[!current_side]);
}

static void update_PotMainMain_mode(struct MemoryPotMainMain* memory) {
  memory->mode[current_side] = Potlib_mtoi(memory->keeptemp[current_side]);
}

static void update_PotMainMain_test(struct MemoryPotMainMain* memory) {
  memory->test[current_side] = memory->pressedA[current_side];
}

static void update_PotMainMain_time(struct MemoryPotMainMain* memory) {
  memory->time[current_side] =
    Potlib_displayTime(memory->timer[current_side]);
}

static void input_PotMainMain_newnode1_coverSensor(struct MemoryPotMainMain* memory) {
  memory->newnode1.coverSensor[current_side] = 1;
}

static void input_PotMainMain_newnode1_dt(struct MemoryPotMainMain* memory) {
  memory->newnode1.dt[current_side] = memory->dt[current_side];
}

static void update_PotMainMain_newnode1(struct MemoryPotMainMain* memory) {
  input_PotMainMain_newnode1_coverSensor(memory);
  input_PotMainMain_newnode1_dt(memory);
  if (memory->init) {
    memory->newnode1.init = 1;
  }
  update_CoverCover(&(memory->newnode1));
  memory->closed[current_side] = memory->newnode1.closed[current_side];
}

static void input_PotMainMain_newnode2_timerButton(struct MemoryPotMainMain* memory) {
  memory->newnode2.timerButton[current_side] =
    memory->pressedA[current_side];
}

static void input_PotMainMain_newnode2_closed(struct MemoryPotMainMain* memory) {
  memory->newnode2.closed[current_side] = memory->closed[current_side];
}

static void input_PotMainMain_newnode2_dt(struct MemoryPotMainMain* memory) {
  memory->newnode2.dt[current_side] = memory->dt[current_side];
}

static void update_PotMainMain_newnode2(struct MemoryPotMainMain* memory) {
  input_PotMainMain_newnode2_timerButton(memory);
  input_PotMainMain_newnode2_closed(memory);
  input_PotMainMain_newnode2_dt(memory);
  if (memory->init) {
    memory->newnode2.init = 1;
  }
  update_TimerTimer(&(memory->newnode2));
  memory->timer[current_side] = memory->newnode2.time[current_side];
  memory->buzzerT[current_side] = memory->newnode2.buzzerT[current_side];
}

static void input_PotMainMain_newnode3_settingButton(struct MemoryPotMainMain* memory) {
  memory->newnode3.settingButton[current_side] =
    memory->pressedB[current_side];
}

static void input_PotMainMain_newnode3_closed(struct MemoryPotMainMain* memory) {
  memory->newnode3.closed[current_side] = memory->closed[current_side];
}

static void input_PotMainMain_newnode3_dt(struct MemoryPotMainMain* memory) {
  memory->newnode3.dt[current_side] = memory->dt[current_side];
}

static void update_PotMainMain_newnode3(struct MemoryPotMainMain* memory) {
  input_PotMainMain_newnode3_settingButton(memory);
  input_PotMainMain_newnode3_closed(memory);
  input_PotMainMain_newnode3_dt(memory);
  if (memory->init) {
    memory->newnode3.init = 1;
  }
  update_SettingSetting(&(memory->newnode3));
  memory->keeptemp[current_side] = memory->newnode3.setting[current_side];
  memory->buzzerS[current_side] = memory->newnode3.buzzerS[current_side];
}

static void input_PotMainMain_newnode4_fullSensor(struct MemoryPotMainMain* memory) {
  memory->newnode4.fullSensor[current_side] = 0;
}

static void input_PotMainMain_newnode4_waterSensor1(struct MemoryPotMainMain* memory) {
  memory->newnode4.waterSensor1[current_side] = 1;
}

static void input_PotMainMain_newnode4_waterSensor2(struct MemoryPotMainMain* memory) {
  memory->newnode4.waterSensor2[current_side] = 1;
}

static void input_PotMainMain_newnode4_waterSensor3(struct MemoryPotMainMain* memory) {
  memory->newnode4.waterSensor3[current_side] = 0;
}

static void input_PotMainMain_newnode4_waterSensor4(struct MemoryPotMainMain* memory) {
  memory->newnode4.waterSensor4[current_side] = 0;
}

static void input_PotMainMain_newnode4_closed(struct MemoryPotMainMain* memory) {
  memory->newnode4.closed[current_side] = memory->closed[current_side];
}

static void update_PotMainMain_newnode4(struct MemoryPotMainMain* memory) {
  input_PotMainMain_newnode4_fullSensor(memory);
  input_PotMainMain_newnode4_waterSensor1(memory);
  input_PotMainMain_newnode4_waterSensor2(memory);
  input_PotMainMain_newnode4_waterSensor3(memory);
  input_PotMainMain_newnode4_waterSensor4(memory);
  input_PotMainMain_newnode4_closed(memory);
  if (memory->init) {
    memory->newnode4.init = 1;
  }
  update_WaterWater(&(memory->newnode4));
  memory->water[current_side] = memory->newnode4.water[current_side];
}

static void input_PotMainMain_newnode5_plug(struct MemoryPotMainMain* memory) {
  memory->newnode5.plug[current_side] = 1;
}

static void input_PotMainMain_newnode5_closed(struct MemoryPotMainMain* memory) {
  memory->newnode5.closed[current_side] = memory->closed[current_side];
}

static void input_PotMainMain_newnode5_water(struct MemoryPotMainMain* memory) {
  memory->newnode5.water[current_side] = memory->water[current_side];
}

static void input_PotMainMain_newnode5_thermistor(struct MemoryPotMainMain* memory) {
  memory->newnode5.thermistor[current_side] = 100;
}

static void input_PotMainMain_newnode5_locklamp(struct MemoryPotMainMain* memory) {
  memory->newnode5.locklamp[current_side] = memory->locklamp[current_side];
}

static void input_PotMainMain_newnode5_supplyButton(struct MemoryPotMainMain* memory) {
  memory->newnode5.supplyButton[current_side] = 0;
}

static void input_PotMainMain_newnode5_boilButton(struct MemoryPotMainMain* memory) {
  memory->newnode5.boilButton[current_side] = memory->pressedC[current_side];
}

static void input_PotMainMain_newnode5_keeptemp(struct MemoryPotMainMain* memory) {
  memory->newnode5.keeptemp[current_side] = memory->keeptemp[current_side];
}

static void input_PotMainMain_newnode5_dt(struct MemoryPotMainMain* memory) {
  memory->newnode5.dt[current_side] = memory->dt[current_side];
}

static void update_PotMainMain_newnode5(struct MemoryPotMainMain* memory) {
  input_PotMainMain_newnode5_plug(memory);
  input_PotMainMain_newnode5_closed(memory);
  input_PotMainMain_newnode5_water(memory);
  input_PotMainMain_newnode5_thermistor(memory);
  input_PotMainMain_newnode5_locklamp(memory);
  input_PotMainMain_newnode5_supplyButton(memory);
  input_PotMainMain_newnode5_boilButton(memory);
  input_PotMainMain_newnode5_keeptemp(memory);
  input_PotMainMain_newnode5_dt(memory);
  if (memory->init) {
    memory->newnode5.init = 1;
  }
  update_PotPot(&(memory->newnode5));
  memory->heater[current_side] = memory->newnode5.heater[current_side];
  memory->battery[current_side] = memory->newnode5.battery[current_side];
  memory->temperature[current_side] = memory->newnode5.temperature[current_side];
  memory->boillamp[current_side] = memory->newnode5.boillamp[current_side];
  memory->keeplamp[current_side] = memory->newnode5.keeplamp[current_side];
  memory->supply[current_side] = memory->newnode5.supply[current_side];
  memory->buzzerP[current_side] = memory->newnode5.buzzerP[current_side];
}

static void input_PotMainMain_newnode6_lockButton(struct MemoryPotMainMain* memory) {
  memory->newnode6.lockButton[current_side] = 0;
}

static void input_PotMainMain_newnode6_closed(struct MemoryPotMainMain* memory) {
  memory->newnode6.closed[current_side] = memory->closed[current_side];
}

static void input_PotMainMain_newnode6_supply(struct MemoryPotMainMain* memory) {
  memory->newnode6.supply[current_side] = memory->supply[!current_side];
}

static void input_PotMainMain_newnode6_dt(struct MemoryPotMainMain* memory) {
  memory->newnode6.dt[current_side] = memory->dt[current_side];
}

static void update_PotMainMain_newnode6(struct MemoryPotMainMain* memory) {
  input_PotMainMain_newnode6_lockButton(memory);
  input_PotMainMain_newnode6_closed(memory);
  input_PotMainMain_newnode6_supply(memory);
  input_PotMainMain_newnode6_dt(memory);
  if (memory->init) {
    memory->newnode6.init = 1;
  }
  update_LockLock(&(memory->newnode6));
  memory->locklamp[current_side] = memory->newnode6.lock[current_side];
}

static void update_PotMainMain(struct MemoryPotMainMain* memory) {
  int entry = clock;
  if (memory->init) {
    header_init_PotMainMain_elapsed(memory);
  }
  if (memory->init) {
    header_init_PotMainMain_locklamp(memory);
  }
  clock = entry + 1;
  clock = entry + 2;
  update_PotMainMain_test(memory);
  clock = entry + 3;
  update_PotMainMain_dt(memory);
  clock = entry + 4;
  update_PotMainMain_newnode1(memory);
  clock = entry + 10;
  update_PotMainMain_newnode6(memory);
  clock = entry + 16;
  update_PotMainMain_newnode4(memory);
  clock = entry + 20;
  update_PotMainMain_newnode3(memory);
  clock = entry + 34;
  update_PotMainMain_mode(memory);
  clock = entry + 35;
  update_PotMainMain_newnode5(memory);
  clock = entry + 69;
  update_PotMainMain_newnode2(memory);
  mark_PotlibTime(memory->timer[current_side], entry + 104);
  clock = entry + 103;
  update_PotMainMain_time(memory);
  clock = entry + 104;
  update_PotMainMain_buzzer(memory);
  clock = entry + 105;
  memory->init = 0;
}

static void free_PotMainMain(struct MemoryPotMainMain* memory) {
  if (memory->init) return;
  free_CoverCover(&(memory->newnode1));
  free_TimerTimer(&(memory->newnode2));
  free_SettingSetting(&(memory->newnode3));
  free_WaterWater(&(memory->newnode4));
  free_PotPot(&(memory->newnode5));
  free_LockLock(&(memory->newnode6));
  memory->init = 1;
}

static void refresh_mark() {
  int i;
  for (i = 0; i < size_PotlibTime; ++i) {
    if (memory_PotlibTime[i].mark < period) memory_PotlibTime[i].mark = 0;
    else memory_PotlibTime[i].mark -= period;
  }
  for (i = 0; i < size_TupleIntInt; ++i) {
    if (memory_TupleIntInt[i].mark < period) memory_TupleIntInt[i].mark = 0;
    else memory_TupleIntInt[i].mark -= period;
  }
  for (i = 0; i < size_StateBuzzerThreeBuzzerThree; ++i) {
    if (memory_StateBuzzerThreeBuzzerThree[i].mark < period) memory_StateBuzzerThreeBuzzerThree[i].mark = 0;
    else memory_StateBuzzerThreeBuzzerThree[i].mark -= period;
  }
  for (i = 0; i < size_StateBuzzerOneDBuzzerOneD; ++i) {
    if (memory_StateBuzzerOneDBuzzerOneD[i].mark < period) memory_StateBuzzerOneDBuzzerOneD[i].mark = 0;
    else memory_StateBuzzerOneDBuzzerOneD[i].mark -= period;
  }
  for (i = 0; i < size_StateBuzzerOneCBuzzerOneC; ++i) {
    if (memory_StateBuzzerOneCBuzzerOneC[i].mark < period) memory_StateBuzzerOneCBuzzerOneC[i].mark = 0;
    else memory_StateBuzzerOneCBuzzerOneC[i].mark -= period;
  }
  for (i = 0; i < size_StateTimerTimer; ++i) {
    if (memory_StateTimerTimer[i].mark < period) memory_StateTimerTimer[i].mark = 0;
    else memory_StateTimerTimer[i].mark -= period;
  }
  for (i = 0; i < size_StateBuzzerOneBBuzzerOneB; ++i) {
    if (memory_StateBuzzerOneBBuzzerOneB[i].mark < period) memory_StateBuzzerOneBBuzzerOneB[i].mark = 0;
    else memory_StateBuzzerOneBBuzzerOneB[i].mark -= period;
  }
  for (i = 0; i < size_StateSettingSetting; ++i) {
    if (memory_StateSettingSetting[i].mark < period) memory_StateSettingSetting[i].mark = 0;
    else memory_StateSettingSetting[i].mark -= period;
  }
  for (i = 0; i < size_StateLockLock; ++i) {
    if (memory_StateLockLock[i].mark < period) memory_StateLockLock[i].mark = 0;
    else memory_StateLockLock[i].mark -= period;
  }
  for (i = 0; i < size_StateCoverCover; ++i) {
    if (memory_StateCoverCover[i].mark < period) memory_StateCoverCover[i].mark = 0;
    else memory_StateCoverCover[i].mark -= period;
  }
  for (i = 0; i < size_StateBuzzerOneBuzzerOne; ++i) {
    if (memory_StateBuzzerOneBuzzerOne[i].mark < period) memory_StateBuzzerOneBuzzerOne[i].mark = 0;
    else memory_StateBuzzerOneBuzzerOne[i].mark -= period;
  }
  for (i = 0; i < size_StatePotPot; ++i) {
    if (memory_StatePotPot[i].mark < period) memory_StatePotPot[i].mark = 0;
    else memory_StatePotPot[i].mark -= period;
  }
}

void activate() {
  current_side = 0;
  clock = 0;
  memory.init = 1;
  while (1) {
    clock = 0;
    clock = 1;
    input(&memory.pressedA[current_side], &memory.pressedB[current_side],
          &memory.pressedC[current_side], &memory.elapsed[current_side]);
    update_PotMainMain(&memory);
    output(&memory.heater[current_side], &memory.battery[current_side],
           &memory.time[current_side], &memory.temperature[current_side],
           &memory.boillamp[current_side], &memory.keeplamp[current_side],
           &memory.locklamp[current_side], &memory.mode[current_side],
           &memory.buzzer[current_side], &memory.water[current_side],
           &memory.supply[current_side], &memory.test[current_side]);
    clock = period;
    refresh_mark();
    current_side = !current_side;
  }
}
