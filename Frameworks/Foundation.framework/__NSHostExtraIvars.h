/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSObject<OS_dispatch_queue>, NSString;

@interface __NSHostExtraIvars : NSObject {
    NSObject<OS_dispatch_queue> *cacheAccessQueue;
    NSObject<OS_dispatch_queue> *callbackQueue;
    NSObject<OS_dispatch_queue> *resolveQueue;
    int resolveType;
    BOOL startedResolving;
    NSString *thingToResolve;
}

@property(readonly) NSObject<OS_dispatch_queue> * cacheAccessQueue;
@property(readonly) NSObject<OS_dispatch_queue> * callbackQueue;
@property(readonly) NSObject<OS_dispatch_queue> * resolveQueue;
@property int resolveType;
@property BOOL startedResolving;
@property(retain) NSString * thingToResolve;

- (id)cacheAccessQueue;
- (id)callbackQueue;
- (void)cleanup;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)resolveQueue;
- (int)resolveType;
- (void)setResolveType:(int)arg1;
- (void)setStartedResolving:(BOOL)arg1;
- (void)setThingToResolve:(id)arg1;
- (BOOL)startedResolving;
- (id)thingToResolve;

@end
