/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableOrderedSet, NSNumber, NSString, NSURL, PLManagedAlbum;

@interface PLPersistedAlbumMetadata : NSObject {
    BOOL _allowsOverwite;
    NSMutableOrderedSet *_assetUUIDs;
    NSNumber *_kind;
    PLManagedAlbum *_managedAlbum;
    NSURL *_metadataURL;
    NSString *_title;
    NSString *_uuid;
}

@property BOOL allowsOverwite;
@property(retain) NSMutableOrderedSet * assetUUIDs;
@property(retain) NSNumber * kind;
@property(retain) PLManagedAlbum * managedAlbum;
@property(retain) NSURL * metadataURL;
@property(retain) NSString * title;
@property(retain) NSString * uuid;

+ (BOOL)isValidPath:(id)arg1;

- (void)_readMetadata;
- (void)_saveMetadata;
- (id)albumFromDataInManagedObjectContext:(id)arg1;
- (BOOL)allowsOverwite;
- (id)assetUUIDs;
- (BOOL)containsAsset:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithPLGenericAlbum:(id)arg1;
- (id)initWithPersistedDataAtPath:(id)arg1;
- (id)initWithTitle:(id)arg1 uuid:(id)arg2 kind:(id)arg3 assetUUIDs:(id)arg4;
- (id)kind;
- (id)managedAlbum;
- (id)metadataURL;
- (void)persistAlbumData;
- (void)removePersistedAlbumData;
- (void)setAllowsOverwite:(BOOL)arg1;
- (void)setAssetUUIDs:(id)arg1;
- (void)setKind:(id)arg1;
- (void)setManagedAlbum:(id)arg1;
- (void)setMetadataURL:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)title;
- (id)uuid;

@end
