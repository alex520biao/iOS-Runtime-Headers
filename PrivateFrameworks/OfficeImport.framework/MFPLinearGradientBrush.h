/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class TSUColor;

@interface MFPLinearGradientBrush : MFPGradientBrush {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mBounds;
    TSUColor *mEndColor;
    TSUColor *mStartColor;
}

- (id).cxx_construct;
- (void)createShading;
- (void)dealloc;
- (id)endColor;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setEndColor:(id)arg1;
- (void)setStartColor:(id)arg1;
- (id)startColor;

@end
