/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <_UIViewServiceDeputyDelegate>, NSMutableArray, UIActionSheet, UIPopoverController, UIViewController, _UIAsyncInvocation, _UIHostedTextServiceSession, _UIHostedWindow, _UIViewServiceDummyPopoverController;

@interface _UIViewServiceViewControllerOperator : UIViewController <XPCProxyTarget, _UIViewServiceViewControllerOperator_RemoteViewControllerInterface, _UIHostedTextServiceSessionDelegate, _UIViewServiceDummyPopoverControllerDelegate, _UIViewServiceDeputy, _UIViewServiceDeputyRotationSource> {
    BOOL __automatic_invalidation_invalidated;
    int __automatic_invalidation_retainCount;
    BOOL _canShowTextServices;
    <_UIViewServiceDeputyDelegate> *_delegate;
    NSMutableArray *_deputyRotationDelegates;
    UIPopoverController *_displayedPopoverController;
    _UIViewServiceDummyPopoverController *_dummyPopoverController;
    unsigned int _hostAccessibilityServerPort;
    int _hostPID;
    int _hostStatusBarOrientation;
    UIActionSheet *_hostedActionSheet;
    _UIHostedWindow *_hostedWindow;
    _UIAsyncInvocation *_invalidationInvocation;
    BOOL _isResigningFirstResponderFromHostNotification;
    UIViewController *_localViewController;
    _UIAsyncInvocation *_prepareForDisconnectionInvocation;
    id _remoteViewControllerProxyToOperator;
    id _remoteViewControllerProxyToViewController;
    BOOL _serviceInPopover;
    unsigned int _supportedOrientations;
    _UIHostedTextServiceSession *_textServiceSession;
}

+ (id)operatorWithRemoteViewControllerProxy:(id)arg1;

- (void)__alertIsAppearing:(id)arg1 withFrameValue:(id)arg2;
- (void)__alertIsDisappearing:(id)arg1;
- (int)__automatic_invalidation_logic;
- (void)__createViewController:(id)arg1 withAppearanceSerializedRepresentations:(id)arg2 hostAccessibilityServerPort:(id)arg3 canShowTextServices:(BOOL)arg4 replyHandler:(id)arg5;
- (void)__dimmingViewWasTapped;
- (void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(int)arg1;
- (void)__hostDidEnterBackground;
- (void)__hostDidPromoteFirstResponder;
- (void)__hostDidRotateFromInterfaceOrientation:(int)arg1 skipSelf:(BOOL)arg2;
- (void)__hostDidUpdateAppearanceWithSerializedRepresentations:(id)arg1 originalSource:(id)arg2;
- (void)__hostReadyToReceiveMessagesFromServiceViewController;
- (void)__hostViewDidAppear:(BOOL)arg1;
- (void)__hostViewDidDisappear:(BOOL)arg1;
- (void)__hostViewWillAppear:(BOOL)arg1 inInterfaceOrientation:(int)arg2 completionHandler:(id)arg3;
- (void)__hostViewWillDisappear:(BOOL)arg1;
- (void)__hostWillAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3;
- (void)__hostWillEnterForeground;
- (void)__hostWillRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2 skipSelf:(BOOL)arg3;
- (void)__hostedActionSheetClickedButtonAtIndex:(int)arg1;
- (void)__hostedActionSheetDidDismissWithClickedButtonIndex:(int)arg1;
- (void)__hostedActionSheetDidPresent;
- (void)__prepareForDisconnectionWithCompletionHandler:(id)arg1;
- (void)__scrollToTopFromTouchAtViewLocation:(id)arg1 resultHandler:(id)arg2;
- (void)__setContentSize:(id)arg1;
- (void)__setServiceInPopover:(BOOL)arg1;
- (void)__textServiceDidDismiss;
- (id)_appearanceSource;
- (BOOL)_canShowTextServices;
- (void)_didBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_dismissActionSheet:(id)arg1 withClickedButtonIndex:(int)arg2 animated:(BOOL)arg3;
- (void)_firstResponderDidChange:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForContainerViewInSheetForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 displayingTopView:(BOOL)arg2 andBottomView:(BOOL)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForContainerViewInSheetForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_inputViewsKey;
- (void)_invalidateUnconditionallyThen:(id)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_isHostedRootViewController;
- (void)_popoverDidDismiss:(id)arg1;
- (void)_popoverWillPresent:(id)arg1;
- (void)_prepareForDisconnectionUnconditionallyThen:(id)arg1;
- (void)_presentActionSheet:(id)arg1 asPopoverFromBarButtonItem:(id)arg2 orFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 inView:(id)arg4 withPreferredArrowDirections:(int)arg5 passthroughViews:(id)arg6 backgroundStyle:(id)arg7 animated:(BOOL)arg8;
- (void)_presentActionSheet:(id)arg1 inView:(id)arg2 fromYCoordinate:(float)arg3;
- (BOOL)_shouldUseNextFirstResponder;
- (id)_showServiceForText:(id)arg1 type:(int)arg2 fromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 inView:(id)arg4;
- (id)_supportedInterfaceOrientationsForViewController:(id)arg1;
- (BOOL)_tryRetain;
- (void)_updateSupportedInterfaceOrientationsIfNecessary;
- (void)_viewServiceIsDisplayingPopoverController:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_willResignContentViewControllerOfPopover:(id)arg1;
- (void)_windowDidRegisterScrollToTopView;
- (void)_windowDidUnregisterScrollToTopView;
- (void)_windowDidUpdateCurrentTintView:(id)arg1;
- (void)addDeputyRotationDelegate:(id)arg1;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (void)dealloc;
- (id)defaultFirstResponder;
- (void)dismissHostedTextServiceSession:(id)arg1 animated:(BOOL)arg2;
- (void)dummyPopoverController:(id)arg1 didChangeContentSize:(struct CGSize { float x1; float x2; })arg2 animated:(BOOL)arg3;
- (void)dummyPopoverController:(id)arg1 popoverViewDidSetUseToolbarShine:(BOOL)arg2;
- (void)establishViewControllerDeputyWithProxy:(id)arg1 completionHandler:(id)arg2;
- (id)invalidate;
- (void)loadView;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (void)setDeputyDelegate:(id)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
