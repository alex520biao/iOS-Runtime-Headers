/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class <SSURLConnectionRequestDelegate>, NSURLRequest, SSURLRequestProperties;

@interface SSURLConnectionRequest : SSRequest <SSXPCCoding> {
    SSURLRequestProperties *_requestProperties;
}

@property(readonly) NSURLRequest * URLRequest;
@property <SSURLConnectionRequestDelegate> * delegate;
@property(readonly) SSURLRequestProperties * requestProperties;

- (id)URLRequest;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)init;
- (id)initWithRequestProperties:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)requestProperties;
- (id)sendSynchronousRequestReturningError:(id*)arg1;
- (BOOL)start;
- (void)startWithCompletionBlock:(id)arg1;
- (void)startWithConnectionResponseBlock:(id)arg1;

@end
