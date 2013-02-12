/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class <DASearchQueryConsumer>, NSString;

@interface DASearchQuery : NSObject {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    <DASearchQueryConsumer> *_consumer;
    } _range;
    NSString *_searchID;
    NSString *_searchString;
    int _state;
    int _timeLimit;
}

@property <DASearchQueryConsumer> * consumer;
@property unsigned int maxResults;
@property struct _NSRange { unsigned int x1; unsigned int x2; } range;
@property(copy) NSString * searchID;
@property(readonly) NSString * searchString;
@property int state;
@property int timeLimit;

+ (id)searchQueryWithSearchString:(id)arg1 consumer:(id)arg2;

- (id)consumer;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2;
- (id)initWithSearchString:(id)arg1 consumer:(id)arg2;
- (BOOL)isQueryRunning;
- (unsigned int)maxResults;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (id)searchID;
- (id)searchString;
- (void)sendFinishedToConsumerWithError:(id)arg1;
- (void)sendResultsToConsumer:(id)arg1;
- (void)setConsumer:(id)arg1;
- (void)setMaxResults:(unsigned int)arg1;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setSearchID:(id)arg1;
- (void)setState:(int)arg1;
- (void)setTimeLimit:(int)arg1;
- (int)state;
- (int)timeLimit;

@end
