/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSData, NSObject<OS_dispatch_queue>, NSXPCConnection;

@interface TIRemoteDataTransport : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    void *_mem;
    unsigned long _memSize;
    id _readyCallback;
}

@property(readonly) NSData * data;

+ (void)postRequest:(id)arg1 handler:(id)arg2;
+ (void)setDataSource:(id)arg1 forRequestType:(id)arg2;
+ (void)setUserDictionaryServer:(id)arg1;
+ (void)userDictionaryLoad;
+ (void)userDictionarySaveChanges;

- (void)_loadDescriptor:(int)arg1;
- (id)data;
- (void)dealloc;
- (id)initWithPurpose:(id)arg1 ready:(id)arg2;
- (oneway void)postRequestForPurpose:(id)arg1;

@end
