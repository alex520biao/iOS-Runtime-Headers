/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetReaderAudioMixOutputInternal, AVAudioMix, NSArray, NSDictionary;

@interface AVAssetReaderAudioMixOutput : AVAssetReaderOutput {
    AVAssetReaderAudioMixOutputInternal *_audioMixOutputInternal;
}

@property(copy) AVAudioMix * audioMix;
@property(readonly) NSDictionary * audioSettings;
@property(readonly) NSArray * audioTracks;

+ (id)assetReaderAudioMixOutputWithAudioTracks:(id)arg1 audioSettings:(id)arg2;

- (id)_asset;
- (struct opaqueMTAudioProcessingTap { }*)_audioTapProcessorForTrack:(id)arg1;
- (id)_audioVolumeCurveForTrack:(id)arg1;
- (BOOL)_enableTrackExtractionReturningError:(id*)arg1;
- (void)_setAudioTapProcessor:(struct opaqueMTAudioProcessingTap { }*)arg1 forTrack:(id)arg2;
- (void)_setAudioVolumeCurve:(id)arg1 forTrack:(id)arg2;
- (id)audioMix;
- (id)audioSettings;
- (id)audioTracks;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)init;
- (id)initWithAudioTracks:(id)arg1 audioSettings:(id)arg2;
- (id)mediaType;
- (void)setAudioMix:(id)arg1;

@end
