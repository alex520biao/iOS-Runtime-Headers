/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class ACAccount;

@interface ACDAccountChange : NSObject {
    ACAccount *_account;
    int _changeType;
    ACAccount *_oldAccount;
}

@property(retain) ACAccount * account;
@property int changeType;
@property(retain) ACAccount * oldAccount;

+ (id)changeWithChangeType:(int)arg1 account:(id)arg2 oldAccount:(id)arg3;

- (void).cxx_destruct;
- (id)account;
- (int)changeType;
- (id)initWithChangeType:(int)arg1 account:(id)arg2 oldAccount:(id)arg3;
- (id)oldAccount;
- (void)setAccount:(id)arg1;
- (void)setChangeType:(int)arg1;
- (void)setOldAccount:(id)arg1;

@end
