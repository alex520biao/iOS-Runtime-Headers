/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, NSValue;

@interface CIAffineTile : CIFilter {
    CIImage *inputImage;
    NSValue *inputTransform;
}

@property(retain) CIImage * inputImage;
@property(copy) NSValue * inputTransform;

+ (id)customAttributes;

- (id)inputImage;
- (id)inputTransform;
- (id)outputImage;
- (void)setInputImage:(id)arg1;
- (void)setInputTransform:(id)arg1;

@end
