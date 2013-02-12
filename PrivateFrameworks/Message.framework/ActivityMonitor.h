/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class InvocationQueue, MFError, MailboxUid, NSString, NSThread;

@interface ActivityMonitor : MFPriorityDesignator {
    unsigned int _key : 13;
    unsigned int _canCancel : 1;
    unsigned int _shouldCancel : 1;
    unsigned int _isActive : 1;
    unsigned int _supportsPerItemProgress : 1;
    unsigned int _changeCount : 8;
    unsigned int _currentCount;
    double _currentItemPercentDone;
    id _delegate;
    NSString *_descriptionString;
    NSString *_displayName;
    MFError *_error;
    unsigned int _expectedLength;
    unsigned int _gotNewMessagesState;
    double _lastTime;
    MailboxUid *_mailbox;
    unsigned int _maxCount;
    InvocationQueue *_ourQueue;
    double _percentDone;
    NSThread *_runningThread;
    double _startTime;
    NSString *_statusMessage;
    id _target;
    NSString *_taskName;
}

@property(retain) MailboxUid * mailbox;

+ (id)currentMonitor;
+ (void)destroyMonitor;

- (void)_didChange;
- (BOOL)_lockedAddActivityTarget:(id)arg1;
- (id)_ntsThrottledUserInfoDict;
- (int)acquireExclusiveAccessKey;
- (id)activityTarget;
- (id)activityTargets;
- (void)addActivityTarget:(id)arg1;
- (void)addActivityTargets:(id)arg1;
- (BOOL)canBeCancelled;
- (void)cancel;
- (void)cancelMessage;
- (int)changeCount;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)error;
- (unsigned int)expectedLength;
- (void)finishedActivity:(id)arg1;
- (unsigned int)gotNewMessagesState;
- (id)init;
- (BOOL)isActive;
- (id)mailbox;
- (void)notifyConnectionEstablished;
- (double)percentDone;
- (void)postActivityFinished:(id)arg1;
- (void)postActivityStarting;
- (void)postDidChangeWithUserInfo:(id)arg1;
- (id)primaryTarget;
- (void)relinquishExclusiveAccessKey:(int)arg1;
- (void)removeActivityTarget:(id)arg1;
- (void)reset;
- (void)setActivityTarget:(id)arg1;
- (void)setCanBeCancelled:(BOOL)arg1;
- (void)setCurrentCount:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayName:(id)arg1 maxCount:(unsigned int)arg2;
- (void)setDisplayName:(id)arg1;
- (void)setError:(id)arg1;
- (void)setExpectedLength:(unsigned int)arg1;
- (void)setGotNewMessagesState:(unsigned int)arg1;
- (void)setInvocationQueue:(id)arg1;
- (void)setMailbox:(id)arg1;
- (void)setMaxCount:(unsigned int)arg1;
- (void)setPercentDone:(double)arg1 withKey:(int)arg2;
- (void)setPercentDone:(double)arg1;
- (void)setPercentDoneOfCurrentItem:(double)arg1;
- (void)setPrimaryTarget:(id)arg1;
- (void)setShouldCancel:(BOOL)arg1;
- (void)setStatusMessage:(id)arg1 percentDone:(double)arg2 withKey:(int)arg3;
- (void)setStatusMessage:(id)arg1 percentDone:(double)arg2;
- (void)setStatusMessage:(id)arg1 withKey:(int)arg2;
- (void)setStatusMessage:(id)arg1;
- (void)setSupportsPerItemProgress:(BOOL)arg1;
- (void)setTaskName:(id)arg1;
- (BOOL)shouldCancel;
- (void)startActivity;
- (id)statusMessage;
- (id)taskName;
- (id)userInfoForNotification;

@end
