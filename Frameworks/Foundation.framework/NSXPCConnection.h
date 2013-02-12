/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <NSObject>, NSObject<OS_dispatch_queue>, NSString, NSXPCInterface, NSXPCListenerEndpoint;

@interface NSXPCConnection : NSObject <NSXPCProxyCreating> {
    NSXPCListenerEndpoint *_endpoint;
    id _exportInfo;
    id _importInfo;
    NSObject<OS_dispatch_queue> *_internalQueue;
    id _interruptionHandler;
    id _invalidationHandler;
    id _lock;
    <NSObject> *_otherInfo;
    NSXPCInterface *_remoteObjectInterface;
    id _replyInfo;
    id _reserved1;
    id _reserved2;
    id _reserved3;
    NSString *_serviceName;
    unsigned long long _state;
    NSObject<OS_dispatch_queue> *_userQueue;
    void *_xconnection;
}

@property(readonly) int auditSessionIdentifier;
@property(readonly) unsigned int effectiveGroupIdentifier;
@property(readonly) unsigned int effectiveUserIdentifier;
@property(readonly) NSXPCListenerEndpoint * endpoint;
@property(retain) NSXPCInterface * exportedInterface;
@property(retain) id exportedObject;
@property(copy) id interruptionHandler;
@property(copy) id invalidationHandler;
@property(readonly) int processIdentifier;
@property(retain) NSXPCInterface * remoteObjectInterface;
@property(readonly) NSString * serviceName;

+ (void)beginTransaction;
+ (id)currentConnection;
+ (void)endTransaction;

- (void)_addProxy:(unsigned long long)arg1;
- (void)_decodeAndInvokeMessageWithData:(id)arg1;
- (void)_decodeAndInvokeReplyBlockWithData:(id)arg1;
- (id)_exportTable;
- (id)_initWithPeerConnection:(id)arg1 name:(id)arg2;
- (void)_removeProxy:(unsigned long long)arg1;
- (void)_sendDesistForProxyNumber:(unsigned long long)arg1;
- (void)_sendInvocation:(id)arg1 proxyNumber:(unsigned long long)arg2 remoteInterface:(id)arg3 withErrorHandler:(id)arg4 timeout:(double)arg5;
- (void)_sendInvocation:(id)arg1 proxyNumber:(unsigned long long)arg2 remoteInterface:(id)arg3 withErrorHandler:(id)arg4;
- (void)_sendInvocation:(id)arg1 proxyNumber:(unsigned long long)arg2 remoteInterface:(id)arg3;
- (void)_setUUID:(id)arg1;
- (int)auditSessionIdentifier;
- (struct { unsigned int x1[8]; })auditToken;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (unsigned int)effectiveGroupIdentifier;
- (unsigned int)effectiveUserIdentifier;
- (id)endpoint;
- (id)exportedInterface;
- (id)exportedObject;
- (void)finalize;
- (id)init;
- (id)initWithEndpoint:(id)arg1;
- (id)initWithListenerEndpoint:(id)arg1;
- (id)initWithMachServiceName:(id)arg1 options:(unsigned int)arg2;
- (id)initWithMachServiceName:(id)arg1;
- (id)initWithServiceName:(id)arg1;
- (id)interruptionHandler;
- (void)invalidate;
- (id)invalidationHandler;
- (int)processIdentifier;
- (id)remoteObjectInterface;
- (id)remoteObjectProxy;
- (id)remoteObjectProxyWithErrorHandler:(id)arg1;
- (id)remoteObjectProxyWithTimeout:(double)arg1 errorHandler:(id)arg2;
- (id)replacementObjectForEncoder:(id)arg1 object:(id)arg2;
- (void)resume;
- (id)serviceName;
- (void)setDelegate:(id)arg1;
- (void)setExportedInterface:(id)arg1;
- (void)setExportedObject:(id)arg1;
- (void)setInterruptionHandler:(id)arg1;
- (void)setInvalidationHandler:(id)arg1;
- (void)setOptions:(unsigned int)arg1;
- (void)setRemoteObjectInterface:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)start;
- (void)stop;
- (void)suspend;
- (id)userInfo;
- (id)valueForEntitlement:(id)arg1;

@end
