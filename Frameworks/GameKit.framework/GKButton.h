/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIActivityIndicatorView;

@interface GKButton : UIButton {
    int _buttonAppearance;
    int _buttonKind;
    BOOL _onHeaderBackground;
    UIActivityIndicatorView *_progressIndicator;
    BOOL _shouldUseMediumFont;
    BOOL _shouldUseSmallFont;
}

@property int buttonAppearance;
@property int buttonKind;
@property(getter=isLoadingIndicatorVisible) BOOL loadingIndicatorVisible;
@property BOOL onHeaderBackground;
@property(retain) UIActivityIndicatorView * progressIndicator;
@property BOOL shouldUseMediumFont;
@property BOOL shouldUseSmallFont;

+ (float)heightForButtonKind:(int)arg1;

- (id)_gkLetterpressStyleForState:(unsigned int)arg1;
- (int)buttonAppearance;
- (int)buttonKind;
- (int)buttonType;
- (void)dealloc;
- (id)initWithTheme:(id)arg1 buttonKind:(int)arg2 headerBackground:(BOOL)arg3;
- (id)initWithTheme:(id)arg1 buttonKind:(int)arg2;
- (id)initWithTheme:(id)arg1;
- (BOOL)isLoadingIndicatorVisible;
- (void)layoutSubviews;
- (BOOL)onHeaderBackground;
- (id)progressIndicator;
- (void)setButtonAppearance:(int)arg1;
- (void)setButtonKind:(int)arg1;
- (void)setLoadingIndicatorVisible:(BOOL)arg1;
- (void)setOnHeaderBackground:(BOOL)arg1;
- (void)setProgressIndicator:(id)arg1;
- (void)setShouldUseMediumFont:(BOOL)arg1;
- (void)setShouldUseSmallFont:(BOOL)arg1;
- (BOOL)shouldUseMediumFont;
- (BOOL)shouldUseSmallFont;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)startLoadingIndicator;
- (void)stopLoadingIndicator;
- (void)updateButtonAppearance;

@end
