/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTEphemeralCellMap : NSObject <TSTCellMap> {
    BOOL mAppliesToHidden;
    unsigned int mCapacity;
    struct { unsigned short x1; unsigned char x2; unsigned char x3; } *mCellIDs;
    id *mCells;
    unsigned int mCount;
    BOOL mIgnoreHiddenCellsWhenApplying;
    BOOL mMayModifyValuesReferencedByFormulas;
}

@property BOOL appliesToHidden;

- (void)addCell:(id)arg1 andCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg2;
- (BOOL)appliesToHidden;
- (id)cellAtIndex:(unsigned int)arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; })cellIDAtIndex:(unsigned int)arg1;
- (struct { unsigned short x1; unsigned char x2; unsigned char x3; }*)cellIDs;
- (BOOL)containsCellID:(struct { unsigned short x1; unsigned char x2; unsigned char x3; })arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)init;
- (id)initWithCapacity:(unsigned int)arg1;
- (BOOL)mayModifyFormulasInCells;
- (BOOL)mayModifyValuesReferencedByFormulas;
- (void)popLastCell;
- (void)setAppliesToHidden:(BOOL)arg1;
- (void)setMayModifyValuesReferencedByFormulas:(BOOL)arg1;

@end
