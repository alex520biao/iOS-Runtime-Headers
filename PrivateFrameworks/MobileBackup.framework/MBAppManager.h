/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

@class MBSettingsContext, NSMutableDictionary;

@interface MBAppManager : NSObject {
    NSMutableDictionary *_appsByBundleID;
    MBSettingsContext *_settingsContext;
}

+ (id)appManager;
+ (id)appManagerWithSettingsContext:(id)arg1;

- (id)_appsWithPlists:(id)arg1 error:(id*)arg2;
- (id)_safeHarborsWithError:(id*)arg1;
- (id)_userAppsWithError:(id*)arg1;
- (id)allApps;
- (id)allDisabledDomainNames;
- (id)allRestrictedDomainNames;
- (id)appWithBundleID:(id)arg1;
- (id)createSafeHarborForApp:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)initWithSettingsContext:(id)arg1;
- (BOOL)isDomainNameEnabled:(id)arg1;
- (BOOL)loadAppsWithSafeHarbors:(BOOL)arg1 error:(id*)arg2;
- (BOOL)processRestoredAppsWithBundleIDs:(id)arg1 error:(id*)arg2;
- (void)removeAllDisabledDomainNames;
- (void)removeOldSafeHarbors;
- (void)setEnabled:(BOOL)arg1 forDomainName:(id)arg2;

@end
