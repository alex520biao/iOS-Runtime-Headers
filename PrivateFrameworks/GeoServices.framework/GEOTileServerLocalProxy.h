/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class <GEOTileServerProxyDelegate>, GEOTileDBReader, GEOTileDBWriter, NSLock, NSMapTable, NSMutableArray, NSString;

@interface GEOTileServerLocalProxy : NSObject <GEOTileServerProxy> {
    NSString *_cacheLocation;
    GEOTileDBReader *_dbReader;
    GEOTileDBWriter *_dbWriter;
    <GEOTileServerProxyDelegate> *_delegate;
    NSMutableArray *_inProgress;
    NSLock *_inProgressLock;
    NSMapTable *_providers;
}

- (id)_contextForFullList:(id)arg1;
- (id)_contextForNetworkList:(id)arg1;
- (void)_registerBuiltInProviders;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1;
- (void)cancelLoad:(id)arg1;
- (void)closeCacheConnection;
- (void)dataForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1 asyncHandler:(id)arg2;
- (id)dataForKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)dealloc;
- (void)endPreloadSession;
- (void)flushPendingWrites;
- (id)initWithCacheLocation:(id)arg1;
- (void)loadTiles:(id)arg1 checkDisk:(BOOL)arg2 allowNetworking:(BOOL)arg3 bundleIdentifier:(id)arg4 bundleVersion:(id)arg5;
- (void)openCacheConnection;
- (void)registerProvider:(Class)arg1;
- (void)reportCorruptTile:(const struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1 finished:(id)arg2;
- (BOOL)skipNetworkForKeysWhenPreloading:(id)arg1;
- (void)tileRequester:(id)arg1 receivedData:(id)arg2 tileEdition:(unsigned int)arg3 tileSet:(unsigned int)arg4 forKey:(struct _GEOTileKey { unsigned int x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned int x4 : 6; unsigned int x5 : 8; unsigned int x6 : 8; unsigned int x7 : 8; unsigned int x8 : 1; unsigned int x9 : 7; unsigned char x10[4]; })arg5 userInfo:(id)arg6;
- (void)tileRequester:(id)arg1 receivedError:(id)arg2;
- (void)tileRequesterFinished:(id)arg1;

@end
