/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <_UIViewServiceDeputyDelegate>, UIWindow, _UIAsyncInvocation;

@interface _UIViewServiceTextEffectsOperator : NSObject <XPCProxyTarget, _UIViewServiceTextEffectsOperator_RemoteViewControllerInterface, _UIViewServiceDeputy, _UIViewServiceDeputyRotationDelegate> {
    struct CGPoint { 
        float x; 
        float y; 
    BOOL __automatic_invalidation_invalidated;
    int __automatic_invalidation_retainCount;
    <_UIViewServiceDeputyDelegate> *_delegate;
    UIWindow *_hostedWindow;
    _UIAsyncInvocation *_invalidationInvocation;
    BOOL _isRestoringInputViews;
    _UIAsyncInvocation *_prepareForDisconnectionInvocation;
    id _remoteViewControllerProxy;
    } _windowOffset;
}

+ (id)operatorWithRemoteViewControllerProxy:(id)arg1;

- (int)__automatic_invalidation_logic;
- (void)__createHostedTextEffectsWithReplyHandler:(id)arg1;
- (void)__hostDidEnterBackground;
- (void)__hostViewWillDisappear:(BOOL)arg1;
- (void)__hostWillEnterForeground;
- (void)__prepareForDisconnectionWithCompletionHandler:(id)arg1;
- (void)__setContentSize:(id)arg1 windowOffset:(id)arg2;
- (void)__setNextAutomaticOrderOutDirection:(int)arg1 duration:(double)arg2;
- (void)_invalidateUnconditionallyThen:(id)arg1;
- (BOOL)_isDeallocating;
- (void)_prepareForDisconnectionUnconditionallyThen:(id)arg1;
- (BOOL)_tryRetain;
- (void)dealloc;
- (void)finishRotation;
- (id)invalidate;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (void)rotateToInterfaceOrientation:(int)arg1;
- (void)setDeputyDelegate:(id)arg1;
- (void)setHostedWindow:(id)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1;
- (void)windowDidGainFirstResponder:(id)arg1;

@end
