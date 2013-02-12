/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray, NSData, NSDictionary, NSString;

@interface GKMatchRequestInternal : GKInternalRepresentation {
    NSString *_inviteMessage;
    NSDictionary *_localizableInviteMessage;
    unsigned int _matchType;
    unsigned int _maxPlayers;
    unsigned int _minPlayers;
    unsigned int _playerAttributes;
    unsigned int _playerGroup;
    NSArray *_playersToInvite;
    NSString *_rid;
    NSData *_sessionToken;
    unsigned int _version;
}

@property(copy) NSString * inviteMessage;
@property(retain) NSDictionary * localizableInviteMessage;
@property unsigned int matchType;
@property unsigned int maxPlayers;
@property unsigned int minPlayers;
@property unsigned int playerAttributes;
@property unsigned int playerGroup;
@property(retain) NSArray * playersToInvite;
@property(retain) NSString * rid;
@property(retain) NSData * sessionToken;
@property unsigned int version;

+ (id)codedPropertyKeys;

- (void)dealloc;
- (unsigned int)hash;
- (id)init;
- (id)inviteMessage;
- (BOOL)isEqual:(id)arg1;
- (id)localizableInviteMessage;
- (unsigned int)matchType;
- (unsigned int)maxPlayers;
- (unsigned int)minPlayers;
- (unsigned int)playerAttributes;
- (unsigned int)playerGroup;
- (id)playersToInvite;
- (id)rid;
- (id)sessionToken;
- (void)setInviteMessage:(id)arg1;
- (void)setLocalizableInviteMessage:(id)arg1;
- (void)setMatchType:(unsigned int)arg1;
- (void)setMaxPlayers:(unsigned int)arg1;
- (void)setMinPlayers:(unsigned int)arg1;
- (void)setPlayerAttributes:(unsigned int)arg1;
- (void)setPlayerGroup:(unsigned int)arg1;
- (void)setPlayersToInvite:(id)arg1;
- (void)setRid:(id)arg1;
- (void)setSessionToken:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)version;

@end
