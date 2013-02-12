/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMHTMLSelectElement, NSArray, UIWebSelectPopover;

@interface UIWebSelectTableViewController : UITableViewController <UIKeyInput> {
    BOOL _allowsMultipleSelection;
    NSArray *_cachedItems;
    float _fontSize;
    NSArray *_groupsAndOptions;
    float _maximumTextWidth;
    UIWebSelectPopover *_popover;
    DOMHTMLSelectElement *_selectionNode;
    unsigned int _singleSelectionIndex;
    unsigned int _singleSelectionSection;
    int _textAlignment;
}

@property(retain) NSArray * _cachedItems;
@property(retain) NSArray * _groupsAndOptions;
@property UIWebSelectPopover * _popover;
@property(retain) DOMHTMLSelectElement * _selectionNode;
@property int autocapitalizationType;
@property int autocorrectionType;
@property BOOL enablesReturnKeyAutomatically;
@property int keyboardAppearance;
@property int keyboardType;
@property int returnKeyType;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property int spellCheckingType;

- (id)_cachedItems;
- (id)_groupsAndOptions;
- (BOOL)_isEmpty;
- (id)_optionsForSection:(int)arg1;
- (id)_popover;
- (id)_selectionNode;
- (void)_setupGroupsAndOptions;
- (void)dealloc;
- (void)deleteBackward;
- (BOOL)hasText;
- (float)heightForItems;
- (id)initWithDOMHTMLSelectNode:(id)arg1 cachedItems:(id)arg2 singleSelectionIndex:(unsigned int)arg3 multipleSelection:(BOOL)arg4;
- (void)insertText:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)set_cachedItems:(id)arg1;
- (void)set_groupsAndOptions:(id)arg1;
- (void)set_popover:(id)arg1;
- (void)set_selectionNode:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (void)viewWillAppear:(BOOL)arg1;

@end
