/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSArray, NSMutableArray, NSMutableData, NSMutableDictionary, RTFNSFont, RTFNSMutableParagraphStyle, RTFTextTable;

@interface RTFReaderState : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct _NSAttributeInfo { 
        unsigned int toUniCharEncoding; 
        unsigned int codePageEncoding; 
        RTFNSFont *font; 
        float fontSize; 
        float kern; 
        RTFNSMutableParagraphStyle *paraStyle; 
        unsigned int bold : 1; 
        unsigned int italic : 1; 
        unsigned int fontIsValid : 1; 
        unsigned int paraStyleIsValid : 1; 
        unsigned int kernIsValid : 1; 
        unsigned int attributesSameAsBefore : 1; 
        unsigned int multiByteEncoding : 1; 
        unsigned int unicodeAlternativeLength : 3; 
        unsigned int tabStopType : 4; 
        unsigned int curAttributesNeedsCopying : 1; 
        unsigned int paraStyleNeedsCopying : 1; 
        unsigned int hasWritingDirectionAttribute : 1; 
        unsigned int  : 16; 
    } _attributeInfo;
    NSMutableData *_attributeInfoStack;
    NSMutableArray *_attributesStack;
    float _bMargin;
    NSMutableDictionary *_curAttributes;
    unsigned int _currentBorderEdge;
    BOOL _currentBorderIsTable;
    int _currentColumn;
    int _currentDefinitionColumn;
    int _currentListLevel;
    int _currentListNumber;
    int _currentRow;
    NSMutableArray *_currentRowArray;
    BOOL _currentRowIsLast;
    RTFTextTable *_currentTable;
    unsigned long _defaultToUniCharEncoding;
    id _delegate;
    NSMutableDictionary *_documentInfoDictionary;
    BOOL _isRTLDocument;
    float _lMargin;
    unsigned int _level;
    NSMutableDictionary *_listDefinitions;
    NSMutableArray *_nestedTables;
    } _paperSize;
    NSMutableArray *_previousRowArray;
    RTFTextTable *_previousTable;
    float _rMargin;
    BOOL _setTableCells;
    float _tMargin;
    int _tableNestingLevel;
    NSArray *_textBlocks;
    int _viewKind;
    int _viewScale;
    } _viewSize;
}

- (void)_beginTableRow;
- (void)_clearTableCells;
- (BOOL)_currentTableCellIsPlaceholder;
- (void)_ensureTableCells;
- (void)_notifyEndParagraph;
- (void)_notifyEndTable;
- (void)_notifyEndTableCellWithCell:(id)arg1;
- (void)_notifyEndTableRow;
- (void)_notifyProcessString:(id)arg1;
- (void)_notifyStartParagraph;
- (void)_notifyStartTable;
- (void)_notifyStartTableCell;
- (void)_notifyStartTableRow;
- (void)_paragraphInTable;
- (void)_popTableState;
- (void)_pushTableState;
- (void)_setCurrentBorderEdge:(unsigned int)arg1 isTable:(BOOL)arg2;
- (void)_setTableCells;
- (void)_updateAttributes;
- (void)addListDefinition:(id)arg1 forKey:(int)arg2;
- (void)addOverride:(int)arg1 forKey:(int)arg2;
- (id)attributeForKey:(id)arg1;
- (int)baseWritingDirection;
- (BOOL)bold;
- (float)bottomMargin;
- (unsigned long)codePageEncoding;
- (id)currentAttributes;
- (unsigned int)currentBorderEdge;
- (BOOL)currentBorderIsTable;
- (int)currentListLevel;
- (int)currentListNumber;
- (id)currentParagraphStyle;
- (id)currentTable;
- (id)currentTableCell;
- (BOOL)currentTableCellIsPlaceholder;
- (void)dealloc;
- (id)defaultParagraphStyle;
- (unsigned long)defaultToUniCharEncoding;
- (id)documentInfoDictionary;
- (void)endParagraph;
- (void)endTableCell;
- (void)endTableCellDefinition;
- (void)endTableRow;
- (id)font;
- (float)fontSize;
- (BOOL)hasWritingDirectionAttribute;
- (id)initWithDelegate:(id)arg1;
- (BOOL)isLastTableRow;
- (BOOL)italic;
- (void)lastTableRow;
- (float)leftMargin;
- (unsigned int)level;
- (id)listDefinitions;
- (void)mergeTableCellsHorizontally;
- (void)mergeTableCellsVertically;
- (BOOL)multiByteEncoding;
- (id)mutableAttributes;
- (id)mutableParagraphStyle;
- (struct CGSize { float x1; float x2; })paperSize;
- (void)paragraphInTable;
- (void)popState;
- (void)processString:(id)arg1;
- (void)pushState;
- (void)removeAttributeForKey:(id)arg1;
- (float)rightMargin;
- (void)setAttribute:(id)arg1 forKey:(id)arg2;
- (void)setBaseWritingDirection:(int)arg1;
- (void)setBold:(BOOL)arg1;
- (void)setBottomMargin:(float)arg1;
- (void)setCodePageEncoding:(unsigned long)arg1;
- (void)setCurrentBorderEdge:(unsigned int)arg1 isTable:(BOOL)arg2;
- (void)setCurrentListLevel:(int)arg1;
- (void)setCurrentListNumber:(int)arg1;
- (void)setDefaultToUniCharEncoding:(unsigned long)arg1;
- (void)setFont:(id)arg1;
- (void)setFontIsValid:(BOOL)arg1;
- (void)setFontSize:(float)arg1;
- (void)setHasWritingDirectionAttribute:(BOOL)arg1;
- (void)setItalic:(BOOL)arg1;
- (void)setLeftMargin:(float)arg1;
- (void)setMultiByteEncoding:(BOOL)arg1;
- (void)setPaperSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setRightMargin:(float)arg1;
- (void)setTableFlags:(unsigned int)arg1;
- (void)setTableNestingLevel:(int)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setToUniCharEncoding:(unsigned long)arg1;
- (void)setTopMargin:(float)arg1;
- (void)setUnicodeAlternativeLength:(unsigned int)arg1;
- (void)setViewKind:(int)arg1;
- (void)setViewScale:(int)arg1;
- (void)setViewSize:(struct CGSize { float x1; float x2; })arg1;
- (void)startParagraph;
- (void)startTableRowDefinition;
- (unsigned long)toUniCharEncoding;
- (float)topMargin;
- (unsigned int)unicodeAlternativeLength;
- (struct CGSize { float x1; float x2; })viewSize;

@end
