/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString;

@interface GKImageKey : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    NSString *_basename;
    NSString *_cacheKey;
    NSString *_filePath;
    NSString *_imageID;
    } _size;
}

@property(retain) NSString * basename;
@property(readonly) NSString * cacheKey;
@property(readonly) NSString * filePath;
@property(retain) NSString * imageID;
@property struct CGSize { float x1; float x2; } size;

+ (id)fileNameWithIdentifierInImageSource:(id)arg1;
+ (id)keyForImageIdentifier:(id)arg1 withImageSource:(id)arg2;

- (id)basename;
- (id)cacheKey;
- (void)dealloc;
- (id)filePath;
- (id)imageID;
- (void)setBasename:(id)arg1;
- (void)setImageID:(id)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })size;

@end
