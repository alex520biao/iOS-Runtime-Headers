/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboard, UIResponder, UIView;

@interface UIInputViewSet : NSObject {
    UIView *_inputAccessoryView;
    UIView *_inputView;
    BOOL _isKeyboard;
    BOOL _isSplit;
    UIResponder *_restorableResponder;
    float _splitHeightDelta;
    BOOL _supportsSplit;
}

@property(getter=isEmpty,readonly) BOOL empty;
@property(retain) UIView * inputAccessoryView;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } inputAccessoryViewBounds;
@property(retain) UIView * inputView;
@property(readonly) struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } inputViewBounds;
@property(readonly) BOOL inputViewKeyboardCanSplit;
@property(readonly) BOOL isSplit;
@property(readonly) UIKeyboard * keyboard;
@property(readonly) UIView * layeringView;
@property UIResponder * restorableResponder;
@property float splitHeightDelta;
@property(readonly) BOOL supportsSplit;

+ (id)emptyInputSet;
+ (id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2;
+ (id)inputSetWithKeyboardAndAccessoryView:(id)arg1;

- (BOOL)__isCKAccessoryView;
- (BOOL)_accessorySuppressesShadow;
- (void)_beginSplitTransitionIfNeeded;
- (void)_endSplitTransitionIfNeeded;
- (BOOL)_inputAccessoryViewSupportsSplit;
- (BOOL)_inputViewIsSplit;
- (BOOL)_inputViewIsVisible;
- (BOOL)_inputViewSetSupportsSplit;
- (BOOL)_inputViewSupportsSplit;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_leftInputViewSetFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_rightInputViewSetFrame;
- (void)_setSplitProgress:(float)arg1;
- (id)_splittableInputAccessoryView;
- (BOOL)canAnimateToInputViewSet:(id)arg1;
- (BOOL)containsResponder:(id)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)inSyncWithOrientation:(int)arg1 forKeyboard:(id)arg2;
- (id)initWithInputView:(id)arg1 accessoryView:(id)arg2 isKeyboard:(BOOL)arg3;
- (id)inputAccessoryView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })inputAccessoryViewBounds;
- (id)inputView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })inputViewBounds;
- (BOOL)inputViewKeyboardCanSplit;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSplit;
- (BOOL)isStrictSupersetOfViewSet:(id)arg1;
- (id)keyboard;
- (int)keyboardOrientation:(id)arg1;
- (id)layeringView;
- (void)refreshPresentation;
- (id)restorableResponder;
- (void)setInputAccessoryView:(id)arg1;
- (void)setInputView:(id)arg1;
- (void)setRestorableResponder:(id)arg1;
- (void)setSplitHeightDelta:(float)arg1;
- (float)splitHeightDelta;
- (BOOL)supportsSplit;
- (BOOL)usesKeyClicks;
- (BOOL)visible;

@end
