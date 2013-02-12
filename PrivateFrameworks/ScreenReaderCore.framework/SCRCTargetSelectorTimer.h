/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@class NSLock;

@interface SCRCTargetSelectorTimer : SCRCTargetSelector {
    BOOL _createdTimer;
    BOOL _isCancelled;
    BOOL _isPending;
    id _key;
    NSLock *_lock;
    id _object;
    struct __CFRunLoopTimer { } *_timer;
}

+ (void)_runThread;
+ (void)initialize;

- (BOOL)_createdTimer;
- (void)_dispatch;
- (void)_dispatchMainThread;
- (void)_dispatchSCRCThread;
- (void)cancel;
- (void)dealloc;
- (void)dispatchAfterDelay:(double)arg1 withObject:(id)arg2;
- (void)dispatchAfterDelay:(double)arg1;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2 threadKey:(id)arg3;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (void)invalidate;
- (BOOL)isCancelled;
- (BOOL)isPending;
- (oneway void)release;
- (id)threadKey;

@end
