/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class MZProcessAssertion, NSString;

@interface MZTaskAssertion : NSObject {
    NSString *_debugInfo;
    id _expireHandler;
    MZProcessAssertion *_processAssertion;
}

+ (id)newBackgroundTaskWithExpirationHandler:(id)arg1 debugInfo:(id)arg2;

- (void)dealloc;
- (id)description;
- (id)initWithExpirationHandler:(id)arg1 debugInfo:(id)arg2;
- (void)invalidate;
- (void)performExpirationHandler;

@end
