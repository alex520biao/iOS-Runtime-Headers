/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPersonTabsLayoutManager>, ABPersonViewControllerHelper, UIView;

@interface ABPersonTableView : UITableView <ABPersonTabsScrollView> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    ABPersonViewControllerHelper *_helper;
    float _minimumBottomInset;
    } _savedContentInset;
    <ABPersonTabsLayoutManager> *_tabsLayoutManager;
}

@property(retain) UIView * backgroundView;
@property ABPersonViewControllerHelper * helper;
@property float minimumBottomInset;
@property <ABPersonTabsLayoutManager> * tabsLayoutManager;

- (id)helper;
- (void)layoutSubviews;
- (float)minimumBottomInset;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setHelper:(id)arg1;
- (void)setMinimumBottomInset:(float)arg1;
- (void)setTabsLayoutManager:(id)arg1;
- (id)tabsLayoutManager;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (BOOL)touchesShouldCancelInContentView:(id)arg1;

@end
