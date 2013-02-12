/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLCommentsViewControllerDelegate>, CAGradientLayer, NSCache, PLCloudSharedComment, PLManagedAsset, PLPhotoCommentEntryView, UITableView, UIView;

@interface PLCommentsViewController : UIViewController <PLCloudCommentsChangeObserver, PLDismissableViewController, UITableViewDelegate, UITableViewDataSource, UITextViewDelegate> {
    PLManagedAsset *_asset;
    <PLCommentsViewControllerDelegate> *_commentsControllerDelegate;
    NSCache *_commentsHeightCache;
    UIView *_containerView;
    BOOL _editMode;
    PLPhotoCommentEntryView *_entryView;
    PLCloudSharedComment *_justInsertedComment;
    BOOL _justTappedSmileButton;
    float _keyboardOverlap;
    BOOL _lastRowMasked;
    CAGradientLayer *_maskLayer;
    BOOL _shouldAdjustInitialScrollPosition;
    UIView *_tableContainerView;
    UITableView *_tableView;
    BOOL _temporaryKeyboardHideReshow;
}

@property(retain) PLManagedAsset * asset;
@property <PLCommentsViewControllerDelegate> * commentsControllerDelegate;
@property BOOL editMode;
@property(retain) PLCloudSharedComment * justInsertedComment;
@property BOOL lastRowMasked;

- (void)_addCommentButtonTapped:(id)arg1;
- (void)_adjustInitialScrollPosition:(BOOL)arg1;
- (BOOL)_adjustTextEntrySizeForOrientation:(int)arg1;
- (BOOL)_checkAndAlertMaxCommentsReachedWhenFinalizing:(BOOL)arg1;
- (id)_firstUnreadCloudComment;
- (float)_heightForComment:(id)arg1 forWidth:(float)arg2 forInterfaceOrientation:(int)arg3;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_postCommentValidated:(id)arg1;
- (struct CGSize { float x1; float x2; })_preferredViewSizeInContainerSize:(struct CGSize { float x1; float x2; })arg1 forInterfaceOrientation:(int)arg2 tableViewSize:(struct CGSize { float x1; float x2; }*)arg3;
- (void)_smileButtonTapped:(id)arg1;
- (float)_tableViewHeightForWidth:(float)arg1 interfaceOrientation:(int)arg2;
- (id)_textInPostFieldTrimmingWhitespace;
- (float)_topTableMargin;
- (void)_updateLayerMaskWithBoundsChange;
- (void)_updatePostButtonAndPlaceholder;
- (id)asset;
- (void)cancelCurrentAction:(id)arg1;
- (void)cancelDeleteMode:(id)arg1;
- (void)cloudCommentsDidChange:(id)arg1;
- (id)commentsControllerDelegate;
- (void)dealloc;
- (BOOL)editMode;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)justInsertedComment;
- (BOOL)lastRowMasked;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (BOOL)prepareForDismissingAnimated:(BOOL)arg1;
- (void)scrollToComment:(id)arg1 animated:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setBottomMaskEnabled:(BOOL)arg1;
- (void)setCommentsControllerDelegate:(id)arg1;
- (void)setEditMode:(BOOL)arg1;
- (void)setJustInsertedComment:(id)arg1;
- (void)setLastRowMasked:(BOOL)arg1;
- (void)setRasterization:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)textViewDidChange:(id)arg1;
- (void)updateViewLayoutWithDuration:(double)arg1 completion:(id)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
