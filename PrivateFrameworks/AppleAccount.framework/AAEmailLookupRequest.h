/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class AAAccount, NSArray;

@interface AAEmailLookupRequest : AARequest {
    AAAccount *_account;
    NSArray *_emailAddresses;
}

@property(retain) AAAccount * account;
@property(retain) NSArray * emailAddresses;

+ (Class)responseClass;

- (void).cxx_destruct;
- (id)account;
- (id)emailAddresses;
- (id)initWithAccount:(id)arg1 emailAddresses:(id)arg2;
- (id)initWithURLString:(id)arg1 account:(id)arg2 emailAddresses:(id)arg3;
- (void)setAccount:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (id)urlCredential;
- (id)urlRequest;
- (id)urlString;

@end
