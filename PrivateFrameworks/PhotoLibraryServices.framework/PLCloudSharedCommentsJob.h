/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, NSDictionary, NSString;

@interface PLCloudSharedCommentsJob : PLCloudSharingJob {
    NSString *_albumGUID;
    NSString *_assetGUID;
    NSString *_commentGUID;
    int _jobType;
    NSArray *_msASComments;
    NSDictionary *_mstreamdInfoDictionary;
}

@property(retain) NSString * albumGUID;
@property(retain) NSString * assetGUID;
@property(retain) NSString * commentGUID;
@property int jobType;
@property(retain) NSArray * msASComments;
@property(retain) NSDictionary * mstreamdInfoDictionary;

+ (void)deleteSharedCommentFromServer:(id)arg1;
+ (id)directoryPathForInFlightComments:(BOOL)arg1;
+ (void)locallyProcessAddedComments:(id)arg1 assetGUID:(id)arg2 albumGUID:(id)arg3 info:(id)arg4;
+ (void)locallyProcessDeletedComments:(id)arg1 info:(id)arg2;
+ (void)publishCommentToServer:(id)arg1;

- (id)albumGUID;
- (id)assetGUID;
- (id)commentGUID;
- (int)daemonOperation;
- (void)dealloc;
- (id)description;
- (void)encodeToXPCObject:(id)arg1;
- (void)executeDeleteCommentFromServer;
- (void)executeProcessServerNotificationOfCommentChanges;
- (void)executePublishCommentToServer;
- (id)initFromXPCObject:(id)arg1;
- (int)jobType;
- (id)msASComments;
- (id)mstreamdInfoDictionary;
- (void)run;
- (void)runDaemonSide;
- (void)setAlbumGUID:(id)arg1;
- (void)setAssetGUID:(id)arg1;
- (void)setCommentGUID:(id)arg1;
- (void)setJobType:(int)arg1;
- (void)setMsASComments:(id)arg1;
- (void)setMstreamdInfoDictionary:(id)arg1;
- (BOOL)shouldArchiveXPCToDisk;

@end
