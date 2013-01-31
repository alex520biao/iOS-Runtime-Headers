/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSTimer;

@interface MPLocalAssetDownloadObserver : MPMediaDownloadObserver  {
    NSTimer *_progressTimer;
}

+ (void)beginDownloadForMediaItem:(id)arg1;

- (void)dealloc;
- (double)downloadProgress;
- (id)initWithItemPersistentID:(long long)arg1;
- (BOOL)canCancel;
- (void)_updateProgress:(id)arg1;

@end