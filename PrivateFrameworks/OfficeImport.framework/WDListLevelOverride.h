/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDDocument, WDListLevel;

@interface WDListLevelOverride : NSObject {
    WDDocument *mDocument;
    unsigned char mLevel;
    WDListLevel *mListLevel;
    long mStartNumber;
    BOOL mStartNumberOverridden;
}

- (void)dealloc;
- (id)document;
- (id)initWithDocument:(id)arg1;
- (BOOL)isListLevelOverridden;
- (BOOL)isStartNumberOverridden;
- (unsigned char)level;
- (id)listLevel;
- (id)mutableListLevel;
- (void)setLevel:(unsigned char)arg1;
- (void)setStartNumber:(long)arg1;
- (long)startNumber;

@end
