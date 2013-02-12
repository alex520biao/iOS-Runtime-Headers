/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GAIA.framework/GAIA
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface Gaia_Fifo : NSObject <iGaia_Fifo> {
    struct tGaia_Fifo { int (*x1)(); int (*x2)(); } *_ff;
}

- (void)dealloc;
- (int)ffRead:(void*)arg1 readSz:(unsigned int*)arg2 waitMs:(unsigned char)arg3;
- (int)ffWrite:(const void*)arg1 writeSz:(unsigned int*)arg2 waitMs:(unsigned char)arg3;
- (id)init;
- (id)initWithFifoSize:(unsigned long)arg1;

@end
