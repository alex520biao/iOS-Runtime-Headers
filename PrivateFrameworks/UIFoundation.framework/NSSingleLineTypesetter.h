/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSSingleLineTypesetter : NSATSTypesetter <NSGlyphStorage> {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct { 
        unsigned int _usesScreenFonts : 1; 
        unsigned int _reserved : 31; 
    } _currentBufferRange;
    BOOL *_elasticBuffer;
    unsigned int *_glyphBuffer;
    unsigned int *_inscriptionBuffer;
    float _lineWidth;
    } _slFlags;
}

+ (bool)_validateAttributes:(id)arg1;
+ (void)initialize;
+ (id)singleLineTypesetter;

- (BOOL)_allowsEllipsisGlyphSubstitution;
- (BOOL)_usesScreenFonts;
- (id)attributedString;
- (struct _NSRange { unsigned int x1; unsigned int x2; })characterRangeForGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 actualGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (id)createRenderingContextForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 typesetterBehavior:(int)arg2 usesScreenFonts:(BOOL)arg3 hasStrongRight:(BOOL)arg4 maximumWidth:(float)arg5;
- (void)deleteGlyphsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)done;
- (unsigned int)getGlyphsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 glyphs:(unsigned int*)arg2 characterIndexes:(unsigned int*)arg3 glyphInscriptions:(unsigned int*)arg4 elasticBits:(BOOL*)arg5 bidiLevels:(char *)arg6;
- (void)getLineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 usedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 remainingRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3 forStartingGlyphAtIndex:(unsigned int)arg4 proposedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg5 lineSpacing:(float)arg6 paragraphSpacingBefore:(float)arg7 paragraphSpacingAfter:(float)arg8;
- (struct _NSRange { unsigned int x1; unsigned int x2; })glyphRangeForCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 actualCharacterRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg2;
- (id)init;
- (void)insertGlyph:(unsigned int)arg1 atGlyphIndex:(unsigned int)arg2 characterIndex:(unsigned int)arg3;
- (void)insertGlyphs:(const unsigned int*)arg1 length:(unsigned int)arg2 forStartingGlyphAtIndex:(unsigned int)arg3 characterIndex:(unsigned int)arg4;
- (unsigned int)layoutOptions;
- (void)setAttachmentSize:(struct CGSize { float x1; float x2; })arg1 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setBidiLevels:(const char *)arg1 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setDrawsOutsideLineFragment:(BOOL)arg1 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setIntAttribute:(int)arg1 value:(int)arg2 forGlyphAtIndex:(unsigned int)arg3;
- (void)setLineFragmentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 usedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 baselineOffset:(float)arg4;
- (void)setLocation:(struct CGPoint { float x1; float x2; })arg1 withAdvancements:(const float*)arg2 forStartOfGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (void)setNotShownAttribute:(BOOL)arg1 forGlyphRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)substituteFontForFont:(id)arg1;
- (void)substituteGlyphsInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 withGlyphs:(unsigned int*)arg2;

@end
