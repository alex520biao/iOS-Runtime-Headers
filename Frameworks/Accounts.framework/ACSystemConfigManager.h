/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Accounts.framework/Accounts
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface ACSystemConfigManager : NSObject {
    int _applySkipCount;
    BOOL _notifyForExternalChangeOnly;
    struct __SCPreferences { } *_prefs;
}

+ (id)sharedInstance;

- (void)_keepAlive;
- (void)_tearDown;
- (int)accountsWithAccountTypeIdentifierExist:(id)arg1;
- (int)countOfAccountsWithAccountTypeIdentifier:(id)arg1;
- (void)dealloc;
- (void*)getValueForKey:(id)arg1;
- (id)init;
- (void)initializeSCPrefs:(id)arg1;
- (BOOL)lockPrefs;
- (void)notifyTarget:(unsigned int)arg1;
- (void)setAccountsWithAccountTypeIdentifier:(id)arg1 exist:(BOOL)arg2;
- (void)setCallback:(int (*)())arg1 withContext:(struct { int x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); }*)arg2;
- (void)setCountOfAccounts:(int)arg1 withAccountTypeIdentifier:(id)arg2;
- (void)setValue:(void*)arg1 forKey:(id)arg2;
- (void)synchronize;
- (void)unlockPrefs;

@end
