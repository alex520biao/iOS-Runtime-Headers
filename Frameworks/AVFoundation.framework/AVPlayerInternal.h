/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class AVAudioSessionMediaPlayerOnly, AVPixelBufferAttributeMediator, AVPlayerItem, AVPropertyStorage, AVWeakReference, NSArray, NSDictionary, NSError, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString;

@interface AVPlayerInternal : NSObject {
    AVAudioSessionMediaPlayerOnly *audioSessionMediaPlayerOnly;
    NSMutableSet *caLayers;
    AVPlayerItem *currentItem;
    NSDictionary *currentSubtitlesPayload;
    NSArray *displaysUsedForPlayback;
    NSError *error;
    NSString *externalPlaybackVideoGravity;
    struct OpaqueCMClock { } *figMasterClock;
    struct OpaqueFigPlaybackItem { } *figPlaybackItemToIdentifyNextCurrentItem;
    struct OpaqueFigPlayer { } *figPlayer;
    BOOL hadAssociatedOnscreenPlayerLayerWhenSuspended;
    BOOL hostApplicationInForeground;
    BOOL iapdExtendedModeIsActive;
    NSMutableSet *items;
    AVPlayerItem *lastItem;
    NSObject<OS_dispatch_queue> *layersQ;
    BOOL logPerformanceData;
    BOOL needsToCreateFigPlayer;
    int nextPrerollIDToGenerate;
    NSMutableDictionary *pendingFigPlayerProperties;
    int pendingPrerollID;
    AVPixelBufferAttributeMediator *pixelBufferAttributeMediator;
    id prerollCompletionHandler;
    struct OpaqueFigSimpleMutex { } *prerollIDMutex;
    AVPropertyStorage *propertyStorage;
    BOOL reevaluateBackgroundPlayback;
    NSObject<OS_dispatch_queue> *stateDispatchQueue;
    int status;
    NSObject<OS_dispatch_queue> *subtitleQueue;
    AVWeakReference *weakReference;
}

@end
