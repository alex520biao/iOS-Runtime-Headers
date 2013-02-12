/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@class NSData, NSDictionary, NSString;

@interface SBSCardItem : NSObject <NSCopying, NSCoding> {
    NSString *_body;
    NSString *_bundleName;
    NSData *_iconData;
    NSString *_identifier;
    BOOL _requiresPasscode;
    NSString *_title;
    NSDictionary *_userInfo;
}

@property(copy) NSString * body;
@property(copy) NSString * bundleName;
@property(copy) NSData * iconData;
@property(copy) NSString * identifier;
@property BOOL requiresPasscode;
@property(copy) NSString * title;
@property(copy) NSDictionary * userInfo;

- (id)body;
- (id)bundleName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)iconData;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 iconData:(id)arg2 title:(id)arg3 body:(id)arg4 classification:(int)arg5 bundleName:(id)arg6 userInfo:(id)arg7;
- (id)initWithIdentifier:(id)arg1 iconData:(id)arg2 title:(id)arg3 body:(id)arg4 requiresPasscode:(BOOL)arg5 bundleName:(id)arg6 userInfo:(id)arg7;
- (BOOL)isEqual:(id)arg1;
- (BOOL)requiresPasscode;
- (void)setBody:(id)arg1;
- (void)setBundleName:(id)arg1;
- (void)setIconData:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRequiresPasscode:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)sortDate;
- (id)title;
- (id)userInfo;

@end
