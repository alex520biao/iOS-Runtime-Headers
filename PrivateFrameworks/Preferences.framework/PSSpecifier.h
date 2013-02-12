/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class CNFRegAlias, IMAccount, NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface PSSpecifier : NSObject {
    SEL _buttonAction;
    SEL _confirmationAction;
    SEL _confirmationCancelAction;
    SEL _controllerLoadAction;
    NSString *_name;
    NSMutableDictionary *_properties;
    NSDictionary *_shortTitleDict;
    BOOL _showContentString;
    NSDictionary *_titleDict;
    id _userInfo;
    NSArray *_values;
    SEL action;
    int autoCapsType;
    int autoCorrectionType;
    SEL cancel;
    int cellType;
    Class detailControllerClass;
    Class editPaneClass;
    SEL getter;
    int keyboardType;
    SEL setter;
    id target;
    int textFieldType;
}

@property(retain) IMAccount * CNFRegAccount;
@property(retain) CNFRegAlias * CNFRegAlias;
@property(retain) CNFRegAlias * CNFRegCallerIdAlias;
@property SEL buttonAction;
@property int cellType;
@property SEL confirmationAction;
@property SEL confirmationCancelAction;
@property SEL controllerLoadAction;
@property Class detailControllerClass;
@property Class editPaneClass;
@property(retain) NSString * identifier;
@property(retain) NSString * name;
@property(retain) NSDictionary * shortTitleDictionary;
@property BOOL showContentString;
@property id target;
@property(retain) NSDictionary * titleDictionary;
@property(retain) id userInfo;
@property(retain) NSArray * values;

+ (int)autoCapsTypeForString:(id)arg1;
+ (int)autoCorrectionTypeForNumber:(id)arg1;
+ (id)buttonSpecifierWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 confirmationInfo:(id)arg4;
+ (id)emptyGroupSpecifier;
+ (id)groupSpecifierWithName:(id)arg1;
+ (int)keyboardTypeForString:(id)arg1;
+ (id)preferenceSpecifierNamed:(id)arg1 target:(id)arg2 set:(SEL)arg3 get:(SEL)arg4 detail:(Class)arg5 cell:(int)arg6 edit:(Class)arg7;
+ (id)switchSpecifierWithTitle:(id)arg1 target:(id)arg2 setter:(SEL)arg3 getter:(SEL)arg4 key:(id)arg5;

- (id)CNFRegAccount;
- (id)CNFRegAlias;
- (id)CNFRegCallerIdAlias;
- (SEL)buttonAction;
- (int)cellType;
- (SEL)confirmationAction;
- (SEL)confirmationCancelAction;
- (SEL)controllerLoadAction;
- (void)dealloc;
- (id)description;
- (Class)detailControllerClass;
- (Class)editPaneClass;
- (id)identifier;
- (id)init;
- (void)loadValuesAndTitlesFromDataSource;
- (id)name;
- (id)properties;
- (id)propertyForKey:(id)arg1;
- (void)removePropertyForKey:(id)arg1;
- (void)setButtonAction:(SEL)arg1;
- (void)setCNFRegAccount:(id)arg1;
- (void)setCNFRegAlias:(id)arg1;
- (void)setCNFRegCallerIdAlias:(id)arg1;
- (void)setCellType:(int)arg1;
- (void)setConfirmationAction:(SEL)arg1;
- (void)setConfirmationCancelAction:(SEL)arg1;
- (void)setControllerLoadAction:(SEL)arg1;
- (void)setDetailControllerClass:(Class)arg1;
- (void)setEditPaneClass:(Class)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setKeyboardType:(int)arg1 autoCaps:(int)arg2 autoCorrection:(int)arg3;
- (void)setName:(id)arg1;
- (void)setProperties:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setShortTitleDictionary:(id)arg1;
- (void)setShowContentString:(BOOL)arg1;
- (void)setTarget:(id)arg1;
- (void)setTitleDictionary:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setValues:(id)arg1 titles:(id)arg2 shortTitles:(id)arg3;
- (void)setValues:(id)arg1 titles:(id)arg2;
- (void)setValues:(id)arg1;
- (void)setupIconImageWithBundle:(id)arg1;
- (void)setupIconImageWithPath:(id)arg1;
- (id)shortTitleDictionary;
- (BOOL)showContentString;
- (id)target;
- (int)titleCompare:(id)arg1;
- (id)titleDictionary;
- (id)userInfo;
- (id)values;

@end
