/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKTurnBasedMatch, NSMutableDictionary;

@interface GKTurnBasedMatchHeaderSection : GKTableSection {
    GKTurnBasedMatch *_match;
    int _matchStyle;
    NSMutableDictionary *_players;
}

@property(retain) GKTurnBasedMatch * match;
@property int matchStyle;
@property(retain) NSMutableDictionary * players;

- (void)configureContents:(id)arg1 withGameIcon:(id)arg2;
- (id)creationDateString;
- (void)dealloc;
- (id)description;
- (float)heightForHeaderInTableView:(id)arg1;
- (id)lastTurnString;
- (id)match;
- (int)matchStyle;
- (id)players;
- (id)playingWithString;
- (int)sectionItemCountInTableView:(id)arg1;
- (void)setMatch:(id)arg1;
- (void)setMatchStyle:(int)arg1;
- (void)setPlayers:(id)arg1;
- (float)tableView:(id)arg1 heightForContentRow:(int)arg2;
- (id)tableView:(id)arg1 prepareContents:(id)arg2 forCell:(id)arg3 atIndexPath:(id)arg4;
- (id)tableView:(id)arg1 reuseIdentifierForRow:(int)arg2;

@end
