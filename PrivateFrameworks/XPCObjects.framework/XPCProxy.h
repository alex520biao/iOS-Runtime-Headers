/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <XPCProxyTarget>, NSArray, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>, Protocol;

@interface XPCProxy : NSObject <NSCopying> {
    NSObject<OS_xpc_object> *_connection;
    id _errorHandler;
    BOOL _invalidated;
    NSObject<OS_dispatch_queue> *_queue;
    Class _remoteClass;
    Protocol *_remoteProtocol;
    <XPCProxyTarget> *_target;
    BOOL _useTraditionalEncoder;
    NSArray *_whitelistedClassNames;
}

@property(readonly) NSObject<OS_xpc_object> * connection;
@property(copy) id errorHandler;
@property Class remoteClass;
@property Protocol * remoteProtocol;
@property <XPCProxyTarget> * target;
@property BOOL useTraditionalEncoder;

+ (void)initialize;

- (id)_awaitingReply;
- (id)_disconnectionInvocation;
- (id)_errorForXpcError:(id)arg1;
- (void)_getInvocationArgument:(void*)arg1 argumentType:(const char *)arg2 class:(Class*)arg3 forXpcArgument:(id)arg4 message:(id)arg5;
- (id)_invocationForMessage:(id)arg1;
- (id)_newMessageAndReplyHandler:(id*)arg1 forInvocation:(id)arg2;
- (id)_newXpcArgumentForInvocationArgumentAt:(void*)arg1 ofType:(const char *)arg2;
- (id)_newXpcEncodingForObject:(id)arg1;
- (id)_objectForXpcEncoding:(id)arg1;
- (id)_proxyDescription;
- (SEL)_selectorForMessage:(id)arg1;
- (id)connection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)disconnect;
- (id)errorHandler;
- (void)forwardInvocation:(id)arg1;
- (id)initWithConnection:(id)arg1 queue:(id)arg2 target:(id)arg3;
- (void)invalidate;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)proxyWithNewTarget:(id)arg1 label:(id)arg2;
- (id)proxyWithNewTarget:(id)arg1 queue:(id)arg2;
- (Class)remoteClass;
- (id)remoteProtocol;
- (void)restrictDecodingToWhitelistedClassNames:(id)arg1;
- (void)setErrorHandler:(id)arg1;
- (void)setRemoteClass:(Class)arg1;
- (void)setRemoteProtocol:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setUseTraditionalEncoder:(BOOL)arg1;
- (id)target;
- (BOOL)useTraditionalEncoder;

@end
