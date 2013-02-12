/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <PLAbstractLibraryViewControllerDelegate>, NSArray, NSDate, NSObject<PLAlbumContainer>, NSObject<PLAssetContainer>, NSString, PLAlbumStreamActivity, PLAlbumStreamingOptionsViewController, PLPhotosPickerSession, PLSyncProgressView, UIAlertView, UIBarButtonItem, UIImage;

@interface PLAbstractLibraryViewController : UIViewController <PLAlbumStreamingOptionsViewControllerDelegate, PLAlbumStreamActivityDelegate, PLAlbumListChangeObserver, PLAlbumChangeObserver, PLPhotoLibraryShouldReloadObserver, PLDismissableViewController, PLPhotosPickerSessionParticipant> {
    struct { 
        unsigned int hasContent : 1; 
        unsigned int allowsEditingAlbums : 1; 
        unsigned int albumsListViewInSync : 1; 
        unsigned int syncProgressVisible : 1; 
        unsigned int visible : 1; 
        unsigned int delegateImplementsShouldEnableAlbum : 1; 
        unsigned int reserved : 27; 
    struct NSObject { Class x1; } *_albumList;
    PLAlbumStreamingOptionsViewController *_albumSharingOptionsController;
    } _alcFlags;
    int _contentMode;
    UIAlertView *_createAlbumAlert;
    PLAlbumStreamActivity *_createSharedStreamActivity;
    PLPhotosPickerSession *_currentPickerSession;
    UIBarButtonItem *_customRightButton;
    <PLAbstractLibraryViewControllerDelegate> *_delegate;
    id _didSelectAlbumHandler;
    struct NSObject { Class x1; } *_hiddenAlbum;
    unsigned int _ignoreReorderNotificationCount;
    NSDate *_lastForegroundedDate;
    unsigned int _lastPendingCount;
    id _listHeaderActionHandler;
    UIImage *_listHeaderImage;
    NSString *_listHeaderLabel;
    struct NSObject { Class x1; } *_openAlbum;
    unsigned int _previousAlbumsCount;
    NSArray *_syncProgressAlbums;
    unsigned int _totalItemsCount;
}

@property(readonly) NSObject<PLAlbumContainer> * albumList;
@property BOOL albumsListViewInSync;
@property BOOL allowsEditingAlbums;
@property(readonly) int contentMode;
@property(retain) PLPhotosPickerSession * currentPickerSession;
@property(retain) UIBarButtonItem * customRightButton;
@property <PLAbstractLibraryViewControllerDelegate> * delegate;
@property(copy) id didSelectAlbumHandler;
@property(readonly) BOOL hasContent;
@property(retain) NSObject<PLAssetContainer> * hiddenAlbum;
@property(readonly) int interfaceIdiom;
@property(readonly) BOOL libraryViewVisible;
@property(copy) id listHeaderActionHandler;
@property(retain) UIImage * listHeaderImage;
@property(copy) NSString * listHeaderLabel;
@property(retain) NSObject<PLAssetContainer> * openAlbum;
@property(readonly) PLSyncProgressView * syncProgressView;
@property(getter=isSyncProgressVisible) BOOL syncProgressVisible;

