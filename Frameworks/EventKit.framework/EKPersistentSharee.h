/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSString;

@interface EKPersistentSharee : EKPersistentObject <NSCopying> {
}

@property(readonly) NSString * UUID;
@property(copy) NSString * displayName;
@property(copy) NSString * emailAddress;
@property(copy) NSString * externalID;
@property(copy) NSString * firstName;
@property(copy) NSString * lastName;
@property int shareeAccessLevel;
@property int shareeStatus;

+ (id)defaultPropertiesToLoad;
+ (id)relations;
+ (id)shareeWithEmailAddress:(id)arg1 name:(id)arg2;
+ (id)shareeWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3;

- (id)UUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (id)emailAddress;
- (int)entityType;
- (id)externalID;
- (id)firstName;
- (unsigned int)hash;
- (id)init;
- (id)initWithEmailAddress:(id)arg1 name:(id)arg2;
- (id)initWithName:(id)arg1 emailAddress:(id)arg2 externalID:(id)arg3;
- (id)lastName;
- (id)owner;
- (void)setDisplayName:(id)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setShareeAccessLevel:(int)arg1;
- (void)setShareeStatus:(int)arg1;
- (int)shareeAccessLevel;
- (int)shareeStatus;

@end
