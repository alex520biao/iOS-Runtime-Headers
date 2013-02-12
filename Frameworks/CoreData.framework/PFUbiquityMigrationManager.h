/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSManagedObjectModel, NSString, PFUbiquityLocation, PFUbiquityStoreMetadata;

@interface PFUbiquityMigrationManager : NSObject {
    NSManagedObjectModel *_destinationModel;
    NSString *_localPeerID;
    PFUbiquityLocation *_rootLocation;
    NSManagedObjectModel *_sourceModel;
    PFUbiquityStoreMetadata *_storeMetadata;
}

@property(readonly) NSManagedObjectModel * destinationModel;
@property(readonly) PFUbiquityLocation * rootLocation;
@property(readonly) NSManagedObjectModel * sourceModel;
@property(readonly) PFUbiquityStoreMetadata * storeMetadata;

- (void)dealloc;
- (id)destinationModel;
- (id)initWithDestinationModel:(id)arg1 sourceModel:(id)arg2 ubiquityRootLocation:(id)arg3 localPeerID:(id)arg4;
- (id)initWithDestinationModel:(id)arg1 storeMetadata:(id)arg2 ubiquityRootLocation:(id)arg3 localPeerID:(id)arg4;
- (BOOL)migrateTransactionLogs:(BOOL)arg1 andBaselineIfNecessaryForStoreName:(id)arg2 peerID:(id)arg3 error:(id*)arg4;
- (id)rootLocation;
- (id)sourceModel;
- (id)storeMetadata;

@end
