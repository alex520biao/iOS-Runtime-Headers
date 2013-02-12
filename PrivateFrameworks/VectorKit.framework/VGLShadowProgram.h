/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLShadowProgram : VGLRealisticFadeProgram {
    struct { 
        float x; 
        float y; 
        float z; 
    } _cameraDirection;
    float _ramp;
    float _taper;
    int _uCameraDirection;
    int _uRamp;
    int _uTaper;
    int _uWidth;
    float _width;
}

@property struct { float x1; float x2; float x3; } cameraDirection;
@property float ramp;
@property float taper;
@property float width;

+ (id)program;

- (struct { float x1; float x2; float x3; })cameraDirection;
- (id)init;
- (float)ramp;
- (void)setCameraDirection:(struct { float x1; float x2; float x3; })arg1;
- (void)setRamp:(float)arg1;
- (void)setTaper:(float)arg1;
- (void)setWidth:(float)arg1;
- (float)taper;
- (float)width;

@end
