/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, NSIndexSet, NSString, PLManagedObject, PLObjectSnapshot;

@interface PLContainerChangeNotification : PLChangeNotification {
    NSIndexSet *_changedIndexes;
    NSArray *_changedObjects;
    BOOL _countDidChange;
    NSIndexSet *_deletedIndexes;
    BOOL _didCalculateDiffs;
    NSIndexSet *_insertedIndexes;
    struct __CFArray { } *_movedFromIndexes;
    NSIndexSet *_movedIndexes;
    id _object;
    BOOL _shouldReload;
    PLObjectSnapshot *_snapshot;
}

@property(readonly) NSArray * _changedObjects;
@property(readonly) NSString * _contentRelationshipName;
@property(readonly) BOOL _didCalculateDiffs;
@property(readonly) NSString * _diffDescription;
@property(readonly) PLManagedObject * _managedObject;
@property(readonly) NSIndexSet * changedIndexes;
@property(readonly) NSArray * changedObjects;
@property(readonly) BOOL countDidChange;
@property(readonly) NSIndexSet * deletedIndexes;
@property(readonly) NSArray * deletedObjects;
@property(readonly) BOOL hasMoves;
@property(readonly) NSIndexSet * insertedIndexes;
@property(readonly) NSArray * insertedObjects;
@property(readonly) BOOL shouldReload;
@property(readonly) PLObjectSnapshot * snapshot;

- (void)_calculateDiffs;
- (void)_calculateDiffsIfNecessary;
- (id)_changedObjects;
- (id)_contentRelationshipName;
- (BOOL)_didCalculateDiffs;
- (id)_diffDescription;
- (BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2;
- (id)_init;
- (id)_initWithObject:(id)arg1 snapshot:(id)arg2 changedObjects:(id)arg3;
- (id)_managedObject;
- (id)changedIndexes;
- (id)changedObjects;
- (BOOL)countDidChange;
- (void)dealloc;
- (id)deletedIndexes;
- (id)deletedObjects;
- (void)enumerateMovesWithBlock:(id)arg1;
- (BOOL)hasMoves;
- (id)init;
- (id)insertedIndexes;
- (id)insertedObjects;
- (id)name;
- (id)object;
- (BOOL)shouldReload;
- (id)snapshot;

@end
