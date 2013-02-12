/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

@class NSMutableArray, NSOperationQueue;

@interface OSDRawGyroDevice : NSObject {
    struct __IOHIDServiceClient { } *_GyroPlugin;
    struct __IOHIDEventSystemClient { } *_HIDSystemClient;
    BOOL _getTemperature;
    NSOperationQueue *_operationQueue;
    SEL _registeredCallback;
    id _registeredDelegate;
    NSMutableArray *_samples;
    BOOL getTemperature;
}

@property struct __IOHIDServiceClient { }* _GyroPlugin;
@property(getter=_getTemperature,readonly) BOOL getTemperature;

- (struct __IOHIDServiceClient { }*)_GyroPlugin;
- (BOOL)_getTemperature;
- (void)dealloc;
- (void)enqueueCallback:(id)arg1;
- (struct __IOHIDServiceClient { }*)getGyroPlugin;
- (struct __IOHIDEventSystemClient { }*)getHIDSystem;
- (id)init;
- (int)registerGyroCallback:(SEL)arg1 delegate:(id)arg2 operationQueue:(id)arg3 sampleInterval:(float)arg4 withTemperature:(BOOL)arg5 lowPassFilter:(int)arg6;
- (int)registerGyroCallbackIOKit:(float)arg1 withTemperature:(BOOL)arg2 lowPassFilter:(int)arg3;
- (id)sampleForDuration:(float)arg1 sampleInterval:(float)arg2 withTemperature:(BOOL)arg3 lowPassFilter:(int)arg4;
- (void)sampleForDurationCallback:(id)arg1;
- (void)set_GyroPlugin:(struct __IOHIDServiceClient { }*)arg1;
- (void)unregisterGyroCallback;
- (void)unregisterGyroCallbackIOKit;

@end
