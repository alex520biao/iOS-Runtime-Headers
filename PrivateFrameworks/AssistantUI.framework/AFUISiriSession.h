/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@class <AFUISiriSessionDelegate>, <AFUISiriSessionLocalDataSource>, <AFUISiriSessionLocalDelegate>, AFConnection, AFUIDialogPhase, AFUIStateMachine, NSObject<OS_dispatch_queue>;

@interface AFUISiriSession : NSObject <AFAssistantUIService, AFSpeechDelegate, AFUIStateMachineDelegate, AFUISiriSession> {
    AFConnection *_connection;
    BOOL _currentRequestDidPresent;
    <AFUISiriSessionDelegate> *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    AFUIDialogPhase *_dialogPhase;
    BOOL _eyesFree;
    <AFUISiriSessionLocalDataSource> *_localDataSource;
    <AFUISiriSessionLocalDelegate> *_localDelegate;
    AFUIStateMachine *_stateMachine;
}

@property(getter=_connection,readonly) AFConnection * connection;
@property(retain) <AFUISiriSessionDelegate> * delegate;
@property(setter=_setDialogPhase:,retain) AFUIDialogPhase * dialogPhase;
@property(getter=isEyesFree) BOOL eyesFree;
@property <AFUISiriSessionLocalDataSource> * localDataSource;
@property <AFUISiriSessionLocalDelegate> * localDelegate;
@property(getter=_stateMachine,readonly) AFUIStateMachine * stateMachine;

+ (void)beginMonitoringSiriAvailability;
+ (id)effectiveCoreLocationBundle;
+ (BOOL)isSiriAvailable;
+ (id)outputVoice;

- (void).cxx_destruct;
- (id)_connection;
- (void)_handleRequestUpdateViewsCommand:(id)arg1;
- (void)_handleUnlockDeviceCommand:(id)arg1;
- (BOOL)_hasActiveRequest;
- (void)_outputVoiceDidChange:(id)arg1;
- (void)_performAceCommand:(id)arg1 forRequestUpdateViewsCommand:(id)arg2 afterDelay:(double)arg3;
- (void)_performBlockWithDelegate:(id)arg1;
- (void)_performTransitionForEvent:(int)arg1;
- (id)_preparedSpeechRequestWithRequestOptions:(id)arg1;
- (void)_requestContextWithCompletion:(id)arg1;
- (void)_requestDidFinishWithError:(id)arg1;
- (void)_requestWillStart;
- (void)_setDialogPhase:(id)arg1;
- (void)_siriAvailabilityDidChange:(id)arg1;
- (void)_startDirectActionRequestWithString:(id)arg1 bulletin:(id)arg2;
- (void)_startRequestWithBlock:(id)arg1;
- (void)_startRequestWithFinalOptions:(id)arg1;
- (void)_startRequestWithText:(id)arg1;
- (void)_startSpeechPronunciationRequestWithContext:(id)arg1 options:(id)arg2;
- (void)_startSpeechRequestWithOptions:(id)arg1;
- (void)_startSpeechRequestWithSpeechFileAtURL:(id)arg1;
- (int)_state;
- (id)_stateMachine;
- (void)_voiceOverStatusDidChange:(id)arg1;
- (void)assistantConnection:(id)arg1 didChangeAudioSessionID:(unsigned int)arg2;
- (void)assistantConnection:(id)arg1 openURL:(id)arg2 completion:(id)arg3;
- (void)assistantConnection:(id)arg1 receivedCommand:(id)arg2;
- (void)assistantConnection:(id)arg1 requestFailedWithError:(id)arg2 requestClass:(id)arg3;
- (void)assistantConnection:(id)arg1 shouldSpeak:(BOOL)arg2;
- (void)assistantConnection:(id)arg1 speechRecognized:(id)arg2;
- (void)assistantConnection:(id)arg1 speechRecordingDidBeginOnAVRecordRoute:(id)arg2;
- (void)assistantConnection:(id)arg1 speechRecordingDidFail:(id)arg2;
- (void)assistantConnectionDismissAssistant:(id)arg1;
- (void)assistantConnectionRequestFinished:(id)arg1;
- (void)assistantConnectionRequestWillStart:(id)arg1;
- (void)assistantConnectionSpeechRecordingDidCancel:(id)arg1;
- (void)assistantConnectionSpeechRecordingDidEnd:(id)arg1;
- (void)assistantConnectionSpeechRecordingWillBegin:(id)arg1;
- (void)cancelSpeechRequest;
- (void)clearContext;
- (void)dealloc;
- (id)delegate;
- (id)dialogPhase;
- (void)end;
- (id)initWithDelegateQueue:(id)arg1;
- (BOOL)isEyesFree;
- (BOOL)isListening;
- (BOOL)isPreventingActivationGesture;
- (id)localDataSource;
- (id)localDelegate;
- (void)performAceCommand:(id)arg1 conflictHandler:(id)arg2;
- (void)performAceCommand:(id)arg1;
- (void)preheat;
- (float)recordingPowerLevel;
- (void)requestDidPresent;
- (void)resetContext;
- (void)resultDidChangeForAceCommand:(id)arg1;
- (void)rollbackClearContext;
- (void)sendReplyCommand:(id)arg1;
- (void)setAlertContext;
- (void)setApplicationContext;
- (void)setDelegate:(id)arg1;
- (void)setEyesFree:(BOOL)arg1;
- (void)setIsStark:(BOOL)arg1;
- (void)setLocalDataSource:(id)arg1;
- (void)setLocalDelegate:(id)arg1;
- (void)setLockState:(unsigned int)arg1;
- (void)startCorrectedRequestWithText:(id)arg1 correctionIdentifier:(id)arg2;
- (void)startRequestWithOptions:(id)arg1;
- (id)stateMachine:(id)arg1 descriptionForEvent:(int)arg2;
- (void)stateMachine:(id)arg1 didTransitionFromState:(int)arg2 forEvent:(int)arg3;
- (void)stopRecordingSpeech;
- (void)stopRequestWithOptions:(id)arg1;
- (void)updateRequestOptions:(id)arg1;

@end
