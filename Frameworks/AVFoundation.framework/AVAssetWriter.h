/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetWriterHelper, AVAssetWriterInternal, NSArray, NSError, NSString, NSURL;

@interface AVAssetWriter : NSObject {
    AVAssetWriterInternal *_internal;
}

@property(readonly) NSArray * availableMediaTypes;
@property(readonly) NSError * error;
@property(getter=_helper,readonly) AVAssetWriterHelper * helper;
@property(readonly) NSArray * inputs;
@property(copy) NSArray * metadata;
@property(readonly) NSString * outputFileType;
@property(readonly) NSURL * outputURL;
@property BOOL shouldOptimizeForNetworkUse;
@property(readonly) int status;

+ (id)_errorForOSStatus:(long)arg1;
+ (id)assetWriterWithURL:(id)arg1 fileType:(id)arg2 error:(id*)arg3;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingError;
+ (id)keyPathsForValuesAffectingStatus;

- (id)_helper;
- (BOOL)_setHelper:(id)arg1 ifCurrentHelper:(id)arg2 withBlock:(id)arg3;
- (BOOL)_setHelper:(id)arg1 ifCurrentHelper:(id)arg2;
- (void)_transitionToFailedStatusWithError:(id)arg1;
- (void)addInput:(id)arg1;
- (void)addInputGroup:(id)arg1;
- (id)availableMediaTypes;
- (BOOL)canAddInput:(id)arg1;
- (BOOL)canAddInputGroup:(id)arg1;
- (BOOL)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2;
- (void)cancelWriting;
- (void)dealloc;
- (id)description;
- (void)endSessionAtSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)error;
- (void)finalize;
- (BOOL)finishWriting;
- (void)finishWritingWithCompletionHandler:(id)arg1;
- (id)init;
- (id)initWithURL:(id)arg1 fileType:(id)arg2 error:(id*)arg3;
- (id)inputGroups;
- (id)inputs;
- (id)metadata;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })movieFragmentInterval;
- (int)movieTimeScale;
- (id)outputFileType;
- (id)outputURL;
- (void)setMetadata:(id)arg1;
- (void)setMovieFragmentInterval:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setMovieTimeScale:(int)arg1;
- (void)setShouldOptimizeForNetworkUse:(BOOL)arg1;
- (BOOL)shouldOptimizeForNetworkUse;
- (void)startSessionAtSourceTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (BOOL)startWriting;
- (int)status;

@end
