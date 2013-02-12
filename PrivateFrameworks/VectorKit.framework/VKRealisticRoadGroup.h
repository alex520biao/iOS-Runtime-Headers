/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSArray, NSMutableArray, NSMutableDictionary, VGLMesh, VKRealisticPolygonMaker;

@interface VKRealisticRoadGroup : NSObject {
    struct VKTileKey { 
        unsigned int z; 
        int x; 
        int y; 
        unsigned int pointSize; 
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    struct _VGLColor { 
        float r; 
        float g; 
        float b; 
        float a; 
    } _casingColor;
    VGLMesh *_casingFacades;
    float _casingHeight;
    float _casingShadowLift;
    float _casingShadowRamp;
    float _casingShadowWidth;
    VGLMesh *_casingShadows;
    float _casingTopLift;
    VGLMesh *_casingTops;
    float _casingWidth;
    NSMutableDictionary *_meshDict;
    int _renderZ;
    NSMutableArray *_roadMeshes;
    VKRealisticPolygonMaker *_roadPolygonMaker;
    float _roadShadowRamp;
    float _roadShadowTaperLength;
    float _roadShadowWidth;
    VGLMesh *_roadShadows;
    float _roadZ;
    } _sidewalkColor;
    float _sidewalkShadowWidth;
    VGLMesh *_sidewalkShadows;
    } _tileKey;
}

@property(readonly) struct _VGLColor { float x1; float x2; float x3; float x4; } casingColor;
@property(readonly) VGLMesh * casingFacades;
@property(readonly) float casingShadowRamp;
@property(readonly) VGLMesh * casingShadows;
@property(readonly) VGLMesh * casingTops;
@property int renderZ;
@property(readonly) NSArray * roadMeshes;
@property(readonly) float roadShadowRamp;
@property(readonly) float roadShadowTaperLength;
@property(readonly) float roadShadowWidth;
@property(readonly) VGLMesh * roadShadows;
@property(readonly) VGLMesh * sidewalkShadows;

- (id).cxx_construct;
- (id)_meshForStyle:(id)arg1 tileKey:(struct VKTileKey { unsigned int x1; int x2; int x3; unsigned int x4; })arg2;
- (void)addRoadForPolygon:(const struct { float x1; float x2; }*)arg1 pointCount:(unsigned int)arg2 characteristicPoints:(const struct { struct { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; } x1; struct { unsigned int x_2_1_1; int x_2_1_2; float x_2_1_3; BOOL x_2_1_4; BOOL x_2_1_5; BOOL x_2_1_6; BOOL x_2_1_7; BOOL x_2_1_8; struct { unsigned char x_9_2_1; unsigned short x_9_2_2; } x_2_1_9[16]; } x2; }*)arg3 characteristicPointCount:(unsigned int)arg4 withStyle:(id)arg5;
- (struct _VGLColor { float x1; float x2; float x3; float x4; })casingColor;
- (id)casingFacades;
- (float)casingShadowRamp;
- (id)casingShadows;
- (id)casingTops;
- (void)dealloc;
- (id)initWithTile:(id)arg1;
- (int)renderZ;
- (id)roadMeshes;
- (float)roadShadowRamp;
- (float)roadShadowTaperLength;
- (float)roadShadowWidth;
- (id)roadShadows;
- (void)setRenderZ:(int)arg1;
- (id)sidewalkShadows;
- (unsigned int)triangleCount;
- (void)updateComponentsWithModelViewProjectionMatrix:(union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; })arg1;

@end
