/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

@interface SKAccelerometerLayer : SKLayer {
    BOOL _paused;
    int _style;
    float _x;
    float _y;
    float _z;
}

- (void)accelerometerEvent:(id)arg1;
- (void)dealloc;
- (void)drawArrowFrom:(struct CGPoint { float x1; float x2; })arg1 toPoint:(struct CGPoint { float x1; float x2; })arg2 inContext:(struct CGContext { }*)arg3;
- (void)drawArrowInContext:(struct CGContext { }*)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawXYZInContext:(struct CGContext { }*)arg1;
- (id)init;
- (void)pause;
- (BOOL)paused;
- (void)restart;
- (void)setAccelerometerStyle:(int)arg1;
- (void)setNeedsDisplayMainThread:(id)arg1;
- (void)setX:(float)arg1 y:(float)arg2 z:(float)arg3;

@end
