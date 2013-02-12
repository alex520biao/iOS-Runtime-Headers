/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VGLTexture;

@interface VGLSingleTexturedAndLitMesh : VGLMesh {
    VGLTexture *_texture;
}

@property(retain) VGLTexture * texture;

- (void)dealloc;
- (void)drawTrianglesWithContext:(id)arg1;
- (id)init;
- (id)initFromAsciiVertexFile:(id)arg1 indexFile:(id)arg2;
- (id)initWithVertices:(const struct { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct { float x_2_1_1; float x_2_1_2; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; }*)arg1 vertexCount:(int)arg2 indices:(const unsigned short*)arg3 indexCount:(int)arg4;
- (void)setTexture:(id)arg1;
- (id)texture;

@end
