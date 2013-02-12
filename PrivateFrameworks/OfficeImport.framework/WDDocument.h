/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSDate, NSMutableArray, NSString, OADBackground, OADTheme, WDCitationTable, WDFontTable, WDListDefinitionTable, WDListTable, WDRevisionAuthorTable, WDStyleSheet, WDText;

@interface WDDocument : OCDDocument {
    unsigned int mMirrorMargins : 1;
    unsigned int mBorderSurroundHeader : 1;
    unsigned int mBorderSurroundFooter : 1;
    unsigned int mKinsokuStrict : 1;
    unsigned int mAutoHyphenate : 1;
    unsigned int mEvenAndOddHeaders : 1;
    unsigned int mGraphicsInHeaderFooter : 1;
    unsigned int mBookFold : 1;
    unsigned int mShowMarkup : 1;
    unsigned int mShowComments : 1;
    unsigned int mTrackChanges : 1;
    unsigned int mShowRevisionMarksOnScreen : 1;
    unsigned int mShowInsertionsAndDeletions : 1;
    unsigned int mShowFormatting : 1;
    unsigned int mShowOutline : 1;
    NSMutableArray *mChangeTrackingEditAuthors;
    NSMutableArray *mChangeTrackingEditDates;
    WDCitationTable *mCitationTable;
    NSDate *mCreationDate;
    unsigned short mDefaultTabWidth;
    OADBackground *mDocumentBackground;
    NSMutableArray *mDocumentImages;
    WDText *mEndnoteContinuationNotice;
    WDText *mEndnoteContinuationSeparator;
    int mEndnoteNumberFormat;
    int mEndnotePosition;
    int mEndnoteRestart;
    WDText *mEndnoteSeparator;
    WDFontTable *mFontTable;
    WDText *mFootnoteContinuationNotice;
    WDText *mFootnoteContinuationSeparator;
    int mFootnoteNumberFormat;
    unsigned short mFootnoteNumberingStart;
    int mFootnotePosition;
    int mFootnoteRestart;
    WDText *mFootnoteSeparator;
    int mGutterPosition;
    WDText *mImageBulletText;
    NSMutableArray *mImageBullets;
    NSString *mKinsokuAltBreakAfter;
    NSString *mKinsokuAltBreakBefore;
    WDListDefinitionTable *mListDefinitionTable;
    WDListTable *mListTable;
    NSString *mOleFilename;
    WDRevisionAuthorTable *mRevisionAuthorTable;
    NSMutableArray *mSections;
    WDStyleSheet *mStyleSheet;
    OADTheme *mTheme;
    NSString *mVersion;
    int mZIndexTotalForHeaderFooterText;
    int mZIndexTotalForMainText;
    short mZoomPercentage;
}

