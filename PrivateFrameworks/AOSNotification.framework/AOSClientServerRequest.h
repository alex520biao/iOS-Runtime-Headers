/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AOSNotification.framework/AOSNotification
 */

@class NSString;

@interface AOSClientServerRequest : NSObject {
    NSString *_requestType;
    id _response;
}

@property(retain) NSString * requestType;
@property(retain) id response;

- (id)requestData;
- (id)requestType;
- (id)response;
- (id)responseData;
- (void)runDaemonRequest;
- (void)setRequestType:(id)arg1;
- (void)setResponse:(id)arg1;

@end
