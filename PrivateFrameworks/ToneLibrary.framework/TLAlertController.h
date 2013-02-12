/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface TLAlertController : NSObject {
    NSMutableDictionary *_alertsBySoundIDs;
    NSObject<OS_dispatch_queue> *_alertsBySoundIDsAccessQueue;
}

@property(retain) NSMutableDictionary * alertsBySoundIDs;
@property(retain) NSObject<OS_dispatch_queue> * alertsBySoundIDsAccessQueue;

+ (id)sharedAlertController;

- (BOOL)_isPlayingAlert:(id)arg1;
- (BOOL)_playAlert:(id)arg1 completionHandler:(id)arg2 targetQueue:(id)arg3;
- (void)_removeSoundID:(unsigned long)arg1 shouldStopSound:(BOOL)arg2 fireCompletionBlock:(BOOL)arg3;
- (void)_stopAlert:(id)arg1;
- (BOOL)_stopAllAlerts;
- (void)_systemSoundDidFinishPlaying:(unsigned long)arg1;
- (id)alertsBySoundIDs;
- (id)alertsBySoundIDsAccessQueue;
- (void)dealloc;
- (id)init;
- (void)setAlertsBySoundIDs:(id)arg1;
- (void)setAlertsBySoundIDsAccessQueue:(id)arg1;
- (BOOL)stopAllAlerts;

@end
