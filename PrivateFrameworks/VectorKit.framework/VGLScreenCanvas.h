/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VGLContext, VGLFramebuffer;

@interface VGLScreenCanvas : UIView <VGLCanvas> {
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    int _canvasHeight;
    int _canvasWidth;
    BOOL _forceRecreateFramebuffer;
    BOOL _forceRecreateFramebufferAndKeepMultisampleFramebuffer;
    } _glClearColor;
    BOOL _requiresMultisampling;
    struct CGContext { } *_snapshotContext;
    VGLFramebuffer *_targetBuffer;
    VGLContext *_targetContext;
    BOOL _useDepthBuffer;
    BOOL _useMultisampling;
    BOOL _useStencilBuffer;
}

@property(readonly) float contentScale;
@property(readonly) BOOL currentSceneRequiresMSAA;
@property(getter=isDrawable,readonly) BOOL drawable;
@property struct _VGLColor { float x1; float x2; float x3; float x4; } glClearColor;
@property(readonly) struct CGSize { float x1; float x2; } size;
@property(readonly) struct CGSize { float x1; float x2; } sizeInPixels;
@property BOOL useDepthBuffer;
@property BOOL useMultisampling;
@property BOOL useStencilBuffer;
@property(readonly) VGLContext * vglContext;

+ (Class)contextClass;
+ (Class)layerClass;

- (void)_createFramebuffer;
- (void)_destroyAndCreateFramebuffer;
- (void)_destroyAndCreateFramebufferAndKeepMultisampleFramebuffer;
- (void)_destroyFramebuffer;
- (void)_destroyFramebufferAndKeepMultisampleFramebuffer;
- (float)contentScale;
- (BOOL)currentSceneRequiresMSAA;
- (void)dealloc;
- (void)didDrawView;
- (void)didEnterBackground;
- (void)didReceiveMemoryWarning;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })glClearColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 context:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isDrawable;
- (BOOL)isEffectivelyHidden;
- (void)layoutSubviews;
- (void)preloadResources;
- (void)setGlClearColor:(struct _VGLColor { float x1; float x2; float x3; float x4; })arg1;
- (void)setUseDepthBuffer:(BOOL)arg1;
- (void)setUseMultisampling:(BOOL)arg1;
- (void)setUseStencilBuffer:(BOOL)arg1;
- (struct CGSize { float x1; float x2; })size;
- (struct CGSize { float x1; float x2; })sizeInPixels;
- (BOOL)useDepthBuffer;
- (BOOL)useMultisampling;
- (BOOL)useStencilBuffer;
- (id)vglContext;
- (void)willDrawView;

@end
