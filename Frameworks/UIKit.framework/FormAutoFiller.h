/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMElement, DOMHTMLInputElement, NSMutableArray, NSMutableDictionary, WebFrame;

@interface FormAutoFiller : NSObject {
    NSMutableArray *_autoFilledControls;
    NSMutableArray *_continuationFields;
    NSMutableDictionary *_fieldsFilledFromAB;
    DOMElement *_form;
    int _formType;
    WebFrame *_frame;
    BOOL _hasAutoFilled;
    DOMHTMLInputElement *_passwordElement;
    DOMHTMLInputElement *_usernameElement;
}

+ (id)abMatchInFrame:(id)arg1 form:(id)arg2 fieldName:(id)arg3;
+ (id)autoFillerForFrame:(id)arg1 form:(id)arg2 create:(BOOL)arg3;
+ (void)clearAutoFillStateForFrame:(id)arg1;
+ (void)clearAutoFilledTextField:(id)arg1 inFrame:(id)arg2 form:(id)arg3;
+ (id)fieldNameForAutoFillOfControl:(id)arg1 rep:(id)arg2 respectHTMLAutocompleteAttribute:(BOOL)arg3;
+ (int)indexOfItemInRadioButtonGroup:(id)arg1 forSynonyms:(id)arg2;
+ (int)indexOfItemInSelectElement:(id)arg1 forSynonyms:(id)arg2;
+ (BOOL)isContinuationField:(id)arg1 inFrame:(id)arg2 form:(id)arg3;
+ (id)matchForControl:(id)arg1 rep:(id)arg2 fieldLabels:(id)arg3 useFieldName:(BOOL)arg4 foundByPageScan:(BOOL*)arg5;
+ (id)radioButtonGroupContaining:(id)arg1 inFormElements:(id)arg2;
+ (void)recordABMatch:(id)arg1 inFrame:(id)arg2 form:(id)arg3 fieldName:(id)arg4;

- (id)_decomposeStreetAddress:(id)arg1 style:(int)arg2;
- (void)_insertABValue:(id)arg1 inTextFieldElement:(id)arg2 match:(id)arg3 fieldName:(id)arg4;
- (int)_itemInSelectElement:(id)arg1 forMatch:(id)arg2;
- (int)_reflectAutoFillMatch:(id)arg1 inControls:(id)arg2 currIndex:(int)arg3 fieldName:(id)arg4;
- (int)_reflectMultiFieldMatch:(id)arg1 inControls:(id)arg2 currIndex:(unsigned int)arg3 fieldName:(id)arg4 isPhoneNumber:(BOOL)arg5;
- (void)_scanElements;
- (void)autoFill;
- (void)autoFillAddressStartingAtControl:(id)arg1 match:(id)arg2;
- (int)autoFillPhoneOrZipStartingAtControl:(id)arg1 match:(id)arg2;
- (void)clearAutoFilledTextField:(id)arg1;
- (void)dealloc;
- (int)formType;
- (BOOL)hasAutoFilled;
- (id)init;
- (id)passwordElement;
- (void)recordABContinuationField:(id)arg1;
- (void)recordABMatch:(id)arg1 fieldName:(id)arg2;
- (id)usernameElement;
- (id)visibleControlsInForm;

@end
