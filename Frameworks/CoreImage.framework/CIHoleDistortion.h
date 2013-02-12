/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@class CIImage, CIVector, NSNumber;

@interface CIHoleDistortion : CIFilter {
    CIVector *inputCenter;
    CIImage *inputImage;
    NSNumber *inputRadius;
}

@property(copy) CIVector * inputCenter;
@property(retain) CIImage * inputImage;
@property(copy) NSNumber * inputRadius;

+ (id)customAttributes;

- (id)_colorKernel;
- (id)_geomKernel;
- (BOOL)_isIdentity;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })computeDOD;
- (id)inputCenter;
- (id)inputImage;
- (id)inputRadius;
- (id)outputImage;
- (void)setDefaults;
- (void)setInputCenter:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputRadius:(id)arg1;

@end
