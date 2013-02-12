/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

@class NSArray, NSDictionary, NSString;

@interface OSDDevice : NSObject {
    NSString *_batteryID;
    NSString *_buildTrain;
    NSString *_buildVer;
    NSArray *_capabilities;
    NSString *_deviceName;
    int _deviceType;
    int _ntcShutdown;
    NSString *_osVersion;
    NSArray *_pmuFaults;
    NSDictionary *_properties;
    NSString *_serialNumber;
    NSString *_socType;
    BOOL batteryLevelLockout;
    BOOL bonfireControlBits;
    NSString *bootArgs;
    NSString *buildVersion;
    BOOL has3GProximity;
    BOOL hasALS;
    BOOL hasAccelerometer;
    BOOL hasAudio;
    BOOL hasBackCamera;
    BOOL hasBaseband;
    BOOL hasBluetooth;
    BOOL hasCompass;
    BOOL hasFrontCamera;
    BOOL hasGPS;
    BOOL hasGasGauge;
    BOOL hasGyro;
    BOOL hasLatch;
    BOOL hasMicrophone;
    BOOL hasProximity;
    BOOL hasReceiver;
    BOOL hasRingerSwitch;
    BOOL hasStrobe;
    BOOL hasTelephony;
    BOOL hasVolumeButtons;
    BOOL hasWiFi;
    BOOL iPxControlBits;
    float minBrickCurrent;
    NSString *modelName;
    NSString *name;
    NSArray *pmuFaultLog;
    BOOL prodFused;
    NSString *serialNumber;
    NSString *socType;
    int type;
    BOOL wasNTCShutdown;
}

@property(getter=_batteryID,readonly) NSString * batteryId;
@property(getter=_battLevelLockout,readonly) BOOL batteryLevelLockout;
@property(getter=_bonfireControlBits,readonly) BOOL bonfireControlBits;
@property(getter=getBootArgs,setter=setBootArgs:) NSString * bootArgs;
@property(getter=_buildTrain,readonly) NSString * buildTrain;
@property(getter=_productBuildVersion,readonly) NSString * buildVersion;
@property(getter=_expectedAdapterID,readonly) int expectedAdapterID;
@property(getter=_has3GProximity,readonly) BOOL has3GProximity;
@property(getter=_hasALS,readonly) BOOL hasALS;
@property(getter=_hasAccelerometer,readonly) BOOL hasAccelerometer;
@property(getter=_hasAudio,readonly) BOOL hasAudio;
@property(getter=_hasBackCamera,readonly) BOOL hasBackCamera;
@property(getter=_hasBaseband,readonly) BOOL hasBaseband;
@property(getter=_hasBluetooth,readonly) BOOL hasBluetooth;
@property(getter=_hasCompass,readonly) BOOL hasCompass;
@property(getter=_hasFrontCamera,readonly) BOOL hasFrontCamera;
@property(getter=_hasGPS,readonly) BOOL hasGPS;
@property(getter=_hasGasGauge,readonly) BOOL hasGasGauge;
@property(getter=_hasGyro,readonly) BOOL hasGyro;
@property(getter=_hasInvertedDisplay,readonly) BOOL hasInvertedDisplay;
@property(getter=_hasLatch,readonly) BOOL hasLatch;
@property(getter=_hasLatch_Flap1,readonly) BOOL hasLatchFlap1;
@property(getter=_hasLatch_Flap2,readonly) BOOL hasLatchFlap2;
@property(getter=_hasLatch_Flap3,readonly) BOOL hasLatchFlap3;
@property(getter=_hasMicrophone,readonly) BOOL hasMicrophone;
@property(getter=_hasProximity,readonly) BOOL hasProximity;
@property(getter=_hasReceiver,readonly) BOOL hasReceiver;
@property(getter=_hasRingerSwitch,readonly) BOOL hasRingerSwitch;
@property(getter=_hasStrobe,readonly) BOOL hasStrobe;
@property(getter=_hasTelephony,readonly) BOOL hasTelephony;
@property(getter=_hasVolumeButtons,readonly) BOOL hasVolumeButtons;
@property(getter=_hasWiFi,readonly) BOOL hasWiFi;
@property(getter=_iPxControlBits,readonly) BOOL iPxControlBits;
@property(getter=_minBrickCurrent,readonly) float minBrickCurrent;
@property(getter=_modelName,readonly) NSString * modelName;
@property(getter=_deviceName,readonly) NSString * name;
@property(getter=_osVersion,readonly) NSString * osVersion;
@property(getter=_pmuFaultLog,readonly) NSArray * pmuFaultLog;
@property(getter=_isProdFused,readonly) BOOL prodFused;
@property(getter=_serialNumber,readonly) NSString * serialNumber;
@property(getter=_socType,readonly) NSString * socType;
@property(getter=_deviceType,readonly) int type;
@property(getter=_wasNTCShutdown,readonly) BOOL wasNTCShutdown;

+ (void)initialize;
+ (id)sharedInstance;

- (BOOL)_battLevelLockout;
- (id)_batteryID;
- (BOOL)_bonfireControlBits;
- (id)_buildTrain;
- (id)_deviceName;
- (int)_deviceType;
- (int)_expectedAdapterID;
- (BOOL)_has3GProximity;
- (BOOL)_hasALS;
- (BOOL)_hasAccelerometer;
- (BOOL)_hasAudio;
- (BOOL)_hasBackCamera;
- (BOOL)_hasBaseband;
- (BOOL)_hasBluetooth;
- (BOOL)_hasCompass;
- (BOOL)_hasFrontCamera;
- (BOOL)_hasGPS;
- (BOOL)_hasGasGauge;
- (BOOL)_hasGyro;
- (BOOL)_hasInvertedDisplay;
- (BOOL)_hasLatch;
- (BOOL)_hasLatch_Flap1;
- (BOOL)_hasLatch_Flap2;
- (BOOL)_hasLatch_Flap3;
- (BOOL)_hasMicrophone;
- (BOOL)_hasProximity;
- (BOOL)_hasReceiver;
- (BOOL)_hasRingerSwitch;
- (BOOL)_hasStrobe;
- (BOOL)_hasTelephony;
- (BOOL)_hasVolumeButtons;
- (BOOL)_hasWiFi;
- (BOOL)_iPxControlBits;
- (BOOL)_isProdFused;
- (float)_minBrickCurrent;
- (id)_modelName;
- (id)_osVersion;
- (id)_pmuFaultLog;
- (id)_processDevicesPlist:(id)arg1;
- (void)_processDevicesPlistForAliases:(id)arg1;
- (void)_processForAliases:(id)arg1 forDevice:(id)arg2 withLoopTracker:(id)arg3;
- (id)_productBuildVersion;
- (id)_properties;
- (id)_serialNumber;
- (id)_socType;
- (BOOL)_wasNTCShutdown;
- (void)addBootArg:(id)arg1;
- (void)dealloc;
- (id)getBootArgParams:(id)arg1;
- (id)getBootArgs;
- (int)getControlBitStationID:(int)arg1;
- (unsigned int)getIOMasterPort;
- (id)getNVRAMArgsForKey:(id)arg1;
- (id)getSwitchBoardRowCol;
- (BOOL)hasBootArg:(id)arg1;
- (BOOL)hasNVRAMKey:(id)arg1;
- (id)init;
- (void)removeBootArg:(id)arg1;
- (void)removeNVRAMKey:(id)arg1;
- (void)setBootArgs:(id)arg1;
- (void)setNVRAMArgsForKey:(id)arg1 arguments:(id)arg2;

@end
