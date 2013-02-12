/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <MPVideoControllerProtocol>, MPAVController, MPAVItem, MPMovieAccessLog, MPMovieErrorLog, MPSystemNowPlayingController, MPTransitionController, MPVideoView, NSArray, NSDate, NSString, UIImage, UIMovieSnapshotView, UIMovieView, UINavigationController, UIView, UIViewController, _UIHostedWindow;

@interface UIMoviePlayerController : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct { 
        unsigned int canShowControlsOverlay : 1; 
        unsigned int wantsControlsOverlayVis : 1; 
        unsigned int wantsControlsOverlayAnim : 1; 
        unsigned int wantsControlsOverlayDisableAutohide : 1; 
        unsigned int wantsFullscreen : 1; 
        unsigned int alwaysFullscreen : 1; 
        unsigned int canAnimateControlsOverlay : 1; 
        unsigned int autoplayWhenLikelyToKeepUp : 1; 
        unsigned int externalSourceManagesStatusBar : 1; 
        unsigned int disallowsVideoOut : 1; 
        unsigned int exited : 1; 
        unsigned int generatingOrientationNotifications : 1; 
        unsigned int forStreaming : 1; 
        unsigned int isExternalTransformationActive : 1; 
        unsigned int controlsVisibleBeforeExternalTransformation : 1; 
        unsigned int isActive : 1; 
        unsigned int resigningActive : 1; 
        unsigned int didResignActive : 1; 
        unsigned int uiPrepared : 1; 
        unsigned int isChangingMoviePath : 1; 
        unsigned int alwaysAllowHidingControlsOverlay : 1; 
        unsigned int schedulePortraitLoadingIndicator : 1; 
        unsigned int clientClearedMoviePath : 1; 
        unsigned int canCommitStatusBarAndOverlayChanges : 1; 
        unsigned int videoFrameDisplayOnResumeDisabled : 1; 
        unsigned int usingDebugTestPath : 1; 
        unsigned int allowsWirelessPlayback : 1; 
        unsigned int useHostedWindowWhenFullscreen : 1; 
    <MPVideoControllerProtocol> *_activeVideoController;
    unsigned int _audioControlsStyle;
    unsigned int _autoRotationMask;
    NSArray *_closedCaptionData;
    id _delegate;
    unsigned int _desiredParts;
    unsigned int _displayableParts;
    struct __CFBag { } *_ignoredChangeTypes;
    int _interfaceOrientation;
    int _interfaceOrientationFromDevice;
    MPAVItem *_item;
    int _lastSetUIInterfaceOrientation;
    } _layoutRect;
    NSString *_moviePath;
    } _mpcBitfield;
    MPSystemNowPlayingController *_nowPlayingController;
    int _pendingInterfaceOrientation;
    MPAVItem *_pendingItem;
    MPAVItem *_pendingItemWithDifferentType;
    unsigned int _playableContentTypeOverride;
    NSString *_playbackErrorDescription;
    MPAVController *_player;
    UINavigationController *_portraitNavigationController;
    UIImage *_posterImage;
    UIMovieSnapshotView *_snapshotView;
    double _timeToSnapshot;
    double _timeWhenResignedActive;
    UIViewController *_topViewController;
    MPTransitionController *_transitionController;
    int _transitionCount;
    unsigned int _unmodifiedDisplayableParts;
    MPVideoView *_videoView;
    NSString *_youTubeVideoID;
}

