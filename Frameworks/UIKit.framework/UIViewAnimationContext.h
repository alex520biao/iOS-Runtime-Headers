/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray;

@interface UIViewAnimationContext : NSObject {
    int _animationCount;
    id _completionHandler;
    NSArray *_viewAnimations;
}

@property int animationCount;
@property(readonly) id completionHandler;
@property(retain) NSArray * viewAnimations;

- (int)animationCount;
- (id)completionHandler;
- (void)dealloc;
- (id)initWithCompletionHandler:(id)arg1;
- (void)setAnimationCount:(int)arg1;
- (void)setViewAnimations:(id)arg1;
- (id)viewAnimations;

@end
