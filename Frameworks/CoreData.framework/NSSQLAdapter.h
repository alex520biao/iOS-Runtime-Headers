/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableArray, NSSQLCore;

@interface NSSQLAdapter : NSObject {
    NSMutableArray *_connections;
    NSSQLCore *_sqlCore;
}

- (id)_newSelectStatementWithFetchRequest:(id)arg1 ignoreInheritance:(BOOL)arg2;
- (id)_originalRowForUpdate:(id)arg1;
- (id)connections;
- (id)createConnection;
- (void)dealloc;
- (Class)generatorClass;
- (BOOL)hasOpenConnections;
- (id)initWithSQLCore:(id)arg1;
- (id)newCopyAndInsertStatementForManyToMany:(id)arg1 toManyToMany:(id)arg2 intermediateTableName:(id)arg3 invertColumns:(BOOL)arg4;
- (id)newCountStatementWithFetchRequest:(id)arg1;
- (id)newCreateIndexStatementForColumn:(id)arg1;
- (id)newCreateIndexStatementForColumnWithName:(id)arg1 inTableWithName:(id)arg2;
- (id)newCreateIndexStatementForColumns:(id)arg1;
- (id)newCreatePrimaryKeyTableStatement;
- (id)newCreateTableStatementForEntity:(id)arg1;
- (id)newCreateTableStatementForManyToMany:(id)arg1;
- (id)newDeleteStatementWithCorrelation:(id)arg1;
- (id)newDeleteStatementWithRow:(id)arg1;
- (id)newDropTableStatementForTableNamed:(id)arg1;
- (id)newGeneratorWithStatement:(id)arg1;
- (id)newInsertStatementWithCorrelation:(id)arg1;
- (id)newInsertStatementWithRow:(id)arg1;
- (id)newPrimaryKeyInitializeStatementForEntity:(id)arg1 withInitialMaxPK:(long long)arg2;
- (id)newRenameTableStatementFrom:(id)arg1 to:(id)arg2;
- (id)newRenameTableStatementFromManyToMany:(id)arg1 toManyToMany:(id)arg2 orToRandomSpot:(id)arg3;
- (id)newSelectStatementWithFetchRequest:(id)arg1;
- (id)newStatementWithEntity:(id)arg1;
- (id)newStatementWithSQLString:(id)arg1;
- (id)newStatementWithoutEntity;
- (id)newUpdateStatementWithCorrelation:(id)arg1;
- (id)newUpdateStatementWithRow:(id)arg1;
- (void)registerConnection:(id)arg1;
- (id)sqlCore;
- (unsigned int)sqlTypeForExpressionConstantValue:(id)arg1;
- (Class)statementClass;
- (BOOL)supportsCorrelatedSubqueries;
- (id)type;
- (id)typeStringForColumn:(id)arg1;
- (id)typeStringForSQLType:(unsigned int)arg1;
- (void)unregisterConnection:(id)arg1;
- (id)url;

@end
