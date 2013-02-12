/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class CLLocation, NSArray, NSDate, NSNumber, NSSet, NSString, NSURL;

@interface PLSyncSaveJob : NSObject {
    NSSet *albumURIs;
    NSDate *creationDate;
    NSArray *facesInfo;
    BOOL isSyncComplete;
    BOOL isVideo;
    CLLocation *location;
    NSDate *modificationDate;
    NSURL *originalAssetURL;
    NSNumber *sortToken;
    NSString *uuid;
}

@property(copy) NSSet * albumURIs;
@property(copy) NSDate * creationDate;
@property(retain) NSArray * facesInfo;
@property BOOL isSyncComplete;
@property BOOL isVideo;
@property(copy) CLLocation * location;
@property(copy) NSDate * modificationDate;
@property(retain) NSURL * originalAssetURL;
@property(retain) NSNumber * sortToken;
@property(copy) NSString * uuid;

- (id)albumURIs;
- (id)creationDate;
- (void)dealloc;
- (id)description;
- (id)facesInfo;
- (id)initFromSerializedData:(id)arg1;
- (BOOL)isSyncComplete;
- (BOOL)isVideo;
- (id)location;
- (id)modificationDate;
- (id)originalAssetURL;
- (void)processFacesWithBlock:(id)arg1;
- (id)serializedData;
- (void)setAlbumURIs:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setFacesInfo:(id)arg1;
- (void)setIsSyncComplete:(BOOL)arg1;
- (void)setIsVideo:(BOOL)arg1;
- (void)setLocation:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setOriginalAssetURL:(id)arg1;
- (void)setSortToken:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)sortToken;
- (id)uuid;

@end