- (void)addChangeTrackingEditAtDate:(id)arg1 authorIndex:(int)arg2;
- (void)addCitation:(id)arg1 forID:(id)arg2;
- (id)addImageBulletText;
- (void)addImageBullets;
- (id)addList:(id)arg1;
- (id)addListDefinition;
- (void)addRevisionAuthor:(id)arg1;
- (id)addSection;
- (id)annotationBlockIterator;
- (id)annotationIterator;
- (id)applicationName;
- (BOOL)autoHyphenate;
- (BOOL)bookFold;
- (BOOL)borderSurroundFooter;
- (BOOL)borderSurroundHeader;
- (id)changeTrackingEditAuthors;
- (id)changeTrackingEditDates;
- (int)citationCount;
- (id)citationFor:(id)arg1;
- (id)creationDate;
- (void)dealloc;
- (unsigned short)defaultTabWidth;
- (id)documentBackground;
- (id)endnoteBlockIterator;
- (id)endnoteContinuationNotice;
- (id)endnoteContinuationSeparator;
- (id)endnoteIterator;
- (int)endnoteNumberFormat;
- (int)endnotePosition;
- (int)endnoteRestart;
- (id)endnoteSeparator;
- (BOOL)evenAndOddHeaders;
- (id)fontTable;
- (id)footnoteBlockIterator;
- (id)footnoteContinuationNotice;
- (id)footnoteContinuationSeparator;
- (id)footnoteIterator;
- (int)footnoteNumberFormat;
- (unsigned short)footnoteNumberingStart;
- (int)footnotePosition;
- (int)footnoteRestart;
- (id)footnoteSeparator;
- (BOOL)graphicsInHeaderFooter;
- (int)gutterPosition;
- (id)imageBulletParagraph;
- (id)imageBulletText;
- (id)imageBulletWithCharacterOffset:(int)arg1;
- (id)imageBullets;
- (id)init;
- (BOOL)isFromBinary;
- (id)kinsokuAltBreakAfter;
- (id)kinsokuAltBreakBefore;
- (BOOL)kinsokuStrict;
- (id)lastSection;
- (id)listAt:(int)arg1;
- (int)listCount;
- (id)listDefinitionAt:(int)arg1;
- (int)listDefinitionCount;
- (id)listDefinitionTable;
- (id)listDefinitionWithId:(int)arg1;
- (id)listTable;
- (id)mainBlocksIterator;
- (id)mainRunsIterator;
- (BOOL)mirrorMargins;
- (id)newAnnotationBlockIterator;
- (id)newAnnotationIterator;
- (id)newEndnoteBlockIterator;
- (id)newEndnoteIterator;
- (id)newFootnoteBlockIterator;
- (id)newFootnoteIterator;
- (id)newMainBlocksIterator;
- (id)newMainRunsIterator;
- (id)newSectionIterator;
- (id)oleFilename;
- (void)removeEmptySections;
- (int)revisionAuthorAddLookup:(id)arg1;
- (id)revisionAuthorAt:(int)arg1;
- (int)revisionAuthorCount;
- (id)revisionAuthorTable;
- (id)sectionAt:(int)arg1;
- (int)sectionCount;
- (id)sectionIterator;
- (id)sections;
- (void)setAutoHyphenate:(BOOL)arg1;
- (void)setBookFold:(BOOL)arg1;
- (void)setBorderSurroundFooter:(BOOL)arg1;
- (void)setBorderSurroundHeader:(BOOL)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDefaultTabWidth:(unsigned short)arg1;
- (void)setDocumentBackground:(id)arg1;
- (void)setEndnoteNumberFormat:(int)arg1;
- (void)setEndnotePosition:(int)arg1;
- (void)setEndnoteRestart:(int)arg1;
- (void)setEvenAndOddHeaders:(BOOL)arg1;
- (void)setFootnoteNumberFormat:(int)arg1;
- (void)setFootnoteNumberingStart:(unsigned short)arg1;
- (void)setFootnotePosition:(int)arg1;
- (void)setFootnoteRestart:(int)arg1;
- (void)setGraphicsInHeaderFooter:(BOOL)arg1;
- (void)setGutterPosition:(int)arg1;
- (void)setKinsokuAltBreakAfter:(id)arg1;
- (void)setKinsokuAltBreakBefore:(id)arg1;
- (void)setKinsokuStrict:(BOOL)arg1;
- (void)setMirrorMargins:(BOOL)arg1;
- (void)setOleFilename:(id)arg1;
- (void)setShowComments:(BOOL)arg1;
- (void)setShowFormatting:(BOOL)arg1;
- (void)setShowInsertionsAndDeletions:(BOOL)arg1;
- (void)setShowMarkup:(BOOL)arg1;
- (void)setShowOutline:(BOOL)arg1;
- (void)setShowRevisionMarksOnScreen:(BOOL)arg1;
- (void)setTrackChanges:(BOOL)arg1;
- (void)setVersion:(id)arg1;
- (void)setZIndexTotalForHeaderFooterText:(int)arg1;
- (void)setZIndexTotalForMainText:(int)arg1;
- (void)setZoomPercentage:(short)arg1;
- (BOOL)showComments;
- (BOOL)showFormatting;
- (BOOL)showInsertionsAndDeletions;
- (BOOL)showMarkup;
- (BOOL)showOutline;
- (BOOL)showRevisionMarksOnScreen;
- (id)styleSheet;
- (id)theme;
- (BOOL)trackChanges;
- (id)version;
- (int)zIndexTotalForHeaderFooterText;
- (int)zIndexTotalForMainText;
- (short)zoomPercentage;

@end
