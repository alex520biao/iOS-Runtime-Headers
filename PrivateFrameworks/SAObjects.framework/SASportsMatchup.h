/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSDate, NSNumber, NSString, SASportsEntity, SAUIAppPunchOut;

@interface SASportsMatchup : SADomainObject {
}

@property(retain) SASportsEntity * awayEntity;
@property(copy) NSArray * awayLineScores;
@property(copy) NSString * awayScore;
@property(copy) NSString * currentPeriod;
@property(copy) NSNumber * expectedLineScoreCount;
@property(copy) NSString * favoredEntity;
@property(retain) SASportsEntity * homeEntity;
@property(copy) NSArray * homeLineScores;
@property(copy) NSString * homeScore;
@property(copy) NSString * line;
@property(copy) NSString * location;
@property(copy) NSString * locationName;
@property(copy) NSString * matchupOrder;
@property(copy) NSString * overUnder;
@property(copy) NSString * periodDescription;
@property(retain) SAUIAppPunchOut * punchout;
@property(copy) NSDate * startTime;
@property(copy) NSString * status;
@property(copy) NSString * timeRemaining;
@property(copy) NSString * title;
@property(copy) NSString * tournamentSeriesDescription;
@property(copy) NSArray * tvChannels;
@property(copy) NSString * winningEntity;

+ (id)matchup;
+ (id)matchupWithDictionary:(id)arg1 context:(id)arg2;

- (id)awayEntity;
- (id)awayLineScores;
- (id)awayScore;
- (id)currentPeriod;
- (id)encodedClassName;
- (id)expectedLineScoreCount;
- (id)favoredEntity;
- (id)groupIdentifier;
- (id)homeEntity;
- (id)homeLineScores;
- (id)homeScore;
- (id)line;
- (id)location;
- (id)locationName;
- (id)matchupOrder;
- (id)overUnder;
- (id)periodDescription;
- (id)punchout;
- (void)setAwayEntity:(id)arg1;
- (void)setAwayLineScores:(id)arg1;
- (void)setAwayScore:(id)arg1;
- (void)setCurrentPeriod:(id)arg1;
- (void)setExpectedLineScoreCount:(id)arg1;
- (void)setFavoredEntity:(id)arg1;
- (void)setHomeEntity:(id)arg1;
- (void)setHomeLineScores:(id)arg1;
- (void)setHomeScore:(id)arg1;
- (void)setLine:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLocationName:(id)arg1;
- (void)setMatchupOrder:(id)arg1;
- (void)setOverUnder:(id)arg1;
- (void)setPeriodDescription:(id)arg1;
- (void)setPunchout:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setTimeRemaining:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTournamentSeriesDescription:(id)arg1;
- (void)setTvChannels:(id)arg1;
- (void)setWinningEntity:(id)arg1;
- (id)startTime;
- (id)status;
- (id)timeRemaining;
- (id)title;
- (id)tournamentSeriesDescription;
- (id)tvChannels;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)winningEntity;

@end
