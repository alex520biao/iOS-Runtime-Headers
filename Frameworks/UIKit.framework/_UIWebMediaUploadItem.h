/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIImage;

@interface _UIWebMediaUploadItem : NSObject {
    NSString *_filePath;
    UIImage *_originalImage;
    BOOL _video;
}

@property(retain) NSString * filePath;
@property(retain) UIImage * originalImage;
@property(getter=isVideo) BOOL video;

+ (id)mediaUploadItemWithFilePath:(id)arg1 image:(id)arg2 isVideo:(BOOL)arg3;

- (id)_imageForVideoFile:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_squareCropRectForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)_squareImage:(id)arg1;
- (void)dealloc;
- (id)displayImage;
- (id)filePath;
- (id)initWithFilePath:(id)arg1 image:(id)arg2 isVideo:(BOOL)arg3;
- (BOOL)isVideo;
- (id)originalImage;
- (void)setFilePath:(id)arg1;
- (void)setOriginalImage:(id)arg1;
- (void)setVideo:(BOOL)arg1;

@end
