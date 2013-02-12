/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GEOVectorTile, VGLCullableMesh, VGLGroupCullableMesh, VGLMesh, VGLMultiTexturedMesh, VGLTexture, VKAnimation, VKHeightfield, VKStylesheet, __end_;

@interface VKBuildingFootprintMaker : NSObject <VKTileHeightInformation> {
    /* Warning: unhandled struct encoding: '{vector<VGLGroupCullableMesh *, vk_allocator<VGLGroupCullableMesh *> >="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<VGLGroupCullableMesh **, vk_allocator<VGLGroupCullableMesh *> >="__first_"^@}}' */ struct vector<VGLGroupCullableMesh *, vk_allocator<VGLGroupCullableMesh *> > { 
        __end_ **__begin_; 
    /* Warning: unhandled struct encoding: '{vector<VGLGroupCullableMesh *, vk_allocator<VGLGroupCullableMesh *> >="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<VGLGroupCullableMesh **, vk_allocator<VGLGroupCullableMesh *> >="__first_"^@}}' */ struct vector<VGLGroupCullableMesh *, vk_allocator<VGLGroupCullableMesh *> > { 
        __end_ **__begin_; 
    struct vector<std::__1::vector<VGLSingleTexturedGroupCullableMesh *, vk_allocator<VGLSingleTexturedGroupCullableMesh *>>, vk_allocator<std::__1::vector<VGLSingleTexturedGroupCullableMesh *, vk_allocator<VGLSingleTexturedGroupCullableMesh *>>> > { 
        struct vector<VGLSingleTexturedGroupCullableMesh *, vk_allocator<VGLSingleTexturedGroupCullableMesh *> > {} *__begin_; 
        struct vector<VGLSingleTexturedGroupCullableMesh *, vk_allocator<VGLSingleTexturedGroupCullableMesh *> > {} *__end_; 
        struct __compressed_pair<std::__1::vector<VGLSingleTexturedGroupCullableMesh *, vk_allocator<VGLSingleTexturedGroupCullableMesh *>> *, vk_allocator<std::__1::vector<VGLSingleTexturedGroupCullableMesh *, vk_allocator<VGLSingleTexturedGroupCullableMesh *>>> > { 
            struct vector<VGLSingleTexturedGroupCullableMesh *, vk_allocator<VGLSingleTexturedGroupCullableMesh *> > {} *__first_; 
        } __end_cap_; 
    struct vector<std::__1::vector<VGLSingleTexturedGroupCullableMesh *, vk_allocator<VGLSingleTexturedGroupCullableMesh *>>, vk_allocator<std::__1::vector<VGLSingleTexturedGroupCullableMesh *, vk_allocator<VGLSingleTexturedGroupCullableMesh *>>> > { 
        struct vector<VGLSingleTexturedGroupCullableMesh *, vk_allocator<VGLSingleTexturedGroupCullableMesh *> > {} *__begin_; 
        struct vector<VGLSingleTexturedGroupCullableMesh *, vk_allocator<VGLSingleTexturedGroupCullableMesh *> > {} *__end_; 
        struct __compressed_pair<std::__1::vector<VGLSingleTexturedGroupCullableMesh *, vk_allocator<VGLSingleTexturedGroupCullableMesh *>> *, vk_allocator<std::__1::vector<VGLSingleTexturedGroupCullableMesh *, vk_allocator<VGLSingleTexturedGroupCullableMesh *>>> > { 
            struct vector<VGLSingleTexturedGroupCullableMesh *, vk_allocator<VGLSingleTexturedGroupCullableMesh *> > {} *__first_; 
        } __end_cap_; 
    /* Warning: unhandled struct encoding: '{vector<VGLSingleTexturedGroupCullableMesh *, vk_allocator<VGLSingleTexturedGroupCullableMesh *> >="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<VGLSingleTexturedGroupCullableMesh **, vk_allocator<VGLSingleTexturedGroupCullableMesh *> >="__first_"^@}}' */ struct vector<VGLSingleTexturedGroupCullableMesh *, vk_allocator<VGLSingleTexturedGroupCullableMesh *> > { 
        __end_ **__begin_; 
    /* Warning: unhandled struct encoding: '{vector<VGLSingleTexturedGroupCullableMesh *, vk_allocator<VGLSingleTexturedGroupCullableMesh *> >="__begin_"^@"__end_"^@"__end_cap_"{__compressed_pair<VGLSingleTexturedGroupCullableMesh **, vk_allocator<VGLSingleTexturedGroupCullableMesh *> >="__first_"^@}}' */ struct vector<VGLSingleTexturedGroupCullableMesh *, vk_allocator<VGLSingleTexturedGroupCullableMesh *> > { 
        __end_ **__begin_; 
    struct { 
        double v[4][4]; 
    struct vector<VKBuildingHeightMap, vk_allocator<VKBuildingHeightMap> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<VKBuildingHeightMap *, vk_allocator<VKBuildingHeightMap> > { 
            struct { /* ? */ } *__first_; 
        } __end_cap_; 
    float _alpha;
    VKAnimation *_animateBuildingMode;
    VKAnimation *_animateIn;
    VKAnimation *_animateOut;
    VGLCullableMesh *_footprintsMesh;
    GEOVectorTile *_geotile;
    VKHeightfield *_heightfield;
    } _landmarkHeights;
    VGLMesh *_landmarkShadowsMesh;
    VGLMultiTexturedMesh *_landmarksMesh;
    float _maxHeight;
    VGLCullableMesh *_pointyBuildingsMesh;
    } _realisticFacadeCollections;
    } _realisticTopMeshes;
    } _regularFacadeCollection;
    } _regularFacadeCollections;
    VGLGroupCullableMesh *_regularTopMesh;
    } _regularTopMeshes;
    float _scale;
    VGLTexture *_shadowTexture;
    } _shadowTextureMatrix;
    } _sharedFacadeCollection;
    VGLGroupCullableMesh *_sharedTopMesh;
    VKStylesheet *_stylesheet;
}

