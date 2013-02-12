/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImage, UITextInputTraits;

@interface UIKeyboard : UIView <UIKeyboardImplGeometryDelegate> {
    UITextInputTraits *m_defaultTraits;
    BOOL m_minimized;
    int m_orientation;
    BOOL m_respondingToImplGeometryChange;
    UIImage *m_snapshot;
    BOOL m_typingDisabled;
}

@property BOOL caretBlinks;
@property BOOL caretVisible;
@property(getter=isMinimized) BOOL minimized;
@property BOOL showsCandidatesInline;
@property BOOL typingEnabled;

+ (void)_clearActiveKeyboard;
+ (id)activeKeyboard;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })defaultFrameForInterfaceOrientation:(int)arg1;
+ (struct CGSize { float x1; float x2; })defaultSize;
+ (struct CGSize { float x1; float x2; })defaultSizeForInterfaceOrientation:(int)arg1;
+ (void)initImplementationNow;
+ (BOOL)isInHardwareKeyboardMode;
+ (BOOL)isOnScreen;
+ (struct CGSize { float x1; float x2; })keyboardSizeForInterfaceOrientation:(int)arg1;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })onscreenFrameForTextInputTraits:(id)arg1;
+ (void)removeAllDynamicDictionaries;
+ (BOOL)respondsToProxGesture;
+ (BOOL)shouldMinimizeForHardwareKeyboard;
+ (struct CGSize { float x1; float x2; })sizeForInterfaceOrientation:(int)arg1;
+ (BOOL)splitKeyboardEnabled;

- (void)_acceptCurrentCandidate;
- (id)_baseKeyForRepresentedString:(id)arg1;
- (void)_changeToKeyplane:(id)arg1;
- (void)_clearCurrentInputManager;
- (id)_getAutocorrection;
- (id)_getCurrentKeyboardName;
- (id)_getCurrentKeyplaneName;
- (id)_getLocalizedInputMode;
- (BOOL)_hasCandidates;
- (BOOL)_isAutomaticKeyboard;
- (id)_keyplaneForKey:(id)arg1;
- (id)_keyplaneNamed:(id)arg1;
- (int)_positionInCandidateList:(id)arg1;
- (void)_setAutocorrects:(BOOL)arg1;
- (void)_setInputMode:(id)arg1;
- (id)_touchPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_typeCharacter:(id)arg1 withError:(struct CGPoint { float x1; float x2; })arg2 shouldTypeVariants:(BOOL)arg3 baseKeyForVariants:(BOOL)arg4;
- (void)acceptAutocorrection;
- (void)activate;
- (void)autoAdjustOrientation;
- (void)autoAdjustOrientationForSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)canDismiss;
- (BOOL)caretBlinks;
- (BOOL)caretVisible;
- (void)clearSnapshot;
- (void)deactivate;
- (void)dealloc;
- (id)defaultTextInputTraits;
- (id)delegate;
- (void)displayLayer:(id)arg1;
- (void)geometryChangeDone:(BOOL)arg1;
- (struct UIPeripheralAnimationGeometry { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; })geometryForImplHeightDelta:(float)arg1;
- (struct UIPeripheralAnimationGeometry { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct CGAffineTransform { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; float x5; })geometryForMinimize:(BOOL)arg1;
- (BOOL)hasAutocorrectPrompt;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)implBoundsHeightChangeDone:(float)arg1 suppressNotification:(BOOL)arg2;
- (id)initWithDefaultSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)interfaceOrientation;
- (BOOL)isActive;
- (BOOL)isMinimized;
- (void)keyboardMinMaximized:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)manualKeyboardWasOrderedIn;
- (void)manualKeyboardWasOrderedOut;
- (void)manualKeyboardWillBeOrderedIn;
- (void)manualKeyboardWillBeOrderedOut;
- (void)maximize;
- (void)minimize;
- (void)movedFromSuperview:(id)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)prepareForGeometryChange;
- (void)prepareForImplBoundsHeightChange:(float)arg1 suppressNotification:(BOOL)arg2;
- (void)removeAutocorrectPrompt;
- (void)removeFromSuperview;
- (void)resizeForKeyplaneSize:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)returnKeyEnabled;
- (void)setCaretBlinks:(BOOL)arg1;
- (void)setCaretVisible:(BOOL)arg1;
- (void)setCorrectionLearningAllowed:(BOOL)arg1;
- (void)setDefaultTextInputTraits:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setMinimized:(BOOL)arg1;
- (void)setNeedsDisplay;
- (void)setReturnKeyEnabled:(BOOL)arg1;
- (void)setShowsCandidatesInline:(BOOL)arg1;
- (void)setTypingEnabled:(BOOL)arg1;
- (BOOL)shouldSaveMinimizationState;
- (BOOL)showsCandidatesInline;
- (void)syncMinimizedStateToHardwareKeyboardAttachedState;
- (void)takeSnapshot;
- (id)targetWindow;
- (int)textEffectsVisibilityLevel;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (BOOL)typingEnabled;
- (void)updateLayout;

@end
