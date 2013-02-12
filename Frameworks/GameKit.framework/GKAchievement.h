/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKAchievementInternal, GKGame, GKPlayer, NSDate, NSString;

@interface GKAchievement : NSObject <NSCopying, NSCoding> {
    GKGame *_game;
    BOOL _hidden;
    GKAchievementInternal *_internal;
    GKPlayer *_player;
    BOOL _showsCompletionBanner;
}

@property(getter=isCompleted,readonly) BOOL completed;
@property GKGame * game;
@property(readonly) NSString * groupIdentifier;
@property(getter=isHidden) BOOL hidden;
@property(retain) NSString * identifier;
@property(retain) GKAchievementInternal * internal;
@property(retain) NSDate * lastReportedDate;
@property double percentComplete;
@property(retain) GKPlayer * player;
@property BOOL showsCompletionBanner;

+ (id)achievementsForDescriptions:(id)arg1 achievements:(id)arg2 showHidden:(BOOL)arg3 game:(id)arg4 player:(id)arg5;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (void)loadAchievementWithID:(id)arg1 forGame:(id)arg2 players:(id)arg3 complete:(id)arg4;
+ (void)loadAchievementsForGame:(id)arg1 player:(id)arg2 withCompletionHandler:(id)arg3;
+ (void)loadAchievementsWithCompletionHandler:(id)arg1;
+ (void)reportAchievements:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)resetAchievementsWithCompletionHandler:(id)arg1;

- (void)_gkSetSharingInfo:(id)arg1;
- (id)_gkSharingInfo;
- (int)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)activityViewControllerSubject:(id)arg1;
- (BOOL)canBeShared;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)game;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescription:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (BOOL)isCompleted;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isHidden;
- (void)issueChallengeForGame:(id)arg1 toPlayers:(id)arg2 message:(id)arg3;
- (void)issueChallengeToPlayers:(id)arg1 message:(id)arg2;
- (id)player;
- (void)reportAchievementWithCompletionHandler:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)selectChallengeablePlayerIDs:(id)arg1 withCompletionHandler:(id)arg2;
- (void)setGame:(id)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setInternal:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setShowsCompletionBanner:(BOOL)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (BOOL)showsCompletionBanner;
- (id)valueForUndefinedKey:(id)arg1;

@end