- (void)_addLocalAlbum:(id)arg1;
- (void)_addStreamedAlbum:(id)arg1;
- (BOOL)_appAllowsSupressionOfAlerts;
- (void)_appWillEnterForeground:(id)arg1;
- (id)_suppresionContexts;
- (id)_syncProgressAlbums;
- (void)_updateAlbumsSortOrderIfNeeded;
- (void)_updateAlbumsWithNotification:(id)arg1;
- (void)_updateHasContent;
- (void)_updateSyncProgress;
- (void)addAlbum:(id)arg1;
- (void)albumDidChange:(id)arg1;
- (BOOL)albumIsDisplayedEnabled:(struct NSObject { Class x1; }*)arg1;
- (struct NSObject { Class x1; }*)albumList;
- (void)albumListDidChange:(id)arg1;
- (void)albumStreamActivity:(id)arg1 didCreateAlbum:(struct NSObject { Class x1; }*)arg2;
- (void)albumStreamActivity:(id)arg1 didFinishSuccessfully:(BOOL)arg2;
- (void)albumStreamingOptionsViewController:(id)arg1 didCompleteWithReason:(int)arg2;
- (BOOL)albumsListViewInSync;
- (BOOL)allowsEditingAlbums;
- (void)beginAddPhotosSessionForAlbum:(id)arg1 didShowHandler:(id)arg2 completionHandler:(id)arg3;
- (BOOL)canNavigateIntoAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)cancelAddPhotosSessionAnimated:(BOOL)arg1;
- (BOOL)checkAndAlertSubscribedStreamsLimitReachedForAlbum:(id)arg1;
- (int)contentMode;
- (id)currentPickerSession;
- (id)customRightButton;
- (void)dealloc;
- (id)delegate;
- (void)deleteAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)didReceiveMemoryWarning;
- (id)didSelectAlbumHandler;
- (void)dismissSharedStreamOptionsViewController;
- (void)editStreamOptionsForAlbum:(id)arg1;
- (BOOL)hasContent;
- (struct NSObject { Class x1; }*)hiddenAlbum;
- (void)hideAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)increaseIgnoreReorderNotificationCount;
- (id)init;
- (int)interfaceIdiom;
- (BOOL)isSyncProgressVisible;
- (BOOL)libraryViewVisible;
- (id)listHeaderActionHandler;
- (id)listHeaderImage;
- (id)listHeaderLabel;
- (void)navigateToAlbum:(struct NSObject { Class x1; }*)arg1 animated:(BOOL)arg2 completion:(id)arg3;
- (void)navigateToRevealAlbum:(struct NSObject { Class x1; }*)arg1 initiallyHidden:(BOOL)arg2 animated:(BOOL)arg3;
- (id)openAlbum;
- (BOOL)prepareForDismissingAnimated:(BOOL)arg1;
- (void)presentSharedStreamOptionsViewController:(id)arg1;
- (void)scrollToAlbumAtIndex:(unsigned int)arg1 animated:(BOOL)arg2 select:(BOOL)arg3;
- (void)setAlbumList:(struct NSObject { Class x1; }*)arg1 contentMode:(int)arg2;
- (void)setAlbumsListViewInSync:(BOOL)arg1;
- (void)setAllowsEditingAlbums:(BOOL)arg1;
- (void)setCurrentPickerSession:(id)arg1;
- (void)setCustomRightButton:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDidSelectAlbumHandler:(id)arg1;
- (void)setHiddenAlbum:(id)arg1 animated:(BOOL)arg2;
- (void)setHiddenAlbum:(struct NSObject { Class x1; }*)arg1;
- (void)setListHeaderActionHandler:(id)arg1;
- (void)setListHeaderImage:(id)arg1;
- (void)setListHeaderLabel:(id)arg1;
- (void)setOpenAlbum:(id)arg1;
- (void)setSyncProgressVisible:(BOOL)arg1;
- (void)shouldReload:(id)arg1;
- (void)showInvitationConfirmationForAlbum:(id)arg1;
- (id)subtitleForAlbum:(struct NSObject { Class x1; }*)arg1;
- (BOOL)subtitleForAlbumAllowsEmail;
- (id)syncProgressView;
- (void)updateAlbumListHeader;
- (BOOL)updateInterfaceForDeletedAlbumIndexes:(id)arg1 addedIndexes:(id)arg2 changedIndexes:(id)arg3 isReordering:(BOOL)arg4 needsFullReload:(BOOL)arg5;
- (void)updateInterfaceForHasContentChange;
- (void)updateNavigationItemButtons;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (id)visibleCellViewForAlbumAtIndex:(unsigned int)arg1;

@end
