/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class UIColor, VGLMesh, VKAnimation;

@interface VKCircleAnnotationMarkerLayer : VKAnnotationMarkerLayer {
    struct { 
        double v[4][4]; 
    struct { 
        double v[4][4]; 
    struct { 
        double x; 
        double y; 
        double z; 
    struct { 
        double x; 
        double y; 
        double z; 
    double _distanceRadius;
    float _distanceRadiusToScreenRadiusMultiplier;
    UIColor *_fillColor;
    float _fillColorComponents[4];
    BOOL _hasDistanceRadiusToScreenRadiusMultiplier;
    } _inverseMatrix;
    } _localEyeDir;
    } _localEyePos;
    float _minRadius;
    } _modelMatrix;
    double _presentationDistanceRadius;
    float _presentationRadius;
    float _radius;
    VKAnimation *_radiusAnimation;
    UIColor *_strokeColor;
    float _strokeColorComponents[4];
    VGLMesh *_strokeMesh;
    int _strokeTriangleCount;
    float _strokeWidth;
    BOOL _useDistanceRadius;
}

@property double distanceRadius;
@property(retain) UIColor * fillColor;
@property float minRadius;
@property float radius;
@property(retain) UIColor * strokeColor;
@property float strokeWidth;

- (void)_createStrokeMeshWithTriangleCount:(int)arg1 context:(id)arg2;
- (void)dealloc;
- (double)distanceRadius;
- (void)drawWithContext:(id)arg1;
- (id)fillColor;
- (void)layoutWithContext:(id)arg1;
- (float)minRadius;
- (float)radius;
- (void)setDistanceRadius:(double)arg1;
- (void)setFillColor:(id)arg1;
- (void)setMinRadius:(float)arg1;
- (void)setRadius:(float)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setStrokeWidth:(float)arg1;
- (id)strokeColor;
- (float)strokeWidth;

@end
