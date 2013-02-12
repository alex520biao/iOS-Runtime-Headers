/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSLock, NSMapTable;

@interface GEOSearchRequester : NSObject {
    NSMapTable *_pendingSearches;
    NSLock *_pendingSearchesLock;
    NSMapTable *_providers;
}

+ (id)sharedSearchRequester;

- (void)cancelSearch:(id)arg1;
- (void)completions:(id)arg1 timeout:(int)arg2 useBackgroundConnection:(BOOL)arg3 finished:(id)arg4 spellingSuggestion:(id)arg5 refinement:(id)arg6 networkActivity:(id)arg7 error:(id)arg8;
- (void)dealloc;
- (id)init;
- (void)registerProvider:(Class)arg1;
- (void)search:(id)arg1 finished:(id)arg2 spellingSuggestion:(id)arg3 refinement:(id)arg4 networkActivity:(id)arg5 error:(id)arg6;
- (void)search:(id)arg1 timeout:(int)arg2 useBackgroundConnection:(BOOL)arg3 finished:(id)arg4 spellingSuggestion:(id)arg5 refinement:(id)arg6 networkActivity:(id)arg7 error:(id)arg8 isCompletions:(BOOL)arg9;
- (void)search:(id)arg1 timeout:(int)arg2 useBackgroundConnection:(BOOL)arg3 finished:(id)arg4 spellingSuggestion:(id)arg5 refinement:(id)arg6 networkActivity:(id)arg7 error:(id)arg8;
- (void)search:(id)arg1 useBackgroundConnection:(BOOL)arg2 finished:(id)arg3 spellingSuggestion:(id)arg4 refinement:(id)arg5 networkActivity:(id)arg6 error:(id)arg7;

@end
