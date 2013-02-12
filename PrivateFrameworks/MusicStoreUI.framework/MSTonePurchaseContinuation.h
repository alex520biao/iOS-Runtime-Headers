/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
 */

@class ABPeoplePickerNavigationController, UIActionSheet, UIAlertView;

@interface MSTonePurchaseContinuation : SUPurchaseContinuation <ABPeoplePickerNavigationControllerDelegate, UIActionSheetDelegate, UIAlertViewDelegate> {
    UIActionSheet *_actionSheet;
    UIAlertView *_alertView;
    ABPeoplePickerNavigationController *_peoplePicker;
}

- (id)_copyAllowedToneStyles;
- (void)_destroyActionSheet;
- (void)_destroyAlertView;
- (void)_dismissPeoplePicker;
- (void)_pickAssigneeToneStyle;
- (void)_showPeoplePicker;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheetCancel:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)initWithPurchase:(id)arg1;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)start;

@end
