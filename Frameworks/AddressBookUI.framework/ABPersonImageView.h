/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPersonImageDataDelegate>, <ABStyleProvider>, ABClippingImageView, UIImage, UIImageView;

@interface ABPersonImageView : ABPasteboardControl {
    BOOL _allowsEditing;
    void *_displayedPerson;
    UIImageView *_editingImageView;
    ABClippingImageView *_emptyImageView;
    <ABPersonImageDataDelegate> *_imageDataDelegate;
    BOOL _isEditing;
    BOOL _multiplePhotoBackdropEnabled;
    BOOL _needsReflow;
    BOOL _needsReload;
    ABClippingImageView *_pasteboardMaskImageView;
    UIImage *_personImage;
    UIImageView *_personImageView;
    BOOL _scalesContentToFit;
    BOOL _shouldPickBestImage;
    BOOL _showLabel;
    <ABStyleProvider> *_styleProvider;
}

@property BOOL allowsEditing;
@property(readonly) UIImage * attributionImage;
@property(readonly) UIImage * backgroundImage;
@property void* displayedPerson;
@property <ABPersonImageDataDelegate> * imageDataDelegate;
@property(readonly) UIImage * maskImage;
@property BOOL multiplePhotoBackdropEnabled;
@property(readonly) UIImage * overlayImage;
@property BOOL scalesContentToFit;
@property BOOL shouldPickBestImage;
@property(retain) <ABStyleProvider> * styleProvider;

+ (id)newImageWithName:(id)arg1;
+ (struct CGSize { float x1; float x2; })sizeForOptimalPerformance;

- (void)_drawEditLabelInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_newDictionaryWithImageData;
- (id)_supportedPasteboardImageTypesIncludingCustomTypes:(BOOL)arg1;
- (void)abMenuControllerWillHide;
- (void)abMenuControllerWillShow:(id)arg1;
- (BOOL)abShouldShowMenu;
- (BOOL)allowsEditing;
- (id)attributionImage;
- (id)backgroundImage;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (id)copyDefaultImageForPerson:(void*)arg1;
- (id)copyImageForPerson:(void*)arg1 withFrameSize:(struct CGSize { float x1; float x2; })arg2 operation:(id)arg3 cache:(id)arg4;
- (void)dealloc;
- (void*)displayedPerson;
- (id)editingImageView;
- (id)emptyImageView;
- (id)framedPhoto;
- (BOOL)hasImageToDisplay;
- (id)imageDataDelegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 styleProvider:(id)arg2;
- (void)layoutSubviews;
- (id)maskImage;
- (BOOL)multiplePhotoBackdropEnabled;
- (id)overlayImage;
- (void)paste:(id)arg1;
- (id)pasteboardMaskImageView;
- (id)personImageView;
- (void)reflow;
- (void)reflowIfNeeded;
- (void)reload;
- (void)reloadIfNeeded;
- (BOOL)scalesContentToFit;
- (void)setAllowsEditing:(BOOL)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setImageDataDelegate:(id)arg1;
- (void)setIsEditing:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setMultiplePhotoBackdropEnabled:(BOOL)arg1;
- (void)setNeedsReflow;
- (void)setNeedsReload;
- (void)setScalesContentToFit:(BOOL)arg1;
- (void)setShouldPickBestImage:(BOOL)arg1;
- (void)setStyleProvider:(id)arg1;
- (BOOL)shouldPickBestImage;
- (id)styleProvider;

@end
