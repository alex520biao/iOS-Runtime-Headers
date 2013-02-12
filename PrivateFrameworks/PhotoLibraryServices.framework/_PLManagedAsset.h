/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSData, NSDate, NSManagedObject, NSMutableSet, NSNumber, NSObject, NSSet, NSString;

@interface _PLManagedAsset : PLManagedObject {
}

@property(retain) NSManagedObject * additionalAttributes;
@property(retain) NSSet * albums;
@property(retain) NSSet * albumsBeingKeyAssetFor;
@property(readonly) NSMutableSet * albumsBeingKeyAssetForSet;
@property(readonly) NSMutableSet * albumsSet;
@property(retain) NSNumber * complete;
@property BOOL completeValue;
@property(retain) NSString * creatorBundleID;
@property(retain) NSDate * dateCreated;
@property(retain) NSString * directory;
@property(retain) NSNumber * duration;
@property double durationValue;
@property(retain) NSObject * faceRectangles;
@property(retain) NSString * filename;
@property(retain) NSNumber * flagged;
@property BOOL flaggedValue;
@property(retain) NSNumber * height;
@property short heightValue;
@property(retain) NSNumber * highDynamicRangeType;
@property(retain) NSString * importSessionID;
@property(retain) NSNumber * kind;
@property short kindValue;
@property(retain) NSData * locationData;
@property(retain) NSDate * modificationDate;
@property(retain) NSNumber * orientation;
@property short orientationValue;
@property(retain) NSString * originalAssetsUUID;
@property(retain) NSString * originalFilename;
@property(retain) NSNumber * originalFilesize;
@property int originalFilesizeValue;
@property(retain) NSNumber * originalHeight;
@property short originalHeightValue;
@property(retain) NSNumber * originalOrientation;
@property short originalOrientationValue;
@property(retain) NSString * originalPath;
@property(retain) NSNumber * originalWidth;
@property short originalWidthValue;
@property(retain) NSNumber * savedAssetType;
@property(retain) NSSet * sidecarFiles;
@property(readonly) NSMutableSet * sidecarFilesSet;
@property double sortToken;
@property(retain) NSString * title;
@property(retain) NSString * uniformTypeIdentifier;
@property(retain) NSString * uuid;
@property(retain) NSNumber * width;
@property short widthValue;

+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

- (id)albumsBeingKeyAssetForSet;
- (id)albumsSet;
- (void)awakeFromInsert;
- (BOOL)completeValue;
- (id)creatorBundleID;
- (id)duration;
- (double)durationValue;
- (BOOL)flaggedValue;
- (short)heightValue;
- (id)highDynamicRangeType;
- (id)importSessionID;
- (short)kindValue;
- (id)objectID;
- (short)orientationValue;
- (id)originalAssetsUUID;
- (id)originalFilename;
- (id)originalFilesize;
- (int)originalFilesizeValue;
- (id)originalHeight;
- (short)originalHeightValue;
- (id)originalOrientation;
- (short)originalOrientationValue;
- (id)originalPath;
- (id)originalWidth;
- (short)originalWidthValue;
- (BOOL)primitiveCompleteValue;
- (double)primitiveDurationValue;
- (short)primitiveEmbeddedThumbnailHeightValue;
- (int)primitiveEmbeddedThumbnailLengthValue;
- (int)primitiveEmbeddedThumbnailOffsetValue;
- (short)primitiveEmbeddedThumbnailWidthValue;
- (BOOL)primitiveFlaggedValue;
- (short)primitiveHeightValue;
- (short)primitiveKindValue;
- (short)primitiveOrientationValue;
- (int)primitiveOriginalFilesizeValue;
- (short)primitiveOriginalOrientationValue;
- (int)primitiveThumbnailIndexValue;
- (short)primitiveWidthValue;
- (void)setCompleteValue:(BOOL)arg1;
- (void)setCreatorBundleID:(id)arg1;
- (void)setDuration:(id)arg1;
- (void)setDurationValue:(double)arg1;
- (void)setFlaggedValue:(BOOL)arg1;
- (void)setHeightValue:(short)arg1;
- (void)setHighDynamicRangeType:(id)arg1;
- (void)setImportSessionID:(id)arg1;
- (void)setKindValue:(short)arg1;
- (void)setOrientationValue:(short)arg1;
- (void)setOriginalAssetsUUID:(id)arg1;
- (void)setOriginalFilename:(id)arg1;
- (void)setOriginalFilesize:(id)arg1;
- (void)setOriginalFilesizeValue:(int)arg1;
- (void)setOriginalHeight:(id)arg1;
- (void)setOriginalHeightValue:(short)arg1;
- (void)setOriginalOrientation:(id)arg1;
- (void)setOriginalOrientationValue:(short)arg1;
- (void)setOriginalPath:(id)arg1;
- (void)setOriginalWidth:(id)arg1;
- (void)setOriginalWidthValue:(short)arg1;
- (void)setPrimitiveCompleteValue:(BOOL)arg1;
- (void)setPrimitiveDurationValue:(double)arg1;
- (void)setPrimitiveEmbeddedThumbnailHeightValue:(short)arg1;
- (void)setPrimitiveEmbeddedThumbnailLengthValue:(int)arg1;
- (void)setPrimitiveEmbeddedThumbnailOffsetValue:(int)arg1;
- (void)setPrimitiveEmbeddedThumbnailWidthValue:(short)arg1;
- (void)setPrimitiveFlaggedValue:(BOOL)arg1;
- (void)setPrimitiveHeightValue:(short)arg1;
- (void)setPrimitiveKindValue:(short)arg1;
- (void)setPrimitiveOrientationValue:(short)arg1;
- (void)setPrimitiveOriginalFilesizeValue:(int)arg1;
- (void)setPrimitiveOriginalOrientationValue:(short)arg1;
- (void)setPrimitiveThumbnailIndexValue:(int)arg1;
- (void)setPrimitiveWidthValue:(short)arg1;
- (void)setWidthValue:(short)arg1;
- (id)sidecarFilesSet;
- (short)widthValue;

@end
