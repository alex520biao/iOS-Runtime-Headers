/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLBuildingProgram : VGLFogProgram {
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    struct { 
        float x; 
        float y; 
        float z; 
    } _cameraPositionInTileSpace;
    } _color;
    float _scale;
    int _textureSampler;
    int _uAlpha;
    int _uCameraPositionInTileSpace;
    int _uColor;
    int _uScale;
    int _uTextureSampler;
}

@property struct { float x1; float x2; float x3; } cameraPositionInTileSpace;
@property struct _VGLColor { float x1; float x2; float x3; float x4; } color;
@property float scale;
@property int textureSampler;

+ (id)program;

- (struct { float x1; float x2; float x3; })cameraPositionInTileSpace;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })color;
- (id)initWithVertName:(id)arg1 fragName:(id)arg2;
- (float)scale;
- (void)setCameraPositionInTileSpace:(struct { float x1; float x2; float x3; })arg1;
- (void)setColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;
- (void)setScale:(float)arg1;
- (void)setTextureSampler:(int)arg1;
- (int)textureSampler;

@end
