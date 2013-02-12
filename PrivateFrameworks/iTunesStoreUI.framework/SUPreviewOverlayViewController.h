/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSString, SUPreviewOverlayStorePageViewController;

@interface SUPreviewOverlayViewController : SUViewController {
    struct CGSize { 
        float width; 
        float height; 
    BOOL _animating;
    BOOL _contentLoaded;
    } _contentSize;
    id _loadBlock;
    BOOL _loaded;
    float _paddingRight;
    float _paddingTop;
    SUPreviewOverlayStorePageViewController *_storePageViewController;
    NSString *_userInfoString;
}

@property(getter=isContentLoaded) BOOL contentLoaded;
@property struct CGSize { float x1; float x2; } contentSize;
@property float paddingRight;
@property float paddingTop;
@property(copy) NSString * userInfoString;

+ (double)defaultAnimationDuration;
+ (id)defaultRequestProperties;
+ (void)offsetScrollView:(id)arg1 forViewController:(id)arg2;
+ (void)offsetToHideOverScrollView:(id)arg1;

- (void)_hideFromNavigationBar:(id)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;
- (void)_hideInContainer:(id)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;
- (void)_hideInScrollView:(id)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;
- (id)_previewOverlayContainerForViewController:(id)arg1;
- (id)_scrollViewForViewController:(id)arg1;
- (void)_showFromNavigationBar:(id)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;
- (void)_showInScrollView:(id)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;
- (id)_storePageViewController;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)dealloc;
- (void)hideInNavigationController:(id)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;
- (void)invalidateForMemoryPurge;
- (BOOL)isContentLoaded;
- (void)loadView;
- (void)loadWithCompletionBlock:(id)arg1;
- (void)loadWithRequestProperties:(id)arg1 completionBlock:(id)arg2;
- (void)offsetToShowOverScrollView:(id)arg1;
- (float)paddingRight;
- (float)paddingTop;
- (void)setContentLoaded:(BOOL)arg1;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPaddingRight:(float)arg1;
- (void)setPaddingTop:(float)arg1;
- (void)setUserInfoString:(id)arg1;
- (void)showInNavigationController:(id)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3;
- (void)storePage:(id)arg1 finishedWithSuccess:(BOOL)arg2;
- (id)userInfoString;

@end
