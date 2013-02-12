/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSArray, NSMutableArray, NSString;

@interface SSDownloadPolicy : NSObject <NSCoding, SSXPCCoding, NSCopying> {
    int _bagType;
    NSString *_downloadKind;
    NSMutableArray *_policyRules;
}

@property(readonly) int URLBagType;
@property(readonly) NSString * downloadKind;
@property(copy) NSArray * policyRules;

- (int)URLBagType;
- (id)_policyRuleForSizeLimit:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)downloadKind;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDownloadKind:(id)arg1 URLBagType:(int)arg2;
- (id)initWithNetworkConstraints:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)policyRules;
- (void)setPolicyRule:(id)arg1;
- (void)setPolicyRules:(id)arg1;
- (void)unionNetworkConstraints:(id)arg1;
- (void)unionPolicyRule:(id)arg1;

@end
