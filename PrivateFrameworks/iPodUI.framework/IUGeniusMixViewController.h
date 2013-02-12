/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUGeniusGridView, MPGeniusMix, NSMutableArray, NSMutableSet, NSTimer, UIImageView, UIPageControl, UIScrollView, UITableViewCell;

@interface IUGeniusMixViewController : IUiPodViewController <IUGeniusGridViewDelegate, SSDownloadManagerObserver, UIScrollViewDelegate> {
    UIImageView *_artworkImageView;
    BOOL _didPushMix;
    IUGeniusGridView *_flippedGridView;
    NSMutableArray *_gridViews;
    BOOL _isObservingDownloads;
    BOOL _isZooming;
    UITableViewCell *_moreListTableViewCell;
    NSTimer *_navBarUpdateTimer;
    UIPageControl *_pageControl;
    UIScrollView *_scrollView;
    BOOL _shouldUpdateNavBar;
    NSMutableSet *_unusedGridViewPool;
}

@property(readonly) MPGeniusMix * selectedMix;

- (void)_cancelDownloadingMixForCurrentPage:(id)arg1;
- (struct CGPoint { float x1; float x2; })_contentOffsetForCurrentPage;
- (struct CGPoint { float x1; float x2; })_contentOffsetForPage:(int)arg1;
- (void)_createGridViewIfNecessaryForPage:(int)arg1;
- (BOOL)_currentPageIsPlayingGeniusMix;
- (id)_dequeueExistingGridView;
- (void)_downloadMixForCurrentPage:(id)arg1;
- (void)_enqueueGridViewForReuse:(id)arg1;
- (void)_flipGridView:(id)arg1 toOrientation:(int)arg2 animated:(BOOL)arg3;
- (id)_geniusMixDataSource;
- (BOOL)_hasGridViewForPage:(int)arg1;
- (id)_moreListTitle;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)_nowPlayingItemDidChange:(id)arg1;
- (void)_pageControlValueDidChange:(id)arg1;
- (int)_pageForContentOffset;
- (int)_playingGeniusMixPage;
- (void)_pruneGridViewPages;
- (void)_reloadDataWithSelectedMix:(id)arg1;
- (void)_unloadGridViews;
- (void)_updateNavigationBarForCurrentPageAnimated:(BOOL)arg1;
- (id)_viewControllerContextForCurrentPage;
- (void)_zoomArtworkInForDataSource:(id)arg1;
- (void)_zoomArtworkOut;
- (void)_zoomOutDidStop;
- (void)dealloc;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)geniusGridViewWasTapped:(id)arg1;
- (id)init;
- (void)loadView;
- (id)moreListTableCell;
- (int)navigationTransition;
- (void)registerForPlayerNotifications;
- (void)reloadData;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)selectedMix;
- (void)unregisterForPlayerNotifications;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
