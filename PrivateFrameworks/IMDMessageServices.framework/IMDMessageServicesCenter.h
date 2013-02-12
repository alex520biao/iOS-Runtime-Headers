/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMDMessageServices.framework/IMDMessageServices
 */

@class NSObject<OS_xpc_object>;

@interface IMDMessageServicesCenter : NSObject {
    NSObject<OS_xpc_object> *_connection;
}

+ (id)sharedInstance;

- (BOOL)_connect;
- (BOOL)_disconnect;
- (void)_disconnected;
- (void)_requestRoutingWithGUID:(id)arg1 chatGUID:(id)arg2 error:(unsigned int)arg3 handler:(id)arg4;
- (void)dealloc;
- (id)init;
- (void)requestRoutingForMessageGuid:(id)arg1 inChat:(id)arg2 error:(unsigned int)arg3 completionBlock:(id)arg4;
- (void)requestRoutingWithCompletion:(id)arg1;

@end
