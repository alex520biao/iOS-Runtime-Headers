/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UIImage, UIImageView, UILabel;

@interface EKCalendarChooserCell : UITableViewCell {
    BOOL _checked;
    UIImageView *_checkmarkView;
    UIImage *_colorDot;
    UIImage *_colorDotHighlighted;
    UIImageView *_colorDotView;
    UILabel *_customDetailTextLabel;
    UILabel *_customTitleTextLabel;
    BOOL _shouldAnimate;
    BOOL _showCheckmarksOnLeft;
}

@property BOOL checked;
@property(readonly) UILabel * customDetailTextLabel;
@property(readonly) UILabel * customTitleTextLabel;
@property BOOL shouldAnimate;
@property BOOL showCheckmarksOnLeft;

- (void)_copyLabelParametersFrom:(id)arg1 to:(id)arg2;
- (void)_layoutTextLabel:(id)arg1 usingOriginalLabel:(id)arg2;
- (void)_setupCustomTextLabels;
- (void)_updateIndentationWidth;
- (BOOL)checked;
- (id)customDetailTextLabel;
- (id)customTitleTextLabel;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setChecked:(BOOL)arg1;
- (void)setColorDot:(id)arg1;
- (void)setColorDotHighlighted:(id)arg1;
- (void)setContentAlpha:(float)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setShouldAnimate:(BOOL)arg1;
- (void)setShowCheckmarksOnLeft:(BOOL)arg1;
- (BOOL)shouldAnimate;
- (BOOL)showCheckmarksOnLeft;

@end
