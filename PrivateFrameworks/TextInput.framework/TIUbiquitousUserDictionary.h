/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSDictionary, NSMutableDictionary, TIUserDictionaryController;

@interface TIUbiquitousUserDictionary : UIDocument {
    NSMutableDictionary *_inputStrings;
    NSDictionary *_topLevelDictionary;
    TIUserDictionaryController *delegate;
}

@property TIUserDictionaryController * delegate;

- (id)allWordsAsWordKeyPairs;
- (id)contentsForType:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)delegate;
- (void)documentStateChanged:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (BOOL)loadFromContents:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
- (void)mergeConflictEntries:(id)arg1 intoCurrentEntries:(id)arg2;
- (void)mergeRevisionsFromConflictVersions:(id)arg1;
- (void)mergeRevisionsFromDictionary:(id)arg1;
- (void)pullWordsFromDelegate;
- (void)pushWordsToDelegate;
- (void)setDelegate:(id)arg1;
- (id)setTarget:(id)arg1 forShortcut:(id)arg2;

@end
