/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@class HSConnectionConfiguration, HSConnectionStream, HSFairPlayInfo, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface HSConnection : NSObject {
    HSConnectionStream *_concurrentConnectionStream;
    HSConnectionConfiguration *_configuration;
    int _connectionState;
    HSConnectionStream *_connectionStream;
    int _connectionType;
    NSObject<OS_dispatch_queue> *_queue;
    struct __CFReadStream { } *_readStream;
    BOOL authenticationRequired;
    unsigned int basePlaylistContainerID;
    unsigned int databaseID;
    unsigned int databaseRevision;
    HSFairPlayInfo *fairPlayInfo;
    NSString *homeSharingGroupID;
    NSString *password;
    unsigned int sessionID;
    NSString *username;
}

@property(getter=isAuthenticationRequired) BOOL authenticationRequired;
@property unsigned int basePlaylistContainerID;
@property(readonly) NSURL * baseURL;
@property int connectionState;
@property(readonly) int connectionType;
@property unsigned int databaseID;
@property unsigned int databaseRevision;
@property(retain) HSFairPlayInfo * fairPlayInfo;
@property(copy) NSString * homeSharingGroupID;
@property(copy) NSString * password;
@property unsigned int sessionID;
@property(copy) NSString * username;

- (void)_continueFPSetupNegotiationWithData:(id)arg1 internalConnectionCompletionHandler:(id)arg2;
- (void)_loadDatabaseWithInternalConnectionCompletionHandler:(id)arg1;
- (void)_notifyServerOfActivity;
- (void)_sendRequest:(id)arg1 onConnectionStream:(id)arg2 withInternalResponseHandler:(id)arg3;
- (unsigned int)basePlaylistContainerID;
- (id)baseURL;
- (void)checkForDatabaseUpdatesWithCompletionHandler:(id)arg1;
- (void)connectWithCompletionHandler:(id)arg1;
- (int)connectionState;
- (int)connectionType;
- (unsigned int)databaseID;
- (unsigned int)databaseRevision;
- (void)dealloc;
- (void)disconnect;
- (id)fairPlayInfo;
- (id)homeSharingGroupID;
- (id)initWithBaseURL:(id)arg1 connectionType:(int)arg2;
- (id)initWithBaseURL:(id)arg1;
- (id)initWithConfiguration:(id)arg1 connectionType:(int)arg2;
- (BOOL)isAuthenticationRequired;
- (id)password;
- (void)sendConcurrentRequest:(id)arg1 withResponseHandler:(id)arg2;
- (void)sendRequest:(id)arg1 withResponseHandler:(id)arg2;
- (unsigned int)sessionID;
- (void)setAuthenticationRequired:(BOOL)arg1;
- (void)setBasePlaylistContainerID:(unsigned int)arg1;
- (void)setConnectionState:(int)arg1;
- (void)setDatabaseID:(unsigned int)arg1;
- (void)setDatabaseRevision:(unsigned int)arg1;
- (void)setFairPlayInfo:(id)arg1;
- (void)setHomeSharingGroupID:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setSessionID:(unsigned int)arg1;
- (void)setUsername:(id)arg1;
- (id)username;

@end
