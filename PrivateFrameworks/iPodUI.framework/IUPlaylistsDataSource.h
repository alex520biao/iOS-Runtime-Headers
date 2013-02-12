/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@interface IUPlaylistsDataSource : IUPlaylistDataSource {
}

+ (id)queryCollectionPropertiesToFetch;
+ (id)tabBarItemIconName;
+ (id)tabBarItemTitleKey;

- (id)_addPlaylistActionRow;
- (id)_geniusActionRow;
- (id)_newActiveGeniusViewControllerContext;
- (id)_newGeniusNotEnabledViewControllerContext;
- (id)_newOnTheGoViewControllerContext;
- (id)_otgActionRow;
- (Class)cellConfigurationClassForEntity:(id)arg1;
- (id)cellConfigurationForIndex:(unsigned int)arg1 shouldLoadArtwork:(BOOL)arg2 artworkLoadingCompletionHandler:(id)arg3;
- (id)entitiesForQuery:(id)arg1;
- (BOOL)hasActionRowsEvenWhenNoOtherRowsExist;
- (int)initialSelectedIndex;
- (int)initialVisibleIndex;
- (SEL)libraryHasDisplayableEntitiesSelector;
- (int)mediaDisclosureStyleForIndex:(unsigned int)arg1;
- (id)prefixActionRows;
- (void)reloadActionRows;
- (id)viewControllerContextForActionRow:(id)arg1;

@end
