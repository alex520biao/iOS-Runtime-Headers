/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <KNAnimationPluginContext>, KNAnimatedSlideModel, KNAnimatedSlideView, KNPlaybackSession;

@interface KNAnimationRenderer : NSObject {
    <KNAnimationPluginContext> *_pluginContext;
    KNAnimatedSlideView *mASV;
    BOOL mAreAnimationsPaused;
    unsigned int mDirection;
    double mDuration;
    KNAnimatedSlideModel *mModel;
    id mPlugin;
    Class mPluginClass;
    KNPlaybackSession *mSession;
}

@property unsigned int direction;
@property double duration;
@property(readonly) id plugin;
@property(readonly) Class pluginClass;
@property(readonly) <KNAnimationPluginContext> * pluginContext;

- (void)dealloc;
- (unsigned int)direction;
- (double)duration;
- (void)pauseAnimations;
- (void)pauseAnimationsAtTime:(double)arg1;
- (id)plugin;
- (Class)pluginClass;
- (id)pluginContext;
- (void)resumeAnimationsIfPaused;
- (void)resumeAnimationsIfPausedAtTime:(double)arg1;
- (void)setDirection:(unsigned int)arg1;
- (void)setDuration:(double)arg1;
- (void)setupPluginContext;
- (void)stopAnimations;

@end
