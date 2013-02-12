/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSDictionary, NSString;

@interface SAAppInfo : SADomainObject {
}

@property(copy) NSString * appId;
@property(copy) NSString * appName;
@property(copy) NSDictionary * appNameMap;
@property(copy) NSString * appVersion;
@property(copy) NSString * displayAppName;
@property(copy) NSDictionary * displayAppNameMap;
@property(copy) NSString * providerName;
@property(copy) NSString * spotlightName;
@property(copy) NSDictionary * spotlightNameMap;
@property(copy) NSArray * supportedCommands;
@property(copy) NSArray * supportedSchemes;

+ (id)appInfo;
+ (id)appInfoWithDictionary:(id)arg1 context:(id)arg2;

- (id)appId;
- (id)appName;
- (id)appNameMap;
- (id)appVersion;
- (id)displayAppName;
- (id)displayAppNameMap;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)providerName;
- (void)setAppId:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setAppNameMap:(id)arg1;
- (void)setAppVersion:(id)arg1;
- (void)setDisplayAppName:(id)arg1;
- (void)setDisplayAppNameMap:(id)arg1;
- (void)setProviderName:(id)arg1;
- (void)setSpotlightName:(id)arg1;
- (void)setSpotlightNameMap:(id)arg1;
- (void)setSupportedCommands:(id)arg1;
- (void)setSupportedSchemes:(id)arg1;
- (id)spotlightName;
- (id)spotlightNameMap;
- (id)supportedCommands;
- (id)supportedSchemes;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;

@end
