/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

@interface SKPowerController : NSObject {
    BOOL _backlightPower;
    unsigned int _batteryStatusNotifier;
    float _chargeCurrent;
    int _chargerID;
    BOOL _charging;
    BOOL _connected;
    int _currentCapacity;
    int _cycleCount;
    int _designCapacity;
    BOOL _fullyCharged;
    unsigned int _inhibitACConnectAssertion;
    unsigned int _inhibitChargingAssertion;
    BOOL _installed;
    float _instantAmperage;
    int _level;
    int _maxCapacity;
    struct IONotificationPort { } *_notificationPort;
    struct __SCPreferences { } *_preferences;
    unsigned int _rootPowerService;
    struct __CFRunLoop { } *_runLoop;
    unsigned int _service;
    BOOL _shhhhSleeping;
    BOOL _showedBatteryWarning;
    unsigned int _sleepService;
    unsigned int _systemPowerNotifier;
    struct IONotificationPort { } *_systemPowerPort;
    BOOL _touchPower;
    int _voltage;
    bool_ignorePowerChange;
}

+ (void)reboot;
+ (id)sharedInstance;
+ (void)shutdown;

- (BOOL)airplaneMode;
- (BOOL)asleep;
- (BOOL)backlightPower;
- (int)batteryLevel;
- (long)batteryRawVoltage;
- (BOOL)bluetoothPower;
- (float)brightness;
- (float)chargeCurrent;
- (id)chargerType;
- (int)currentCapacity;
- (int)cycleCount;
- (void)dealloc;
- (int)designCapacity;
- (void)handleNewPowerValues;
- (bool)ignorePowerChange;
- (id)init;
- (float)instantAmperage;
- (BOOL)isCharging;
- (BOOL)isConnected;
- (BOOL)isFullyCharged;
- (BOOL)isInstalled;
- (BOOL)lcdPower;
- (void)listenForSystemPower;
- (int)maxCapacity;
- (struct IONotificationPort { }*)notificationPort;
- (unsigned int)rootPowerService;
- (void)scheduleWakeAfterDelay:(double)arg1;
- (void)scheduleWakeAtTime:(id)arg1;
- (unsigned int)service;
- (int)setACSoftConnected:(BOOL)arg1;
- (void)setAirplaneMode:(BOOL)arg1;
- (void)setAsleep;
- (void)setBacklightPower:(BOOL)arg1;
- (int)setBatteryChargeEnabled:(BOOL)arg1;
- (void)setBluetoothPower:(BOOL)arg1;
- (void)setBrightness:(float)arg1;
- (void)setIgnorePowerChange:(bool)arg1;
- (void)setLcdPower:(BOOL)arg1;
- (void)setTouchPower:(BOOL)arg1;
- (void)setWifiPower:(BOOL)arg1;
- (void)sleep;
- (unsigned int)sleepService;
- (BOOL)touchPower;
- (void)unsetAsleep;
- (int)updateStateForBattery:(unsigned int)arg1;
- (int)voltage;
- (void)wake;
- (void)watchPowerSources;
- (BOOL)wifiPower;

@end
