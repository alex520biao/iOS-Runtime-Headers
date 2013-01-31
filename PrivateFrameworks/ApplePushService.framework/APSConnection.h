/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@class NSData, NSObject<OS_dispatch_source>, NSObject<OS_dispatch_queue>, NSMutableArray, NSObject<OS_xpc_object>, CUTWeakReference, <APSConnectionDelegate>, NSString, NSMutableDictionary, NSArray;

@interface APSConnection : NSObject  {
    CUTWeakReference *_delegateReference;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSString *_environmentName;
    NSData *_publicToken;
    unsigned int _messageSize;
    NSString *_connectionPortName;
    unsigned int _connectionPort;
    unsigned int _connectionServerPort;
    struct __CFMachPort { } *_connectionSeverCFMachPort;
    NSArray *_enabledTopics;
    NSArray *_ignoredTopics;
    NSMutableDictionary *_subtopics;
    BOOL _enableCriticalReliability;
    BOOL _enableStatusNotifications;
    BOOL _isConnected;
    NSMutableDictionary *_idsToOutgoingMessages;
    unsigned int _nextOutgoingMessageID;
    NSObject<OS_dispatch_queue> *_machQueue;
    NSObject<OS_dispatch_source> *_mach_source;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    BOOL _everHadDelegate;
    NSMutableArray *_queuedDelegateBlocks;
}

@property(readonly) NSData * publicToken;
@property unsigned int messageSize;
@property <APSConnectionDelegate> * delegate;
@property(readonly) NSObject<OS_dispatch_queue> * delegateQueue;
@property(readonly) NSObject<OS_dispatch_queue> * ivarQueue;

+ (struct __SecIdentity { }*)copyIdentity;
+ (void)requestCourierConnection;
+ (void)notifySafeToSendFilter;
+ (id)connectionsDebuggingState;
+ (double)keepAliveIntervalForEnvironmentName:(id)arg1;
+ (void)_setTokenState;
+ (void)_blockingXPCCallWithArgumentBlock:(id)arg1 resultHandler:(id)arg2;

- (void)_disconnect;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)_callDelegateOnIvarQueueWithBlock:(id)arg1;
- (void)setMessageSize:(unsigned int)arg1;
- (unsigned int)messageSize;
- (void)setSubtopic:(id)arg1 forEnabledTopic:(id)arg2;
- (void)setIgnoredTopics:(id)arg1;
- (id)initWithEnvironmentName:(id)arg1 queue:(id)arg2;
- (void)setEnableCriticalReliability:(BOOL)arg1;
- (void)_cancelConnection;
- (void)sendOutgoingMessage:(id)arg1;
- (void)cancelOutgoingMessage:(id)arg1;
- (void)setEnabledTopics:(id)arg1;
- (void)removeFromRunLoop;
- (id)publicToken;
- (id)initWithEnvironmentName:(id)arg1;
- (id)ivarQueue;
- (void)sendFakeMessage:(id)arg1;
- (BOOL)hasIdentity;
- (void)_deliverOutgoingMessageResultWithID:(unsigned int)arg1 error:(id)arg2;
- (void)_deliverPublicToken:(id)arg1;
- (void)_deliverMessage:(id)arg1;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2;
- (void)_sendOutgoingMessage:(id)arg1 fake:(BOOL)arg2;
- (void)_disconnectOnIvarQueue;
- (void)_cancelConnectionOnIvarQueue;
- (void)_connectIfNecessaryOnIvarQueue;
- (void)_deliverConnectionStatusChange:(BOOL)arg1;
- (void)_deliverPublicTokenOnIvarQueue:(id)arg1;
- (void)_setEnableStatusNotifications:(BOOL)arg1 sendToDaemon:(BOOL)arg2;
- (void)_setEnableCriticalReliability:(BOOL)arg1 sendToDaemon:(BOOL)arg2;
- (void)_setIgnoredTopics:(id)arg1 sendToDaemon:(BOOL)arg2;
- (void)_setEnabledTopics:(id)arg1 sendToDaemon:(BOOL)arg2;
- (void)_addEnableStatusNotificationsToXPCMessage:(id)arg1;
- (void)_addEnableCriticalReliabilityToXPCMessage:(id)arg1;
- (void)setEnableStatusNotifications:(BOOL)arg1;
- (void)_disconnectFromDealloc;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 queue:(id)arg3;
- (void)_connectIfNecessary;
- (void)scheduleInRunLoop:(id)arg1;
- (id)delegateQueue;
- (BOOL)isConnected;

@end