/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class CADisplayLink, NSMutableArray, NSObject<OS_dispatch_source>;

@interface VKMainLoop : NSObject {
    NSMutableArray *_animations[2];
    BOOL _applicationInBackground;
    int _backgroundableCanvasCount;
    NSMutableArray *_canvasList;
    int _debugForcedRate;
    CADisplayLink *_displayLink;
    struct __CFRunLoop { } *_displayLinkRunLoop;
    BOOL _isDebugRateForced;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
    int _rate;
}

@property int rate;
@property int trueRate;

+ (id)sharedInstance;

- (void)_receivedMemoryNotification;
- (void)addAnimation:(id)arg1;
- (void)addBackgroundableCanvas;
- (void)addCanvas:(id)arg1;
- (void)dealloc;
- (id)detailedDescription;
- (void)didEnterBackground;
- (void)displayTimerFired:(id)arg1;
- (void)forceTrueRate:(int)arg1;
- (id)init;
- (double)pauseAnimation:(id)arg1;
- (void)performBlock:(id)arg1;
- (int)rate;
- (void)removeAnimation:(id)arg1;
- (void)removeBackgroundableCanvas;
- (void)removeCanvas:(id)arg1;
- (double)resumeAnimation:(id)arg1;
- (void)setRate:(int)arg1;
- (void)setTrueRate:(int)arg1;
- (int)trueRate;
- (void)updateLinkState;
- (void)willEnterForeground;

@end
