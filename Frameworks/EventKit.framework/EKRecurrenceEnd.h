/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate;

@interface EKRecurrenceEnd : NSObject <NSCopying> {
    NSDate *_endDate;
    NSUInteger _occurrenceCount;
}

@property(readonly) NSDate *endDate;
@property(readonly) NSUInteger occurrenceCount;

+ (id)recurrenceEndWithEndDate:(id)arg1;
+ (id)recurrenceEndWithOccurrenceCount:(NSUInteger)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (NSUInteger)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEndDate:(id)arg1;
- (id)initWithOccurrenceCount:(NSUInteger)arg1;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)occurrenceCount;
- (BOOL)usesEndDate;

@end