/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSDictionary, NSString, NSURL;

@interface ASAsset : NSObject {
    NSString *_assetType;
    NSDictionary *_attributes;
    struct __MobileAsset { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __CFString {} *x2; struct __CFDictionary {} *x3; struct __MobileAssetQuery {} *x4; struct __MobileAssetQuery {} *x5; unsigned char x6; unsigned char x7; struct SoftwareUpdateProperties {} *x8; unsigned int x9; } *_cfAsset;
    NSString *_clientName;
    NSDictionary *_downloadOptions;
    NSString *_identifier;
    id _progressHandler;
}

@property(readonly) NSString * assetType;
@property(readonly) NSDictionary * attributes;
@property(retain) NSString * clientName;
@property(retain) NSDictionary * downloadOptions;
@property(readonly) NSDictionary * fullAttributes;
@property int garbageCollectionBehavior;
@property(readonly) NSURL * localURL;
@property(copy) id progressHandler;
@property(readonly) int state;

- (void)_downloadWithOptions:(id)arg1 shouldFireCallback:(BOOL)arg2;
- (id)_getLocalAttribute:(id)arg1;
- (void)adjustDownloadOptions:(id)arg1 completion:(id)arg2;
- (id)assetType;
- (id)attributes;
- (void)beginDownloadWithOptions:(id)arg1;
- (void)cancelDownload:(id)arg1;
- (BOOL)cancelDownloadAndReturnError:(id*)arg1;
- (id)clientName;
- (void)dealloc;
- (id)description;
- (id)downloadOptions;
- (id)fullAttributes;
- (int)garbageCollectionBehavior;
- (id)identifier;
- (id)initWithAssetType:(id)arg1 attributes:(id)arg2;
- (BOOL)isPresentOnDisk;
- (id)localURL;
- (struct __MobileAsset { struct __CFRuntimeBase { unsigned int x_1_1_1; unsigned char x_1_1_2[4]; } x1; struct __CFString {} *x2; struct __CFDictionary {} *x3; struct __MobileAssetQuery {} *x4; struct __MobileAssetQuery {} *x5; unsigned char x6; unsigned char x7; struct SoftwareUpdateProperties {} *x8; unsigned int x9; }*)mobileAsset;
- (void)pauseDownload:(id)arg1;
- (BOOL)pauseDownloadAndReturnError:(id*)arg1;
- (id)progressHandler;
- (void)purge:(id)arg1;
- (BOOL)purgeAndReturnError:(id*)arg1;
- (BOOL)requiredDiskSpaceIsAvailable:(long long*)arg1 error:(id*)arg2;
- (void)resumeDownload:(id)arg1;
- (BOOL)resumeDownloadAndReturnError:(id*)arg1;
- (void)setClientName:(id)arg1;
- (void)setDownloadOptions:(id)arg1;
- (void)setGarbageCollectionBehavior:(int)arg1;
- (void)setProgressHandler:(id)arg1;
- (int)state;

@end
