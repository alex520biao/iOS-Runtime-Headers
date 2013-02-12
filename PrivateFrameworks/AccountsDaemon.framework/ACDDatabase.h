/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStore, NSPersistentStoreCoordinator, NSString;

@interface ACDDatabase : NSObject {
    NSManagedObjectContext *_context;
    NSManagedObjectModel *_model;
    NSString *_path;
    NSPersistentStore *_store;
    NSPersistentStoreCoordinator *_storeCoordinator;
}

@property(readonly) NSManagedObjectContext * managedObjectContext;
@property(readonly) NSString * path;
@property int version;

+ (struct __CFString { }*)_copyRootPath;
+ (id)defaultPath;

- (void).cxx_destruct;
- (BOOL)_databaseFileExists;
- (id)_managedObjectModel;
- (id)_persistentStoreCoordinator;
- (void)_removeFilesAtURL:(id)arg1 forStoreCoordinator:(id)arg2;
- (void)_setupManagedObjectContext;
- (id)_store;
- (unsigned int)countOfEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2 sortDescriptor:(id)arg3;
- (id)fetchObjectsForEntityNamed:(id)arg1 withPredicate:(id)arg2;
- (id)fetchObjectsForEntityNamed:(id)arg1;
- (id)initWithDefaultPath;
- (id)initWithPath:(id)arg1;
- (id)managedObjectContext;
- (id)objectForObjectURI:(id)arg1;
- (id)path;
- (void)setVersion:(int)arg1;
- (int)version;

@end
