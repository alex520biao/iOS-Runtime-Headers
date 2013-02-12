/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableOrderedSet, NSString;

@interface PLAggregateAlbumList : NSObject <PLAlbumListChangeObserver, PLAlbumContainer> {
    NSMutableOrderedSet *_allAlbums;
    NSMutableOrderedSet *_childAlbumLists;
    int _filter;
}

@property(readonly) NSString * _prettyDescription;
@property(readonly) NSString * _typeDescription;
@property(readonly) id albumsSortingComparator;
@property int filter;
@property(readonly) unsigned int unreadAlbumsCount;

+ (struct NSObject { Class x1; }*)albumListWithFilter:(int)arg1 inPhotoLibrary:(id)arg2;

- (void)_invalidateAllAlbums;
- (id)_prettyDescription;
- (id)_typeDescription;
- (BOOL)albumHasFixedOrder:(struct NSObject { Class x1; }*)arg1;
- (void)albumListDidChange:(id)arg1;
- (int)albumListType;
- (id)albums;
- (id)albumsSortingComparator;
- (BOOL)canEditAlbums;
- (void)dealloc;
- (int)filter;
- (BOOL)hasAtLeastOneAlbum;
- (id)identifier;
- (id)initWithFilter:(int)arg1 inPhotoLibrary:(id)arg2;
- (id)managedObjectContext;
- (BOOL)needsReordering;
- (id)photoLibrary;
- (void)setFilter:(int)arg1;
- (void)setNeedsReordering;
- (unsigned int)unreadAlbumsCount;
- (void)updateAlbumsOrderIfNeeded;

@end
