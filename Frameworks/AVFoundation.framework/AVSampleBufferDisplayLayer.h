/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVSampleBufferDisplayLayerInternal, NSString;

@interface AVSampleBufferDisplayLayer : CALayer {
    AVSampleBufferDisplayLayerInternal *_sampleBufferDisplayLayerInternal;
}

@property(retain) struct OpaqueCMTimebase { }* controlTimebase;
@property(getter=isReadyForMoreMediaData,readonly) BOOL readyForMoreMediaData;
@property(copy) NSString * videoGravity;

- (void)_addAnimationsForContentLayer:(id)arg1 size:(struct CGSize { float x1; float x2; })arg2 gravity:(id)arg3;
- (long)_createVideoQueue;
- (void)_refreshAboveHighWaterLevel;
- (void)_setControlTimebase:(struct OpaqueCMTimebase { }*)arg1;
- (void)_updatePresentationSize:(struct CGSize { float x1; float x2; })arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (struct OpaqueCMTimebase { }*)controlTimebase;
- (void)dealloc;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)finalize;
- (void)flush;
- (void)flushAndRemoveImage;
- (id)init;
- (BOOL)isReadyForMoreMediaData;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(id)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setControlTimebase:(struct OpaqueCMTimebase { }*)arg1;
- (void)setVideoGravity:(id)arg1;
- (void)stopRequestingMediaData;
- (id)videoGravity;

@end
