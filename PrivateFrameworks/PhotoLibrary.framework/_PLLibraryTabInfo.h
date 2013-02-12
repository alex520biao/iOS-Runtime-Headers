/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSString;

@interface _PLLibraryTabInfo : NSObject {
    int contentMode;
    NSString *iconName;
    NSString *labelKey;
}

@property int contentMode;
@property(retain) NSString * iconName;
@property(retain) NSString * labelKey;

+ (id)tabInfoWithLabelKey:(id)arg1 iconName:(id)arg2 contentMode:(int)arg3;

- (int)contentMode;
- (id)iconName;
- (id)labelKey;
- (void)setContentMode:(int)arg1;
- (void)setIconName:(id)arg1;
- (void)setLabelKey:(id)arg1;

@end
