/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSString, NSDictionary;

@interface CKAudioMediaObject : CKAVMediaObject  {
    NSDictionary *_transcodeOptions;
    NSString *_transcodePath;
}

+ (id)mimeTypesToFileExtensions;

- (void)dealloc;
- (int)mediaType;
- (id)effectiveExportedFilename;
- (id)transcodedFilename;
- (void)prepareForTranscode;
- (id)transcodeMimeType;
- (id)_transcodeOptions;
- (double)transcodeDuration;
- (double)transcodeEndTime;
- (double)transcodeStartTime;

@end