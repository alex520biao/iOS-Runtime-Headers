/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VGLCullableMesh : VGLMesh {
    struct shared_ptr<VGLMeshNode> { 
        struct VGLMeshNode {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    struct vector<VGLMeshLeafNode, vk_allocator<VGLMeshLeafNode> > { 
        struct VGLMeshLeafNode {} *__begin_; 
        struct VGLMeshLeafNode {} *__end_; 
        struct __compressed_pair<VGLMeshLeafNode *, vk_allocator<VGLMeshLeafNode> > { 
            struct VGLMeshLeafNode {} *__first_; 
        } __end_cap_; 
    struct bitset<32> { 
        unsigned int __first_; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _leafNodes[2];
    } _leafsToDrawBitset[2];
    unsigned int _pointSize;
    } _rootNode[2];
    } _rootRange[2];
    int _vertexOffset;
}

@property(readonly) BOOL isPrimaryIndexModeLinesWithTriangles;
@property unsigned int tilePointSize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_createSortedLineIndicesFromSortedTriangleLinesForIndex:(unsigned int)arg1 fromIndex:(unsigned int)arg2;
- (void)_splitForIndexMode:(unsigned int)arg1;
- (void)buildCullingTree;
- (void)drawDebugBounds:(id)arg1;
- (void)drawInPreparedCulls:(id)arg1;
- (void)drawInRects:(const struct { float x1; float x2; float x3; float x4; }*)arg1 numRects:(unsigned int)arg2 context:(id)arg3;
- (void)freeze;
- (id)init;
- (BOOL)isPrimaryIndexModeLinesWithTriangles;
- (void)prepareCullsInRects:(const struct { float x1; float x2; float x3; float x4; }*)arg1 numRects:(unsigned int)arg2;
- (void)setTilePointSize:(unsigned int)arg1;
- (unsigned int)tilePointSize;

@end
