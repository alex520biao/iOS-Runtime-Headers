/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKDispatchQueue, CKMultiDict, NSCache;

@interface CKPreviewManager : NSObject <IMSystemMonitorListener> {
    CKMultiDict *_pendingOperations;
    NSCache *_previewCache;
    CKDispatchQueue *_previewDispatchQueue;
}

@property(retain) CKMultiDict * pendingOperations;
@property(retain) NSCache * previewCache;
@property(retain) CKDispatchQueue * previewDispatchQueue;

+ (id)sharedPreviewManager;

- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)fileTransferRemoved:(id)arg1;
- (void)fileTransferUpdated:(id)arg1;
- (void)flushCacheForMediaObject:(id)arg1;
- (id)init;
- (id)pendingOperations;
- (void)prepareForResume;
- (void)prepareForSuspend;
- (id)previewCache;
- (id)previewDispatchQueue;
- (id)previewForMediaObject:(id)arg1 balloonOrientation:(int)arg2 highlighted:(BOOL)arg3;
- (void)resumePreviewDispatchQueue;
- (void)setPendingOperations:(id)arg1;
- (void)setPreviewCache:(id)arg1;
- (void)setPreviewDispatchQueue:(id)arg1;
- (void)suspendPreviewDispatchQueue;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidResumeForEventsOnly;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationDidSuspendForEventsOnly;

@end
