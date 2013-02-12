/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@class NSGlyphGenerator, NSMutableArray, NSRunStorage, NSSortedArray, NSStorage, NSTextContainer, NSTextStorage, NSTypesetter, UIFont;

@interface NSLayoutManager : NSObject <NSCoding, NSGlyphStorage> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct __lmFlags { 
        unsigned int containersAreFull : 1; 
        unsigned int glyphsMightDrawOutsideLines : 1; 
        unsigned int backgroundLayoutEnabled : 1; 
        unsigned int resizingInProgress : 1; 
        unsigned int allowScreenFonts : 1; 
        unsigned int cachedRectArrayInUse : 1; 
        unsigned int displayInvalidationInProgress : 1; 
        unsigned int insertionPointNeedsUpdate : 1; 
        unsigned int layoutManagerInDirtyList : 1; 
        unsigned int usingGlyphCache : 1; 
        unsigned int showInvisibleCharacters : 1; 
        unsigned int showControlCharacters : 1; 
        unsigned int delegateRespondsToDidInvalidate : 1; 
        unsigned int delegateRespondsToDidComplete : 1; 
        unsigned int glyphFormat : 2; 
        unsigned int textStorageRespondsToIsEditing : 1; 
        unsigned int notifyEditedInProgress : 1; 
        unsigned int containersChanged : 1; 
        unsigned int isGeneratingGlyphs : 1; 
        unsigned int hasNonGeneratedGlyphData : 1; 
        unsigned int loggedBGLayoutException : 1; 
        unsigned int isLayoutRequestedFromSubthread : 1; 
        unsigned int defaultAttachmentScaling : 2; 
        unsigned int isInUILayoutMode : 1; 
        unsigned int seenRightToLeft : 1; 
        unsigned int ignoresViewTransformations : 1; 
        unsigned int needToFlushGlyph : 1; 
        unsigned int flipsIfNeeded : 1; 
        unsigned int allowNonContig : 1; 
        unsigned int useNonContig : 1; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct CGPoint { 
        float x; 
        float y; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    UIFont *_cachedFont;
    } _cachedFontCharRange;
    } _cachedLocation;
    unsigned int _cachedLocationGlyphIndex;
    } _cachedLocationNominalGlyphRange;
    struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } *_cachedRectArray;
    unsigned int _cachedRectArrayCapacity;
    NSRunStorage *_containerRuns;
    NSStorage *_containerUsedRects;
    } _deferredDisplayCharRange;
    id _delegate;
    unsigned short _displayInvalidationDisableStack;
    id _extraData;
    NSTextContainer *_extraLineFragmentContainer;
    } _extraLineFragmentRect;
    } _extraLineFragmentUsedRect;
    unsigned int _firstUnlaidCharIndex;
    unsigned int _firstUnlaidGlyphIndex;
    NSRunStorage *_fragmentRuns;
    char *_glyphBuffer;
    unsigned int _glyphBufferSize;
    NSGlyphGenerator *_glyphGenerator;
    NSSortedArray *_glyphHoles;
    NSRunStorage *_glyphLocations;
    NSRunStorage *_glyphRotationRuns;
    NSStorage *_glyphs;
    NSSortedArray *_layoutHoles;
    } _lmFlags;
    } _newlyFilledGlyphRange;
    NSMutableArray *_textContainers;
    NSTextStorage *_textStorage;
    unsigned short _textViewResizeDisableStack;
    NSTypesetter *_typesetter;
}

+ (id)_defaultLinkAttributes;
+ (void)_doSomeBackgroundLayout;
+ (BOOL)_ignoresViewTransformations;
+ (BOOL)_inBackgroundLayout;
+ (BOOL)_showsControlCharacters;
+ (BOOL)_showsInvisibleCharacters;
+ (BOOL)_usesScreenFonts;
+ (void)initialize;

- (void)_adjustCharacterIndicesForRawGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 byDelta:(int)arg2;
- (BOOL)_alwaysDrawsActive;
- (id)_attachmentSizesRun;
- (id)_blockDescription;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_blockRangeForCharRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_blockRangeForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_blockRowRangeForCharRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 completeRows:(BOOL*)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_blockRowRangeForCharRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_blockRowRangeForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 completeRows:(BOOL*)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_blockRowRangeForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_boundingRectForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inTextContainer:(id)arg2 fast:(BOOL)arg3 fullLineRectsOnly:(BOOL)arg4;
- (BOOL)_canDoLayout;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_characterRangeCurrentlyInAndAfterContainer:(id)arg1;
- (void)_clearCurrentAttachmentSettings;
- (void)_clearTemporaryAttributes;
- (void)_clearTemporaryAttributesForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 changeInLength:(int)arg2;
- (void)_commonInit;
- (id)_containerDescription;
- (unsigned int)_currentAttachmentIndex;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_currentAttachmentRect;
- (void)_doLayoutWithFullContainerStartingAtGlyphIndex:(unsigned int)arg1 nextGlyphIndex:(unsigned int*)arg2;
- (BOOL)_doOptimizedLayoutStartingAtGlyphIndex:(unsigned int)arg1 forCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inTextContainer:(id)arg3 lineLimit:(unsigned int)arg4 nextGlyphIndex:(unsigned int*)arg5;
- (void)_drawBackgroundForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2 parameters:(struct _NSDrawingParameters { id x1; id x2; }*)arg3;
- (void)_drawGlyphsForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)_drawLineForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inContext:(struct CGContext { }*)arg2 from:(float)arg3 to:(float)arg4 at:(float)arg5 thickness:(float)arg6 lineOrigin:(struct CGPoint { float x1; float x2; })arg7 breakForDescenders:(BOOL)arg8 flipped:(BOOL)arg9;
- (void)_drawLineForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inContext:(struct CGContext { }*)arg2 from:(float)arg3 to:(float)arg4 at:(float)arg5 thickness:(float)arg6 lineOrigin:(struct CGPoint { float x1; float x2; })arg7 breakForDescenders:(BOOL)arg8;
- (void)_drawLineForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 type:(int)arg2 baselineOffset:(float)arg3 lineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 lineFragmentGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 containerOrigin:(struct CGPoint { float x1; float x2; })arg6 isStrikethrough:(BOOL)arg7;
- (BOOL)_drawsUnderlinesLikeWebKit;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_extendedCharRangeForInvalidation:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 editedCharRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)_fillGlyphHoleAtIndex:(unsigned int)arg1 desiredNumberOfCharacters:(unsigned int)arg2;
- (void)_fillGlyphHoleForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 startGlyphIndex:(unsigned int)arg2 desiredNumberOfCharacters:(unsigned int)arg3;
- (void)_fillLayoutHoleAtIndex:(unsigned int)arg1 desiredNumberOfLines:(unsigned int)arg2;
- (void)_fillLayoutHoleForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 desiredNumberOfLines:(unsigned int)arg2 isSoft:(BOOL)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_firstPassGlyphRangeForBoundingRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inTextContainer:(id)arg2 hintGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 okToFillHoles:(BOOL)arg4;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_firstPassGlyphRangeForBoundingRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inTextContainer:(id)arg2 okToFillHoles:(BOOL)arg3;
- (void)_firstTextViewChanged;
- (void)_fixSelectionAfterChangeInCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 changeInLength:(int)arg2;
- (void)_forceDisplayToBeCorrectForViewsWithUnlaidGlyphs;
- (unsigned int)_glyphAtIndex:(unsigned int)arg1 characterIndex:(unsigned int*)arg2 glyphInscription:(unsigned int*)arg3 isValidIndex:(BOOL*)arg4;
- (id)_glyphDescription;
- (id)_glyphDescriptionForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)_glyphGenerator;
- (id)_glyphHoleDescription;
- (unsigned int)_glyphIndexForCharacterIndex:(unsigned int)arg1 startOfRange:(BOOL)arg2 okToFillHoles:(BOOL)arg3 considerNulls:(BOOL)arg4;
- (unsigned int)_glyphIndexForCharacterIndex:(unsigned int)arg1 startOfRange:(BOOL)arg2 okToFillHoles:(BOOL)arg3;
- (id)_glyphLocationDescription;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_glyphRangeForBoundingRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inTextContainer:(id)arg2 fast:(BOOL)arg3 okToFillHoles:(BOOL)arg4;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_glyphRangeForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 actualCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 okToFillHoles:(BOOL)arg3;
- (id)_glyphTreeDescription;
- (void)_growCachedRectArrayToSize:(unsigned int)arg1;
- (BOOL)_hasSeenRightToLeft;
- (unsigned int)_indexOfFirstGlyphInTextContainer:(id)arg1 okToFillHoles:(BOOL)arg2;
- (void)_insertGlyphs:(unsigned int*)arg1 elasticAttributes:(BOOL*)arg2 count:(unsigned int)arg3 atGlyphIndex:(unsigned int)arg4 characterIndex:(unsigned int)arg5;
- (id)_insertionPointHelperForGlyphAtIndex:(unsigned int)arg1;
- (void)_invalidateDisplayIfNeeded;
- (void)_invalidateGlyphsForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 editedCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 changeInLength:(int)arg3 actualCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg4;
- (void)_invalidateGlyphsForExtendedCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 changeInLength:(int)arg2 includeBlocks:(BOOL)arg3;
- (void)_invalidateGlyphsForExtendedCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 changeInLength:(int)arg2;
- (void)_invalidateInsertionPoint;
- (void)_invalidateLayoutForExtendedCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 isSoft:(BOOL)arg2 invalidateUsage:(BOOL)arg3;
- (void)_invalidateLayoutForExtendedCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 isSoft:(BOOL)arg2;
- (void)_invalidateUsageForTextContainersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)_isInUILayoutMode;
- (id)_layoutHoleDescription;
- (id)_layoutTreeDescription;
- (id)_lineFragmentDescription:(BOOL)arg1;
- (id)_lineFragmentDescription;
- (id)_lineFragmentDescriptionForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 includeGlyphLocations:(BOOL)arg2;
- (void)_lineGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 type:(int)arg2 lineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 lineFragmentGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 containerOrigin:(struct CGPoint { float x1; float x2; })arg5 isStrikethrough:(BOOL)arg6;
- (void)_markSelfAsDirtyForBackgroundLayout:(id)arg1;
- (void)_mergeGlyphHoles;
- (void)_mergeLayoutHoles;
- (BOOL)_needToFlushGlyph;
- (void)_noteFirstTextViewVisibleCharacterRangeIfAfterIndex:(unsigned int)arg1;
- (char *)_packedGlyphs:(unsigned int)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 length:(unsigned int*)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_primitiveCharacterRangeForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_primitiveDeleteGlyphsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_primitiveGlyphRangeForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_primitiveInvalidateDisplayForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_promoteGlyphStoreToFormat:(unsigned int)arg1;
- (void)_recalculateUsageForTextContainerAtIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)_rectArrayForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withinSelectionRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 rangeIsCharRange:(BOOL)arg3 singleRectOnly:(BOOL)arg4 fullLineRectsOnly:(BOOL)arg5 inTextContainer:(id)arg6 rectCount:(unsigned int*)arg7 rangeWithinContainer:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg8 glyphsDrawOutsideLines:(BOOL*)arg9;
- (void)_resizeTextViewForTextContainer:(id)arg1;
- (float)_rotationForGlyphAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (id)_rowArrayCache;
- (id)_selectedRanges;
- (id)_selectionRangesForInsertionPointRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_setAlwaysDrawsActive:(BOOL)arg1;
- (void)_setCurrentAttachmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 index:(unsigned int)arg2;
- (void)_setDrawsUnderlinesLikeWebKit:(BOOL)arg1;
- (void)_setGlyphGenerator:(id)arg1;
- (void)_setGlyphsPerLineEstimate:(unsigned int)arg1 integerOffsetPerLineEstimate:(unsigned int)arg2;
- (void)_setGlyphsPerLineEstimate:(unsigned int)arg1 offsetPerLineEstimate:(float)arg2;
- (void)_setHasSeenRightToLeft:(BOOL)arg1;
- (void)_setIsInUILayoutMode:(BOOL)arg1;
- (void)_setNeedToFlushGlyph:(BOOL)arg1;
- (void)_setRotation:(float)arg1 forGlyphAtIndex:(unsigned int)arg2;
- (void)_setRowArrayCache:(id)arg1;
- (void)_showStyledCGGlyphs:(const unsigned short*)arg1 positions:(const struct CGPoint { float x1; float x2; }*)arg2 count:(unsigned int)arg3 font:(id)arg4 matrix:(id)arg5 attributes:(id)arg6 inContext:(struct CGContext { }*)arg7 options:(id)arg8 lineHeight:(float)arg9;
- (void)_simpleDeleteGlyphsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_simpleInsertGlyph:(unsigned int)arg1 atGlyphIndex:(unsigned int)arg2 characterIndex:(unsigned int)arg3 elastic:(BOOL)arg4;
- (unsigned int)_smallEncodingGlyphIndexForCharacterIndex:(unsigned int)arg1 startOfRange:(BOOL)arg2 okToFillHoles:(BOOL)arg3 considerNulls:(BOOL)arg4;
- (unsigned int)_smallEncodingGlyphIndexForCharacterIndex:(unsigned int)arg1 startOfRange:(BOOL)arg2 okToFillHoles:(BOOL)arg3;
- (id)_temporaryAttribute:(id)arg1 atCharacterIndex:(unsigned int)arg2 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (id)_temporaryAttribute:(id)arg1 atCharacterIndex:(unsigned int)arg2 longestEffectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (id)_temporaryAttributesAtCharacterIndex:(unsigned int)arg1 longestEffectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)_updateUsageForTextContainer:(id)arg1 addingUsedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct _NSStoredContainerUsage { struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_1_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_1_1_2; } x1; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_2_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_2_1_2; } x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; unsigned int x_3_1_3 : 1; unsigned int x_3_1_4 : 29; } x3; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_4_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_4_1_2; } x4; struct _NSRange { unsigned int x_5_1_1; unsigned int x_5_1_2; } x5; }*)_validatedStoredUsageForTextContainerAtIndex:(unsigned int)arg1;
- (void)addTemporaryAttribute:(id)arg1 value:(id)arg2 forCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)addTemporaryAttributes:(id)arg1 forCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)addTextContainer:(id)arg1;
- (BOOL)allowsNonContiguousLayout;
- (struct CGSize { float x1; float x2; })attachmentSizeForGlyphAtIndex:(unsigned int)arg1;
- (id)attributedString;
- (BOOL)backgroundLayoutEnabled;
- (float)baselineOffsetForGlyphAtIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundingRectForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 inTextContainer:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsRectForTextBlock:(id)arg1 atIndex:(unsigned int)arg2 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })boundsRectForTextBlock:(id)arg1 glyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)characterIndexForGlyphAtIndex:(unsigned int)arg1;
- (unsigned int)characterIndexForPoint:(struct CGPoint { float x1; float x2; })arg1 inTextContainer:(id)arg2 fractionOfDistanceBetweenInsertionPoints:(float*)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })characterRangeForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 actualGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (void)dealloc;
- (float)defaultBaselineOffsetForFont:(id)arg1;
- (float)defaultLineHeightForFont:(id)arg1;
- (id)delegate;
- (void)deleteGlyphsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)description;
- (void)drawBackgroundForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)drawGlyphsForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)drawStrikethroughForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 strikethroughType:(int)arg2 baselineOffset:(float)arg3 lineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 lineFragmentGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 containerOrigin:(struct CGPoint { float x1; float x2; })arg6;
- (void)drawUnderlineForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 underlineType:(int)arg2 baselineOffset:(float)arg3 lineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg4 lineFragmentGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5 containerOrigin:(struct CGPoint { float x1; float x2; })arg6;
- (BOOL)drawsOutsideLineFragmentForGlyphAtIndex:(unsigned int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)ensureGlyphsForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)ensureGlyphsForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)ensureLayoutForBoundingRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inTextContainer:(id)arg2;
- (void)ensureLayoutForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)ensureLayoutForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)ensureLayoutForTextContainer:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })extraLineFragmentRect;
- (id)extraLineFragmentTextContainer;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })extraLineFragmentUsedRect;
- (void)fillBackgroundRectArray:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 count:(unsigned int)arg2 forCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 color:(id)arg4;
- (void)finalize;
- (unsigned int)firstUnlaidCharacterIndex;
- (unsigned int)firstUnlaidGlyphIndex;
- (BOOL)flipsIfNeeded;
- (float)fractionOfDistanceThroughGlyphForPoint:(struct CGPoint { float x1; float x2; })arg1 inTextContainer:(id)arg2;
- (void)getFirstUnlaidCharacterIndex:(unsigned int*)arg1 glyphIndex:(unsigned int*)arg2;
- (unsigned int)getGlyphs:(unsigned int*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)getGlyphsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 glyphs:(unsigned int*)arg2 characterIndexes:(unsigned int*)arg3 glyphInscriptions:(unsigned int*)arg4 elasticBits:(BOOL*)arg5 bidiLevels:(char *)arg6;
- (unsigned int)getGlyphsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 glyphs:(unsigned int*)arg2 characterIndexes:(unsigned int*)arg3 glyphInscriptions:(unsigned int*)arg4 elasticBits:(BOOL*)arg5;
- (int)getLineFragmentInsertionPointArraysForCharacterAtIndex:(unsigned int)arg1 inDisplayOrder:(BOOL)arg2 positions:(float**)arg3 characterIndexes:(unsigned int**)arg4 count:(unsigned int*)arg5 alternatePositions:(float**)arg6 characterIndexes:(unsigned int**)arg7 count:(unsigned int*)arg8;
- (unsigned int)getLineFragmentInsertionPointsForCharacterAtIndex:(unsigned int)arg1 alternatePositions:(BOOL)arg2 inDisplayOrder:(BOOL)arg3 positions:(float*)arg4 characterIndexes:(unsigned int*)arg5;
- (unsigned int)glyphAtIndex:(unsigned int)arg1 isValidIndex:(BOOL*)arg2;
- (unsigned int)glyphAtIndex:(unsigned int)arg1;
- (id)glyphGenerator;
- (unsigned int)glyphIndexForCharacterAtIndex:(unsigned int)arg1;
- (unsigned int)glyphIndexForPoint:(struct CGPoint { float x1; float x2; })arg1 inTextContainer:(id)arg2 fractionOfDistanceThroughGlyph:(float*)arg3;
- (unsigned int)glyphIndexForPoint:(struct CGPoint { float x1; float x2; })arg1 inTextContainer:(id)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })glyphRangeForBoundingRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inTextContainer:(id)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })glyphRangeForBoundingRectWithoutAdditionalLayout:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inTextContainer:(id)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })glyphRangeForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 actualCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })glyphRangeForTextContainer:(id)arg1;
- (BOOL)hasNonContiguousLayout;
- (float)hyphenationFactor;
- (BOOL)ignoresAntialiasThreshold;
- (BOOL)ignoresViewTransformations;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)insertGlyph:(unsigned int)arg1 atGlyphIndex:(unsigned int)arg2 characterIndex:(unsigned int)arg3;
- (void)insertGlyphs:(const unsigned int*)arg1 length:(unsigned int)arg2 forStartingGlyphAtIndex:(unsigned int)arg3 characterIndex:(unsigned int)arg4;
- (void)insertTextContainer:(id)arg1 atIndex:(unsigned int)arg2;
- (int)intAttribute:(int)arg1 forGlyphAtIndex:(unsigned int)arg2;
- (void)invalidateDisplayForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)invalidateDisplayForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)invalidateGlyphsForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 changeInLength:(int)arg2 actualCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (void)invalidateGlyphsOnLayoutInvalidationForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)invalidateLayoutForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 actualCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (void)invalidateLayoutForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 isSoft:(BOOL)arg2 actualCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (BOOL)isValidGlyphIndex:(unsigned int)arg1;
- (unsigned int)layoutOptions;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })layoutRectForTextBlock:(id)arg1 atIndex:(unsigned int)arg2 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })layoutRectForTextBlock:(id)arg1 glyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })lineFragmentRectForGlyphAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 withoutAdditionalLayout:(BOOL)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })lineFragmentRectForGlyphAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })lineFragmentUsedRectForGlyphAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 allowLayout:(BOOL)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })lineFragmentUsedRectForGlyphAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 withoutAdditionalLayout:(BOOL)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })lineFragmentUsedRectForGlyphAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (struct CGPoint { float x1; float x2; })locationForGlyphAtIndex:(unsigned int)arg1;
- (BOOL)notShownAttributeForGlyphAtIndex:(unsigned int)arg1;
- (unsigned int)numberOfGlyphs;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfNominallySpacedGlyphsContainingIndex:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)rectArrayForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withinSelectedCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inTextContainer:(id)arg3 rectCount:(unsigned int*)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)rectArrayForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withinSelectedGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 inTextContainer:(id)arg3 rectCount:(unsigned int*)arg4;
- (void)removeTemporaryAttribute:(id)arg1 forCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)removeTextContainerAtIndex:(unsigned int)arg1;
- (void)replaceGlyphAtIndex:(unsigned int)arg1 withGlyph:(unsigned int)arg2;
- (void)replaceTextStorage:(id)arg1;
- (id)selectedTextAttributesForCharacterAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (void)setAllowsNonContiguousLayout:(BOOL)arg1;
- (void)setAttachmentSize:(struct CGSize { float x1; float x2; })arg1 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setBackgroundLayoutEnabled:(BOOL)arg1;
- (void)setBaselineOffset:(float)arg1 forGlyphAtIndex:(unsigned int)arg2;
- (void)setBoundsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forTextBlock:(id)arg2 glyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)setCharacterIndex:(unsigned int)arg1 forGlyphAtIndex:(unsigned int)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDrawsOutsideLineFragment:(BOOL)arg1 forGlyphAtIndex:(unsigned int)arg2;
- (void)setExtraLineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 usedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 textContainer:(id)arg3;
- (void)setFlipsIfNeeded:(BOOL)arg1;
- (void)setGlyphGenerator:(id)arg1;
- (void)setHyphenationFactor:(float)arg1;
- (void)setIgnoresAntialiasThreshold:(BOOL)arg1;
- (void)setIgnoresViewTransformations:(BOOL)arg1;
- (void)setIntAttribute:(int)arg1 value:(int)arg2 forGlyphAtIndex:(unsigned int)arg3;
- (void)setLayoutRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forTextBlock:(id)arg2 glyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)setLineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 usedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 baselineOffset:(float)arg4;
- (void)setLineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 usedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (void)setLocation:(struct CGPoint { float x1; float x2; })arg1 forStartOfGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 coalesceRuns:(BOOL)arg3;
- (void)setLocation:(struct CGPoint { float x1; float x2; })arg1 forStartOfGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setLocations:(struct CGPoint { float x1; float x2; }*)arg1 startingGlyphIndexes:(unsigned int*)arg2 count:(unsigned int)arg3 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (void)setNotShownAttribute:(BOOL)arg1 forGlyphAtIndex:(unsigned int)arg2;
- (void)setShowsControlCharacters:(BOOL)arg1;
- (void)setShowsInvisibleCharacters:(BOOL)arg1;
- (void)setTemporaryAttributes:(id)arg1 forCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setTextContainer:(id)arg1 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setTextStorage:(id)arg1;
- (void)setTypesetter:(id)arg1;
- (void)setTypesetterBehavior:(int)arg1;
- (void)setUsesFontLeading:(BOOL)arg1;
- (void)setUsesScreenFonts:(BOOL)arg1;
- (void)showAttachmentCell:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 characterIndex:(unsigned int)arg3;
- (void)showCGGlyphs:(const unsigned short*)arg1 positions:(const struct CGPoint { float x1; float x2; }*)arg2 count:(unsigned int)arg3 font:(id)arg4 matrix:(id)arg5 attributes:(id)arg6 inContext:(struct CGContext { }*)arg7;
- (BOOL)showsControlCharacters;
- (BOOL)showsInvisibleCharacters;
- (void)strikethroughGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 strikethroughType:(int)arg2 lineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 lineFragmentGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 containerOrigin:(struct CGPoint { float x1; float x2; })arg5;
- (id)substituteFontForFont:(id)arg1;
- (id)temporaryAttribute:(id)arg1 atCharacterIndex:(unsigned int)arg2 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3;
- (id)temporaryAttribute:(id)arg1 atCharacterIndex:(unsigned int)arg2 longestEffectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4;
- (id)temporaryAttributesAtCharacterIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (id)temporaryAttributesAtCharacterIndex:(unsigned int)arg1 longestEffectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)textContainerChangedGeometry:(id)arg1;
- (void)textContainerChangedTextView:(id)arg1;
- (id)textContainerForGlyphAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2 withoutAdditionalLayout:(BOOL)arg3;
- (id)textContainerForGlyphAtIndex:(unsigned int)arg1 effectiveRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (id)textContainers;
- (void)textStorage:(id)arg1 edited:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3 changeInLength:(int)arg4 invalidatedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg5;
- (id)textStorage;
- (id)typesetter;
- (int)typesetterBehavior;
- (void)underlineGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 underlineType:(int)arg2 lineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 lineFragmentGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg4 containerOrigin:(struct CGPoint { float x1; float x2; })arg5;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })usedRectForTextContainer:(id)arg1;
- (BOOL)usesFontLeading;
- (BOOL)usesScreenFonts;

@end
