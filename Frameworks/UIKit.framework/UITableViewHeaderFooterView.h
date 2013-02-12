/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIColor, UIImage, UILabel, UITableView, UIView;

@interface UITableViewHeaderFooterView : UIView <UITableViewSubviewReusing> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    UIImage *_backgroundImage;
    UIView *_backgroundView;
    UIView *_contentView;
    UILabel *_detailLabel;
    BOOL _detailLabelBackgroundColorNeedsUpdate;
    BOOL _floating;
    } _frame;
    UILabel *_label;
    BOOL _labelBackgroundColorNeedsUpdate;
    float _maxTitleWidth;
    NSString *_reuseIdentifier;
    BOOL _sectionHeader;
    UITableView *_tableView;
    int _tableViewStyle;
    int _textAlignment;
    UIColor *_tintColor;
}

@property(retain) UIImage * backgroundImage;
@property(retain) UIView * backgroundView;
@property(readonly) UIView * contentView;
@property(readonly) UILabel * detailTextLabel;
@property BOOL floating;
@property float maxTitleWidth;
@property(copy) NSString * reuseIdentifier;
@property BOOL sectionHeader;
@property UITableView * tableView;
@property int tableViewStyle;
@property(copy) NSString * text;
@property int textAlignment;
@property(readonly) UILabel * textLabel;
@property(retain) UIColor * tintColor;

+ (id)_defaultFontForTableViewStyle:(int)arg1 isSectionHeader:(BOOL)arg2;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_detailLabelFrame;
- (struct CGSize { float x1; float x2; })_detailTextSizeForWidth:(float)arg1;
- (void)_invalidateDetailLabelBackgroundColor;
- (void)_invalidateLabelBackgroundColor;
- (id)_label:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_labelFrame;
- (id)_scriptingInfo;
- (void)_setupLabelAppearance;
- (struct CGSize { float x1; float x2; })_textSizeForWidth:(float)arg1;
- (void)_updateBackgroundImage;
- (void)_updateDetailLabelBackgroundColor;
- (void)_updateDetailLabelBackgroundColorIfNeeded;
- (void)_updateLabelBackgroundColor;
- (void)_updateLabelBackgroundColorIfNeeeded;
- (void)_updateLayerContents;
- (BOOL)_useDetailText;
- (id)backgroundImage;
- (id)backgroundView;
- (id)contentView;
- (void)dealloc;
- (id)detailTextLabel;
- (BOOL)floating;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (float)maxTitleWidth;
- (void)prepareForReuse;
- (id)reuseIdentifier;
- (BOOL)sectionHeader;
- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)setFloating:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMaxTitleWidth:(float)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setReuseIdentifier:(id)arg1;
- (void)setSectionHeader:(BOOL)arg1;
- (void)setTableView:(id)arg1;
- (void)setTableViewStyle:(int)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setTintColor:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)tableView;
- (int)tableViewStyle;
- (id)text;
- (int)textAlignment;
- (id)textLabel;
- (id)tintColor;

@end
