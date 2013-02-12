/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSLock, NSMutableArray, NSMutableSet, NSThread;

@interface MFNetworkController : NSObject {
    NSMutableSet *_calls;
    BOOL _data;
    BOOL _dns;
    unsigned int _flags;
    BOOL _hasCellDataCapability;
    BOOL _hasWiFiCapability;
    long _interface;
    BOOL _isRoamingAllowed;
    BOOL _isWiFiEnabled;
    NSLock *_lock;
    NSMutableArray *_observers;
    struct __SCNetworkReachability { } *_reachability;
    struct __CFRunLoop { } *_rl;
    struct __SCDynamicStore { } *_store;
    struct __CFRunLoopSource { } *_store_source;
    struct __CTServerConnection { } *_telephony;
    NSThread *_thread;
    struct __SCPreferences { } *_wiFiPreferences;
}

+ (id)networkAssertionWithIdentifier:(id)arg1;
+ (id)sharedInstance;

- (void)_checkKeys:(id)arg1 forStore:(struct __SCDynamicStore { }*)arg2;
- (void)_handleNotification:(id)arg1 info:(id)arg2 forConnection:(struct __CTServerConnection { }*)arg3;
- (void)_handleWiFiNotification:(unsigned int)arg1;
- (BOOL)_isNetworkUp_nts;
- (id)_networkAssertionWithIdentifier:(id)arg1;
- (struct { int x1; int x2; })_pollDataAndCallStatus_nts;
- (void)_setDataStatus_nts:(id)arg1;
- (void)_setFlags:(unsigned int)arg1 forReachability:(struct __SCNetworkReachability { }*)arg2;
- (void)_setUpTelephony_nts;
- (void)_tearDownTelephony_nts;
- (id)addNetworkObserverBlock:(id)arg1 queue:(id)arg2;
- (int)dataStatus;
- (void)dealloc;
- (BOOL)inAirplaneMode;
- (id)init;
- (void)invalidate;
- (BOOL)isDataAvailable;
- (BOOL)isFatPipe;
- (BOOL)isNetworkUp;
- (BOOL)isOnWWAN;
- (void)removeNetworkObserver:(id)arg1;

@end
