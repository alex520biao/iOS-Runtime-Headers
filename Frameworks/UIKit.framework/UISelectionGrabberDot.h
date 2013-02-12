/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UISelectionGrabber;

@interface UISelectionGrabberDot : UIView {
    UISelectionGrabber *m_grabber;
}

@property UISelectionGrabber * grabber;

- (void)dealloc;
- (id)grabber;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 container:(id)arg2;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setGrabber:(id)arg1;
- (int)textEffectsVisibilityLevel;
- (int)textEffectsVisibilityLevelWhenKey;

@end
