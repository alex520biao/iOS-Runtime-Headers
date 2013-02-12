/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface GEOSearchProvider : NSObject {
    id _error;
}

@property(copy) id error;

+ (unsigned short)provider;

- (void)cancel;
- (void)dealloc;
- (id)error;
- (void)search:(id)arg1 timeout:(int)arg2 useBackgroundConnection:(BOOL)arg3 finished:(id)arg4 spellingSuggestion:(id)arg5 refinement:(id)arg6 error:(id)arg7 isCompletions:(BOOL)arg8;
- (void)setError:(id)arg1;

@end
