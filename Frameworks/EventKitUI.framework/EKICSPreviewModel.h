/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKEventStore, NSArray, NSData, NSMutableArray;

@interface EKICSPreviewModel : NSObject {
    BOOL _actionsDisabled;
    NSData *_data;
    EKEventStore *_destStore;
    NSMutableArray *_importedEvents;
    unsigned int _options;
    EKEventStore *_tempStore;
    NSMutableArray *_unimportedEvents;
}

@property(readonly) BOOL actionsDisabled;
@property(readonly) NSArray * allEvents;
@property(readonly) EKEventStore * eventStore;
@property(readonly) int importedEventCount;
@property(readonly) NSArray * importedEvents;
@property(readonly) int totalEventCount;
@property(readonly) int unimportedEventCount;
@property(readonly) NSArray * unimportedEvents;

- (BOOL)actionsDisabled;
- (id)allEvents;
- (void)dealloc;
- (id)eventStore;
- (id)importAllIntoCalendar:(id)arg1;
- (id)importEvent:(id)arg1 intoCalendar:(id)arg2;
- (int)importedEventCount;
- (id)importedEvents;
- (id)initWithICSData:(id)arg1 eventStore:(id)arg2 options:(unsigned int)arg3;
- (int)totalEventCount;
- (int)unimportedEventCount;
- (id)unimportedEvents;

@end
