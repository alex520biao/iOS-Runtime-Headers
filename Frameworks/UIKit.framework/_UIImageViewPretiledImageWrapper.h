/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class _UIImageViewPretiledImageCacheKey, UIImage;

@interface _UIImageViewPretiledImageWrapper : NSObject  {
    UIImage *_pretiledImage;
    _UIImageViewPretiledImageCacheKey *_cacheKey;
}

@property(readonly) UIImage * pretiledImage;

+ (id)cacheValueWithPretiledImage:(id)arg1 cacheKey:(id)arg2;

- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)pretiledImage;

@end