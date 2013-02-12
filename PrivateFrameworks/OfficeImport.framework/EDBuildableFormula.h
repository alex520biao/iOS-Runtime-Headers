/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface EDBuildableFormula : NSObject <EDFormulaBuilding> {
    struct EDFormulaPtg { int (**x1)(); int x2; char *x3; unsigned int x4; struct EDFormulaPtg {} *x5; struct EDFormulaPtg {} *x6; boolx7; int x8; unsigned short x9; unsigned short x10; } *mTree;
    int mWarning;
}

- (struct EDFormulaPtg { int (**x1)(); int x2; char *x3; unsigned int x4; struct EDFormulaPtg {} *x5; struct EDFormulaPtg {} *x6; boolx7; int x8; unsigned short x9; unsigned short x10; }*)argPtgAtIndex:(unsigned int)arg1;
- (BOOL)addArrayWithCol:(int)arg1 andRow:(int)arg2;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2 numArgs:(int)arg3;
- (char *)addToken:(int)arg1 extendedDataLength:(unsigned int)arg2;
- (bool)argTokenIsDurationAtIndex:(unsigned int)arg1;
- (int)argTokenTypeAtIndex:(unsigned int)arg1;
- (BOOL)convertLastRefsToArea;
- (BOOL)convertRefs:(unsigned int)arg1 toTypes:(int*)arg2;
- (void)convertRefsInList:(struct EDFormulaPtg { int (**x1)(); int x2; char *x3; unsigned int x4; struct EDFormulaPtg {} *x5; struct EDFormulaPtg {} *x6; boolx7; int x8; unsigned short x9; unsigned short x10; }*)arg1 toType:(int)arg2;
- (BOOL)convertToIntersect:(unsigned int)arg1;
- (BOOL)convertToList:(unsigned int)arg1 withFinalParen:(BOOL)arg2;
- (BOOL)convertToList:(unsigned int)arg1;
- (void)copyToFormula:(id)arg1;
- (BOOL)copyToken:(unsigned int)arg1 from:(id)arg2;
- (void)dealloc;
- (id)formula;
- (BOOL)insertExternalName:(unsigned int)arg1 withLink:(unsigned int)arg2 atIndex:(unsigned int)arg3;
- (BOOL)insertVariableFunction:(unsigned short)arg1 afterIndex:(unsigned int)arg2 numArgs:(unsigned int)arg3;
- (bool)isSupportedFormula;
- (id)lastTokenRefOrArea3dLinkRefIsValid:(BOOL*)arg1 withEDLinks:(id)arg2;
- (BOOL)makeArrayForLastToken:(unsigned int)arg1;
- (void)markLastTokenAsDuration;
- (void)markLastTokenAsSpanningRefVertically:(BOOL)arg1 withMin:(unsigned short)arg2 andMax:(unsigned short)arg3;
- (unsigned int)removeOptionalPtgArgs:(unsigned int)arg1 minArgs:(unsigned int)arg2;
- (BOOL)replaceArgPtgAtIndex:(unsigned int)arg1 withFormula:(id)arg2;
- (char *)setExtendedDataForLastTokenAtIndex:(unsigned int)arg1 length:(unsigned int)arg2;
- (void)setWarning:(int)arg1;
- (BOOL)shrinkSpanningRefAtArgIndex:(unsigned int)arg1;
- (int)warningType;

@end
