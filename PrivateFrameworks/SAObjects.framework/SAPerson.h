/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSDate, NSNumber, NSString;

@interface SAPerson : SADomainObject {
}

@property(copy) NSArray * addresses;
@property(copy) NSDate * birthday;
@property(copy) NSString * company;
@property(copy) NSArray * emails;
@property(copy) NSString * firstName;
@property(copy) NSString * firstNamePhonetic;
@property(copy) NSString * fullName;
@property(copy) NSString * lastName;
@property(copy) NSString * lastNamePhonetic;
@property(copy) NSNumber * me;
@property(copy) NSString * middleName;
@property(copy) NSString * nickName;
@property(copy) NSArray * phones;
@property(copy) NSString * prefix;
@property(copy) NSArray * relatedNames;
@property(copy) NSArray * socialProfiles;
@property(copy) NSString * suffix;

+ (id)person;
+ (id)personWithDictionary:(id)arg1 context:(id)arg2;

- (id)addresses;
- (id)birthday;
- (id)company;
- (id)emails;
- (id)encodedClassName;
- (id)firstName;
- (id)firstNamePhonetic;
- (id)fullName;
- (id)groupIdentifier;
- (id)lastName;
- (id)lastNamePhonetic;
- (id)me;
- (id)middleName;
- (id)nickName;
- (id)phones;
- (id)prefix;
- (id)relatedNames;
- (void)setAddresses:(id)arg1;
- (void)setBirthday:(id)arg1;
- (void)setCompany:(id)arg1;
- (void)setEmails:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFirstNamePhonetic:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setLastNamePhonetic:(id)arg1;
- (void)setMe:(id)arg1;
- (void)setMiddleName:(id)arg1;
- (void)setNickName:(id)arg1;
- (void)setPhones:(id)arg1;
- (void)setPrefix:(id)arg1;
- (void)setRelatedNames:(id)arg1;
- (void)setSocialProfiles:(id)arg1;
- (void)setSuffix:(id)arg1;
- (id)socialProfiles;
- (id)suffix;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end
