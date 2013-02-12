/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSDictionary, NSMutableArray, UIColor, UIImage, UINavigationItem, UISwipeGestureRecognizer, UIView;

@interface UINavigationBar : UIView <_UIShadowedView, UIStatusBarTinting, NSCoding> {
    struct { 
        unsigned int animate : 1; 
        unsigned int animationDisabledCount : 10; 
        unsigned int transitioningBarStyle : 1; 
        unsigned int newBarStyle : 3; 
        unsigned int transitioningToTranslucent : 1; 
        unsigned int barStyle : 3; 
        unsigned int isTranslucent : 1; 
        unsigned int disableLayout : 1; 
        unsigned int backPressed : 1; 
        unsigned int animatePromptChange : 1; 
        unsigned int pendingHideBackButton : 1; 
        unsigned int titleAutosizesToFit : 1; 
        unsigned int usingNewAPI : 1; 
        unsigned int minibar : 1; 
        unsigned int forceFullHeightInLandscape : 1; 
        unsigned int isLocked : 1; 
        unsigned int shouldUpdatePromptAfterTransition : 1; 
        unsigned int crossfadeItems : 1; 
        unsigned int autoAdjustTitle : 1; 
        unsigned int isContainedInPopover : 1; 
        unsigned int needsDrawRect : 1; 
        unsigned int animationCleanupCancelled : 1; 
        unsigned int forceLayout : 1; 
        unsigned int layoutInProgress : 1; 
        unsigned int dynamicDuration : 1; 
        unsigned int isInteractive : 1; 
        unsigned int cancelledTransition : 1; 
        unsigned int animationCount : 4; 
    UIView *_accessoryView;
    id _appearanceStorage;
    UIView *_backgroundView;
    id _currentAlert;
    id _delegate;
    NSMutableArray *_itemStack;
    NSArray *_leftViews;
    } _navbarFlags;
    UISwipeGestureRecognizer *_popSwipeGestureRecognizer;
    UIView *_prompt;
    float _rightMargin;
    NSArray *_rightViews;
    unsigned int _state;
    UIColor *_tintColor;
    UIView *_titleView;
}

@property int IUInterfaceStyle;
@property(setter=_setBackgroundView:,retain) UIView * _backgroundView;
@property(readonly) UINavigationItem * backItem;
@property int barStyle;
@property id delegate;
@property(copy) NSArray * items;
@property(retain) UIImage * shadowImage;
@property(retain) UIColor * tintColor;
@property(copy) NSDictionary * titleTextAttributes;
@property(readonly) UINavigationItem * topItem;
@property(getter=isTranslucent) BOOL translucent;

+ (id)_bottomColorForBackgroundImage:(id)arg1 viewSize:(struct CGSize { float x1; float x2; })arg2;
+ (void)_setUseCustomBackButtonAction:(BOOL)arg1;
+ (id)_statusBarBaseTintColorForStyle:(int)arg1 translucent:(BOOL)arg2 tintColor:(id)arg3 backgroundImage:(id)arg4 viewSize:(struct CGSize { float x1; float x2; })arg5;
+ (id)_statusBarBaseTintColorForStyle:(int)arg1 translucent:(BOOL)arg2 tintColor:(id)arg3;
+ (BOOL)_useCustomBackButtonAction;
+ (id)defaultPromptFont;
+ (struct CGSize { float x1; float x2; })defaultSize;
+ (struct CGSize { float x1; float x2; })defaultSizeForOrientation:(int)arg1;
+ (struct CGSize { float x1; float x2; })defaultSizeWithPrompt;
+ (struct CGSize { float x1; float x2; })defaultSizeWithPromptForOrientation:(int)arg1;
+ (void)setDefaultAnimationDuration:(double)arg1;

