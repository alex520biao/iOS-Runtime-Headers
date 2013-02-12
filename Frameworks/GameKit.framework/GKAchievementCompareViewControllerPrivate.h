/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKAchievementCompareHeaderSection, GKAchievementCompareViewSection, GKGameRecord, GKPlayer, NSArray, UIImage;

@interface GKAchievementCompareViewControllerPrivate : GKAchievementViewControllerPrivate {
    GKAchievementCompareHeaderSection *_achievementCompareFriendHeaderViewSection;
    GKAchievementCompareHeaderSection *_achievementCompareMeHeaderViewSection;
    GKAchievementCompareViewSection *_achievementCompareViewSection;
    UIImage *_compositeCheckMark;
    GKPlayer *_friend;
    NSArray *_friendAchievements;
    GKGameRecord *_friendRecord;
}

@property(retain) GKAchievementCompareHeaderSection * achievementCompareFriendHeaderViewSection;
@property(retain) GKAchievementCompareHeaderSection * achievementCompareMeHeaderViewSection;
@property(retain) GKAchievementCompareViewSection * achievementCompareViewSection;
@property(retain) UIImage * compositeCheckMark;
@property(retain) NSArray * friendAchievements;
@property(retain) GKGameRecord * friendRecord;

- (void)_gkResetContents;
- (BOOL)_gkShouldRefreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id)arg1;
- (id)achievementCompareFriendHeaderViewSection;
- (id)achievementCompareMeHeaderViewSection;
- (id)achievementCompareViewSection;
- (id)compositeCheckMark;
- (void)dealloc;
- (id)friendAchievements;
- (id)friendRecord;
- (id)initWithGameRecord:(id)arg1 friendRecord:(id)arg2;
- (void)playTapped;
- (void)setAchievementCompareFriendHeaderViewSection:(id)arg1;
- (void)setAchievementCompareMeHeaderViewSection:(id)arg1;
- (void)setAchievementCompareViewSection:(id)arg1;
- (void)setCompositeCheckMark:(id)arg1;
- (void)setFriendAchievements:(id)arg1;
- (void)setFriendRecord:(id)arg1;
- (void)setupSectionDataSource:(id)arg1;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)title;
- (void)updateStatusWithError:(id)arg1;
- (void)viewDidLoad;

@end
