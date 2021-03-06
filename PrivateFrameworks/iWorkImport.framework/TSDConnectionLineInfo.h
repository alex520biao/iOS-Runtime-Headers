/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSDDrawableInfo;

@interface TSDConnectionLineInfo : TSDShapeInfo {
    struct { 
        unsigned int connectedFrom : 1; 
        unsigned int connectedTo : 1; 
    TSDDrawableInfo *mConnectedFrom;
    TSDDrawableInfo *mConnectedTo;
    } mInvalidFlags;
}

@property(retain) TSDDrawableInfo * connectedFrom;
@property(retain) TSDDrawableInfo * connectedTo;

+ (id)cleanupInfos:(id)arg1 duringCommand:(id)arg2 updateGeometries:(BOOL)arg3;

- (void)acceptVisitor:(id)arg1;
- (id)buildTitle;
- (BOOL)canAnchor;
- (id)commandForSettingConnectionLineType:(int)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })computeLayoutFullTransform;
- (id)computeLayoutInfoGeometry;
- (id)connectedFrom;
- (id)connectedTo;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (void)didCopy;
- (Class)editorClass;
- (id)initFromUnarchiver:(id)arg1;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct ConnectionLineArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ShapeArchive {} *x3; struct Reference {} *x4; struct Reference {} *x5; int x6; unsigned int x7[1]; }*)arg1 unarchiver:(id)arg2;
- (void)performBlockWithTemporaryLayout:(id)arg1;
- (id)presetKind;
- (Class)repClass;
- (void)saveGeometryToArchive:(struct GeometryArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Point {} *x3; struct Size {} *x4; unsigned int x5; float x6; int x7; unsigned int x8[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchive:(struct ConnectionLineArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct ShapeArchive {} *x3; struct Reference {} *x4; struct Reference {} *x5; int x6; unsigned int x7[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setConnectedFrom:(id)arg1;
- (void)setConnectedTo:(id)arg1;
- (void)willCopyWithOtherDrawables:(id)arg1;

@end