@property(readonly) MPMovieAccessLog * accessLog;
@property BOOL alwaysAllowHidingControlsOverlay;
@property(readonly) BOOL areClosedCaptionsAvailable;
@property unsigned int audioControlsStyle;
@property(retain) NSString * audioSessionModeOverride;
@property(retain) UIImage * backgroundPlaceholderImage;
@property(readonly) unsigned int bufferingState;
@property(readonly) BOOL canContinuePlayingInBackground;
@property(readonly) BOOL canContinuePlayingWhenLocked;
@property BOOL closedCaptioningEnabled;
@property(readonly) NSDate * currentDate;
@property double currentTime;
@property id delegate;
@property BOOL disallowsVideoOut;
@property(readonly) double duration;
@property(readonly) MPMovieErrorLog * errorLog;
@property(readonly) long long fileSize;
@property(getter=isFullscreen) BOOL fullscreen;
@property(readonly) UIView * fullscreenView;
@property(readonly) _UIHostedWindow * hostedWindow;
@property(readonly) unsigned int hostedWindowContextID;
@property(readonly) BOOL isPreparedForPlayback;
@property(retain) MPAVItem * item;
@property(copy) NSString * moviePath;
@property(copy) NSString * movieSubtitle;
@property(copy) NSString * movieTitle;
@property(readonly) UIMovieView * movieView;
@property(readonly) BOOL muted;
@property(readonly) struct CGSize { float x1; float x2; } naturalSize;
@property unsigned int options;
@property unsigned int playableContentType;
@property(readonly) double playableDuration;
@property(readonly) double playableEndTime;
@property(readonly) double playableStartTime;
@property(copy) NSString * playbackErrorDescription;
@property float playbackRate;
@property(readonly) unsigned int playbackState;
@property(retain) UIImage * posterImage;
@property(readonly) double seekableEndTime;
@property(readonly) double seekableStartTime;
@property BOOL stopAtEnd;
@property BOOL useApplicationAudioSession;
@property BOOL useHostedWindowWhenFullscreen;
@property BOOL useLegacyControls;
@property BOOL videoFrameDisplayOnResumeDisabled;
@property(readonly) BOOL videoOutActive;
@property(readonly) UIView * view;
@property(readonly) float volume;
@property(copy) NSString * youTubeVideoID;

+ (void)allInstancesResignActive;
+ (struct CGSize { float x1; float x2; })fillSizeForMovieBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 movieNaturalSize:(struct CGSize { float x1; float x2; })arg2 interfaceOrientation:(int)arg3 destinationTVOut:(BOOL)arg4;
+ (Class)preferredWindowClass;

