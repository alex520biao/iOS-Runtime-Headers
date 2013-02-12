/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class CALayer, NSMutableArray, NSObject<AVConferencePreviewDelegate>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSObject<VideoCaptureProtocol>, VideoAttributes;

@interface AVConferencePreviewServer : NSObject {
    NSMutableArray *activeConferences;
    NSObject<AVConferencePreviewDelegate> *appDelegate;
    NSObject<VideoCaptureProtocol> *avCapture;
    NSObject<OS_dispatch_queue> *avConferencePreviewServerConferenceQueue;
    NSObject<OS_dispatch_queue> *avConferencePreviewServerNotificationQueue;
    NSObject<OS_dispatch_queue> *avConferencePreviewServerQueue;
    NSObject<OS_dispatch_source> *cameraHealthMonitor;
    int captureFrameCount;
    unsigned int currentCameraID;
    int currentFrameRate;
    int currentHeight;
    int currentWidth;
    int encodedFrameCount;
    double falteredRenderingtimeStamp;
    BOOL finishedPreviewToPIPAnimation;
    BOOL firstPreviewFrame;
    struct _CAImageQueue { } *localCAImageQueue;
    struct _CAImageQueue { } *localCAImageQueueBack;
    VideoAttributes *localVideoAttributes;
    struct OpaqueFigImageQueue { } *localVideoImageQueue;
    struct OpaqueFigImageQueue { } *localVideoImageQueueBack;
    CALayer *localVideoLayer;
    int localVideoSlot;
    int localVideoSlotBack;
    int pendingFrameRate;
    int pendingHeight;
    int pendingWidth;
    int previewFrameCount;
}

@property(retain) NSObject<AVConferencePreviewDelegate> * appDelegate;

+ (id)AVConferencePreviewServerSingleton;

- (id)allocWithZone:(struct _NSZone { }*)arg1;
- (id)appDelegate;
- (id)autorelease;
- (void)beginPIPToPreviewAnimation;
- (void)beginPreviewToPIPAnimation;
- (struct __CFDictionary { }*)cameraColorInfo;
- (unsigned int)captureCamera;
- (BOOL)captureVideoWidth:(int*)arg1 height:(int*)arg2 frameRate:(int*)arg3;
- (id)copyLocalVideoAttributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long)createVideoCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 useBackFacingCamera:(BOOL)arg4;
- (void)dealloc;
- (BOOL)deregisterForFrames:(id)arg1;
- (void)disconnectClientLayers;
- (id)drawingContext;
- (void)endPIPToPreviewAnimation;
- (void)endPreviewToPIPAnimation;
- (BOOL)enqueueFrameToQueueFront:(BOOL)arg1 frame:(struct __CVBuffer { }*)arg2 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)handleAVCaptureError:(long)arg1 error:(id)arg2;
- (id)init;
- (BOOL)isConferenceRegisteredForFrames:(id)arg1;
- (BOOL)isRunningPreview;
- (id)localVideoAttributes;
- (id)localVideoLayer;
- (int)localVideoSlot:(BOOL)arg1;
- (BOOL)onCaptureFrame:(struct __CVBuffer { }*)arg1 frameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 preview:(BOOL)arg3 isSwitching:(BOOL)arg4 cameraType:(int)arg5;
- (void)previewVideoWidth:(int*)arg1 height:(int*)arg2 frameRate:(int*)arg3;
- (void)reconnectClientLayerFront:(BOOL)arg1;
- (BOOL)registerForFrames:(id)arg1 unpausing:(BOOL)arg2;
- (BOOL)registerForFrames:(id)arg1 width:(int)arg2 height:(int)arg3 frameRate:(int)arg4 unpausing:(BOOL)arg5;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (void)setAppDelegate:(id)arg1;
- (BOOL)setCaptureCamera:(unsigned int)arg1;
- (void)setCaptureWidth:(int)arg1 height:(int)arg2 rate:(int)arg3 forced:(BOOL)arg4;
- (void)setCaptureWidth:(int)arg1 height:(int)arg2 rate:(int)arg3;
- (BOOL)setFrameRatePercentage:(id)arg1 percentage:(double)arg2;
- (BOOL)setLocalVideoAttributes:(id)arg1;
- (BOOL)setLocalVideoLayer:(id)arg1;
- (void)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3 unpausing:(BOOL)arg4;
- (void)startPreviewUnpausing:(BOOL)arg1;
- (void)stopCapture;
- (void)stopPreview;

@end
