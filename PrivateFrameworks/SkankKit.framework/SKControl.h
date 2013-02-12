/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

@interface SKControl : SKLayer {
    SEL _action;
    BOOL _enabled;
    id _target;
}

- (SEL)action;
- (BOOL)enabled;
- (BOOL)handleEvent:(struct __GSEvent { }*)arg1 inLayer:(id)arg2;
- (id)init;
- (void)performAction;
- (void)setAction:(SEL)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setTarget:(id)arg1 andAction:(SEL)arg2;
- (void)setTarget:(id)arg1;
- (id)target;

@end
