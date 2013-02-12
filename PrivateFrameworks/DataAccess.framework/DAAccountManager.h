/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class NSMutableDictionary, NSMutableSet, NSRecursiveLock;

@interface DAAccountManager : NSObject {
    NSRecursiveLock *_accountLock;
    BOOL _accountSaveInProgress;
    NSMutableDictionary *_accounts;
    NSMutableDictionary *_accountsToAdd;
    NSMutableDictionary *_accountsToRemove;
    int _pendingAccountSetupCount;
    NSMutableSet *_setAsideAccounts;
}

+ (id)accountStore;
+ (id)oneshotListOfAccountPersistentUUIDs;
+ (void)reacquireClientRestrictions:(id)arg1;
+ (id)sharedInstance;
+ (void)vendDaemonManagers:(Class)arg1;

- (id)_accountSettingsAccountTypes;
- (BOOL)_addAccount:(id)arg1 checkUniqueness:(BOOL)arg2;
- (id)_childAccountTypes;
- (BOOL)_hasDataclassWeCareAbout:(id)arg1;
- (void)_removeStoresForAccountWithID:(id)arg1;
- (void)_respondToAccountsChangedNotification;
- (BOOL)_saveAllAccountSettings:(BOOL)arg1;
- (void)_setAccountName:(id)arg1 forDataTypes:(int)arg2;
- (void)_setExternalSource:(id)arg1 statusForDataTypes:(int)arg2;
- (void)_startAgentMonitoring;
- (void)_stopAgentMonitoring;
- (void)_updateExternalSourcesAndAccountNamesForAccounts:(id)arg1;
- (id)acAccountsWeOwn;
- (id)accountWithID:(id)arg1;
- (id)accountWithPersistentUUID:(id)arg1;
- (id)accounts;
- (id)accountsOfClass:(Class)arg1;
- (BOOL)addAccount:(id)arg1;
- (void)addPendingAccountSetup;
- (void)checkValidityForAccount:(id)arg1 consumer:(id)arg2;
- (void)cleanupLaunchdSemaphore;
- (void)dealloc;
- (void)disableDaemon;
- (void)enableDaemon;
- (id)getStatusReports;
- (BOOL)hasActiveAccounts;
- (BOOL)hasPendingAccountSetup;
- (id)init;
- (id)pendingAccounts;
- (void)reloadAccounts;
- (BOOL)removeAccount:(id)arg1 forAccountIDReset:(BOOL)arg2;
- (BOOL)removeAccount:(id)arg1;
- (void)removePendingAccountSetup;
- (BOOL)saveAllAccountSettings;
- (void)setAsideAccountWithID:(id)arg1;
- (void)unsetAsideAccountWithID:(id)arg1;

@end
