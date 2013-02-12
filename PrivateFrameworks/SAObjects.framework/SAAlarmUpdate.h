/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSNumber, NSString, NSURL;

@interface SAAlarmUpdate : SABaseClientBoundCommand {
}

@property(copy) NSArray * addedFrequency;
@property(copy) NSURL * alarmId;
@property(copy) NSNumber * enabled;
@property(copy) NSNumber * hour;
@property(copy) NSString * label;
@property(copy) NSNumber * minute;
@property(copy) NSArray * removedFrequency;
@property(copy) NSURL * targetAppId;

+ (id)update;
+ (id)updateWithDictionary:(id)arg1 context:(id)arg2;

- (id)addedFrequency;
- (id)alarmId;
- (id)enabled;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)hour;
- (id)label;
- (id)minute;
- (id)removedFrequency;
- (BOOL)requiresResponse;
- (void)setAddedFrequency:(id)arg1;
- (void)setAlarmId:(id)arg1;
- (void)setEnabled:(id)arg1;
- (void)setHour:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setMinute:(id)arg1;
- (void)setRemovedFrequency:(id)arg1;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;

@end
