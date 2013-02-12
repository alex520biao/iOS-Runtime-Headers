/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class NSMutableDictionary, UITableViewCell;

@interface IUMusicViewController : IUMediaListViewController {
    UITableViewCell *_moreListTableViewCell;
    NSMutableDictionary *_sectionHeaderCache;
}

+ (id)tableViewBackgroundColor;
+ (Class)tableViewCellClass;

- (void)dealloc;
- (id)init;
- (id)moreListTableCell;
- (void)reloadData;
- (BOOL)shouldShowStoreButton;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })tableView:(id)arg1 frameForSectionIndexGivenProposedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)viewDidLoad;

@end
