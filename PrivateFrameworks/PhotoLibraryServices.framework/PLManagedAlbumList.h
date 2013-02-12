/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableOrderedSet, NSString, PLFilteredAlbumList;

@interface PLManagedAlbumList : _PLManagedAlbumList <PLAlbumContainer, PLIndexMappersDataOrigin> {
    PLFilteredAlbumList *_filteredAlbumLists[5];
    BOOL didRegisteredWithUserInterfaceContext;
    BOOL isRegisteredForChanges;
}

@property(readonly) NSString * _prettyDescription;
@property(readonly) NSString * _typeDescription;
@property int albumListType;
@property(readonly) NSMutableOrderedSet * albums;
@property(readonly) id albumsSortingComparator;
@property(readonly) BOOL canEditAlbums;
@property BOOL didRegisteredWithUserInterfaceContext;
@property(readonly) int filter;
@property(readonly) BOOL hasAtLeastOneAlbum;
@property BOOL isRegisteredForChanges;
@property(readonly) unsigned int unreadAlbumsCount;

+ (id)_albumListWithType:(int)arg1 inManagedObjectContext:(id)arg2;
+ (unsigned int)_priorityForAlbumKind:(int)arg1;
+ (id)_singletonListWithType:(int)arg1 library:(id)arg2;
+ (id)_typeDescriptionForAlbumListType:(int)arg1;
+ (void)addSingletonObjectsToContext:(id)arg1;
+ (id)albumListInManagedObjectContext:(id)arg1;
+ (id)albumListInPhotoLibrary:(id)arg1;
+ (id)allStreamedAlbumsListInPhotoLibrary:(id)arg1;
+ (id)eventListInManagedObjectContext:(id)arg1;
+ (id)eventListInPhotoLibrary:(id)arg1;
+ (id)facesAlbumListInManagedObjectContext:(id)arg1;
+ (id)facesAlbumListInPhotoLibrary:(id)arg1;
+ (void)initialize;
+ (BOOL)isValidPathForPersistence:(id)arg1;
+ (BOOL)isValidTypeForPersistence:(int)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (void)persistAlbumListUUIDs:(id)arg1 type:(int)arg2 allowsOverwrite:(BOOL)arg3;
+ (id)placesAlbumListInManagedObjectContext:(id)arg1;
+ (id)placesAlbumListInPhotoLibrary:(id)arg1;
+ (void)restoreAlbumListFromPersistedDataAtPath:(id)arg1 library:(id)arg2;

- (id)_prettyDescription;
- (id)_typeDescription;
- (BOOL)albumHasFixedOrder:(struct NSObject { Class x1; }*)arg1;
- (int)albumListType;
- (id)albums;
- (id)albumsSortingComparator;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (BOOL)canEditAlbums;
- (void)dealloc;
- (BOOL)didRegisteredWithUserInterfaceContext;
- (void)didSave;
- (void)enumerateDerivedIndexMappers:(id)arg1;
- (void)enumerateFilteredAlbumLists:(id)arg1;
- (int)filter;
- (BOOL)hasAtLeastOneAlbum;
- (BOOL)hasDerivedIndexMappers;
- (BOOL)isRegisteredForChanges;
- (BOOL)needsReordering;
- (void)registerFilteredAlbumList:(id)arg1;
- (void)registerForChanges;
- (void)setAlbumListType:(int)arg1;
- (void)setDidRegisteredWithUserInterfaceContext:(BOOL)arg1;
- (void)setIsRegisteredForChanges:(BOOL)arg1;
- (void)setNeedsReordering;
- (unsigned int)unreadAlbumsCount;
- (void)unregisterAllFilteredAlbums;
- (void)unregisterForChanges;
- (void)updateAlbumsOrderIfNeeded;
- (void)willTurnIntoFault;

@end
