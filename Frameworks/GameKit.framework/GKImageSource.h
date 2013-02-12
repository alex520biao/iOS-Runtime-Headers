/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKImageBrush, NSCache, NSString, UIImage;

@interface GKImageSource : NSObject <NSCacheDelegate> {
    NSCache *_cache;
    UIImage *_defaultImage;
    GKImageBrush *_imageBrush;
    NSString *_name;
    UIImage *_renderedDefaultImage;
    BOOL _shouldRenderDefaultImageWithBrush;
}

@property NSCache * cache;
@property(retain) UIImage * defaultImage;
@property(readonly) GKImageBrush * imageBrush;
@property(readonly) NSString * name;
@property(retain) UIImage * renderedDefaultImage;
@property BOOL shouldRenderDefaultImageWithBrush;

+ (id)cacheDirectoryForImageID:(id)arg1;
+ (void)clearCache;
+ (id)sharedCache;
+ (id)syncQueue;

- (id)cache;
- (unsigned int)cacheCostForImage:(id)arg1;
- (id)cachedImageForIdentifier:(id)arg1;
- (id)cachedImageForKey:(id)arg1;
- (void)clearCachedImageForIdentifier:(id)arg1;
- (void)dealloc;
- (id)defaultImage;
- (void)didReceiveCacheInvalidation:(id)arg1;
- (id)fastCachedImageForIdentifier:(id)arg1;
- (id)fastCachedImageForKey:(id)arg1;
- (id)fastCachedOrDefaultImageForForKey:(id)arg1;
- (id)fastCachedOrDefaultImageForIdentifier:(id)arg1;
- (id)imageBrush;
- (id)initWithName:(id)arg1 imageBrush:(id)arg2;
- (id)keyForImageIdentifier:(id)arg1;
- (id)name;
- (id)processAndCacheImage:(id)arg1 forIdentifier:(id)arg2;
- (id)processAndCacheImage:(id)arg1 forKey:(id)arg2;
- (id)renderedDefaultImage;
- (id)renderedImageWithImage:(id)arg1 defaultSize:(struct CGSize { float x1; float x2; })arg2 returnContext:(id*)arg3;
- (id)renderedImageWithImage:(id)arg1 returnContext:(id*)arg2;
- (id)renderedImageWithImage:(id)arg1;
- (id)renderedTestImage;
- (void)setCache:(id)arg1;
- (void)setDefaultImage:(id)arg1;
- (void)setRenderedDefaultImage:(id)arg1;
- (void)setShouldRenderDefaultImageWithBrush:(BOOL)arg1;
- (BOOL)shouldRenderDefaultImageWithBrush;
- (BOOL)shouldUseTestImage;
- (id)subsourceWithBrush:(id)arg1;
- (void)validateFileSystemCache;

@end
