/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class UIView<CKInteractionProxiedView>;

@interface CKTextInteractionView : CKTiledTextView {
    UIView<CKInteractionProxiedView> *_proxiedView;
}

@property(retain) UIView<CKInteractionProxiedView> * proxiedView;

+ (void)flushSharedInteractionView;
+ (id)sharedInteractionView;

- (void)becomeInteractionViewForProxiedView:(id)arg1;
- (void)dealloc;
- (void)detachInteractionView;
- (id)proxiedView;
- (void)setProxiedView:(id)arg1;

@end
