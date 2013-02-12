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
    struct bitset<64> { 
        unsigned long __first_[2]; 
    struct dynamic_bitset<unsigned long, std::__1::allocator<unsigned long> > { 
        struct vector<unsigned long, std::__1::allocator<unsigned long> > { 
            unsigned long *__begin_; 
            unsigned long *__end_; 
            struct __compressed_pair<unsigned long *, std::__1::allocator<unsigned long> > { 
                unsigned long *__first_; 
            } __end_cap_; 
        } m_bits; 
        unsigned int m_num_bits; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _leafNodes[2];
    } _leafsToDrawBitset[2];
    } _leafsToDrawDynamicBitset[2];
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
