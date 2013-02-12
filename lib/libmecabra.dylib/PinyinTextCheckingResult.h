/* Generated by RuntimeBrowser
   Image: /usr/lib/libmecabra.dylib
 */

@class NSArray, NSMutableDictionary, NSString;

@interface PinyinTextCheckingResult : NSObject {
    NSArray *_alternativesWithNonPinyinRanges;
    NSMutableDictionary *_checkedRangesForAlternatives;
    NSArray *_filteredAlternatives;
    NSString *_pinyin;
    NSMutableDictionary *_syllabifications;
}

@property(readonly) NSArray * alternativesWithNonPinyinRanges;
@property(readonly) NSArray * filteredAlternatives;

- (id)alternativesWithNonPinyinRanges;
- (struct _NSRange { unsigned int x1; unsigned int x2; })checkedRangeForAlternative:(id)arg1;
- (id)copyNonPinyinPrefixes:(BOOL)arg1;
- (void)dealloc;
- (id)filteredAlternatives;
- (id)initWithString:(id)arg1;
- (void)loadAlternatives;
- (id)syllablesForPinyin:(id)arg1;

@end
