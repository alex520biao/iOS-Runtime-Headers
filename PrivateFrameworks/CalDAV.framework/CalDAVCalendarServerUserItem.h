/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class CalDAVCalendarServerAccessItem, CoreDAVHrefItem, CoreDAVItemWithNoChildren, CoreDAVLeafItem, NSString, NSURL;

@interface CalDAVCalendarServerUserItem : CoreDAVItem {
    NSURL *_acceptedURL;
    CalDAVCalendarServerAccessItem *_access;
    CoreDAVLeafItem *_commonName;
    NSString *_firstName;
    CoreDAVHrefItem *_href;
    CoreDAVItemWithNoChildren *_inviteStatus;
    NSString *_lastName;
    CoreDAVLeafItem *_summary;
}

@property(retain) NSURL * acceptedURL;
@property(retain) CalDAVCalendarServerAccessItem * access;
@property(retain) CoreDAVLeafItem * commonName;
@property(retain) NSString * firstName;
@property(retain) CoreDAVHrefItem * href;
@property(retain) CoreDAVItemWithNoChildren * inviteStatus;
@property(retain) NSString * lastName;
@property(retain) CoreDAVLeafItem * summary;

- (id)acceptedURL;
- (id)access;
- (id)commonName;
- (id)copyParseRules;
- (void)dealloc;
- (id)description;
- (id)firstName;
- (id)href;
- (id)init;
- (id)initWithHREF:(id)arg1 commonName:(id)arg2 inviteStatus:(int)arg3 access:(int)arg4;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)inviteStatus;
- (id)lastName;
- (void)setAcceptedURL:(id)arg1;
- (void)setAcceptedURLItem:(id)arg1;
- (void)setAccess:(id)arg1;
- (void)setCommonName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFirstNameItem:(id)arg1;
- (void)setHref:(id)arg1;
- (void)setInviteStatus:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setLastNameItem:(id)arg1;
- (void)setSummary:(id)arg1;
- (id)summary;

@end
