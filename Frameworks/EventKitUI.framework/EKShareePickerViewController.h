/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKShareePickerViewControllerDelegate>, EKCalendarShareePicker, NSArray;

@interface EKShareePickerViewController : UIViewController <EKEventAttendeePickerDelegate> {
    <EKShareePickerViewControllerDelegate> *_delegate;
    EKCalendarShareePicker *_picker;
}

@property <EKShareePickerViewControllerDelegate> * delegate;
@property(copy) NSArray * sharees;

- (id)_recipientFromSharee:(id)arg1;
- (id)_shareeFromRecipient:(id)arg1;
- (void)add;
- (void)cancel;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (void)dealloc;
- (id)delegate;
- (void)eventAttendeePicker:(id)arg1 cacheValidationStatus:(int)arg2 forEmail:(id)arg3;
- (int)eventAttendeePicker:(id)arg1 getValidationStatusForEmailAddress:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setSearchAccountID:(id)arg1;
- (void)setSharees:(id)arg1;
- (id)sharees;
- (void)viewDidLoad;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
