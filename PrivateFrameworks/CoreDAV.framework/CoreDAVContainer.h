/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVResourceTypeItem, NSDictionary, NSSet, NSString, NSURL;

@interface CoreDAVContainer : NSObject {
    NSURL *_addMemberURL;
    NSDictionary *_bulkRequests;
    NSString *_containerTitle;
    BOOL _isUnauthenticated;
    NSURL *_owner;
    NSSet *_privileges;
    NSString *_pushKey;
    NSDictionary *_pushTransports;
    NSString *_quotaAvailable;
    NSString *_quotaUsed;
    NSURL *_resourceID;
    CoreDAVResourceTypeItem *_resourceType;
    NSSet *_supportedReports;
    NSString *_syncToken;
    NSURL *_url;
}

@property(retain) NSURL * addMemberURL;
@property(retain) NSDictionary * bulkRequests;
@property(retain) NSString * containerTitle;
@property(readonly) BOOL hasReadPrivileges;
@property(readonly) BOOL hasWriteContentPrivileges;
@property(readonly) BOOL hasWritePropertiesPrivileges;
@property(readonly) BOOL isPrincipal;
@property BOOL isUnauthenticated;
@property(retain) NSURL * owner;
@property(retain) NSSet * privileges;
@property(readonly) NSSet * privilegesAsStringSet;
@property(retain) NSString * pushKey;
@property(retain) NSDictionary * pushTransports;
@property(retain) NSString * quotaAvailable;
@property(retain) NSString * quotaUsed;
@property(retain) NSURL * resourceID;
@property(retain) CoreDAVResourceTypeItem * resourceType;
@property(readonly) NSSet * resourceTypeAsStringSet;
@property(retain) NSSet * supportedReports;
@property(readonly) NSSet * supportedReportsAsStringSet;
@property(readonly) BOOL supportsPrincipalPropertySearchReport;
@property(readonly) BOOL supportsSyncCollectionReport;
@property(retain) NSString * syncToken;
@property(retain) NSURL * url;

+ (id)convertPushTransportsForNSServerNotificationCenter:(id)arg1;
+ (id)copyPropertyMappingsForParser;

- (id)addMemberURL;
- (void)applyParsedProperties:(id)arg1;
- (id)bulkRequests;
- (id)containerTitle;
- (void)dealloc;
- (id)description;
- (BOOL)hasReadPrivileges;
- (BOOL)hasWriteContentPrivileges;
- (BOOL)hasWritePropertiesPrivileges;
- (id)initWithURL:(id)arg1 andProperties:(id)arg2;
- (BOOL)isPrincipal;
- (BOOL)isUnauthenticated;
- (id)owner;
- (id)privileges;
- (id)privilegesAsStringSet;
- (id)pushKey;
- (id)pushTransports;
- (id)quotaAvailable;
- (id)quotaUsed;
- (id)resourceID;
- (id)resourceType;
- (id)resourceTypeAsStringSet;
- (void)setAddMemberURL:(id)arg1;
- (void)setBulkRequests:(id)arg1;
- (void)setContainerTitle:(id)arg1;
- (void)setIsUnauthenticated:(BOOL)arg1;
- (void)setOwner:(id)arg1;
- (void)setPrivileges:(id)arg1;
- (void)setPushKey:(id)arg1;
- (void)setPushTransports:(id)arg1;
- (void)setQuotaAvailable:(id)arg1;
- (void)setQuotaUsed:(id)arg1;
- (void)setResourceID:(id)arg1;
- (void)setResourceType:(id)arg1;
- (void)setSupportedReports:(id)arg1;
- (void)setSyncToken:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)supportedReports;
- (id)supportedReportsAsStringSet;
- (BOOL)supportsPrincipalPropertySearchReport;
- (BOOL)supportsSyncCollectionReport;
- (id)syncToken;
- (id)url;

@end