@property float alpha;
@property(retain) VKAnimation * animateBuildingMode;
@property(retain) VKAnimation * animateIn;
@property(retain) VKAnimation * animateOut;
@property(readonly) VGLCullableMesh * footprintsMesh;
@property(readonly) VGLMesh * landmarkShadowsMesh;
@property(readonly) VGLMultiTexturedMesh * landmarksMesh;
@property(readonly) float maxHeight;
@property(readonly) VGLCullableMesh * pointyBuildingsMesh;
@property float scale;
@property(readonly) VGLTexture * shadowTexture;
@property(readonly) const struct { double x1[4][4]; }* shadowTextureMatrix;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_makeFootprintsMesh;
- (void)_makeMeshesWithLandmarksPresent:(BOOL)arg1 makeFacades:(BOOL)arg2 pointyFootprints:(struct unordered_map<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, vk_allocator<std::__1::pair<const unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>>> > { struct __hash_table<std::__1::pair<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>>, std::__1::__unordered_map_hasher<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>, std::__1::equal_to<unsigned int>, true>, vk_allocator<std::__1::pair<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>>> > { struct unique_ptr<std::__1::__hash_node<std::__1::pair<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>>, void *> *[], std::__1::__bucket_list_deallocator<vk_allocator<std::__1::__hash_node<std::__1::pair<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>>, void *> *>> > { struct __compressed_pair<std::__1::__hash_node<std::__1::pair<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>>, void *> **, std::__1::__bucket_list_deallocator<vk_allocator<std::__1::__hash_node<std::__1::pair<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>>, void *> *>> > { struct __hash_node<std::__1::pair<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>>, void *> {} **x_1_3_1; struct __bucket_list_deallocator<vk_allocator<std::__1::__hash_node<std::__1::pair<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>>, void *> *> > { struct __compressed_pair<unsigned long, vk_allocator<std::__1::__hash_node<std::__1::pair<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>>, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>>, void *> *>, vk_allocator<std::__1::__hash_node<std::__1::pair<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>>, void *>> > { struct __hash_node_base<std::__1::__hash_node<std::__1::pair<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>>, void *> *> { struct __hash_node<std::__1::pair<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>>, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>, std::__1::hash<unsigned int>, true> > { unsigned long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>, std::__1::equal_to<unsigned int>, true> > { float x_4_2_1; } x_1_1_4; } x1; }*)arg3;
- (void)_makeShadowTextureWithVectorTile:(id)arg1 skipLandmarks:(BOOL)arg2 pointyFootprints:(const struct unordered_map<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, vk_allocator<std::__1::pair<const unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>>> > { struct __hash_table<std::__1::pair<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>>, std::__1::__unordered_map_hasher<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>, std::__1::hash<unsigned int>, true>, std::__1::__unordered_map_equal<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>, std::__1::equal_to<unsigned int>, true>, vk_allocator<std::__1::pair<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>>> > { struct unique_ptr<std::__1::__hash_node<std::__1::pair<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>>, void *> *[], std::__1::__bucket_list_deallocator<vk_allocator<std::__1::__hash_node<std::__1::pair<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>>, void *> *>> > { struct __compressed_pair<std::__1::__hash_node<std::__1::pair<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>>, void *> **, std::__1::__bucket_list_deallocator<vk_allocator<std::__1::__hash_node<std::__1::pair<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>>, void *> *>> > { struct __hash_node<std::__1::pair<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>>, void *> {} **x_1_3_1; struct __bucket_list_deallocator<vk_allocator<std::__1::__hash_node<std::__1::pair<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>>, void *> *> > { struct __compressed_pair<unsigned long, vk_allocator<std::__1::__hash_node<std::__1::pair<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>>, void *> *> > { unsigned long x_1_5_1; } x_2_4_1; } x_1_3_2; } x_1_2_1; } x_1_1_1; struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>>, void *> *>, vk_allocator<std::__1::__hash_node<std::__1::pair<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>>, void *>> > { struct __hash_node_base<std::__1::__hash_node<std::__1::pair<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>>, void *> *> { struct __hash_node<std::__1::pair<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>>, void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>, std::__1::hash<unsigned int>, true> > { unsigned long x_3_2_1; } x_1_1_3; struct __compressed_pair<float, std::__1::__unordered_map_equal<unsigned int, std::__1::vector<GEOVectorTilePoint, vk_allocator<GEOVectorTilePoint>>, std::__1::equal_to<unsigned int>, true> > { float x_4_2_1; } x_1_1_4; } x1; }*)arg3;
- (BOOL)_makeThreeDBuildingsMesh;
- (float)alpha;
- (id)animateBuildingMode;
- (id)animateIn;
- (id)animateOut;
- (void)dealloc;
- (const struct vector<std::__1::vector<VGLSingleTexturedGroupCullableMesh *, vk_allocator<VGLSingleTexturedGroupCullableMesh *>>, vk_allocator<std::__1::vector<VGLSingleTexturedGroupCullableMesh *, vk_allocator<VGLSingleTexturedGroupCullableMesh *>>> > { struct vector<VGLSingleTexturedGroupCullableMesh *, vk_allocator<VGLSingleTexturedGroupCullableMesh *> > {} *x1; struct vector<VGLSingleTexturedGroupCullableMesh *, vk_allocator<VGLSingleTexturedGroupCullableMesh *> > {} *x2; struct __compressed_pair<std::__1::vector<VGLSingleTexturedGroupCullableMesh *, vk_allocator<VGLSingleTexturedGroupCullableMesh *>> *, vk_allocator<std::__1::vector<VGLSingleTexturedGroupCullableMesh *, vk_allocator<VGLSingleTexturedGroupCullableMesh *>>> > { struct vector<VGLSingleTexturedGroupCullableMesh *, vk_allocator<VGLSingleTexturedGroupCullableMesh *> > {} *x_3_1_1; } x3; }*)facadeCollectionsWithVectorType:(int)arg1;
- (id)footprintsMesh;
- (BOOL)heightAtX:(float)arg1 Y:(float)arg2 outZ:(float*)arg3;
- (id)initWithVectorTile:(id)arg1 stylesheet:(id)arg2 makeFacades:(BOOL)arg3;
- (id)landmarkShadowsMesh;
- (id)landmarksMesh;
- (float)maxHeight;
- (id)pointyBuildingsMesh;
- (float)scale;
- (void)setAlpha:(float)arg1;
- (void)setAnimateBuildingMode:(id)arg1;
- (void)setAnimateIn:(id)arg1;
- (void)setAnimateOut:(id)arg1;
- (void)setScale:(float)arg1;
- (id)shadowTexture;
- (const struct { double x1[4][4]; }*)shadowTextureMatrix;
- (const struct vector<VGLGroupCullableMesh *, vk_allocator<VGLGroupCullableMesh *> > { id *x1; id *x2; struct __compressed_pair<VGLGroupCullableMesh **, vk_allocator<VGLGroupCullableMesh *> > { id *x_3_1_1; } x3; }*)topMeshesWithVectorType:(int)arg1;

@end
