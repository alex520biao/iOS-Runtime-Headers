/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class PKPassLibrary;

@interface WLPassesStore : NSObject {
    PKPassLibrary *_cardLibrary;
}

- (void)addFakeBulletin;
- (void)cardAddedWithUniqueID:(id)arg1;
- (void)cardChangedWithUniqueID:(id)arg1;
- (void)cardRemovedWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2;
- (id)cardWithBundleID:(id)arg1 identifier:(id)arg2;
- (id)cards;
- (void)cardsWithHandler:(id)arg1;
- (void)dealloc;
- (void)fetchCardFromServerWithUniqueID:(id)arg1 handler:(id)arg2;
- (void)ingestCardData:(id)arg1 settings:(int)arg2 completionHandler:(id)arg3;
- (id)init;
- (void)introduceDatabaseIntegrityProblem;
- (void)nukeDatabaseAndExit;
- (void)removeCardWithUniqueID:(id)arg1;

@end
