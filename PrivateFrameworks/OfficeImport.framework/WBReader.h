/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableArray, TSUNoCopyDictionary, WBOfficeArtReaderState, WDDocument;

@interface WBReader : OCBReader {
    struct WrdBookmarkTable { int (**x1)(); int x2; struct ChVector<WrdBookmark *> { struct WrdBookmark {} **x_3_1_1; struct WrdBookmark {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; } *mAnnotationBookmarkTable;
    NSMutableArray *mAnnotationOwners;
    id mAnnotationRangeStart;
    struct WrdAnnotationTable { int (**x1)(); struct ChVector<WrdAnnotation *> { struct WrdAnnotation {} **x_2_1_1; struct WrdAnnotation {} **x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; } x2; } *mAnnotationTable;
    struct WrdBookmarkTable { int (**x1)(); int x2; struct ChVector<WrdBookmark *> { struct WrdBookmark {} **x_3_1_1; struct WrdBookmark {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; } *mBookmarkTable;
    struct WrdNoteTable { int (**x1)(); int x2; struct ChVector<WrdNote *> { struct WrdNote {} **x_3_1_1; struct WrdNote {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; } *mEndnoteTable;
    struct WrdEshObjectFactory { int (**x1)(); boolx2; } *mEshObjectFactory;
    struct WrdFieldPositionTable {} *mFieldPositionTables[8];
    struct WrdFileShapeAddressTable { int (**x1)(); int x2; struct ChVector<WrdFileShapeAddress *> { struct WrdFileShapeAddress {} **x_3_1_1; struct WrdFileShapeAddress {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; } *mFileShapeAddressHeaderTable;
    struct WrdFileShapeAddressTable { int (**x1)(); int x2; struct ChVector<WrdFileShapeAddress *> { struct WrdFileShapeAddress {} **x_3_1_1; struct WrdFileShapeAddress {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; } *mFileShapeAddressTable;
    struct WrdNoteTable { int (**x1)(); int x2; struct ChVector<WrdNote *> { struct WrdNote {} **x_3_1_1; struct WrdNote {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; } *mFootnoteTable;
    struct WrdStoryTable { int (**x1)(); int x2; struct ChVector<WrdStory *> { struct WrdStory {} **x_3_1_1; struct WrdStory {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; } *mHeaderStoryTable;
    TSUNoCopyDictionary *mIndexToFonts;
    TSUNoCopyDictionary *mIndexToStyles;
    struct WrdParagraphProperties { int (**x1)(); int (**x2)(); struct WrdParagraphPropertiesOverridden { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; unsigned int x_3_1_3 : 1; unsigned int x_3_1_4 : 1; unsigned int x_3_1_5 : 1; unsigned int x_3_1_6 : 1; unsigned int x_3_1_7 : 1; unsigned int x_3_1_8 : 1; unsigned int x_3_1_9 : 1; unsigned int x_3_1_10 : 1; unsigned int x_3_1_11 : 1; unsigned int x_3_1_12 : 1; unsigned int x_3_1_13 : 1; unsigned int x_3_1_14 : 1; unsigned int x_3_1_15 : 1; unsigned int x_3_1_16 : 1; unsigned int x_3_1_17 : 1; unsigned int x_3_1_18 : 1; unsigned int x_3_1_19 : 1; unsigned int x_3_1_20 : 1; unsigned int x_3_1_21 : 1; unsigned int x_3_1_22 : 1; unsigned int x_3_1_23 : 1; unsigned int x_3_1_24 : 1; unsigned int x_3_1_25 : 1; unsigned int x_3_1_26 : 1; unsigned int x_3_1_27 : 1; unsigned int x_3_1_28 : 1; unsigned int x_3_1_29 : 1; unsigned int x_3_1_30 : 1; unsigned int x_3_1_31 : 1; unsigned int x_3_1_32 : 1; unsigned int x_3_1_33 : 1; unsigned int x_3_1_34 : 1; unsigned int x_3_1_35 : 1; unsigned int x_3_1_36 : 1; unsigned int x_3_1_37 : 1; unsigned int x_3_1_38 : 1; unsigned int x_3_1_39 : 1; unsigned int x_3_1_40 : 1; unsigned int x_3_1_41 : 1; unsigned int x_3_1_42 : 1; unsigned int x_3_1_43 : 1; unsigned int x_3_1_44 : 1; unsigned int x_3_1_45 : 1; unsigned int x_3_1_46 : 1; unsigned int x_3_1_47 : 1; unsigned int x_3_1_48 : 1; unsigned int x_3_1_49 : 1; unsigned int x_3_1_50 : 1; unsigned int x_3_1_51 : 1; unsigned int x_3_1_52 : 1; unsigned int x_3_1_53 : 1; unsigned int x_3_1_54 : 1; unsigned int x_3_1_55 : 1; unsigned int x_3_1_56 : 1; unsigned int x_3_1_57 : 1; unsigned int x_3_1_58 : 1; unsigned int x_3_1_59 : 1; unsigned int x_3_1_60 : 1; unsigned int x_3_1_61 : 1; unsigned int x_3_1_62 : 1; unsigned int x_3_1_63 : 1; unsigned int x_3_1_64 : 1; unsigned int x_3_1_65 : 1; unsigned int x_3_1_66 : 1; unsigned int x_3_1_67 : 1; unsigned int x_3_1_68 : 1; unsigned int x_3_1_69 : 1; unsigned int x_3_1_70 : 1; unsigned int x_3_1_71 : 1; unsigned int x_3_1_72 : 1; unsigned int x_3_1_73 : 1; unsigned int x_3_1_74 : 1; unsigned int x_3_1_75 : 1; unsigned int x_3_1_76 : 1; unsigned int x_3_1_77 : 1; unsigned int x_3_1_78 : 1; unsigned int x_3_1_79 : 1; unsigned int x_3_1_80 : 1; } x3; struct WrdShading {} *x4; struct WrdLineSpaceDescriptor {} *x5; struct WrdDropCap {} *x6; struct WrdBorder {} *x7; struct WrdBorder {} *x8; struct WrdBorder {} *x9; struct WrdBorder {} *x10; struct WrdBorder {} *x11; struct WrdBorder {} *x12; struct WrdAutoNumberListDescriptor {} *x13; struct WrdDateTime {} *x14; struct WrdNumberRevisionMarkData {} *x15; struct WrdTabDescriptor {} *x16; short x17; short x18; unsigned short x19; unsigned short x20; unsigned short x21; int x22; int x23; int x24; int x25; int x26; int x27; int x28; int x29; struct ChVector<WrdTabDescriptor *> { struct WrdTabDescriptor {} **x_30_1_1; struct WrdTabDescriptor {} **x_30_1_2; unsigned int x_30_1_3; unsigned int x_30_1_4; unsigned int x_30_1_5; } x30; short *x31; short *x32; short *x33; int x34; int x35; int x36; int x37; int x38; int x39; int x40; int x41; int x42; int x43; int x44; int x45; unsigned int x46; unsigned int x47; short x48; short x49; short x50; short x51; short x52; unsigned short x53; unsigned short x54; unsigned short x55; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; unsigned int x61 : 1; unsigned int x62 : 1; unsigned int x63 : 1; unsigned int x64 : 1; unsigned int x65 : 1; unsigned int x66 : 1; unsigned int x67 : 1; unsigned int x68 : 1; unsigned int x69 : 1; unsigned int x70 : 1; unsigned int x71 : 1; unsigned int x72 : 1; unsigned int x73 : 1; unsigned int x74 : 1; unsigned int x75 : 1; unsigned int x76 : 1; unsigned int x77 : 1; unsigned int x78 : 1; unsigned int x79 : 1; unsigned int x80 : 1; unsigned int x81 : 1; unsigned int x82 : 1; unsigned int x83 : 1; unsigned int x84 : 1; unsigned int x85 : 1; unsigned char x86; unsigned char x87; unsigned char x88; unsigned char x89; } *mLastRowParagraphProperties;
    WBOfficeArtReaderState *mOfficeArtState;
    BOOL mReportProgress;
    struct WrdStoryTable { int (**x1)(); int x2; struct ChVector<WrdStory *> { struct WrdStory {} **x_3_1_1; struct WrdStory {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; } *mStoryTable;
    struct WrdCPTableHeaders { int (**x1)(); struct ChVector<long> { long *x_2_1_1; long *x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; } x2; } *mTableHeaders;
    WDDocument *mTargetDocument;
    struct vector<WBTextBoxReaderInfo, std::allocator<WBTextBoxReaderInfo> > { struct _Vector_impl { struct WBTextBoxReaderInfo {} *x_1_1_1; struct WBTextBoxReaderInfo {} *x_1_1_2; struct WBTextBoxReaderInfo {} *x_1_1_3; } x1; } *mTextBoxes;
}

@property WDDocument * targetDocument;

- (struct WrdEshObjectFactory { int (**x1)(); boolx2; }*)eshObjectFactory;
- (struct WrdBinaryReader { int (**x1)(); int (**x2)(); struct EshObjectFactory {} *x3; int (**x4)(); struct WrdParser {} *x5; struct WrdEshReader { int (**x_6_1_1)(); struct SsrwOOStream {} *x_6_1_2; struct EshParserVisitor {} *x_6_1_3; struct EshObjectFactory {} *x_6_1_4; unsigned int x_6_1_5; unsigned int x_6_1_6; struct ChStack<EshHeader> { struct EshHeader {} *x_7_2_1; struct EshHeader {} *x_7_2_2; unsigned int x_7_2_3; unsigned int x_7_2_4; unsigned int x_7_2_5; } x_6_1_7; unsigned int x_6_1_8; struct EshHeader { int x_9_2_1; unsigned int x_9_2_2; short x_9_2_3; unsigned short x_9_2_4; unsigned char x_9_2_5; } x_6_1_9; boolx_6_1_10; } x6; struct WrdRdrText {} *x7; struct WrdBinTable {} *x8; struct WrdPAPXFKP {} *x9; unsigned int x10; struct WrdBinTable {} *x11; struct WrdCHPXFKP {} *x12; unsigned int x13; int x14; struct WrdSectionDescriptorTable {} *x15; struct WrdStyleSheet {} *x16; struct WrdEmbeddedTTFRecordTable {} *x17; struct WrdDocumentFileRecord {} *x18; struct ChMap<unsigned long, unsigned long, CsLess<unsigned long> > { struct map<unsigned long, unsigned long, CsLess<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>> > { struct _Rb_tree<unsigned long, std::pair<const unsigned long, unsigned long>, std::_Select1st<std::pair<const unsigned long, unsigned long>>, CsLess<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>> > { struct _Rb_tree_impl<CsLess<unsigned long>, false> { struct CsLess<unsigned long> { } x_1_4_1; struct _Rb_tree_node_base { int x_2_5_1; struct _Rb_tree_node_base {} *x_2_5_2; struct _Rb_tree_node_base {} *x_2_5_3; struct _Rb_tree_node_base {} *x_2_5_4; } x_1_4_2; unsigned int x_1_4_3; } x_1_3_1; } x_1_2_1; } x_19_1_1; } x19[8]; struct ChMap<unsigned long, unsigned long, CsLess<unsigned long> > { struct map<unsigned long, unsigned long, CsLess<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>> > { struct _Rb_tree<unsigned long, std::pair<const unsigned long, unsigned long>, std::_Select1st<std::pair<const unsigned long, unsigned long>>, CsLess<unsigned long>, std::allocator<std::pair<const unsigned long, unsigned long>> > { struct _Rb_tree_impl<CsLess<unsigned long>, false> { struct CsLess<unsigned long> { } x_1_4_1; struct _Rb_tree_node_base { int x_2_5_1; struct _Rb_tree_node_base {} *x_2_5_2; struct _Rb_tree_node_base {} *x_2_5_3; struct _Rb_tree_node_base {} *x_2_5_4; } x_1_4_2; unsigned int x_1_4_3; } x_1_3_1; } x_1_2_1; } x_20_1_1; } x20[8]; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; int x25; struct WrdText { int (**x_26_1_1)(); struct OcText { int (**x_2_2_1)(); int x_2_2_2; unsigned int x_2_2_3; unsigned int x_2_2_4; unsigned int x_2_2_5; char *x_2_2_6; char *x_2_2_7; boolx_2_2_8; } x_26_1_2; int x_26_1_3; } x26; struct WrdEmbeddedTrueTypeFont {} *x27; }*)wrdReader;
- (struct WrdParagraphProperties { int (**x1)(); int (**x2)(); struct WrdParagraphPropertiesOverridden { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; unsigned int x_3_1_3 : 1; unsigned int x_3_1_4 : 1; unsigned int x_3_1_5 : 1; unsigned int x_3_1_6 : 1; unsigned int x_3_1_7 : 1; unsigned int x_3_1_8 : 1; unsigned int x_3_1_9 : 1; unsigned int x_3_1_10 : 1; unsigned int x_3_1_11 : 1; unsigned int x_3_1_12 : 1; unsigned int x_3_1_13 : 1; unsigned int x_3_1_14 : 1; unsigned int x_3_1_15 : 1; unsigned int x_3_1_16 : 1; unsigned int x_3_1_17 : 1; unsigned int x_3_1_18 : 1; unsigned int x_3_1_19 : 1; unsigned int x_3_1_20 : 1; unsigned int x_3_1_21 : 1; unsigned int x_3_1_22 : 1; unsigned int x_3_1_23 : 1; unsigned int x_3_1_24 : 1; unsigned int x_3_1_25 : 1; unsigned int x_3_1_26 : 1; unsigned int x_3_1_27 : 1; unsigned int x_3_1_28 : 1; unsigned int x_3_1_29 : 1; unsigned int x_3_1_30 : 1; unsigned int x_3_1_31 : 1; unsigned int x_3_1_32 : 1; unsigned int x_3_1_33 : 1; unsigned int x_3_1_34 : 1; unsigned int x_3_1_35 : 1; unsigned int x_3_1_36 : 1; unsigned int x_3_1_37 : 1; unsigned int x_3_1_38 : 1; unsigned int x_3_1_39 : 1; unsigned int x_3_1_40 : 1; unsigned int x_3_1_41 : 1; unsigned int x_3_1_42 : 1; unsigned int x_3_1_43 : 1; unsigned int x_3_1_44 : 1; unsigned int x_3_1_45 : 1; unsigned int x_3_1_46 : 1; unsigned int x_3_1_47 : 1; unsigned int x_3_1_48 : 1; unsigned int x_3_1_49 : 1; unsigned int x_3_1_50 : 1; unsigned int x_3_1_51 : 1; unsigned int x_3_1_52 : 1; unsigned int x_3_1_53 : 1; unsigned int x_3_1_54 : 1; unsigned int x_3_1_55 : 1; unsigned int x_3_1_56 : 1; unsigned int x_3_1_57 : 1; unsigned int x_3_1_58 : 1; unsigned int x_3_1_59 : 1; unsigned int x_3_1_60 : 1; unsigned int x_3_1_61 : 1; unsigned int x_3_1_62 : 1; unsigned int x_3_1_63 : 1; unsigned int x_3_1_64 : 1; unsigned int x_3_1_65 : 1; unsigned int x_3_1_66 : 1; unsigned int x_3_1_67 : 1; unsigned int x_3_1_68 : 1; unsigned int x_3_1_69 : 1; unsigned int x_3_1_70 : 1; unsigned int x_3_1_71 : 1; unsigned int x_3_1_72 : 1; unsigned int x_3_1_73 : 1; unsigned int x_3_1_74 : 1; unsigned int x_3_1_75 : 1; unsigned int x_3_1_76 : 1; unsigned int x_3_1_77 : 1; unsigned int x_3_1_78 : 1; unsigned int x_3_1_79 : 1; unsigned int x_3_1_80 : 1; } x3; struct WrdShading {} *x4; struct WrdLineSpaceDescriptor {} *x5; struct WrdDropCap {} *x6; struct WrdBorder {} *x7; struct WrdBorder {} *x8; struct WrdBorder {} *x9; struct WrdBorder {} *x10; struct WrdBorder {} *x11; struct WrdBorder {} *x12; struct WrdAutoNumberListDescriptor {} *x13; struct WrdDateTime {} *x14; struct WrdNumberRevisionMarkData {} *x15; struct WrdTabDescriptor {} *x16; short x17; short x18; unsigned short x19; unsigned short x20; unsigned short x21; int x22; int x23; int x24; int x25; int x26; int x27; int x28; int x29; struct ChVector<WrdTabDescriptor *> { struct WrdTabDescriptor {} **x_30_1_1; struct WrdTabDescriptor {} **x_30_1_2; unsigned int x_30_1_3; unsigned int x_30_1_4; unsigned int x_30_1_5; } x30; short *x31; short *x32; short *x33; int x34; int x35; int x36; int x37; int x38; int x39; int x40; int x41; int x42; int x43; int x44; int x45; unsigned int x46; unsigned int x47; short x48; short x49; short x50; short x51; short x52; unsigned short x53; unsigned short x54; unsigned short x55; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; unsigned int x61 : 1; unsigned int x62 : 1; unsigned int x63 : 1; unsigned int x64 : 1; unsigned int x65 : 1; unsigned int x66 : 1; unsigned int x67 : 1; unsigned int x68 : 1; unsigned int x69 : 1; unsigned int x70 : 1; unsigned int x71 : 1; unsigned int x72 : 1; unsigned int x73 : 1; unsigned int x74 : 1; unsigned int x75 : 1; unsigned int x76 : 1; unsigned int x77 : 1; unsigned int x78 : 1; unsigned int x79 : 1; unsigned int x80 : 1; unsigned int x81 : 1; unsigned int x82 : 1; unsigned int x83 : 1; unsigned int x84 : 1; unsigned int x85 : 1; unsigned char x86; unsigned char x87; unsigned char x88; unsigned char x89; }*)lastRowParagraphProperties;
- (struct WrdBookmarkTable { int (**x1)(); int x2; struct ChVector<WrdBookmark *> { struct WrdBookmark {} **x_3_1_1; struct WrdBookmark {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)annotationBookmarkTable;
- (struct WrdBookmarkTable { int (**x1)(); int x2; struct ChVector<WrdBookmark *> { struct WrdBookmark {} **x_3_1_1; struct WrdBookmark {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)bookmarkTable;
- (struct WrdFieldPositionTable { int (**x1)(); int x2; struct ChVector<WrdFieldPosition *> { struct WrdFieldPosition {} **x_3_1_1; struct WrdFieldPosition {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)fieldPositionTableForTextType:(int)arg1;
- (struct WrdFileShapeAddressTable { int (**x1)(); int x2; struct ChVector<WrdFileShapeAddress *> { struct WrdFileShapeAddress {} **x_3_1_1; struct WrdFileShapeAddress {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)fileShapeAddressHeaderTable;
- (struct WrdFileShapeAddressTable { int (**x1)(); int x2; struct ChVector<WrdFileShapeAddress *> { struct WrdFileShapeAddress {} **x_3_1_1; struct WrdFileShapeAddress {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)fileShapeAddressTable;
- (struct WrdNoteTable { int (**x1)(); int x2; struct ChVector<WrdNote *> { struct WrdNote {} **x_3_1_1; struct WrdNote {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)endnoteTable;
- (struct WrdNoteTable { int (**x1)(); int x2; struct ChVector<WrdNote *> { struct WrdNote {} **x_3_1_1; struct WrdNote {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)footnoteTable;
- (struct WrdStoryTable { int (**x1)(); int x2; struct ChVector<WrdStory *> { struct WrdStory {} **x_3_1_1; struct WrdStory {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)headerStoryTable;
- (struct WrdStoryTable { int (**x1)(); int x2; struct ChVector<WrdStory *> { struct WrdStory {} **x_3_1_1; struct WrdStory {} **x_3_1_2; unsigned int x_3_1_3; unsigned int x_3_1_4; unsigned int x_3_1_5; } x3; }*)storyTable;
- (struct WrdAnnotationTable { int (**x1)(); struct ChVector<WrdAnnotation *> { struct WrdAnnotation {} **x_2_1_1; struct WrdAnnotation {} **x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; } x2; }*)annotationTable;
- (struct WrdCPTableHeaders { int (**x1)(); struct ChVector<long> { long *x_2_1_1; long *x_2_1_2; unsigned int x_2_1_3; unsigned int x_2_1_4; unsigned int x_2_1_5; } x2; }*)tableHeaders;
- (struct OCCBinaryStreamer { int (**x1)(); struct OCCCryptoKey {} *x2; char *x3; }*)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey { }*)arg1 baseOutputFilenameInUTF8:(const char *)arg2;
- (struct OCCEncryptionInfoReader { int (**x1)(); }*)encryptionInfoReader;
- (void)addFont:(id)arg1 index:(int)arg2;
- (void)addStyle:(id)arg1 index:(int)arg2;
- (id)annotationOwner:(int)arg1;
- (id)annotationRangeStart;
- (void)cacheTextBox:(id)arg1 withChainIndex:(unsigned short)arg2;
- (void)dealloc;
- (id)drawableForShapeId:(unsigned int)arg1;
- (id)fontAtIndex:(int)arg1;
- (id)initWithCancelDelegate:(id)arg1 tracing:(id)arg2;
- (void)initialize;
- (id)officeArtState;
- (id)read;
- (id)readCharactersForTextRun:(struct WrdTextRun { int (**x1)(); int x2; unsigned int x3; unsigned int x4; }*)arg1;
- (id)readCharactersFrom:(unsigned long)arg1 to:(unsigned long)arg2 textType:(int)arg3;
- (BOOL)reportProgress;
- (void)setAnnotationRangeStart:(id)arg1;
- (void)setLastRowParagraphProperties:(struct WrdParagraphProperties { int (**x1)(); int (**x2)(); struct WrdParagraphPropertiesOverridden { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; unsigned int x_3_1_3 : 1; unsigned int x_3_1_4 : 1; unsigned int x_3_1_5 : 1; unsigned int x_3_1_6 : 1; unsigned int x_3_1_7 : 1; unsigned int x_3_1_8 : 1; unsigned int x_3_1_9 : 1; unsigned int x_3_1_10 : 1; unsigned int x_3_1_11 : 1; unsigned int x_3_1_12 : 1; unsigned int x_3_1_13 : 1; unsigned int x_3_1_14 : 1; unsigned int x_3_1_15 : 1; unsigned int x_3_1_16 : 1; unsigned int x_3_1_17 : 1; unsigned int x_3_1_18 : 1; unsigned int x_3_1_19 : 1; unsigned int x_3_1_20 : 1; unsigned int x_3_1_21 : 1; unsigned int x_3_1_22 : 1; unsigned int x_3_1_23 : 1; unsigned int x_3_1_24 : 1; unsigned int x_3_1_25 : 1; unsigned int x_3_1_26 : 1; unsigned int x_3_1_27 : 1; unsigned int x_3_1_28 : 1; unsigned int x_3_1_29 : 1; unsigned int x_3_1_30 : 1; unsigned int x_3_1_31 : 1; unsigned int x_3_1_32 : 1; unsigned int x_3_1_33 : 1; unsigned int x_3_1_34 : 1; unsigned int x_3_1_35 : 1; unsigned int x_3_1_36 : 1; unsigned int x_3_1_37 : 1; unsigned int x_3_1_38 : 1; unsigned int x_3_1_39 : 1; unsigned int x_3_1_40 : 1; unsigned int x_3_1_41 : 1; unsigned int x_3_1_42 : 1; unsigned int x_3_1_43 : 1; unsigned int x_3_1_44 : 1; unsigned int x_3_1_45 : 1; unsigned int x_3_1_46 : 1; unsigned int x_3_1_47 : 1; unsigned int x_3_1_48 : 1; unsigned int x_3_1_49 : 1; unsigned int x_3_1_50 : 1; unsigned int x_3_1_51 : 1; unsigned int x_3_1_52 : 1; unsigned int x_3_1_53 : 1; unsigned int x_3_1_54 : 1; unsigned int x_3_1_55 : 1; unsigned int x_3_1_56 : 1; unsigned int x_3_1_57 : 1; unsigned int x_3_1_58 : 1; unsigned int x_3_1_59 : 1; unsigned int x_3_1_60 : 1; unsigned int x_3_1_61 : 1; unsigned int x_3_1_62 : 1; unsigned int x_3_1_63 : 1; unsigned int x_3_1_64 : 1; unsigned int x_3_1_65 : 1; unsigned int x_3_1_66 : 1; unsigned int x_3_1_67 : 1; unsigned int x_3_1_68 : 1; unsigned int x_3_1_69 : 1; unsigned int x_3_1_70 : 1; unsigned int x_3_1_71 : 1; unsigned int x_3_1_72 : 1; unsigned int x_3_1_73 : 1; unsigned int x_3_1_74 : 1; unsigned int x_3_1_75 : 1; unsigned int x_3_1_76 : 1; unsigned int x_3_1_77 : 1; unsigned int x_3_1_78 : 1; unsigned int x_3_1_79 : 1; unsigned int x_3_1_80 : 1; } x3; struct WrdShading {} *x4; struct WrdLineSpaceDescriptor {} *x5; struct WrdDropCap {} *x6; struct WrdBorder {} *x7; struct WrdBorder {} *x8; struct WrdBorder {} *x9; struct WrdBorder {} *x10; struct WrdBorder {} *x11; struct WrdBorder {} *x12; struct WrdAutoNumberListDescriptor {} *x13; struct WrdDateTime {} *x14; struct WrdNumberRevisionMarkData {} *x15; struct WrdTabDescriptor {} *x16; short x17; short x18; unsigned short x19; unsigned short x20; unsigned short x21; int x22; int x23; int x24; int x25; int x26; int x27; int x28; int x29; struct ChVector<WrdTabDescriptor *> { struct WrdTabDescriptor {} **x_30_1_1; struct WrdTabDescriptor {} **x_30_1_2; unsigned int x_30_1_3; unsigned int x_30_1_4; unsigned int x_30_1_5; } x30; short *x31; short *x32; short *x33; int x34; int x35; int x36; int x37; int x38; int x39; int x40; int x41; int x42; int x43; int x44; int x45; unsigned int x46; unsigned int x47; short x48; short x49; short x50; short x51; short x52; unsigned short x53; unsigned short x54; unsigned short x55; unsigned int x56 : 1; unsigned int x57 : 1; unsigned int x58 : 1; unsigned int x59 : 1; unsigned int x60 : 1; unsigned int x61 : 1; unsigned int x62 : 1; unsigned int x63 : 1; unsigned int x64 : 1; unsigned int x65 : 1; unsigned int x66 : 1; unsigned int x67 : 1; unsigned int x68 : 1; unsigned int x69 : 1; unsigned int x70 : 1; unsigned int x71 : 1; unsigned int x72 : 1; unsigned int x73 : 1; unsigned int x74 : 1; unsigned int x75 : 1; unsigned int x76 : 1; unsigned int x77 : 1; unsigned int x78 : 1; unsigned int x79 : 1; unsigned int x80 : 1; unsigned int x81 : 1; unsigned int x82 : 1; unsigned int x83 : 1; unsigned int x84 : 1; unsigned int x85 : 1; unsigned char x86; unsigned char x87; unsigned char x88; unsigned char x89; }*)arg1;
- (void)setOfficeArtState:(id)arg1;
- (void)setReportProgress:(BOOL)arg1;
- (void)setTargetDocument:(id)arg1;
- (BOOL)start;
- (id)styleAtIndex:(int)arg1;
- (id)targetDocument;
- (unsigned int)textBoxCount;
- (struct WBTextBoxReaderInfo { id x1; unsigned short x2; })textBoxInfoAtIndex:(unsigned int)arg1;

@end
