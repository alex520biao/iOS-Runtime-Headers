/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class UIButton;

@interface RemoteUILinkFooter : UIView <RemoteUITableFooter> {
    id _delegate;
    UIButton *_linkButton;
}

@property(readonly) UIButton * linkButton;

- (void)_linkPressed;
- (void)dealloc;
- (float)footerHeightForWidth:(float)arg1 inTableView:(id)arg2;
- (id)initWithAttributes:(id)arg1;
- (void)layoutSubviews;
- (id)linkButton;
- (void)setDelegate:(id)arg1;

@end
