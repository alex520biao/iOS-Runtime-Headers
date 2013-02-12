/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <MPAVQueuePlayerFeederSource>, MPAVItem, MPDownloadManager, MPQueuePlayer, NSArray, NSMutableArray, NSMutableSet, NSObject<OS_dispatch_queue>;

@interface MPAVQueuePlayerFeeder : NSObject <SSDownloadManagerObserver> {
    unsigned int _desiredQueueDepth;
    MPDownloadManager *_downloadManager;
    BOOL _fillQueueActive;
    BOOL _forceSynchronousQueueFilling;
    NSMutableArray *_items;
    BOOL _managesSystemDownloads;
    unsigned int _maxQueueDepth;
    unsigned int _minQueueDepth;
    int _nextFillQueueToken;
    NSMutableSet *_pausedDownloads;
    NSObject<OS_dispatch_queue> *_pausedDownloadsQueue;
    MPQueuePlayer *_player;
    NSObject<OS_dispatch_queue> *_playerQueue;
    <MPAVQueuePlayerFeederSource> *_playlistItemSource;
    NSMutableSet *_reusableItems;
}

@property(readonly) MPAVItem * currentItem;
@property BOOL forceSynchronousQueueFilling;
@property(readonly) NSArray * items;
@property BOOL managesSystemDownloads;
@property unsigned int maxQueueDepth;
@property unsigned int minQueueDepth;

- (void)_effectiveNetworkTypeDidChangeNotification:(id)arg1;
- (void)_fillInQueue;
- (id)_fillInQueueWithExtraSpace:(int)arg1 ignoreExistingItems:(BOOL)arg2 removeCurrentItem:(BOOL)arg3;
- (id)_fillInQueueWithExtraSpace:(int)arg1 ignoreExistingItems:(BOOL)arg2;
- (id)_fillInQueueWithExtraSpace:(int)arg1;
- (void)_markIsReusable:(BOOL)arg1 item:(id)arg2;
- (void)_pauseOrResumeDownloads:(id)arg1 currentDownloadID:(long long)arg2;
- (void)_reloadQueueKeepingCurrentItem:(BOOL)arg1 allowReusingItems:(BOOL)arg2;
- (void)_removeCurrentItem;
- (void)_removeInvalidItems:(id)arg1;
- (void)_updatePlayerQueueWithRemovedItems:(id)arg1 addedItems:(id)arg2 removeCurrentItem:(BOOL)arg3;
- (void)_updateQueueDepthForRateChange;
- (id)acquireReusableItemsUsingBlock:(id)arg1;
- (void)advanceToNextItem;
- (void)cancelReusableItemsPassingTest:(id)arg1;
- (id)currentItem;
- (void)dealloc;
- (id)description;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (BOOL)forceSynchronousQueueFilling;
- (id)initWithMPQueuePlayer:(id)arg1 itemSource:(id)arg2;
- (void)invalidate;
- (id)items;
- (BOOL)managesSystemDownloads;
- (unsigned int)maxQueueDepth;
- (unsigned int)minQueueDepth;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)reloadQueueKeepingCurrentItem:(BOOL)arg1;
- (void)setForceSynchronousQueueFilling:(BOOL)arg1;
- (void)setManagesSystemDownloads:(BOOL)arg1;
- (void)setMaxQueueDepth:(unsigned int)arg1;
- (void)setMinQueueDepth:(unsigned int)arg1;

@end
