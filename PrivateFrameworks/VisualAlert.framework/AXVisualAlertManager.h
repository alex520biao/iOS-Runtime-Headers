/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

@class <AXCameraTorchManager>, AXNotificationHandler, AXTimer, NSArray, NSDictionary;

@interface AXVisualAlertManager : NSObject {
    NSDictionary *_activePattern;
    unsigned int _activePatternCursor;
    unsigned int _alertTypes;
    <AXCameraTorchManager> *_cameraTorchManager;
    BOOL _captureSessionRunning;
    BOOL _conferenceCallRinging;
    AXNotificationHandler *_deviceLockStateChangedNotificationHandler;
    BOOL _isDeviceLocked;
    BOOL _isQuietModeEnabled;
    NSArray *_notificationHandlers;
    NSDictionary *_patternToUseForVisualAlertAfterCaptureSessionStopsRunning;
    NSDictionary *_patterns;
    BOOL _shouldRepeatPattern;
    BOOL _skipAutomaticStopOnUserInteraction;
    AXTimer *_timer;
    BOOL _torchDeviceOn;
    BOOL _torchDeviceOpen;
    AXTimer *_torchForceShutdownTimer;
    unsigned int _typeToUseForVisualAlertAfterCaptureSessionStopsRunning;
}

@property(setter=_setActivePattern:,retain) NSDictionary * _activePattern;
@property(readonly) NSDictionary * _patterns;
@property(getter=_isTorchDeviceOn,setter=_setTorchDeviceOn:) BOOL _torchDeviceOn;
@property(getter=_isTorchDeviceOpen,setter=_setTorchDeviceOpen:) BOOL _torchDeviceOpen;
@property(setter=_setTypeToUseForVisualAlertAfterCaptureSessionStopsRunning:) unsigned int _typeToUseForVisualAlertAfterCaptureSessionStopsRunning;

+ (void)initialize;
+ (id)sharedVisualAlertManager;

- (id)_activePattern;
- (BOOL)_axHasConferenceCameraTorchManager;
- (BOOL)_axShouldHandleVisualAlertsForConferenceCallsInConferenceFramework;
- (void)_beginVisualAlertForType:(unsigned int)arg1 repeat:(BOOL)arg2 skipAutomaticStopOnUserInteraction:(BOOL)arg3;
- (void)_beginVisualAlertForType:(unsigned int)arg1 repeat:(BOOL)arg2;
- (void)_endVisualAlert;
- (void)_handleBeginVisualAlertForAlarmWithSound:(BOOL)arg1;
- (void)_handleBeginVisualAlertForIncomingCall;
- (void)_handleBeginVisualAlertForIncomingConferenceCall;
- (void)_handleCaptureSessionDidStartRunning;
- (void)_handleCaptureSessionDidStopRunning;
- (void)_handleDeviceWasLocked;
- (void)_handleDeviceWasUnlocked;
- (void)_handleEndVisualAlertForAlarm;
- (void)_handleEndVisualAlertForIncomingCall;
- (void)_handleEndVisualAlertForIncomingConferenceCall;
- (void)_handleFaceTimeCallRinging;
- (void)_handleLockButtonPressed;
- (void)_handleQuietModeWasDisabled;
- (void)_handleQuietModeWasEnabled;
- (void)_handleSecondaryVisualAlertManagerDidStart;
- (void)_handleVisualAlertForExternalApplication;
- (void)_handleVisualAlertForIncomingMessage;
- (void)_handleVisualAlertForRegularNotification;
- (void)_handleVolumeChanged;
- (void)_insertCustomLogicForSystemWideServer;
- (BOOL)_isTorchDeviceOn;
- (BOOL)_isTorchDeviceOpen;
- (id)_normalizedStrobePatternForOriginalPattern:(id)arg1;
- (id)_patterns;
- (void)_processNextVisualAlertComponent;
- (void)_setActivePattern:(id)arg1;
- (void)_setTorchDeviceOn:(BOOL)arg1;
- (void)_setTorchDeviceOpen:(BOOL)arg1;
- (void)_setTypeToUseForVisualAlertAfterCaptureSessionStopsRunning:(unsigned int)arg1;
- (void)_startForAlertTypes:(unsigned int)arg1 cameraTorchManager:(id)arg2;
- (void)_stop;
- (unsigned int)_typeToUseForVisualAlertAfterCaptureSessionStopsRunning;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)startForAlertTypes:(unsigned int)arg1 cameraTorchManager:(id)arg2;
- (void)stop;

@end
