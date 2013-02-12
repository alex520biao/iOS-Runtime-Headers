/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class <MSASAssetUploaderDelegate>, NSMutableArray, NSMutableDictionary;

@interface MSASAssetUploader : MSASAssetTransferer {
    NSMutableDictionary *_assetCollectionsToItemInFlightMap;
    NSMutableDictionary *_assetToAssetCollectionMap;
    BOOL _didEncounterNetworkConditionError;
    NSMutableArray *_finishedAssetCollections;
    NSMutableArray *_itemsInFlight;
    int _state;
}

@property(retain) NSMutableDictionary * assetCollectionsToItemInFlightMap;
@property(retain) NSMutableDictionary * assetToAssetCollectionMap;
@property <MSASAssetUploaderDelegate> * delegate;
@property BOOL didEncounterNetworkConditionError;
@property(retain) NSMutableArray * finishedAssetCollections;
@property(retain) NSMutableArray * itemsInFlight;
@property int state;

- (void).cxx_destruct;
- (void)MMCSEngine:(id)arg1 didFinishGettingAllAssetsContext:(id)arg2;
- (void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 context:(id)arg4 error:(id)arg5;
- (void)MMCSEngine:(id)arg1 didFinishPuttingAllAssetsContext:(id)arg2;
- (void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 context:(id)arg3 putReceipt:(id)arg4 error:(id)arg5;
- (void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4 context:(id)arg5;
- (void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4 context:(id)arg5;
- (id)_orphanedAssetCollectionError;
- (id)_pathForPersonID:(id)arg1;
- (void)_workQueueStop;
- (id)assetCollectionsToItemInFlightMap;
- (id)assetToAssetCollectionMap;
- (BOOL)didEncounterNetworkConditionError;
- (id)finishedAssetCollections;
- (id)itemsInFlight;
- (void)registerAssetCollections:(id)arg1 completionBlock:(id)arg2;
- (void)setAssetCollectionsToItemInFlightMap:(id)arg1;
- (void)setAssetToAssetCollectionMap:(id)arg1;
- (void)setDidEncounterNetworkConditionError:(BOOL)arg1;
- (void)setFinishedAssetCollections:(id)arg1;
- (void)setItemsInFlight:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (void)unregisterAssetCollections:(id)arg1 completionBlock:(id)arg2;
- (void)unregisterAssetCollections:(id)arg1;
- (void)workQueueCancel;
- (void)workQueueDidFinishWithItem:(id)arg1 error:(id)arg2;
- (void)workQueueGoIdle;
- (void)workQueueRegisterAssetCollections:(id)arg1 index:(unsigned int)arg2 results:(id)arg3 completionBlock:(id)arg4;
- (void)workQueueRegisterAssets:(id)arg1 index:(unsigned int)arg2 completionBlock:(id)arg3;
- (void)workQueueRetryOutstandingActivities;
- (void)workQueueShutDownCompletionBlock:(id)arg1;
- (void)workQueueStop;
- (void)workQueueStopTrackingItem:(id)arg1;
- (void)workQueueUploadNextBatch;

@end
