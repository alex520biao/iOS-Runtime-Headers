/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class IUVideoPlaybackViewController, IUVideosBackstopView, IUWildcatVideoDetailViewController, IUiPodSegmentedViewController, MPMediaLibrary, UISnapshotView, UIViewController;

@interface IUWildcatVideosViewController : IUWildcatViewController <IUFoldingTransitionDelegate, IUDoorSwingTransitionViewDelegate, IUSegmentedViewControllerDelegate, ViewControllerArchiveNode, IUStoreClientPurchaseDestination> {
    struct { 
        UIViewController *fromViewController; 
        UIViewController *toViewController; 
        BOOL animated; 
    IUVideosBackstopView *_backstopView;
    IUiPodSegmentedViewController *_browserViewController;
    MPMediaLibrary *_currentSharedLibrary;
    IUWildcatVideoDetailViewController *_detailViewController;
    IUiPodSegmentedViewController *_deviceBrowserViewController;
    int _lastOrientation;
    IUVideoPlaybackViewController *_playbackViewController;
    UISnapshotView *_prerotationSnapshotView;
    IUiPodSegmentedViewController *_sharedLibraryBrowserViewController;
    } _transitionContext;
}

@property(readonly) IUiPodSegmentedViewController * browserViewController;
@property(readonly) IUWildcatVideoDetailViewController * detailViewController;
@property(readonly) IUVideoPlaybackViewController * playbackViewController;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_albumFrameForBrowserControllerTransition:(id)arg1;
- (id)_albumGridViewControllerFromBrowserController:(id)arg1;
- (void)_animateBackgroundForBookTransitionToViewController:(id)arg1;
- (void)_availableMediaLibrariesDidChangeNotification:(id)arg1;
- (void)_backgroundAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_cancelCurrentTransition;
- (void)_enabledMediaTypesDidChange:(id)arg1;
- (void)_finishTransitionAnimation:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForViewController:(id)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (BOOL)_isPlaybackViewController:(id)arg1;
- (BOOL)_isSupportedInterfaceOrientation:(int)arg1;
- (void)_libraryDidChangeNotification:(id)arg1;
- (id)_newSegmentedController:(BOOL)arg1;
- (void)_popSharedLibrary:(id)arg1;
- (void)_popSharedLibraryAnimated:(BOOL)arg1;
- (void)_readyToBeginTransitionToBrowserView:(id)arg1;
- (void)_rotationAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_setViewController:(id)arg1 into:(id*)arg2 makeChildController:(BOOL)arg3;
- (void)_sharedLibraryPickedNotification:(id)arg1;
- (void)_transition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 withFoldingTransition:(id)arg3;
- (id)browserSegmentedViewController;
- (id)browserViewController;
- (id)copyArchivableContexts;
- (void)dealloc;
- (struct CGSize { float x1; float x2; })detailSizeFromArtSizeForBrowserControllerTransition:(struct CGSize { float x1; float x2; })arg1;
- (id)detailViewController;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (id)directChildViewController;
- (void)doorSwingTransitionView:(id)arg1 didFinishTransition:(int)arg2;
- (void)finishPurchasedItemTransition;
- (void)foldingTransitionDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)init;
- (void)loadView;
- (id)newTransitionViewToPushDetailViewContoller:(id)arg1 animated:(BOOL)arg2 fromFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)performPushDetailViewControllerInTransitionView:(id)arg1;
- (id)playbackViewController;
- (void)popToBrowserViewControllerAnimated:(BOOL)arg1;
- (void)popToDetailViewControllerAnimated:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })preparePurchasedItemForTransition:(unsigned long long)arg1;
- (void)pushDetailViewContoller:(id)arg1 animated:(BOOL)arg2 fromFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)pushPlaybackViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushSharedLibrary:(id)arg1 animated:(BOOL)arg2;
- (BOOL)restoreArchivedContexts:(id)arg1;
- (id)segmentedControlForSegmentedViewController:(id)arg1;
- (void)segmentedViewController:(id)arg1 didSelectViewController:(id)arg2;
- (void)setBrowserViewController:(id)arg1 makeChildController:(BOOL)arg2;
- (void)setDetailViewController:(id)arg1 makeChildController:(BOOL)arg2;
- (void)setPlaybackViewController:(id)arg1 makeChildController:(BOOL)arg2;
- (id)topViewController;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
