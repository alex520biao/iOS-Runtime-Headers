/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class UINavigationBar, UIView, UIViewController;

@interface SLFacebookChromedViewController : UIViewController {
    UIView *_backgroundChromeView;
    UIView *_contentView;
    int _forcedInterfaceOrientation;
    UIView *_innerShadowView;
    UINavigationBar *_navigationBar;
    BOOL _navigationBarHidden;
    UIViewController *_presentedViewController;
    BOOL _shouldForceInterfaceOrientation;
    BOOL _useNotificationCenterPresentationStyle;
}

@property BOOL useNotificationCenterPresentationStyle;

- (void).cxx_destruct;
- (id)_backgroundImageForOrientation:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentFrame;
- (int)_currentOrientation;
- (void)_hideMenuBar;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_innerShadowFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_navBarFrame;
- (void)_showMenuBar;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)popViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)setForcedInterfaceOrientation:(int)arg1;
- (void)setNavigationBarHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setUseNotificationCenterPresentationStyle:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)useNotificationCenterPresentationStyle;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillLayoutSubviews;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
