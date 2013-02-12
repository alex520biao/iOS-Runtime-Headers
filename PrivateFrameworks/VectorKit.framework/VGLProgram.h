/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSString, VGLContext;

@interface VGLProgram : NSObject {
    union { 
        struct { 
            float m00; 
            float m01; 
            float m02; 
            float m03; 
            float m10; 
            float m11; 
            float m12; 
            float m13; 
            float m20; 
            float m21; 
            float m22; 
            float m23; 
            float m30; 
            float m31; 
            float m32; 
            float m33; 
        } ; 
        float m[16]; 
    struct vector<int, vk_allocator<int> > { 
        int *__begin_; 
        int *__end_; 
        struct __compressed_pair<int *, vk_allocator<int> > { 
            int *__first_; 
        } __end_cap_; 
    struct vector<std::__1::basic_string<char>, vk_allocator<std::__1::basic_string<char>> > { 
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *__begin_; 
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *__end_; 
        struct __compressed_pair<std::__1::basic_string<char> *, vk_allocator<std::__1::basic_string<char>> > { 
            struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *__first_; 
        } __end_cap_; 
    VGLContext *_context;
    NSString *_fragName;
    } _handleStringVec;
    } _handlesVector;
    } _matrix;
    int _token;
    int _uMatrix;
    NSString *_vertName;
}

@property VGLContext * context;
@property union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; } matrix;
@property(readonly) int token;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)context;
- (void)dealloc;
- (id)initWithVertName:(id)arg1 fragName:(id)arg2;
- (BOOL)link;
- (union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; })matrix;
- (void)printInfoLog;
- (void)setContext:(id)arg1;
- (void)setMatrix:(union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; })arg1;
- (void)setUniformColor:(int)arg1 curr:(struct _VGLColor { float x1; float x2; float x3; float x4; }*)arg2 next:(const struct _VGLColor { float x1; float x2; float x3; float x4; }*)arg3;
- (void)setUniformFloat:(int)arg1 curr:(float*)arg2 next:(float)arg3;
- (void)setUniformFloatVec:(int)arg1 curr:(float*)arg2 next:(const float*)arg3 count:(int)arg4;
- (void)setUniformInt:(int)arg1 curr:(int*)arg2 next:(int)arg3;
- (void)setUniformIntVec:(int)arg1 curr:(int*)arg2 next:(const int*)arg3 count:(int)arg4;
- (void)setUniformMat2:(int)arg1 curr:(union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; float x2[2][2]; float x3[4]; }*)arg2 next:(const union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; } x1; float x2[2][2]; float x3[4]; }*)arg3;
- (void)setUniformMat3:(int)arg1 curr:(union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; } x1; float x2[9]; }*)arg2 next:(const union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; } x1; float x2[9]; }*)arg3;
- (void)setUniformMat4:(int)arg1 curr:(union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; }*)arg2 next:(const union { struct { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; float x_1_1_7; float x_1_1_8; float x_1_1_9; float x_1_1_10; float x_1_1_11; float x_1_1_12; float x_1_1_13; float x_1_1_14; float x_1_1_15; float x_1_1_16; } x1; float x2[16]; }*)arg3;
- (void)setUniformVec2:(int)arg1 curr:(struct { float x1; float x2; }*)arg2 next:(const struct { float x1; float x2; }*)arg3;
- (void)setUniformVec3:(int)arg1 curr:(struct { float x1; float x2; float x3; }*)arg2 next:(const struct { float x1; float x2; float x3; }*)arg3;
- (void)setUniformVec4:(int)arg1 curr:(struct { float x1; float x2; float x3; float x4; }*)arg2 next:(const struct { float x1; float x2; float x3; float x4; }*)arg3;
- (int)token;
- (int)uniformLocation:(const char *)arg1;
- (void)validateUniforms;

@end
