/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIDocumentInteractionController;

@interface _UIDocumentActivityViewController : UIActivityViewController {
    UIDocumentInteractionController *_documentInteractionController;
    BOOL _hideSystemActivities;
    BOOL hideSystemActivities;
}

@property UIDocumentInteractionController * documentInteractionController;
@property BOOL hideSystemActivities;

- (void)_performActivity:(id)arg1;
- (void)_prepareActivity:(id)arg1;
- (BOOL)_shouldShowSystemActivity:(id)arg1;
- (id)documentInteractionController;
- (BOOL)hideSystemActivities;
- (void)setDocumentInteractionController:(id)arg1;
- (void)setHideSystemActivities:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;

@end
