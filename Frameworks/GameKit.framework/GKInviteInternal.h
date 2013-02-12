/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKPlayerInternal, NSData, NSDictionary, NSString;

@interface GKInviteInternal : GKInternalRepresentation {
    NSString *_bundleID;
    NSString *_deviceID;
    NSString *_inviteID;
    NSDictionary *_localizableMessage;
    unsigned int _matchType;
    NSString *_message;
    NSData *_peerBlob;
    NSString *_peerID;
    NSData *_peerNATIP;
    int _peerNATType;
    NSData *_peerPushToken;
    GKPlayerInternal *_player;
    unsigned int _playerAttributes;
    unsigned int _playerGroup;
    NSString *_rid;
    NSData *_sessionToken;
    unsigned char _version;
}

@property(retain) NSString * bundleID;
@property(retain) NSString * deviceID;
@property(retain) NSString * inviteID;
@property(readonly) BOOL isNearby;
@property(retain) NSDictionary * localizableMessage;
@property unsigned int matchType;
@property(retain) NSString * message;
@property(retain) NSData * peerBlob;
@property(retain) NSString * peerID;
@property(retain) NSData * peerNATIP;
@property int peerNATType;
@property(retain) NSData * peerPushToken;
@property(retain) GKPlayerInternal * player;
@property unsigned int playerAttributes;
@property unsigned int playerGroup;
@property(retain) NSString * rid;
@property(retain) NSData * sessionToken;
@property unsigned char version;

+ (id)codedPropertyKeys;
+ (id)inviteFromNearbyPlayer:(id)arg1 deviceID:(id)arg2 bundleID:(id)arg3 connectionData:(id)arg4;
+ (id)inviteWithDictionary:(id)arg1;
+ (id)nearbyInviteIDForPlayerID:(id)arg1 deviceID:(id)arg2 bundleID:(id)arg3;

- (id)bundleID;
- (void)dealloc;
- (id)deviceID;
- (unsigned int)hash;
- (id)init;
- (id)inviteID;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isNearby;
- (id)localizableMessage;
- (unsigned int)matchType;
- (id)message;
- (id)peerBlob;
- (id)peerID;
- (id)peerNATIP;
- (int)peerNATType;
- (id)peerPushToken;
- (id)player;
- (unsigned int)playerAttributes;
- (unsigned int)playerGroup;
- (id)rid;
- (id)sessionToken;
- (void)setBundleID:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setInviteID:(id)arg1;
- (void)setLocalizableMessage:(id)arg1;
- (void)setMatchType:(unsigned int)arg1;
- (void)setMessage:(id)arg1;
- (void)setPeerBlob:(id)arg1;
- (void)setPeerID:(id)arg1;
- (void)setPeerNATIP:(id)arg1;
- (void)setPeerNATType:(int)arg1;
- (void)setPeerPushToken:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerAttributes:(unsigned int)arg1;
- (void)setPlayerGroup:(unsigned int)arg1;
- (void)setRid:(id)arg1;
- (void)setSessionToken:(id)arg1;
- (void)setVersion:(unsigned char)arg1;
- (unsigned char)version;

@end
