/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISReview;

@interface ISPostReviewOperation : ISOperation <ISStoreURLOperationDelegate> {
    BOOL _backgroundReview;
    ISReview *_review;
}

@property(getter=isBackgroundReview) BOOL backgroundReview;
@property(retain) ISReview * review;


- (id)_httpBody;
- (id)review;
- (void)setReview:(id)arg1;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)setBackgroundReview:(BOOL)arg1;
- (BOOL)isBackgroundReview;
- (void)dealloc;
- (void)run;

@end