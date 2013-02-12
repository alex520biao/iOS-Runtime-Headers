/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSMutableArray;

@interface AVFigAssetWriterAudioTrack : AVFigAssetWriterTrack {
    NSMutableArray *_pendingAudioSampleBuffers;
}

- (int)_attachToFigAssetWriterUsingFormatSpecification:(id)arg1 sourcePixelBufferAttributes:(id)arg2 error:(id*)arg3;
- (BOOL)_flushPendingSampleBuffersReturningError:(id*)arg1;
- (BOOL)addSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg1 mediaType:(id)arg2 mediaFileType:(id)arg3 formatSpecification:(id)arg4 sourcePixelBufferAttributes:(id)arg5 error:(id*)arg6;
- (BOOL)markEndOfDataReturningError:(id*)arg1;
- (void)prepareToEndSession;

@end
