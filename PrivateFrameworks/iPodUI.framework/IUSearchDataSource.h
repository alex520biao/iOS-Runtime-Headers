/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class IUMediaQueriesDataSource, IUMutableSectionInfo, NSNumberFormatter, NSOperationQueue, NSString;

@interface IUSearchDataSource : IUMediaQueriesDataSource {
    IUMediaQueriesDataSource *_dataSourceToSearch;
    unsigned int _foundSearchResultCount;
    BOOL _hasNoResultsForSearchString;
    IUMutableSectionInfo *_mutableSectionInfo;
    NSOperationQueue *_queryOperationQueue;
    NSNumberFormatter *_resultCountNumberFormatter;
    BOOL _searchFinished;
    NSString *_searchIdentifier;
    int _searchScope;
    NSString *_searchString;
}

@property(readonly) BOOL canContinueSearchInITunesStore;
@property(retain) IUMediaQueriesDataSource * dataSourceToSearch;
@property(readonly) BOOL hasNoResultsForSearchString;
@property(retain) NSString * searchIdentifier;
@property int searchScope;
@property(copy) NSString * searchString;

+ (int)mediaEntityType;

- (void)_continueSearchInITunesStore:(id)arg1;
- (id)_humanizedTitleWithResultCount:(unsigned int)arg1 searchStyle:(struct { int (*x1)(); int (*x2)(); int x3; int x4; int x5; id x6; id x7; id x8; }*)arg2;
- (void)_playlistContentsDidChangeNotification:(id)arg1;
- (void)_postResultsChangedNotification:(id)arg1;
- (void)_postResultsDoneNotification;
- (void)_searchPerformOperation:(id)arg1 didProduceQuery:(id)arg2 forSearchIdentifier:(id)arg3;
- (void)_updateDataInBackground;
- (BOOL)canContinueSearchInITunesStore;
- (Class)cellConfigurationClassForEntity:(id)arg1;
- (id)cellConfigurationForIndex:(unsigned int)arg1 shouldLoadArtwork:(BOOL)arg2 artworkLoadingCompletionHandler:(id)arg3;
- (id)copyContinueSearchInITunesStoreActionRow;
- (id)countStringFormat;
- (id)dataSourceToSearch;
- (void)dealloc;
- (BOOL)hasNoResultsForSearchString;
- (id)init;
- (id)queriesAppropriateForGroupingProperty:(int)arg1 mediaType:(int)arg2;
- (void)reloadActionRows;
- (void)reloadDataWithCompletionHandler:(id)arg1;
- (void)reloadSectionInfo;
- (id)searchIdentifier;
- (int)searchScope;
- (id)searchString;
- (void)setDataSourceToSearch:(id)arg1;
- (void)setSearchIdentifier:(id)arg1;
- (void)setSearchScope:(int)arg1;
- (void)setSearchString:(id)arg1;
- (BOOL)shouldShowGlobalSectionHeader;
- (BOOL)showShuffleButtonWhenApplicable;
- (id)title;
- (id)viewControllerContextForIndex:(unsigned int)arg1;

@end
