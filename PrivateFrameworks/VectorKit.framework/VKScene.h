/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class GEOTileKeyList, NSSet, VKTileKeyList;

@interface VKScene : NSObject <NSCopying> {
    GEOTileKeyList *_debugKeyList;
    BOOL _fullyLoaded;
    VKTileKeyList *_keysInView;
    BOOL _mapIsOpaque;
    NSSet *_tilesToRender;
}

@property(retain) GEOTileKeyList * debugKeyList;
@property BOOL fullyLoaded;
@property(retain) VKTileKeyList * keysInView;
@property BOOL mapIsOpaque;
@property(retain) NSSet * tilesToRender;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugKeyList;
- (void)forEachLabelFeatureOfType:(unsigned int)arg1 visitor:(id)arg2;
- (BOOL)fullyLoaded;
- (id)keysInView;
- (BOOL)mapIsOpaque;
- (void)reset;
- (void)setDebugKeyList:(id)arg1;
- (void)setFullyLoaded:(BOOL)arg1;
- (void)setKeysInView:(id)arg1;
- (void)setMapIsOpaque:(BOOL)arg1;
- (void)setTilesToRender:(id)arg1;
- (id)tilesToRender;

@end
