/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, UIColor, UIImageView;

@interface UIActivityIndicatorView : UIView <NSCoding> {
    struct CGSize { 
        float width; 
        float height; 
    int _activityIndicatorViewStyle;
    int _actualActivityIndicatorViewStyle;
    BOOL _animating;
    NSString *_artBackupKeyString;
    BOOL _clockWise;
    UIColor *_color;
    double _duration;
    BOOL _hasShadow;
    BOOL _hidesWhenStopped;
    float _innerRadius;
    UIImageView *_internalView;
    UIColor *_shadowColor;
    } _shadowOffset;
    BOOL _spinning;
    float _spinningDuration;
    int _spokeCount;
    int _spokeFrameRatio;
    NSArray *_spokeImages;
    BOOL _useArtwork;
    BOOL _useOutlineShadow;
    float _width;
}

@property int activityIndicatorViewStyle;
@property(readonly) NSString * artBackupKeyString;
@property BOOL clockWise;
@property(retain) UIColor * color;
@property BOOL hasShadow;
@property BOOL hidesWhenStopped;
@property float innerRadius;
@property(readonly) UIImageView * internalView;
@property(retain) UIColor * shadowColor;
@property struct CGSize { float x1; float x2; } shadowOffset;
@property BOOL spinning;
@property float spinningDuration;
@property int spokeCount;
@property int spokeFrameRatio;
@property(readonly) NSArray * spokeImages;
@property BOOL useArtwork;
@property BOOL useOutlineShadow;
@property float width;

+ (id)_loadResourcesForStyle:(int)arg1;
+ (struct CGSize { float x1; float x2; })defaultSizeForStyle:(int)arg1;
+ (struct CGSize { float x1; float x2; })size;

- (float)_alphaValueForStep:(int)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (id)_artBackupKey;
- (BOOL)_canCustomize;
- (BOOL)_canCustomizeStyle:(int)arg1;
- (id)_commonInitWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (int)_customStyleForStyle:(int)arg1;
- (id)_defaulColorForStyle:(int)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_feedTheGear;
- (id)_generateImages;
- (id)_imageForStep:(int)arg1;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)_isArtWorkBased;
- (id)_layoutInfosForStyle:(int)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_removeAllAnimations:(BOOL)arg1;
- (void)_setUpAnimation;
- (BOOL)_shouldGoBackToBaseStyle;
- (BOOL)_shouldGoToCustomStyle;
- (float)_spokeLengthForGearWidth:(float)arg1;
- (float)_spokeWidthForGearWidth:(float)arg1;
- (id)_styleNameForStyle:(int)arg1;
- (void)_tearDownAnimation;
- (void)_updateInternalViewFrameWithBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)_widthForGearWidth:(float)arg1;
- (int)activityIndicatorViewStyle;
- (id)artBackupKey;
- (id)artBackupKeyString;
- (BOOL)clockWise;
- (id)color;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)generateImages;
- (BOOL)hasShadow;
- (BOOL)hidesWhenStopped;
- (id)initWithActivityIndicatorStyle:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)innerRadius;
- (id)internalView;
- (BOOL)isAnimating;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isHighlighted;
- (void)setActivityIndicatorViewStyle:(int)arg1;
- (void)setAnimating:(BOOL)arg1;
- (void)setAnimationDuration:(double)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setClockWise:(BOOL)arg1;
- (void)setColor:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHasShadow:(BOOL)arg1;
- (void)setHidesWhenStopped:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setInnerRadius:(float)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setSpinning:(BOOL)arg1;
- (void)setSpinningDuration:(float)arg1;
- (void)setSpokeCount:(int)arg1;
- (void)setSpokeFrameRatio:(int)arg1;
- (void)setStyle:(int)arg1;
- (void)setUseArtwork:(BOOL)arg1;
- (void)setUseOutlineShadow:(BOOL)arg1;
- (void)setWidth:(float)arg1;
- (id)shadowColor;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)spinning;
- (float)spinningDuration;
- (int)spokeCount;
- (int)spokeFrameRatio;
- (id)spokeImages;
- (void)startAnimating;
- (void)startAnimation;
- (void)stopAnimating;
- (void)stopAnimation;
- (BOOL)useArtwork;
- (BOOL)useOutlineShadow;
- (float)width;

@end
