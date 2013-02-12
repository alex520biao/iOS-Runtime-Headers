/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class <SSAuthorizationRequestDelegate>, NSNumber, NSString;

@interface SSAuthorizationRequest : SSRequest <SSXPCCoding> {
    NSNumber *_accountIdentifier;
    NSString *_keybagPath;
    id _token;
}

@property(readonly) NSNumber * accountIdentifier;
@property(readonly) id authorizationToken;
@property <SSAuthorizationRequestDelegate> * delegate;
@property(copy) NSString * keybagPath;

- (id)accountIdentifier;
- (id)authorizationToken;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)init;
- (id)initWithAuthorizationToken:(id)arg1 accountIdentifier:(id)arg2;
- (id)initWithXPCEncoding:(id)arg1;
- (id)keybagPath;
- (void)setKeybagPath:(id)arg1;
- (BOOL)start;
- (void)startWithAuthorizationResponseBlock:(id)arg1;
- (void)startWithCompletionBlock:(id)arg1;

@end
