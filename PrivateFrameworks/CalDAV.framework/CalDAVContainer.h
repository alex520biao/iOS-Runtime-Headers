/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class ICSDuration, NSSet, NSString, NSTimeZone, NSURL;

@interface CalDAVContainer : CoreDAVContainer {
    NSString *_calendarColor;
    NSString *_calendarDescription;
    NSString *_calendarOrder;
    BOOL _canBePublished;
    BOOL _canBeShared;
    NSString *_ctag;
    NSString *_defaultAllDayAlarms;
    NSString *_defaultTimedAlarms;
    NSSet *_freeBusySet;
    BOOL _isScheduleTransparent;
    NSURL *_prePublishURL;
    NSURL *_publishURL;
    NSURL *_scheduleDefaultCalendarURL;
    NSSet *_sharees;
    NSURL *_source;
    ICSDuration *_subscribedRefreshRate;
    BOOL _subscribedStripAlarms;
    BOOL _subscribedStripAttachments;
    BOOL _subscribedStripTodos;
    NSSet *_supportedCalendarComponentSet;
    NSString *_supportedCalendarComponentSets;
    NSTimeZone *_timeZone;
    NSString *_xmppServer;
    NSString *_xmppURI;
}

@property(retain) NSString * calendarColor;
@property(retain) NSString * calendarDescription;
@property(retain) NSString * calendarOrder;
@property BOOL canBePublished;
@property BOOL canBeShared;
@property(retain) NSString * ctag;
@property(retain) NSString * defaultAllDayAlarms;
@property(retain) NSString * defaultTimedAlarms;
@property(retain) NSSet * freeBusySet;
@property(readonly) BOOL isCalendar;
@property(readonly) BOOL isEventContainer;
@property(readonly) BOOL isJournalContainer;
@property(readonly) BOOL isNotification;
@property(readonly) BOOL isPollContainer;
@property(readonly) BOOL isScheduleInbox;
@property(readonly) BOOL isScheduleOutbox;
@property BOOL isScheduleTransparent;
@property(readonly) BOOL isShared;
@property(readonly) BOOL isSharedOwner;
@property(readonly) BOOL isSubscribed;
@property(readonly) BOOL isTaskContainer;
@property(retain) NSURL * prePublishURL;
@property(retain) NSURL * publishURL;
@property(retain) NSURL * scheduleDefaultCalendarURL;
@property(retain) NSSet * sharees;
@property(retain) NSURL * source;
@property(retain) ICSDuration * subscribedRefreshRate;
@property BOOL subscribedStripAlarms;
@property BOOL subscribedStripAttachments;
@property BOOL subscribedStripTodos;
@property(retain) NSSet * supportedCalendarComponentSet;
@property(retain) NSString * supportedCalendarComponentSets;
@property(readonly) BOOL supportsFreebusy;
@property(retain) NSTimeZone * timeZone;
@property(retain) NSString * xmppServer;
@property(retain) NSString * xmppURI;

+ (id)copyPropertyMappingsForParser;

- (BOOL)_isComponentSupportedForString:(id)arg1;
- (void)_setTimeZoneFromProperties:(id)arg1 onCalendar:(id)arg2;
- (void)applyParsedProperties:(id)arg1;
- (id)calendarColor;
- (id)calendarDescription;
- (id)calendarOrder;
- (BOOL)canBePublished;
- (BOOL)canBeShared;
- (id)ctag;
- (void)dealloc;
- (id)defaultAllDayAlarms;
- (id)defaultTimedAlarms;
- (id)description;
- (id)freeBusySet;
- (BOOL)isCalendar;
- (BOOL)isEventContainer;
- (BOOL)isJournalContainer;
- (BOOL)isNotification;
- (BOOL)isPollContainer;
- (BOOL)isScheduleInbox;
- (BOOL)isScheduleOutbox;
- (BOOL)isScheduleTransparent;
- (BOOL)isShared;
- (BOOL)isSharedOwner;
- (BOOL)isSubscribed;
- (BOOL)isTaskContainer;
- (id)prePublishURL;
- (id)publishURL;
- (id)scheduleDefaultCalendarURL;
- (void)setCalendarColor:(id)arg1;
- (void)setCalendarDescription:(id)arg1;
- (void)setCalendarOrder:(id)arg1;
- (void)setCanBePublished:(BOOL)arg1;
- (void)setCanBeShared:(BOOL)arg1;
- (void)setCtag:(id)arg1;
- (void)setDefaultAllDayAlarms:(id)arg1;
- (void)setDefaultTimedAlarms:(id)arg1;
- (void)setFreeBusySet:(id)arg1;
- (void)setIsScheduleTransparent:(BOOL)arg1;
- (void)setPrePublishURL:(id)arg1;
- (void)setPublishURL:(id)arg1;
- (void)setScheduleDefaultCalendarURL:(id)arg1;
- (void)setSharees:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setSubscribedRefreshRate:(id)arg1;
- (void)setSubscribedStripAlarms:(BOOL)arg1;
- (void)setSubscribedStripAttachments:(BOOL)arg1;
- (void)setSubscribedStripTodos:(BOOL)arg1;
- (void)setSupportedCalendarComponentSet:(id)arg1;
- (void)setSupportedCalendarComponentSets:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setXmppServer:(id)arg1;
- (void)setXmppURI:(id)arg1;
- (id)sharees;
- (id)source;
- (id)subscribedRefreshRate;
- (BOOL)subscribedStripAlarms;
- (BOOL)subscribedStripAttachments;
- (BOOL)subscribedStripTodos;
- (id)supportedCalendarComponentSet;
- (id)supportedCalendarComponentSets;
- (BOOL)supportsFreebusy;
- (id)timeZone;
- (id)xmppServer;
- (id)xmppURI;

@end
