/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class GQSDocument, GQZArchive, SFUCryptoKey, SFUZipInflateInputStream;

@interface GQPProcessor : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct stack<std::pair<const Action *, int>, std::deque<std::pair<const Action *, int>, std::allocator<std::pair<const Action *, int>>> > { struct deque<std::pair<const Action *, int>, std::allocator<std::pair<const Action *, int>> > { struct _Deque_impl { struct pair<const Action *, int> {} **x_1_2_1; unsigned int x_1_2_2; struct _Deque_iterator<std::pair<const Action *, int>, std::pair<const Action *, int> &, std::pair<const Action *, int> *> { struct pair<const Action *, int> {} *x_3_3_1; struct pair<const Action *, int> {} *x_3_3_2; struct pair<const Action *, int> {} *x_3_3_3; struct pair<const Action *, int> {} **x_3_3_4; } x_1_2_3; struct _Deque_iterator<std::pair<const Action *, int>, std::pair<const Action *, int> &, std::pair<const Action *, int> *> { struct pair<const Action *, int> {} *x_4_3_1; struct pair<const Action *, int> {} *x_4_3_2; struct pair<const Action *, int> {} *x_4_3_3; struct pair<const Action *, int> {} **x_4_3_4; } x_1_2_4; } x_1_1_1; } x1; } *mActionStack;
    GQZArchive *mArchive;
    struct __CFBundle { } *mBundle;
    SFUCryptoKey *mCryptoKey;
    GQSDocument *mDocumentState;
    SFUZipInflateInputStream *mInputStream;
    unsigned char mIsProgressive;
    struct __QLPreviewRequest { } *mOutputPreviewRequest;
    struct _xmlParserInputBuffer { void *x1; int (*x2)(); int (*x3)(); struct _xmlCharEncodingHandler {} *x4; struct _xmlBuffer {} *x5; struct _xmlBuffer {} *x6; int x7; int x8; unsigned long x9; } *mParserInputBuffer;
    struct _xmlTextReader { } *mReader;
    struct stack<std::tr1::shared_ptr<StateSpec>, std::deque<std::tr1::shared_ptr<StateSpec>, std::allocator<std::tr1::shared_ptr<StateSpec>>> > { struct deque<std::tr1::shared_ptr<StateSpec>, std::allocator<std::tr1::shared_ptr<StateSpec>> > { struct _Deque_impl { struct shared_ptr<StateSpec> {} **x_1_2_1; unsigned int x_1_2_2; struct _Deque_iterator<std::tr1::shared_ptr<StateSpec>, std::tr1::shared_ptr<StateSpec> &, std::tr1::shared_ptr<StateSpec> *> { struct shared_ptr<StateSpec> {} *x_3_3_1; struct shared_ptr<StateSpec> {} *x_3_3_2; struct shared_ptr<StateSpec> {} *x_3_3_3; struct shared_ptr<StateSpec> {} **x_3_3_4; } x_1_2_3; struct _Deque_iterator<std::tr1::shared_ptr<StateSpec>, std::tr1::shared_ptr<StateSpec> &, std::tr1::shared_ptr<StateSpec> *> { struct shared_ptr<StateSpec> {} *x_4_3_1; struct shared_ptr<StateSpec> {} *x_4_3_2; struct shared_ptr<StateSpec> {} *x_4_3_3; struct shared_ptr<StateSpec> {} **x_4_3_4; } x_1_2_4; } x_1_1_1; } x1; } *mStateStack;
    } mThumbnailSize;
    unsigned long long mTotalBytesToConsume;
    BOOL mWrongFormat;
}

+ (struct _xmlTextReader { }*)createXmlReaderWithPath:(id)arg1 indexFileName:(id)arg2 cryptoKey:(id)arg3;
+ (struct _xmlTextReader { }*)createXmlReaderWithZipArchive:(id)arg1 indexFileName:(id)arg2 cryptoKey:(id)arg3 indexEntry:(id*)arg4 zipInputStream:(id*)arg5;
+ (void)initialize;

