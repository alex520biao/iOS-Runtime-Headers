/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMGestureManager : NSObject {
    id _internal;
}

@property(copy) id gestureHandler;

+ (BOOL)isGestureServiceEnabled;
+ (void)setGestureServiceEnabled:(BOOL)arg1;

- (void)dealloc;
- (id)gestureHandler;
- (id)init;
- (id)initWithPriority:(int)arg1;
- (void)setGestureHandler:(id)arg1;

@end
