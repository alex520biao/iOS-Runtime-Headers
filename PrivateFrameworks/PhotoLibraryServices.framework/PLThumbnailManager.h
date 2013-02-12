/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, NSDictionary, NSIndexSet, NSLock, NSManagedObjectContext, NSMutableOrderedSet, PLImageTable, PLPhotoLibrary;

@interface PLThumbnailManager : NSObject {
    NSMutableOrderedSet *_assetUUIDsWithThumbnails;
    NSArray *_changedPhotos;
    NSDictionary *_changedPhotosMap;
    float _indexSheetBorderWidth;
    PLImageTable *_indexSheetThumbs;
    NSLock *_lock;
    NSIndexSet *_occupiedIndexes;
    PLPhotoLibrary *_photoLibrary;
    NSManagedObjectContext *_preheatMOC;
    NSArray *_thumbTables;
    PLImageTable *_wildcatIndexThumbs;
    PLImageTable *_wildcatScrubberThumbs;
    PLImageTable *_wildcatStackThumbs;
}

@property(readonly) PLImageTable * indexSheetThumbs;
@property PLPhotoLibrary * photoLibrary;
@property(readonly) NSArray * thumbTables;
@property(readonly) PLImageTable * wildcatIndexThumbs;
@property(readonly) PLImageTable * wildcatScrubberThumbs;
@property(readonly) PLImageTable * wildcatStackThumbs;

+ (id)cameraPreviewWellAssetID;
+ (id)cameraPreviewWellImage;
+ (id)cameraPreviewWellImageFileURL;
+ (id)cameraPreviewWellImageQueue;
+ (id)defaultThumbnailsDirectory;
+ (BOOL)missingThumbnailTables;
+ (void)removeObsoleteMetadata;
+ (void)resetImageTables;
+ (void)saveCameraPreviewWellImage:(struct CGImage { }*)arg1 assetID:(id)arg2;
+ (void)saveCameraPreviewWellImageForAsset:(id)arg1;
+ (int)thumbnailFormat;
+ (BOOL)thumbnailTablesNeedToBeRecreated;
+ (int)thumbnailVersion;

- (id)_bakedIndexSheetDataForWallpaperAsset:(id)arg1 width:(int*)arg2 height:(int*)arg3 bytesPerRow:(int*)arg4 dataWidth:(int*)arg5 dataHeight:(int*)arg6 imageDataOffset:(int*)arg7;
- (id)_bakedThumbnailForPhoto:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8;
- (id)_dataForAsset:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 imageDataFormat:(int*)arg9;
- (id)_dataForInFlightAsset:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8 imageDataFormat:(int*)arg9;
- (id)_imageTableForFormat:(int*)arg1;
- (id)_tableDescriptions;
- (void)clearCachedInformation;
- (id)compactImageTables;
- (BOOL)copyThumbnailsFromAsset:(id)arg1 toAsset:(id)arg2;
- (int)count;
- (id)dataForPhoto:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8;
- (void)dealloc;
- (void)deleteThumbnailsAtIndex:(int)arg1 withUUID:(id)arg2;
- (void)deleteThumbnailsForPhoto:(id)arg1;
- (void)ensureIndexExists:(int)arg1;
- (BOOL)entryAtIndexIsPlaceholder:(int)arg1;
- (id)indexSheetThumbs;
- (id)initWithWeakPhotoLibrary:(id)arg1;
- (struct __CFDictionary { }*)newAssetUUIDToThumbnailIndexMappingForFormat:(int)arg1;
- (id)newImageForPhoto:(id)arg1 withFormat:(int)arg2 outImageProperties:(const struct __CFDictionary {}**)arg3;
- (id)newUnbakedIndexImageForAsset:(id)arg1;
- (id)photoLibrary;
- (id)photoUUIDToIndexMap;
- (struct __CFDictionary { }*)placeholderThumbnailDataByFormatID;
- (id)preflightImageTableCompactionForPhotos:(id)arg1;
- (void)preheatImageDataForAssets:(id)arg1 format:(int)arg2;
- (void)setPhotoLibrary:(id)arg1;
- (void)setThumbnails:(struct __CFDictionary { }*)arg1 forPhoto:(id)arg2;
- (id)thumbTables;
- (void)thumbnailTablesChangedExternally;
- (void)updateThumbnailsForPhoto:(id)arg1 previewImage:(id)arg2 thumbnailImage:(id)arg3 generatePreviewImage:(BOOL)arg4 assignNewIndex:(BOOL)arg5;
- (void)updateThumbnailsForPhoto:(id)arg1 previewImage:(id)arg2 thumbnailImage:(id)arg3 generatePreviewImage:(BOOL)arg4;
- (id)wildcatIndexThumbs;
- (id)wildcatScrubberThumbs;
- (id)wildcatStackThumbs;

@end