- (id)_activeVideoController;
- (void)_addSnapshotViewForTime:(double)arg1;
- (void)_autoRotateToCurrentOrientationAnimated:(BOOL)arg1;
- (void)_autoRotateToInterfaceOrientation:(int)arg1 animated:(BOOL)arg2;
- (id)_backgroundPlaceholderView;
- (void)_beginDeviceOrientationNotifications;
- (void)_bufferingStateChangedNotification:(id)arg1;
- (BOOL)_canAutoRotateToInterfaceOrientation:(int)arg1;
- (void)_commitFinishInitializeActiveViewController:(id)arg1 animate:(BOOL)arg2;
- (unsigned long long)_convertedPartsMask:(unsigned int)arg1;
- (unsigned long long)_convertedVisiblePartsMask:(unsigned int)arg1;
- (void)_deviceOrientationChanged:(id)arg1;
- (void)_didEnterBackgroundNotification:(id)arg1;
- (void)_endDeviceOrientationNotifications;
- (void)_ensureActive;
- (void)_exitPlayer:(int)arg1;
- (int)_exitReasonForMPViewControllerExitReason:(int)arg1;
- (void)_finishInitializeActiveViewController:(id)arg1 forTransition:(BOOL)arg2;
- (void)_initializeVideoViewController:(id)arg1 orientation:(int)arg2;
- (void)_itemChangedNotification:(id)arg1;
- (void)_itemDurationAvailableNotification:(id)arg1;
- (void)_itemPlaybackDidEndNotification:(id)arg1;
- (void)_itemReadyToPlayNotification:(id)arg1;
- (void)_moviePlayerDidBecomeActiveNotification:(id)arg1;
- (void)_moviePlayerWillBecomeActiveNotification:(id)arg1;
- (void)_movieTypeAvailableNotification:(id)arg1;
- (void)_mutedDidChangeNotification:(id)arg1;
- (BOOL)_noteStoppedIgnoringChangeType:(unsigned int)arg1;
- (void)_pausePlaybackForNotification:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (id)_portraitNavigationController:(BOOL)arg1;
- (void)_prepareAndSetupUI;
- (void)_prepareAndSetupUIForClient;
- (void)_rateDidChangeNotification:(id)arg1;
- (void)_reconfigurePortraitNavigationItem:(id)arg1 time:(double)arg2 animate:(BOOL)arg3;
- (void)_registerForNotifications;
- (void)_reloadForTransitionFromInterfaceOrientation:(int)arg1 toInterfaceOrientation:(int)arg2 animated:(BOOL)arg3;
- (void)_removeSnapshotView;
- (void)_serverDeathNotification:(id)arg1;
- (void)_setActiveViewController:(id)arg1 forTransition:(BOOL)arg2;
- (void)_setTVOutEnabled:(BOOL)arg1;
- (BOOL)_shouldIgnoreChangeType:(unsigned int)arg1;
- (void)_simpleRemoteNotification:(id)arg1;
- (void)_tickNotification:(id)arg1;
- (void)_timeDidJumpNotification:(id)arg1;
- (void)_timedMetadataAvailableNotification:(id)arg1;
- (id)_topViewController;
- (void)_transitionFinished:(id)arg1;
- (void)_tvOutCapabilityChanged:(id)arg1;
- (void)_unregisterForNotifications;
- (void)_updateEnabledParts;
- (void)_updateForStreamingOptions;
- (void)_updatePlayableContentTypeOverride;
- (void)_validityChangedNotification:(id)arg1;
- (void)_videoViewPathWillChangeNotification:(id)arg1;
- (void)_volumeDidChangeNotification:(id)arg1;
- (void)_willBeginSuspendAnimationNotification:(id)arg1;
- (void)_willEnterForegroundNotification:(id)arg1;
- (void)_willResignNotification:(id)arg1;
- (void)_willSuspendNotification:(id)arg1;
- (id)accessLog;
- (BOOL)alwaysAllowHidingControlsOverlay;
- (BOOL)areClosedCaptionsAvailable;
- (unsigned int)audioControlsStyle;
- (id)audioSessionModeOverride;
- (unsigned int)autoRotationMask;
- (id)backgroundPlaceholderImage;
- (id)backgroundView;
- (void)beginExternalTransformation;
- (void)beginIgnoringChangeTypes:(unsigned int)arg1;
- (void)beginTransition;
- (unsigned int)bufferingState;
- (BOOL)canContinuePlayingInBackground;
- (BOOL)canContinuePlayingWhenLocked;
- (BOOL)closedCaptioningEnabled;
- (id)currentDate;
- (double)currentTime;
- (void)dealloc;
- (void)debugSetup;
- (void)delayedDebugSetup;
- (id)delegate;
- (BOOL)disallowsVideoOut;
- (double)duration;
- (void)endExternalTransformation;
- (void)endIgnoringChangeTypes:(unsigned int)arg1;
- (void)endTransition;
- (id)errorLog;
- (long long)fileSize;
- (id)fullscreenView;
- (id)hostedWindow;
- (unsigned int)hostedWindowContextID;
- (id)initWithPlayerSize:(struct CGSize { float x1; float x2; })arg1 isFullScreen:(BOOL)arg2 options:(unsigned int)arg3;
- (id)initWithPlayerSize:(struct CGSize { float x1; float x2; })arg1 isFullScreen:(BOOL)arg2;
- (id)initWithPlayerSize:(struct CGSize { float x1; float x2; })arg1 options:(unsigned int)arg2;
- (id)initWithPlayerSize:(struct CGSize { float x1; float x2; })arg1;
- (int)interfaceOrientation;
- (BOOL)isFullScreen;
- (BOOL)isFullscreen;
- (BOOL)isPreparedForPlayback;
- (id)item;
- (void)layoutUIInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 fullScreen:(BOOL)arg2;
- (void)layoutUIInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)moviePath;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })moviePlaceholderImageRectForMovieWithAspectRatio:(float)arg1;
- (id)movieSubtitle;
- (id)movieTitle;
- (id)movieView;
- (BOOL)muted;
- (struct CGSize { float x1; float x2; })naturalSize;
- (id)newViewControllerForItem:(id)arg1 interfaceOrientation:(int)arg2 reusingController:(id)arg3;
- (unsigned int)options;
- (void)pause;
- (void)performTransition:(id)arg1;
- (void)play;
- (unsigned int)playableContentType;
- (double)playableDuration;
- (double)playableEndTime;
- (double)playableStartTime;
- (id)playbackErrorDescription;
- (float)playbackRate;
- (unsigned int)playbackState;
- (id)playerView;
- (void)portraitDoneButtonAction:(id)arg1;
- (void)portraitScaleButtonAction:(id)arg1;
- (id)posterImage;
- (void)prepareAndSetupUI;
- (void)prepareForPlayback;
- (void)resignActive;
- (void)resignActiveAndEndAirPlay;
- (BOOL)seekToDate:(id)arg1;
- (double)seekableEndTime;
- (double)seekableStartTime;
- (void)setAllowsDetailScrubbing:(BOOL)arg1;
- (void)setAllowsWirelessPlayback:(BOOL)arg1;
- (void)setAlwaysAllowHidingControlsOverlay:(BOOL)arg1;
- (void)setAttemptAutoPlayWhenControlsHidden:(BOOL)arg1;
- (void)setAudioControlsStyle:(unsigned int)arg1;
- (void)setAudioSessionModeOverride:(id)arg1;
- (void)setAutoPlayWhenLikelyToKeepUp:(BOOL)arg1;
- (void)setAutoRotationMask:(unsigned int)arg1;
- (void)setBackgroundPlaceholderImage:(id)arg1;
- (void)setCanAnimateControlsOverlay:(BOOL)arg1;
- (void)setCanShowControlsOverlay:(BOOL)arg1;
- (void)setClosedCaptioningEnabled:(BOOL)arg1;
- (void)setClosedCaptions:(id)arg1;
- (void)setControlsOverlayVisible:(BOOL)arg1 disableAutohide:(BOOL)arg2 animate:(BOOL)arg3;
- (void)setCurrentTime:(double)arg1 timeSnapOption:(unsigned int)arg2;
- (void)setCurrentTime:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredMovieParts:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setDisallowsVideoOut:(BOOL)arg1;
- (void)setDisplayable:(BOOL)arg1 movieParts:(unsigned int)arg2 animated:(BOOL)arg3;
- (void)setDisplayableMovieParts:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setFullscreen:(BOOL)arg1;
- (void)setInlinePlaybackUsesTVOut:(BOOL)arg1;
- (BOOL)setInterfaceOrientation:(int)arg1 animated:(BOOL)arg2 forced:(BOOL)arg3;
- (void)setItem:(id)arg1 animated:(BOOL)arg2;
- (void)setItem:(id)arg1;
- (void)setManagesStatusBar:(BOOL)arg1;
- (void)setMoviePath:(id)arg1;
- (void)setMovieSubtitle:(id)arg1;
- (void)setMovieTitle:(id)arg1;
- (void)setOptions:(unsigned int)arg1;
- (BOOL)setOrientation:(int)arg1 animated:(BOOL)arg2 forced:(BOOL)arg3;
- (void)setPlayableContentType:(unsigned int)arg1;
- (void)setPlaybackErrorDescription:(id)arg1;
- (void)setPlaybackRate:(float)arg1;
- (void)setPosterImage:(id)arg1;
- (void)setStopAtEnd:(BOOL)arg1;
- (void)setUseApplicationAudioSession:(BOOL)arg1;
- (void)setUseHostedWindowWhenFullscreen:(BOOL)arg1;
- (void)setUseLegacyControls:(BOOL)arg1;
- (void)setVideoFrameDisplayOnResumeDisabled:(BOOL)arg1;
- (void)setYouTubeVideoID:(id)arg1;
- (void)snapshotViewWasTapped:(id)arg1;
- (void)stop;
- (BOOL)stopAtEnd;
- (void)tearDownUI;
- (void)unlockMoviePlaybackResources;
- (BOOL)useApplicationAudioSession;
- (BOOL)useHostedWindowWhenFullscreen;
- (BOOL)useLegacyControls;
- (BOOL)videoController:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (void)videoController:(id)arg1 willHideOverlayWithDuration:(double)arg2;
- (void)videoController:(id)arg1 willShowOverlayWithDuration:(double)arg2;
- (void)videoControllerDidCreateFullscreenView:(id)arg1;
- (void)videoControllerDidEnterFullscreen:(id)arg1;
- (void)videoControllerDidExitFullscreen:(id)arg1;
- (void)videoControllerDidHideOverlay:(id)arg1;
- (void)videoControllerDidShowOverlay:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })videoControllerFrameAfterFullscreenExit:(id)arg1;
- (BOOL)videoControllerShouldAutohide:(id)arg1;
- (void)videoControllerWillEnterFullscreen:(id)arg1;
- (void)videoControllerWillExitFullscreen:(id)arg1 reason:(int)arg2;
- (BOOL)videoFrameDisplayOnResumeDisabled;
- (BOOL)videoOutActive;
- (id)view;
- (void)viewController:(id)arg1 beginIgnoringChangeTypes:(unsigned int)arg2;
- (void)viewController:(id)arg1 endIgnoringChangeType:(unsigned int)arg2;
- (void)viewControllerFailedToPlay:(id)arg1 withError:(id)arg2;
- (void)viewControllerRequestsExit:(id)arg1 reason:(int)arg2;
- (float)volume;
- (id)youTubeVideoID;

@end
