/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccessUI.framework/DataAccessUI
 */

@class NSMutableSet, ASAccount, NSString, NSArray;

@interface ASSettingsMailFolderListViewController : PSListController  {
    ASAccount *_account;
    NSString *_foldersTag;
    NSString *_inboxID;
    BOOL _loadingMailFolders;
    NSMutableSet *_monitored;
    NSArray *_sortedMailFolders;
    BOOL _viewHasAppeared;
}


- (void)dealloc;
- (id)init;
- (void)setAccount:(id)arg1;
- (void)_accountsChanged:(id)arg1;
- (id)indexPathForMailFolder:(id)arg1;
- (BOOL)_isFolderMonitored:(id)arg1;
- (int)_heightOfASFolder:(id)arg1;
- (id)mailFolderForIndexPath:(id)arg1;
- (void)_loadMailFolders;
- (id)_inboxID;
- (void)_foldersThatExternalClientsCareAboutChanged;
- (void)_folderHierarchyChanged;
- (id)specifiers;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end