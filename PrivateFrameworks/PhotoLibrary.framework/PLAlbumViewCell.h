/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSMutableArray, NSMutableIndexSet, PLUnreadMarkerView;

@interface PLAlbumViewCell : UITableViewCell {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGPoint { 
        float x; 
        float y; 
    NSMutableIndexSet *_activityIndexes;
    unsigned int _cellPhotoCount;
    } _cellPhotoSize;
    } _cellPhotoThumbnailOffset;
    } _cellPhotoThumbnailSize;
    struct CGImage { } *_cellsImage;
    NSMutableArray *_highlightViews;
    NSMutableArray *_imageBadgeViews;
    NSMutableArray *_photoCellViews;
    NSMutableIndexSet *_selectionIndexes;
    int _selectionStyle;
    NSMutableArray *_textBadgeViews;
    unsigned int _unreadStartMarkerCount;
    unsigned int _unreadStartMarkerIndex;
    BOOL _unreadStartMarkerShowsProgress;
    PLUnreadMarkerView *_unreadStartMarkerView;
    BOOL _usesViewBasedPhotoCells;
}

@property unsigned int cellPhotoCount;
@property struct CGSize { float x1; float x2; } cellPhotoSize;
@property struct CGPoint { float x1; float x2; } cellPhotoThumbnailOffset;
@property struct CGSize { float x1; float x2; } cellPhotoThumbnailSize;
@property int photoSelectionStyle;
@property unsigned int unreadStartMarkerCount;
@property unsigned int unreadStartMarkerIndex;
@property BOOL unreadStartMarkerShowsProgress;
@property BOOL usesViewBasedPhotoCells;

+ (unsigned int)cellPhotoIndexAtPoint:(struct CGPoint { float x1; float x2; })arg1 cellBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 cellPhotoSize:(struct CGSize { float x1; float x2; })arg3;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfCellPhotoAtIndex:(unsigned int)arg1 cellBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 cellPhotoSize:(struct CGSize { float x1; float x2; })arg3;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfPhotoThumbnailAtIndex:(unsigned int)arg1 cellBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 cellPhotoSize:(struct CGSize { float x1; float x2; })arg3 thumbnailSize:(struct CGSize { float x1; float x2; })arg4 thumbnailOffset:(struct CGPoint { float x1; float x2; })arg5;

- (void)_removeAllHighlights;
- (void)_removeAllImageBadges;
- (void)_removePhotoCellViews;
- (void)_updateBadgeImageVisibilityForCellPhotoAtIndex:(unsigned int)arg1;
- (void)_updateCellPhotoAtIndex:(unsigned int)arg1 highlighted:(BOOL)arg2 badgedWithImage:(id)arg3 showActivityIndicator:(BOOL)arg4;
- (void)_updateHighlightAndBadgeForCellPhotoAtIndex:(unsigned int)arg1;
- (void)_updatePhotoCells;
- (void)_updateUnreadStartMarkerWithOldIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (id)badgeImageForCellPhotoAtIndex:(unsigned int)arg1;
- (unsigned int)cellPhotoCount;
- (unsigned int)cellPhotoIndexAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })cellPhotoSize;
- (struct CGPoint { float x1; float x2; })cellPhotoThumbnailOffset;
- (struct CGSize { float x1; float x2; })cellPhotoThumbnailSize;
- (struct CGImage { }*)cgImageRef;
- (void)dealloc;
- (void)deselectCellPhotoAtIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfCellPhotoAtIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfPhotoThumbnailAtIndex:(unsigned int)arg1;
- (void)hideActivityOnCellPhotoAtIndex:(unsigned int)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (int)photoSelectionStyle;
- (void)prepareForReuse;
- (void)removeAllTextBadges;
- (id)removeCellPhotoViewAtIndex:(unsigned int)arg1;
- (void)replaceCellPhotoViewAtIndex:(unsigned int)arg1 withCellPhotoView:(id)arg2;
- (void)selectCellPhotoAtIndex:(unsigned int)arg1;
- (void)setBadgeImage:(id)arg1 forCellPhotoAtIndex:(unsigned int)arg2;
- (void)setCGImageRef:(struct CGImage { }*)arg1;
- (void)setCellPhotoCount:(unsigned int)arg1;
- (void)setCellPhotoSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setCellPhotoThumbnailOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setCellPhotoThumbnailSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setPhotoSelectionStyle:(int)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setTextBadgeString:(id)arg1 onCellPhotoAtIndex:(unsigned int)arg2;
- (void)setUnreadStartMarkerCount:(unsigned int)arg1;
- (void)setUnreadStartMarkerIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setUnreadStartMarkerIndex:(unsigned int)arg1;
- (void)setUnreadStartMarkerShowsProgress:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setUnreadStartMarkerShowsProgress:(BOOL)arg1;
- (void)setUsesViewBasedPhotoCells:(BOOL)arg1;
- (void)showActivityOnCellPhotoAtIndex:(unsigned int)arg1;
- (unsigned int)unreadStartMarkerCount;
- (unsigned int)unreadStartMarkerIndex;
- (BOOL)unreadStartMarkerShowsProgress;
- (BOOL)usesViewBasedPhotoCells;
- (id)viewOfCellPhotoAtIndex:(unsigned int)arg1;

@end
