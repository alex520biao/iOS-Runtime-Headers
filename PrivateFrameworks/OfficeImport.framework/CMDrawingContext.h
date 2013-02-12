/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CMDrawableMapper, NSAffineTransform, NSMutableArray;

@interface CMDrawingContext : NSObject {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    NSMutableArray *_actions;
    struct CGContext { } *_cgContext;
    NSAffineTransform *_currentTransform;
    struct __CFData { } *_data;
    struct CGDataConsumer { } *_dataConsumer;
    struct CGImage { } *_fillImage;
    } _finalFrame;
    } _frame;
    CMDrawableMapper *_mapper;
    NSMutableArray *_transforms;
}

- (id).cxx_construct;
- (void)_addTransform:(id)arg1;
- (void)_applyTransform:(id)arg1;
- (struct CGContext { }*)_cgContext;
- (void)_closeContext;
- (void)_copyCGContext;
- (void)_playbackActions;
- (void)_restoreLastTransform;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_transformRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withTransform:(id)arg2;
- (void)addDebugPath:(struct CGPath { }*)arg1;
- (void)addPath:(struct CGPath { }*)arg1;
- (void)addTransform:(id)arg1;
- (id)copyPDF;
- (float)currentScaleFactor;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })currentTransform;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)mapper;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })pdfFrame;
- (void)restoreLastTransform;
- (void)setFillColor:(struct CGColor { }*)arg1;
- (void)setFillImage:(struct CGImage { }*)arg1;
- (void)setLineDash:(id)arg1;
- (void)setLineWidth:(float)arg1;
- (void)setMapper:(id)arg1;
- (void)setStrokeColor:(struct CGColor { }*)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })transformRectToGroup:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })transformRectToPage:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
