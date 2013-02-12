/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class ADAdRecipientRecord, UIViewController, _UIRemoteViewController;

@interface ADLocalViewController : UIViewController {
    UIViewController *_modalViewController;
    int _oldOrientation;
    BOOL _reattemptPresentStoryboard;
    ADAdRecipientRecord *_recipient;
    _UIRemoteViewController *_remoteViewController;
    int _supportedOrientations;
}

@property(retain) UIViewController * modalViewController;
@property(retain) _UIRemoteViewController * remoteViewController;
@property int supportedOrientations;

- (BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)dealloc;
- (void)dismissModalAnimated:(BOOL)arg1;
- (void)dismissStoryboardAnimated:(BOOL)arg1 completion:(id)arg2;
- (id)initWithRecipient:(id)arg1;
- (id)modalViewController;
- (void)presentStoryboard;
- (id)remoteViewController;
- (void)requestAndPresentModalAnimated:(BOOL)arg1;
- (void)requestStoryboard;
- (void)setModalViewController:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setStatusBarVisible:(BOOL)arg1;
- (void)setSupportedOrientations:(int)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (BOOL)shouldAutomaticallyForwardRotationMethods;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)storyboardDismissedLocalViewController;
- (unsigned int)supportedInterfaceOrientations;
- (int)supportedOrientations;

@end
