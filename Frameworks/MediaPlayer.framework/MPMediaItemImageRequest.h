/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItem, NSString, UIImage;

@interface MPMediaItemImageRequest : MPImageCacheRequest {
    NSString *_artworkCacheID;
    int _artworkFormat;
    BOOL _canUseSurfaceBackedImage;
    BOOL _crop;
    BOOL _fillToSquareAspectRatio;
    MPMediaItem *_mediaItem;
    int _placeHolderMediaType;
    double _retrievalTime;
    BOOL _usePlaceholderAsFallback;
}

@property(copy) NSString * artworkCacheID;
@property int artworkFormat;
@property BOOL canUseSurfaceBackedImage;
@property BOOL crop;
@property BOOL fillToSquareAspectRatio;
@property(readonly) MPMediaItem * mediaItem;
@property int placeHolderMediaType;
@property double retrievalTime;
@property(readonly) UIImage * unscaledPlaceholderImage;
@property BOOL usePlaceholderAsFallback;

- (id)artworkCacheID;
- (int)artworkFormat;
- (BOOL)canRequestSynchronously;
- (BOOL)canUseSurfaceBackedImage;
- (void)composeUniqueKey;
- (id)copyRawImageReturningError:(id*)arg1;
- (BOOL)crop;
- (void)dealloc;
- (BOOL)fillToSquareAspectRatio;
- (id)initWithMediaItem:(id)arg1;
- (id)mediaItem;
- (int)placeHolderMediaType;
- (id)placeholderImage;
- (double)retrievalTime;
- (void)setArtworkCacheID:(id)arg1;
- (void)setArtworkFormat:(int)arg1;
- (void)setCanUseSurfaceBackedImage:(BOOL)arg1;
- (void)setCrop:(BOOL)arg1;
- (void)setFillToSquareAspectRatio:(BOOL)arg1;
- (void)setPlaceHolderMediaType:(int)arg1;
- (void)setRetrievalTime:(double)arg1;
- (void)setRetrievalTimeForPlaybackTime:(double)arg1;
- (void)setUsePlaceholderAsFallback:(BOOL)arg1;
- (id)uniqueKey;
- (id)unscaledPlaceholderImage;
- (BOOL)usePlaceholderAsFallback;

@end
