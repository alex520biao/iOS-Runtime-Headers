/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class IMDaemonListener, IMLocalObject, IMRemoteObject<IMRemoteDaemonProtocol>, NSArray, NSLock, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSProtocolChecker, NSString;

@interface IMDaemonController : NSObject {
    BOOL _acquiringDaemonConnection;
    BOOL _autoReconnect;
    NSLock *_blockingLock;
    BOOL _blocksConnectionAtResume;
    unsigned int _cachedCapabilities;
    NSLock *_connectionLock;
    IMDaemonListener *_daemonListener;
    id _delegate;
    unsigned int _gMyFZListenerCapabilities;
    BOOL _hasBeenSuspended;
    BOOL _hasCheckedForDaemon;
    BOOL _inBlockingConnect;
    unsigned int _lastUpdatedCapabilities;
    NSString *_listenerID;
    NSObject<OS_dispatch_queue> *_listenerLockQueue;
    NSMutableDictionary *_listenerMap;
    IMLocalObject *_localObject;
    NSObject<OS_dispatch_queue> *_localObjectLockQueue;
    BOOL _preventReconnect;
    NSProtocolChecker *_protocol;
    NSObject<OS_dispatch_queue> *_remoteDaemonLockQueue;
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;
    IMRemoteObject<IMRemoteDaemonProtocol> *_remoteObject;
    struct __CFRunLoopSource { } *_runLoopSource;
    NSMutableArray *_services;
    NSArray *_servicesToAllow;
    NSArray *_servicesToDeny;
}

@property(setter=_setAutoReconnect:) BOOL _autoReconnect;
@property(setter=_setBlocksConnectionAtResume:) BOOL _blocksConnectionAtResume;
@property(setter=__setCapabilities:) unsigned int _capabilities;
@property(setter=_setListenerID:,retain) NSString * _listenerID;
@property(readonly) NSObject<OS_dispatch_queue> * _remoteMessageQueue;
@property(setter=_setServicesToAllow:,retain) NSArray * _servicesToAllow;
@property(setter=_setServicesToDeny:,retain) NSArray * _servicesToDeny;
@property(readonly) unsigned int capabilities;
@property id delegate;
@property(readonly) BOOL isConnected;
@property(readonly) BOOL isConnecting;
@property(readonly) IMDaemonListener * listener;

+ (BOOL)_applicationWillTerminate;
+ (void)_blockUntilSendQueueIsEmpty;
+ (void)_setApplicationWillTerminate;
+ (id)sharedController;
+ (id)sharedInstance;

- (BOOL)__isLocalObjectValidOnQueue:(id)arg1;
- (BOOL)__isRemoteObjectValidOnQueue:(id)arg1;
- (void)__setCapabilities:(unsigned int)arg1;
- (BOOL)_acquiringDaemonConnection;
- (void)_addressBookChanged:(id)arg1;
- (void)_agentDidLaunchNotification:(id)arg1;
- (BOOL)_autoReconnect;
- (void)_blockUntilSendQueueIsEmpty;
- (BOOL)_blocksConnectionAtResume;
- (unsigned int)_capabilities;
- (void)_connectToDaemonWithLaunch:(BOOL)arg1 capabilities:(unsigned long long)arg2;
- (void)_handleDaemonException:(id)arg1;
- (id)_listenerID;
- (void)_listenerSetUpdated;
- (void)_localObjectCleanup;
- (BOOL)_makeConnectionWithLaunch:(BOOL)arg1 completionBlock:(id)arg2;
- (void)_noteSetupComplete;
- (id)_remoteMessageQueue;
- (id)_remoteObject;
- (void)_remoteObjectCleanup;
- (id)_servicesToAllow;
- (id)_servicesToDeny;
- (void)_setAutoReconnect:(BOOL)arg1;
- (void)_setBlocksConnectionAtResume:(BOOL)arg1;
- (void)_setCapabilities:(unsigned int)arg1;
- (void)_setListenerID:(id)arg1;
- (void)_setServicesToAllow:(id)arg1;
- (void)_setServicesToDeny:(id)arg1;
- (BOOL)addListenerID:(id)arg1 capabilities:(unsigned int)arg2;
- (void)blockUntilConnected;
- (unsigned int)capabilities;
- (unsigned int)capabilitiesForListenerID:(id)arg1;
- (BOOL)connectToDaemon;
- (BOOL)connectToDaemonWithLaunch:(BOOL)arg1 capabilities:(unsigned int)arg2 blockUntilConnected:(BOOL)arg3;
- (BOOL)connectToDaemonWithLaunch:(BOOL)arg1;
- (void)dealloc;
- (id)delegate;
- (void)disconnectFromDaemon;
- (void)disconnectFromDaemonWithForce:(BOOL)arg1;
- (void)forwardInvocation:(id)arg1;
- (BOOL)hasListenerForID:(id)arg1;
- (id)init;
- (BOOL)isConnected;
- (BOOL)isConnecting;
- (void)listener:(id)arg1 setListenerCapabilities:(unsigned int)arg2;
- (void)listener:(id)arg1 setValue:(id)arg2 ofPersistentProperty:(id)arg3;
- (void)listener:(id)arg1 setValue:(id)arg2 ofProperty:(id)arg3;
- (id)listener;
- (void)localObjectDiedNotification:(id)arg1;
- (BOOL)localObjectExists;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)remoteObjectDiedNotification:(id)arg1;
- (BOOL)remoteObjectExists;
- (BOOL)removeListenerID:(id)arg1;
- (void)sendABInformationToDaemon;
- (BOOL)setCapabilities:(unsigned int)arg1 forListenerID:(id)arg2;
- (void)setDaemonLogsOutWithoutStatusListeners:(BOOL)arg1;
- (void)setDaemonTerminatesWithoutListeners:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMyPicture:(id)arg1 smallPictureData:(id)arg2;
- (void)setMyProfile:(id)arg1;
- (void)setMyStatus:(unsigned int)arg1 message:(id)arg2 forAccount:(id)arg3;
- (void)setMyStatus:(unsigned int)arg1 message:(id)arg2;
- (void)setPresenceValue:(id)arg1 forKey:(id)arg2 forAccount:(id)arg3;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationWillEnterForeground;

@end
