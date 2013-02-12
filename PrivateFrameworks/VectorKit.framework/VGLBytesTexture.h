/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSData;

@interface VGLBytesTexture : VGLTexture {
    NSData *_data;
    int _height;
    unsigned int _internalFormat;
    unsigned int _pixelFormat;
    unsigned int _pixelType;
    int _width;
}

- (void)dealloc;
- (BOOL)decodeTexture;
- (id)initWithData:(id)arg1 internalFormat:(unsigned int)arg2 size:(struct CGSize { float x1; float x2; })arg3 pixelFormat:(unsigned int)arg4 pixelType:(unsigned int)arg5;
- (BOOL)loadTexture;

@end
