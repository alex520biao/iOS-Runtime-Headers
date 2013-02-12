/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMActivity : CMLogItem {
    id _internal;
}

@property(readonly) int confidence;
@property(readonly) BOOL isDriving;
@property(readonly) BOOL isMoving;
@property(readonly) BOOL isRunning;
@property(readonly) BOOL isWalking;

- (struct CLMotionActivity { int x1; int x2; int x3; int x4; float x5; })activity;
- (int)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMotionActivity:(struct CLMotionActivity { int x1; int x2; int x3; int x4; float x5; })arg1 andTimestamp:(double)arg2;
- (BOOL)isDriving;
- (BOOL)isMoving;
- (BOOL)isRunning;
- (BOOL)isWalking;

@end
