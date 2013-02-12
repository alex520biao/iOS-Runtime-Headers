/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKeyboardCandidateBarSegmentControl, UISegmentedControl;

@interface UIKeyboardCandidateSortControl : UIView {
    UIKeyboardCandidateBarSegmentControl *_segmentedControl;
    int _visualStyle;
}

@property(readonly) UISegmentedControl * segmentedControl;

- (void)addSegmentedControlWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 visualStyle:(int)arg2;
- (void)layoutSubviews;
- (id)segmentedControl;
- (void)selectNextSegment;
- (void)selectPreviousSegment;
- (void)setSortControlTitles:(id)arg1;
- (void)updateTitleTextAttributes;

@end
