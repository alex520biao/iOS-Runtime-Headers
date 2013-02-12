/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NoteContext;

@interface DALocalDBHelper : NSObject {
    int _abConnectionCount;
    void *_abDB;
    int _bookmarkConnectionCount;
    void *_bookmarkDB;
    int _calConnectionCount;
    struct CalDatabase { } *_calDB;
    id _calUnitTestCallbackBlock;
    int _noteConnectionCount;
    NoteContext *_noteDB;
}

+ (void)abSetTestABDBDir:(id)arg1;
+ (id)abTestABDBDir;
+ (void)calSetTestCalDBDir:(id)arg1;
+ (id)calTestCalDBDir;
+ (id)sharedInstanceForAccountType:(id)arg1 creatingClass:(Class)arg2;

- (void)_registerForAddressBookYieldNotifications;
- (void)_registerForCalendarYieldNotifications;
- (BOOL)abCloseDBAndSave:(BOOL)arg1;
- (id)abConstraintPlistPath;
- (void*)abDB;
- (void)abOpenDB;
- (void)abProcessAddedImages;
- (void)abProcessAddedRecords;
- (BOOL)abSaveDB;
- (void)bookmarkCloseDBAndSave:(BOOL)arg1;
- (void*)bookmarkDB;
- (BOOL)bookmarkOpenDB;
- (void)bookmarkSaveDB;
- (BOOL)calCloseDBAndSave:(BOOL)arg1;
- (int)calConnectionCount;
- (struct CalDatabase { }*)calDB;
- (void)calOpenDB;
- (void)calOpenDBWithChangeLogging;
- (BOOL)calSaveDB;
- (BOOL)calSaveDBAndFlushCaches;
- (void)calUnitTestsSetCallbackBlockForSave:(id)arg1;
- (BOOL)noteCloseDBAndSave:(BOOL)arg1;
- (int)noteConnectionCount;
- (id)noteDB;
- (void)noteOpenDB;
- (BOOL)noteSaveDB;

@end
