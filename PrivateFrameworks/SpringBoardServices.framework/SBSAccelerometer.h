/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

@class <SBSAccelerometerDelegate>, BKSAccelerometer;

@interface SBSAccelerometer : NSObject <BKSAccelerometerDelegate> {
    BKSAccelerometer *_bksMirror;
    <SBSAccelerometerDelegate> *_delegate;
}

@property BOOL accelerometerEventsEnabled;
@property <SBSAccelerometerDelegate> * delegate;
@property BOOL orientationEventsEnabled;
@property double updateInterval;
@property float xThreshold;
@property float yThreshold;
@property float zThreshold;

- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(int)arg2;
- (BOOL)accelerometerEventsEnabled;
- (int)currentDeviceOrientation;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (BOOL)orientationEventsEnabled;
- (void)setAccelerometerEventsEnabled:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOrientationEventsEnabled:(BOOL)arg1;
- (void)setUpdateInterval:(double)arg1;
- (void)setXThreshold:(float)arg1;
- (void)setYThreshold:(float)arg1;
- (void)setZThreshold:(float)arg1;
- (double)updateInterval;
- (float)xThreshold;
- (float)yThreshold;
- (float)zThreshold;

@end
