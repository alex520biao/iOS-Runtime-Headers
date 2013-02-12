/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSString;

@interface DAContactsSearchQuery : DASearchQuery {
    BOOL _includePhotos;
    NSString *_searchBase;
    NSString *_searchScope;
}

@property BOOL includePhotos;
@property(retain) NSString * searchBase;
@property(retain) NSString * searchScope;

+ (id)contactsSearchQueryWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4;

- (void)dealloc;
- (id)dictionaryRepresentation;
- (BOOL)includePhotos;
- (id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2;
- (id)initWithSearchString:(id)arg1 searchBase:(id)arg2 searchScope:(id)arg3 consumer:(id)arg4;
- (id)searchBase;
- (id)searchScope;
- (void)setIncludePhotos:(BOOL)arg1;
- (void)setSearchBase:(id)arg1;
- (void)setSearchScope:(id)arg1;

@end