- (int)IUInterfaceStyle;
- (void)_alertIsAppearing:(id)arg1;
- (void)_alertIsDisappearing:(id)arg1;
- (id)_allViews;
- (id)_appearanceStorage;
- (void)_applySPIAppearanceToButtons;
- (float)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2;
- (float)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2;
- (void)_backgroundFadeDidFinish:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (id)_backgroundView;
- (int)_barStyle:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_boundsForPrompt:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withFont:(id)arg3 barStyle:(int)arg4;
- (BOOL)_canDrawContent;
- (BOOL)_canHandleStatusBarTouchAtLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)_cancelInProgressPushOrPop;
- (void)_cancelInteractiveTransition:(float)arg1;
- (void)_cancelInteractiveTransition;
- (id)_commonHitTest:(struct CGPoint { float x1; float x2; })arg1 forView:(id)arg2;
- (void)_commonNavBarInit;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)_crossFadeToBarBackgroundImageForItem:(id)arg1;
- (int)_currentBarStyle;
- (id)_currentLeftViews;
- (id)_currentRightViews;
- (void)_customViewChangedForButtonItem:(id)arg1;
- (void)_decrementAnimationCountIfNecessary;
- (id)_defaultTitleFont;
- (id)_defaultTitleFontFittingHeight:(float)arg1;
- (BOOL)_deferShadowToSearchBar;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (BOOL)_didVisibleItemsChangeWithNewItems:(id)arg1 oldItems:(id)arg2;
- (void)_drawPrompt:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withFont:(id)arg3 barStyle:(int)arg4;
- (id)_effectiveTintColor;
- (void)_fadeAllViewsIn;
- (void)_fadeAllViewsOut;
- (void)_fadeViewOut:(id)arg1;
- (void)_fadeViewsIn:(id)arg1;
- (void)_fadeViewsOut:(id)arg1;
- (void)_finishInteractiveTransition:(float)arg1;
- (BOOL)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_getTitleViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 leftViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 rightViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3 forViews:(id*)arg4 forItemAtIndex:(unsigned int)arg5;
- (void)_getTitleViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 leftViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 rightViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3 forViews:(id*)arg4;
- (void)_getTitleViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 leftViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 rightViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3;
- (void)_getTitleViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forItemAtIndex:(unsigned int)arg4;
- (void)_getTitleViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3;
- (void)_gkApplyTheme:(id)arg1 navbarStyle:(int)arg2;
- (void)_gkApplyTheme:(id)arg1;
- (void)_handleMouseDownAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_handleMouseUpAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_handlePopSwipe:(id)arg1;
- (BOOL)_hasBackButton;
- (BOOL)_hasCustomAutolayoutNeighborSpacing;
- (void)_hideButtonsAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (BOOL)_hidesShadow;
- (void)_incrementAnimationCountIfNecessary;
- (BOOL)_isIncomingButtonSameAsOutgoingButtonOnLeft:(BOOL)arg1;
- (id)_itemStack;
- (void)_navBarButtonPressed:(id)arg1;
- (void)_navigationAnimationDidFinish:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_popForTouchAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_popNavigationItemWithTransition:(int)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_prepareForPopAnimationWithNewTopItem:(id)arg1;
- (void)_prepareForPushAnimationWithItems:(id)arg1;
- (void)_propagateEffectiveTintColorWithPreviousColor:(id)arg1;
- (void)_pushNavigationItem:(id)arg1 transition:(int)arg2;
- (void)_removeAccessoryView;
- (void)_removeItemsFromSuperview:(id)arg1;
- (void)_resetBackgroundImageAsNecessary;
- (void)_setAutoAdjustTitle:(BOOL)arg1;
- (void)_setBackButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned int)arg3;
- (void)_setBackgroundImage:(id)arg1 mini:(id)arg2;
- (void)_setBackgroundView:(id)arg1;
- (void)_setBarStyle:(int)arg1;
- (void)_setButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned int)arg3;
- (void)_setButtonItemTextColor:(id)arg1 shadowColor:(id)arg2 forState:(unsigned int)arg3;
- (void)_setButtonItemTextColor:(id)arg1 shadowColor:(id)arg2;
- (void)_setButtonTextShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)_setDeferShadowToSearchBar:(BOOL)arg1;
- (void)_setHidesShadow:(BOOL)arg1;
- (void)_setIsContainedInPopover:(BOOL)arg1;
- (void)_setItems:(id)arg1 transition:(int)arg2;
- (void)_setLeftView:(id)arg1 rightView:(id)arg2;
- (void)_setLeftViews:(id)arg1 rightViews:(id)arg2;
- (void)_setNeedsLayoutForce:(BOOL)arg1;
- (void)_setPressedButtonItemTextColor:(id)arg1 shadowColor:(id)arg2;
- (void)_setReversesButtonTextShadowOffsetWhenPressed:(BOOL)arg1;
- (void)_setupTopNavItem:(id)arg1 oldTopNavItem:(id)arg2;
- (id)_shadowView;
- (BOOL)_shouldPopForTouchAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_shouldShowBackButtonForNavigationItem:(id)arg1;
- (void)_showLeftRightButtonsAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_startBarStyleAnimation:(int)arg1 withTintColor:(id)arg2;
- (void)_startPopAnimationFromItems:(id)arg1 fromBarStyle:(int)arg2 toItems:(id)arg3 toBarStyle:(int)arg4;
- (void)_startPushAnimationFromItems:(id)arg1 fromBarStyle:(int)arg2;
- (id)_statusBarTintColor;
- (BOOL)_subclassImplementsDrawBackgroundInRect;
- (BOOL)_subclassImplementsDrawRect;
- (unsigned int)_subviewIndexAboveBackground;
- (void)_tintViewAppearanceDidChange;
- (int)_transitionForOldItems:(id)arg1 newItems:(id)arg2;
- (void)_updateBackgroundImage;
- (void)_updateInteractiveTransition:(float)arg1;
- (void)_updateNavigationBarItem:(id)arg1 forStyle:(int)arg2 previousTintColor:(id)arg3;
- (void)_updateNavigationBarItem:(id)arg1 forStyle:(int)arg2;
- (void)_updateNavigationBarItemsForStyle:(int)arg1 previousTintColor:(id)arg2;
- (void)_updateNavigationBarItemsForStyle:(int)arg1;
- (void)_updateOpacity;
- (void)_updateTitleView;
- (void)_wrapView:(id)arg1 inClippingViewWithLeftBoundary:(float)arg2 rightBoundary:(float)arg3 tag:(int)arg4;
- (void)addConstraint:(id)arg1;
- (unsigned int)animationDisabledCount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })availableTitleArea;
- (id)backButtonViewAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)backItem;
- (id)backgroundImageForBarMetrics:(int)arg1;
- (int)barStyle;
- (id)buttonItemShadowColor;
- (id)buttonItemTextColor;
- (id)createButtonWithContents:(id)arg1 width:(float)arg2 barStyle:(int)arg3 buttonStyle:(int)arg4 isRight:(BOOL)arg5;
- (id)currentBackButton;
- (id)currentLeftView;
- (id)currentRightView;
- (void)dealloc;
- (float)defaultBackButtonAlignmentHeight;
- (struct CGSize { float x1; float x2; })defaultSizeForOrientation:(int)arg1;
- (id)delegate;
- (void)didAddSubview:(id)arg1;
- (void)disableAnimation;
- (void)drawBackButtonBackgroundInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withStyle:(int)arg2 pressed:(BOOL)arg3;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withStyle:(int)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)enableAnimation;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)forceFullHeightInLandscape;
- (void)hideButtons;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (BOOL)isAnimationEnabled;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isLocked;
- (BOOL)isMinibar;
- (BOOL)isTranslucent;
- (id)items;
- (void)layoutSubviews;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (id)navigationItemAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)navigationItems;
- (void)popNavigationItem;
- (id)popNavigationItemAnimated:(BOOL)arg1;
- (id)prompt;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })promptBounds;
- (id)promptView;
- (void)pushNavigationItem:(id)arg1 animated:(BOOL)arg2;
- (void)pushNavigationItem:(id)arg1;
- (void)removeConstraint:(id)arg1;
- (void)setAccessoryView:(id)arg1 animate:(BOOL)arg2;
- (void)setAutoresizingMask:(unsigned int)arg1;
- (void)setBackgroundImage:(id)arg1 forBarMetrics:(int)arg2;
- (void)setBarStyle:(int)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setButton:(int)arg1 enabled:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (void)setForceFullHeightInLandscape:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setIUInterfaceStyle:(int)arg1;
- (void)setItems:(id)arg1 animated:(BOOL)arg2;
- (void)setItems:(id)arg1;
- (void)setLocked:(BOOL)arg1;
- (void)setNavigationItems:(id)arg1;
- (void)setNeedsLayout;
- (void)setPrompt:(id)arg1;
- (void)setRightMargin:(float)arg1;
- (void)setShadowImage:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitleAutoresizesToFit:(BOOL)arg1;
- (void)setTitleTextAttributes:(id)arg1;
- (void)setTitleVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)setTitleView:(id)arg1;
- (void)setTopItemAlpha:(float)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1;
- (void)setTranslucent:(BOOL)arg1;
- (id)shadowImage;
- (void)showBackButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showButtonsWithLeft:(id)arg1 right:(id)arg2 leftBack:(BOOL)arg3;
- (void)showButtonsWithLeftTitle:(id)arg1 rightTitle:(id)arg2 leftBack:(BOOL)arg3;
- (void)showButtonsWithLeftTitle:(id)arg1 rightTitle:(id)arg2;
- (void)showHideBackButtomAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)showLeftButton:(id)arg1 withStyle:(int)arg2 rightButton:(id)arg3 withStyle:(int)arg4;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)state;
- (id)tintColor;
- (BOOL)titleAutoresizesToFit;
- (id)titleTextAttributes;
- (float)titleVerticalPositionAdjustmentForBarMetrics:(int)arg1;
- (id)topItem;
- (float)topItemAlpha;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updatePrompt;
- (void)willRemoveSubview:(id)arg1;

@end