- (id).cxx_construct;
- (struct stack<std::pair<const Action *, int>, std::deque<std::pair<const Action *, int>, std::allocator<std::pair<const Action *, int>>> > { struct deque<std::pair<const Action *, int>, std::allocator<std::pair<const Action *, int>> > { struct _Deque_impl { struct pair<const Action *, int> {} **x_1_2_1; unsigned int x_1_2_2; struct _Deque_iterator<std::pair<const Action *, int>, std::pair<const Action *, int> &, std::pair<const Action *, int> *> { struct pair<const Action *, int> {} *x_3_3_1; struct pair<const Action *, int> {} *x_3_3_2; struct pair<const Action *, int> {} *x_3_3_3; struct pair<const Action *, int> {} **x_3_3_4; } x_1_2_3; struct _Deque_iterator<std::pair<const Action *, int>, std::pair<const Action *, int> &, std::pair<const Action *, int> *> { struct pair<const Action *, int> {} *x_4_3_1; struct pair<const Action *, int> {} *x_4_3_2; struct pair<const Action *, int> {} *x_4_3_3; struct pair<const Action *, int> {} **x_4_3_4; } x_1_2_4; } x_1_1_1; } x1; }*)actionStack;
- (id)archive;
- (struct __CFBundle { }*)bundle;
- (id)cryptoKey;
- (void)dealloc;
- (id)documentState;
- (BOOL)go;
- (id)initWithPath:(id)arg1 indexFileName:(id)arg2 previewRequest:(struct __QLPreviewRequest { }*)arg3 cryptoKey:(id)arg4;
- (id)initWithZipArchive:(id)arg1 indexFileName:(id)arg2 previewRequest:(struct __QLPreviewRequest { }*)arg3 cryptoKey:(id)arg4;
- (id)initWithZipArchive:(id)arg1 indexFileName:(id)arg2 previewRequest:(struct __QLPreviewRequest { }*)arg3;
- (BOOL)isWrongFormat;
- (void)pushInitialState;
- (void)setBundle:(struct __CFBundle { }*)arg1;
- (void)setProgressiveMode:(unsigned char)arg1;
- (void)setThumbnailSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setWrongFormat:(BOOL)arg1;
- (struct stack<std::tr1::shared_ptr<StateSpec>, std::deque<std::tr1::shared_ptr<StateSpec>, std::allocator<std::tr1::shared_ptr<StateSpec>>> > { struct deque<std::tr1::shared_ptr<StateSpec>, std::allocator<std::tr1::shared_ptr<StateSpec>> > { struct _Deque_impl { struct shared_ptr<StateSpec> {} **x_1_2_1; unsigned int x_1_2_2; struct _Deque_iterator<std::tr1::shared_ptr<StateSpec>, std::tr1::shared_ptr<StateSpec> &, std::tr1::shared_ptr<StateSpec> *> { struct shared_ptr<StateSpec> {} *x_3_3_1; struct shared_ptr<StateSpec> {} *x_3_3_2; struct shared_ptr<StateSpec> {} *x_3_3_3; struct shared_ptr<StateSpec> {} **x_3_3_4; } x_1_2_3; struct _Deque_iterator<std::tr1::shared_ptr<StateSpec>, std::tr1::shared_ptr<StateSpec> &, std::tr1::shared_ptr<StateSpec> *> { struct shared_ptr<StateSpec> {} *x_4_3_1; struct shared_ptr<StateSpec> {} *x_4_3_2; struct shared_ptr<StateSpec> {} *x_4_3_3; struct shared_ptr<StateSpec> {} **x_4_3_4; } x_1_2_4; } x_1_1_1; } x1; }*)stateStack;
- (struct CGSize { float x1; float x2; })thumbnailSize;

@end
