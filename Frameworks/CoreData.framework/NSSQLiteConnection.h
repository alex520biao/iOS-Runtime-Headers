/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableDictionary, NSMutableSet, NSSQLEntity, NSSQLiteStatement, NSString;

@interface NSSQLiteConnection : NSSQLConnection {
    struct __sqliteConnectionFlags { 
        unsigned int _readyToBind : 1; 
        unsigned int _fetchInProgress : 1; 
        unsigned int _fileSystemType : 2; 
        unsigned int _proxyLocking : 1; 
        unsigned int _vacuumSetupNeeded : 1; 
        unsigned int _usingWAL : 1; 
        unsigned int _reserved : 25; 
    NSSQLiteStatement *_beginStatement;
    struct __CFDictionary { } *_cachedEntityUpdateStatements;
    NSSQLiteStatement *_commitStatement;
    struct sqlite3 { } *_db;
    NSString *_dbPathRegisteredWithBackupd;
    unsigned long long _debugInode;
    void *_extraBuffersForRegisteredFunctions[5];
    struct sqlite3_stmt { } *_fetchPKStatement;
    NSSQLEntity *_finalEntity;
    NSSQLEntity *_lastEntity;
    unsigned int _lastEntityKey;
    NSMutableDictionary *_pragmaSettings;
    NSSQLiteStatement *_rollbackStatement;
    int _rowsProcessedCount;
    } _sqliteConnectionFlags;
    double _timeOutOption;
    struct sqlite3_stmt { } *_updatePKStatement;
    long long _vacuumTracker;
    NSMutableSet *_vmCachedStatements;
    struct sqlite3_stmt { } *_vmstatement;
}

+ (void)__INode_Changed_AllThatIsLeftToUsIsHonor__;
+ (const char *)_databaseOpenURLStringForURL:(id)arg1;
+ (BOOL)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3;
+ (BOOL)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id*)arg5;
+ (void)_setDebugFlags:(int)arg1;
+ (void)initialize;
+ (int)readMagicWordFromPath:(const char *)arg1;

- (id)_adapter;
- (id)_beginPowerAssertionWithAssert:(unsigned int*)arg1;
- (void)_bindVariablesWithDeletedRow:(id)arg1;
- (void)_bindVariablesWithInsertedRow:(id)arg1;
- (void)_bindVariablesWithUpdatedRow:(id)arg1 andOriginalRow:(id)arg2 forDeltasMask:(struct __CFBitVector { }*)arg3;
- (void**)_buffersForRegisteredFunctions;
- (void)_clearBindVariablesForInsertedRow;
- (void)_clearBindVariablesForUpdateStatement:(id)arg1 forDeltasMask:(struct __CFBitVector { }*)arg2;
- (void)_clearCachedStatements;
- (void)_clearOtherStatements;
- (void)_clearTransactionCaches;
- (void)_configureAutoVacuum;
- (void)_configureIntegrityCheck;
- (void)_configurePageSize;
- (void)_configurePragmaOptions:(int)arg1;
- (void)_configureSynchronousMode;
- (void)_configureUbiquityMetadataTable;
- (void)_endPowerAssertionWithAssert:(unsigned int)arg1 andApp:(id)arg2;
- (void)_ensureDatabaseOpen;
- (void)_ensureNoFetchInProgress;
- (void)_ensureNoStatementPrepared;
- (void)_ensureNoTransactionOpen;
- (void)_executeSQLString:(id)arg1;
- (long long)_fetchMaxPrimaryKeyForEntity:(id)arg1;
- (void)_finalizeStatement;
- (void)_forceDisconnectOnError;
- (long long)_getCurrentAutoVacuumValue;
- (BOOL)_hasTableWithName:(id)arg1;
- (id)_newValueForColumn:(id)arg1 atIndex:(unsigned int)arg2 inStatement:(struct sqlite3_stmt { }*)arg3;
- (void)_performPostSaveTasks;
- (void)_registerExtraFunctions;
- (int)_rowsChangedByLastExecute;
- (void)_setupVacuumIfNecessary;
- (struct sqlite3_stmt { }*)_vmstatement;
- (void)addPeerRange:(id)arg1;
- (void)addPeerRangeForPeerID:(id)arg1 entityName:(id)arg2 rangeStart:(id)arg3 rangeEnd:(id)arg4 peerRangeStart:(id)arg5 peerRangeEnd:(id)arg6;
- (id)allPeerRanges;
- (void)beginTransaction;
- (void)cacheCurrentDBStatementOn:(id)arg1;
- (void)cacheUpdateStatement:(id)arg1 forEntity:(id)arg2 andDeltasMask:(struct __CFBitVector { }*)arg3;
- (id)cachedUpdateStatementForEntity:(id)arg1 andDeltasMask:(struct __CFBitVector { }*)arg2;
- (BOOL)canConnect;
- (void)commitTransaction;
- (void)connect;
- (id)createMapOfEntityNameToPKMaxForEntities:(id)arg1;
- (id)createMapOfEntityNameToPKMaxForEntitiesFromPKTable:(id)arg1;
- (id)createMapOfEntityNameToPKMaxForEntitiesFromUBRangeTable:(id)arg1;
- (BOOL)databaseIsEmpty;
- (void)dealloc;
- (void)deleteCorrelation:(id)arg1;
- (void)deleteRow:(id)arg1;
- (id)describeResults;
- (void)disconnect;
- (void)endFetch;
- (void)endPrimaryKeyGeneration;
- (void)execute;
- (long long)fetchMaxPrimaryKeyForEntity:(id)arg1;
- (int)fetchResultSet:(void*)arg1 usingFetchPlan:(id)arg2;
- (id)fetchTableCreationSQL;
- (id)fetchTableNames;
- (id)fetchUbiquityKnowledgeVector;
- (void)finalize;
- (long long)generatePrimaryKeysForEntity:(id)arg1 batch:(unsigned int)arg2;
- (void)handleCorruptedDB:(id)arg1;
- (BOOL)hasMetadataTable;
- (BOOL)hasPrimaryKeyTable;
- (id)initWithAdapter:(id)arg1;
- (void)insertCorrelation:(id)arg1;
- (void)insertRow:(id)arg1;
- (BOOL)isFetchInProgress;
- (BOOL)isLocalFS;
- (BOOL)isOpen;
- (id)newFetchedArray;
- (BOOL)performIntegrityCheck;
- (void)prepareForPrimaryKeyGeneration;
- (void)prepareSQLStatement:(id)arg1;
- (struct __CFArray { }*)rawIntegerRowsForSQL:(id)arg1;
- (void)releaseSQLStatement;
- (void)resetSQLStatement;
- (void)rollbackTransaction;
- (void)setExclusiveLockingMode:(BOOL)arg1;
- (void)setUbiquityTableValue:(id)arg1 forKey:(id)arg2;
- (id)ubiquityTableKeysAndValues;
- (id)ubiquityTableValueForKey:(id)arg1;
- (void)updateCorrelation:(id)arg1;
- (void)updateRow:(id)arg1;
- (void)updateUbiquityKnowledgeForPeerWithID:(id)arg1 andTransactionNumber:(id)arg2;
- (void)updateUbiquityKnowledgeVector:(id)arg1;
- (void)willCreateSchema;

@end
