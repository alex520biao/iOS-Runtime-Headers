/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class ADBannerView, IUPortraitInfoOverlay, MPAVItem, MPImageCacheRequest, MPReflectionImageView, MPSwipableView;

@interface IUNowPlayingAlbumFrontViewController : MPViewController <IUPortraitInfoOverlayDelegate, MPSwipableViewDelegate> {
    ADBannerView *_adView;
    MPReflectionImageView *_artworkView;
    MPSwipableView *_backstopView;
    MPImageCacheRequest *_currentImageRequest;
    float _filteredX;
    float _filteredZ;
    MPAVItem *_imageRequestPendingItem;
    id _motionManagerObserver;
    IUPortraitInfoOverlay *_overlayView;
    int _style;
}

@property int style;

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForArtwork;

- (void)_addOverlayView:(id)arg1;
- (void)_displayValuesDidChangeNotification:(id)arg1;
- (void)_handleDoubleTap:(id)arg1;
- (void)_handleSingleTap;
- (void)_handleSwipeRight;
- (id)_overlayView;
- (void)_removeOverlayView;
- (void)_updateArtworkForTime:(double)arg1;
- (void)artworkDidZoomIn;
- (void)artworkDidZoomOut;
- (void)artworkWillZoomIn;
- (void)artworkWillZoomOut;
- (BOOL)canDisplayItem:(id)arg1 withInterfaceOrientation:(int)arg2;
- (id)copyOverlayViewForTransitionToItem:(id)arg1;
- (id)coverFlowControllerInitialTransitionImage:(id)arg1;
- (void)coverFlowDidTransitionOut:(BOOL)arg1;
- (void)coverFlowIsTransitioningOut:(BOOL)arg1;
- (void)coverFlowWillTransitionOut:(BOOL)arg1;
- (void)crossedTimeMakerWithEvent:(id)arg1;
- (void)dealloc;
- (void)endTransitionOverlayHidingWithTransferedOverlayView:(id)arg1;
- (void)infoOverlayDidFinishHiding:(id)arg1;
- (BOOL)infoOverlayShouldDisplayQueuePositionUI:(id)arg1;
- (id)init;
- (void)loadView;
- (void)setItem:(id)arg1;
- (void)setStyle:(int)arg1;
- (void)startTicking;
- (int)statusBarStyle;
- (void)stopTicking;
- (int)style;
- (void)swipableView:(id)arg1 swipedInDirection:(int)arg2;
- (void)swipableView:(id)arg1 tappedWithCount:(unsigned int)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
