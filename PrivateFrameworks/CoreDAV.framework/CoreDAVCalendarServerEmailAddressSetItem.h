/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVItemWithNoChildren, NSMutableSet;

@interface CoreDAVCalendarServerEmailAddressSetItem : CoreDAVItem {
    NSMutableSet *_emailAddresses;
    CoreDAVItemWithNoChildren *_unauthenticated;
}

@property(retain) NSMutableSet * emailAddresses;
@property(retain) CoreDAVItemWithNoChildren * unauthenticated;

+ (id)copyParseRules;

- (void)addEmailAddress:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)emailAddresses;
- (id)init;
- (void)setEmailAddresses:(id)arg1;
- (void)setUnauthenticated:(id)arg1;
- (id)unauthenticated;

@end
