/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString;

@interface UIKeyboardCandidate : NSObject <NSCopying> {
    NSString *_accessibilityLabel;
    NSString *_alternativeText;
}

@property(readonly) NSString * accessibilityLabel;
@property(copy) NSString * alternativeText;
@property(readonly) NSString * candidate;
@property(readonly) unsigned int deleteCount;
@property(getter=isExtensionCandidate,readonly) BOOL extensionCandidate;
@property(readonly) NSString * input;
@property(readonly) BOOL isAutocorrection;
@property(readonly) BOOL isForShortcutConversion;
@property(readonly) NSString * label;
@property(readonly) NSArray * usageTrackingTypes;
@property(readonly) unsigned int wordOriginFeedbackID;

- (id)accessibilityLabel;
- (id)alternativeText;
- (id)candidate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)deleteCount;
- (unsigned int)hash;
- (id)input;
- (BOOL)isAutocorrection;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isExtensionCandidate;
- (BOOL)isForShortcutConversion;
- (id)label;
- (void)setAlternativeText:(id)arg1;
- (id)usageTrackingTypes;
- (unsigned int)wordOriginFeedbackID;

@end
