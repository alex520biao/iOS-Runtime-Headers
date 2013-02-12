/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKTurnBasedParticipantInternal, NSDate, NSString;

@interface GKTurnBasedParticipant : NSObject {
    GKTurnBasedParticipantInternal *_internal;
}

@property(retain) GKTurnBasedParticipantInternal * internal;
@property(readonly) NSString * inviteMessage;
@property(retain) NSString * invitedBy;
@property(readonly) BOOL isWinner;
@property(retain) NSDate * lastTurnDate;
@property int matchOutcome;
@property(readonly) NSString * matchOutcomeString;
@property(readonly) NSString * matchStatusString;
@property(retain) NSString * playerID;
@property int status;
@property(retain) NSDate * timeoutDate;

+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (BOOL)matchOutcomeIsValidForDoneState:(int)arg1;

- (id)basicMatchOutcomeString;
- (void)dealloc;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isWinner;
- (id)lastTurnDate;
- (id)matchOutcomeString;
- (id)matchStatusString;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setInternal:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (int)status;
- (id)valueForUndefinedKey:(id)arg1;

@end
