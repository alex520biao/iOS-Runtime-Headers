/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3Album : ML3Collection {
}

+ (id)allProperties;
+ (id)artworkCacheIDProperty;
+ (id)countingQueryForMPMediaEntityProperty:(id)arg1 library:(id)arg2 identifier:(long long)arg3;
+ (id)databaseTable;
+ (id)defaultOrderingProperties;
+ (id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2;
+ (void)initialize;
+ (id)joinClausesForProperty:(id)arg1;
+ (id)predisambiguatedProperties;
+ (id)propertiesForGroupingKey;
+ (id)propertyForMPMediaEntityProperty:(id)arg1;
+ (int)revisionTrackingCode;
+ (id)trackForeignPersistentID;

- (void)updateRepresentativeItem:(id)arg1 inLibrary:(id)arg2 withArtworkCacheID:(id)arg3;
- (void)updateTrackValues:(id)arg1;

@end
