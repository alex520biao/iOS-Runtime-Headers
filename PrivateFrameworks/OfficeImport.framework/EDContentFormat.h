/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDString;

@interface EDContentFormat : NSObject <EDKeyedObject, NSCopying> {
    boolmBuiltIn;
    boolmReferenced;
    unsigned int mFormatId;
    EDString *mFormatString;
}

+ (id)contentFormatWithFormatString:(id)arg1 formatId:(unsigned int)arg2;
+ (id)contentFormatWithFormatString:(id)arg1;
+ (id)contentFormatWithNSString:(id)arg1 formatId:(unsigned int)arg2 builtIn:(bool)arg3;

- (bool)builtIn;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)formatId;
- (id)formatString;
- (unsigned int)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToContentFormat:(id)arg1;
- (int)key;
- (bool)referenced;
- (void)setFormatId:(unsigned int)arg1;
- (void)setReferenced:(bool)arg1;

@end
