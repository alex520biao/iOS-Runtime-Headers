/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSMutableDictionary, NSString;

@interface MCRestrictionsPayload : MCPayload {
    NSString *_iCloudPassword;
    NSMutableDictionary *_restrictions;
}

@property(retain) NSString * iCloudPassword;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)_defaultMediaSettings;
- (id)_enforcedFeatureStrings;
- (void)_insertRestrictedBoolForKey:(id)arg1 value:(id)arg2 preferenc:(BOOL)arg3;
- (id)_intersectionStrings;
- (id)_invalidFieldErrorWithFieldName:(id)arg1;
- (id)_restrictedFeatureStrings;
- (id)_unionStrings;
- (id)iCloudPassword;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)installationWarnings;
- (id)restrictions;
- (void)setICloudPassword:(id)arg1;
- (id)stubDictionary;
- (id)subtitle1Description;

@end
