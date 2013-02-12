/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSNumber, NSString, SASportsTeam;

@interface SASportsAthlete : SASportsEntity {
}

@property(retain) SASportsTeam * activeTeam;
@property(copy) NSArray * athleteMetadata;
@property(copy) NSString * firstName;
@property(copy) NSArray * formattedMetadata;
@property(copy) NSString * gender;
@property(copy) NSNumber * injured;
@property(copy) NSString * lastName;
@property(copy) NSString * position;
@property(copy) NSArray * previousTeams;
@property(copy) NSArray * statistics;

+ (id)athlete;
+ (id)athleteWithDictionary:(id)arg1 context:(id)arg2;

- (id)activeTeam;
- (id)athleteMetadata;
- (id)encodedClassName;
- (id)firstName;
- (id)formattedMetadata;
- (id)gender;
- (id)groupIdentifier;
- (id)injured;
- (id)lastName;
- (id)position;
- (id)previousTeams;
- (void)setActiveTeam:(id)arg1;
- (void)setAthleteMetadata:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFormattedMetadata:(id)arg1;
- (void)setGender:(id)arg1;
- (void)setInjured:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setPosition:(id)arg1;
- (void)setPreviousTeams:(id)arg1;
- (void)setStatistics:(id)arg1;
- (id)statistics;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end
