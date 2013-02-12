/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface UIMovieView : MPVideoView {
}

- (id)avPlayer;
- (int)bufferingStatusMask;
- (double)currentTime;
- (double)duration;
- (id)mpavController;
- (void)pause;
- (void)play;
- (int)playableContentType;
- (int)playbackState;
- (void)setCurrentTime:(double)arg1 timeSnapOption:(int)arg2;
- (void)setCurrentTime:(double)arg1;
- (void)setRepeatMode:(int)arg1;
- (void)stop;

@end
