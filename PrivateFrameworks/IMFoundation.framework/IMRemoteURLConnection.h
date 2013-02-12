/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_xpc_object>, NSURLRequest;

@interface IMRemoteURLConnection : NSObject {
    id _block;
    NSObject<OS_xpc_object> *_connection;
    BOOL _forceCellularIfPossible;
    BOOL _loading;
    NSURLRequest *_request;
}

@property BOOL forceCellularIfPossible;

- (BOOL)_connect;
- (BOOL)_disconnect;
- (void)_disconnected;
- (void)cancel;
- (void)dealloc;
- (BOOL)forceCellularIfPossible;
- (id)initWithURLRequest:(id)arg1 completionBlock:(id)arg2;
- (void)load;
- (void)setForceCellularIfPossible:(BOOL)arg1;

@end
