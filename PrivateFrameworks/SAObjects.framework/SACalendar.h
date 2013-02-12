/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSDate, NSString;

@interface SACalendar : AceObject <SAAceSerializable> {
}

@property(copy) NSDate * date;
@property(copy) NSString * timeZoneId;

+ (id)calendar;
+ (id)calendarWithDictionary:(id)arg1 context:(id)arg2;

- (id)afui_timeZone;
- (id)date;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setDate:(id)arg1;
- (void)setTimeZoneId:(id)arg1;
- (id)timeZoneId;

@end
