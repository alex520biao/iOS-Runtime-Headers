/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface AVCaptureStillImageRequest : NSObject <NSCopying> {
    struct CGSize { 
        float width; 
        float height; 
    BOOL _chromaNoiseReductionEnabled;
    unsigned long _imageDataFormatType;
    id _iosurfaceCompletionBlock;
    BOOL _isEV0Image;
    BOOL _isHDRImage;
    float _jpegQuality;
    BOOL _jpegQualitySpecified;
    } _previewImageSize;
    id _sbufCompletionBlock;
    BOOL _stillImageMirrored;
    int _stillImageOrientation;
    BOOL _suspendsVideoProcessing;
}

@property BOOL chromaNoiseReductionEnabled;
@property unsigned long imageDataFormatType;
@property(copy) id iosurfaceCompletionBlock;
@property BOOL isEV0Image;
@property BOOL isHDRImage;
@property float jpegQuality;
@property BOOL jpegQualitySpecified;
@property struct CGSize { float x1; float x2; } previewImageSize;
@property(copy) id sbufCompletionBlock;
@property(getter=isStillImageMirrored) BOOL stillImageMirrored;
@property int stillImageOrientation;
@property BOOL suspendsVideoProcessing;

+ (id)request;

- (BOOL)chromaNoiseReductionEnabled;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long)imageDataFormatType;
- (id)iosurfaceCompletionBlock;
- (BOOL)isEV0Image;
- (BOOL)isHDRImage;
- (BOOL)isStillImageMirrored;
- (float)jpegQuality;
- (BOOL)jpegQualitySpecified;
- (struct CGSize { float x1; float x2; })previewImageSize;
- (id)sbufCompletionBlock;
- (void)setChromaNoiseReductionEnabled:(BOOL)arg1;
- (void)setImageDataFormatType:(unsigned long)arg1;
- (void)setIosurfaceCompletionBlock:(id)arg1;
- (void)setIsEV0Image:(BOOL)arg1;
- (void)setIsHDRImage:(BOOL)arg1;
- (void)setJpegQuality:(float)arg1;
- (void)setJpegQualitySpecified:(BOOL)arg1;
- (void)setPreviewImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSbufCompletionBlock:(id)arg1;
- (void)setStillImageMirrored:(BOOL)arg1;
- (void)setStillImageOrientation:(int)arg1;
- (void)setSuspendsVideoProcessing:(BOOL)arg1;
- (int)stillImageOrientation;
- (BOOL)suspendsVideoProcessing;

@end
