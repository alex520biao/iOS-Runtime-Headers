/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class <ACDAccountStoreDelegate>, ACDAccessPluginManager, ACDAccountNotifier, ACDAuthenticationPluginManager, ACDClient, ACDClientAuthorizationManager, ACDDatabase, NSMutableArray;

@interface ACDAccountStore : NSObject <ACDAccountStoreProtocol, XPCProxyTarget> {
    ACDAccessPluginManager *_accessPluginManager;
    NSMutableArray *_accountChanges;
    ACDAccountNotifier *_accountNotifier;
    ACDAuthenticationPluginManager *_authenticationPluginManager;
    ACDClientAuthorizationManager *_authorizationManager;
    ACDClient *_client;
    ACDDatabase *_database;
    <ACDAccountStoreDelegate> *_delegate;
    BOOL _notificationsEnabled;
}

@property(retain) ACDAccessPluginManager * accessPluginManager;
@property(retain) ACDAuthenticationPluginManager * authenticationPluginManager;
@property(readonly) ACDClientAuthorizationManager * authorizationManager;
@property(retain) ACDClient * client;
@property(readonly) ACDDatabase * database;
@property <ACDAccountStoreDelegate> * delegate;
@property BOOL notificationsEnabled;

+ (id)_whiteList;

- (void).cxx_destruct;
- (BOOL)_accessGrantedForBundleID:(id)arg1 onAccountType:(id)arg2;
- (BOOL)_accessGrantedForClient:(id)arg1 onAccountType:(id)arg2;
- (id)_accountTypeWithIdentifier:(id)arg1;
- (id)_accountWithIdentifier:(id)arg1;
- (void)_accountsWithAccountType:(id)arg1 checkEntitlement:(BOOL)arg2 handler:(id)arg3;
- (id)_addAccountNoSave:(id)arg1 error:(id*)arg2;
- (BOOL)_callerWithPID:(id)arg1 hasPermissionToAddAccount:(id)arg2;
- (BOOL)_canSaveAccount:(id)arg1;
- (id)_currentBundleIDForPID:(id)arg1;
- (id)_dataclassWithName:(id)arg1;
- (id)_displayAccountForAccount:(id)arg1;
- (id)_handleAccountAdd:(id)arg1 forPID:(id)arg2;
- (id)_handleAccountMod:(id)arg1;
- (BOOL)_isClientPermittedToAccessAccount:(id)arg1;
- (BOOL)_isClientPermittedToAccessAccountType:(id)arg1;
- (BOOL)_isClientPermittedToRemoveAccount:(id)arg1;
- (void)_noteAccountStoreDidSaveAccountsWithAccountTypeIdentifiers:(id)arg1;
- (id)_removeAccountNoSave:(id)arg1;
- (id)_save;
- (void)_setAccountManagedObjectRelationships:(id)arg1 withAccount:(id)arg2 isNew:(BOOL)arg3;
- (id)_updateAccountNoSave:(id)arg1 error:(id*)arg2;
- (void)_updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(id)arg2;
- (void)accessKeysForAccountType:(id)arg1 handler:(id)arg2;
- (id)accessPluginManager;
- (void)accountIdentifiersEnabledToSyncDataclass:(id)arg1 handler:(id)arg2;
- (void)accountTypeForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)accountTypeWithIdentifier:(id)arg1 handler:(id)arg2;
- (id)accountTypeWithIdentifier:(id)arg1;
- (void)accountTypesWithHandler:(id)arg1;
- (void)accountWithIdentifier:(id)arg1 handler:(id)arg2;
- (BOOL)accountsExistWithAccountTypeIdentifier:(id)arg1;
- (void)accountsWithAccountType:(id)arg1 handler:(id)arg2;
- (id)accountsWithAccountTypeIdentifier:(id)arg1 checkEntitlement:(BOOL)arg2;
- (void)accountsWithHandler:(id)arg1;
- (id)addAccountNoSave:(id)arg1 error:(id*)arg2;
- (void)appPermissionsForAccountType:(id)arg1 withHandler:(id)arg2;
- (id)authenticationPluginManager;
- (id)authorizationManager;
- (void)childAccountsForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)clearAllPermissionsGrantedForAccountType:(id)arg1 withHandler:(id)arg2;
- (id)client;
- (void)credentialForAccountWithIdentifier:(id)arg1 bundleID:(id)arg2 handler:(id)arg3;
- (void)credentialForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (id)database;
- (void)dataclassesWithHandler:(id)arg1;
- (id)delegate;
- (void)displayAccountTypeForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)enabledDataclassesForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (id)initWithClient:(id)arg1 database:(id)arg2;
- (void)insertAccountDataclass:(id)arg1 withHandler:(id)arg2;
- (void)insertAccountType:(id)arg1 withHandler:(id)arg2;
- (id)masterCredentialForAccountIdentifier:(id)arg1;
- (BOOL)notificationsEnabled;
- (void)parentAccountForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (void)performSanityCheckOnDatabase:(id)arg1;
- (void)permissionForAccountType:(id)arg1 withHandler:(id)arg2;
- (void)promptUserForCredentialsWithAccount:(id)arg1 withHandler:(id)arg2;
- (void)propertiesForDataclassWithName:(id)arg1 accountIdentifier:(id)arg2 handler:(id)arg3;
- (void)provisionedDataclassesForAccountWithIdentifier:(id)arg1 handler:(id)arg2;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)removeAccount:(id)arg1 withHandler:(id)arg2;
- (void)removeAccountType:(id)arg1 withHandler:(id)arg2;
- (void)renewCredentialsForAccount:(id)arg1 withHandler:(id)arg2;
- (void)requestAccessForAccountTypeWithIdentifier:(id)arg1 options:(id)arg2 withHandler:(id)arg3;
- (void)saveAccount:(id)arg1 forPID:(id)arg2 withHandler:(id)arg3;
- (void)saveAccount:(id)arg1 withHandler:(id)arg2;
- (void)setAccessPluginManager:(id)arg1;
- (void)setAuthenticationPluginManager:(id)arg1;
- (void)setClient:(id)arg1;
- (void)setClientBundleID:(id)arg1 withHandler:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setNotificationsEnabled:(BOOL)arg1;
- (void)setNotificationsEnabledNum:(id)arg1;
- (void)setPermissionGranted:(id)arg1 forBundleID:(id)arg2 onAccountType:(id)arg3 withHandler:(id)arg4;
- (void)supportedDataclassesForAccountType:(id)arg1 handler:(id)arg2;
- (void)syncableDataclassesForAccountType:(id)arg1 handler:(id)arg2;
- (void)typeIdentifierForDomain:(id)arg1 withHandler:(id)arg2;
- (void)updateExistenceCacheOfAccountWithTypeIdentifier:(id)arg1 withHandler:(id)arg2;
- (void)verifyCredentialsForAccount:(id)arg1 saveWhenAuthorized:(BOOL)arg2 withHandler:(id)arg3;
- (void)verifyCredentialsForAccount:(id)arg1 withHandler:(id)arg2;

@end
