/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
 */

@class <XPCNSClientConnectionDelegate>, XPCClientConnection;

@interface XPCNSClientConnection : NSObject <XPCClientConnectionDelegate> {
    XPCClientConnection *_clientConnection;
    <XPCNSClientConnectionDelegate> *_delegate;
}

@property(readonly) <XPCNSClientConnectionDelegate> * delegate;

- (void).cxx_destruct;
- (void)XPCClientConnection:(id)arg1 didReceiveRequest:(id)arg2;
- (id)delegate;
- (id)initWithServiceName:(id)arg1 delegate:(id)arg2;
- (void)sendMessage:(id)arg1 data:(id)arg2 withHandler:(id)arg3;
- (void)sendMessageReliably:(id)arg1 data:(id)arg2 maxRetryCount:(int)arg3 withHandler:(id)arg4;
- (void)shutDownCompletionBlock:(id)arg1;

@end
