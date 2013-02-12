/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class NSMutableDictionary, NSNumber, NSString;

@interface ACDClient : NSObject {
    NSMutableDictionary *_accessOptions;
    struct __CFBundle { } *_bundle;
    NSString *_bundleID;
    struct _xpc_connection_s { } *_connection;
    NSString *_localizedAppName;
    NSString *_name;
    NSNumber *_pid;
}

@property(readonly) NSString * adamOrDisplayID;
@property(readonly) struct __CFBundle { }* bundle;
@property(retain) NSString * bundleID;
@property(readonly) struct _xpc_connection_s { }* connection;
@property(readonly) NSString * localizedAppName;
@property(readonly) NSString * name;
@property(readonly) NSNumber * pid;

+ (id)clientWithBundleID:(id)arg1;

- (void).cxx_destruct;
- (id)adamOrDisplayID;
- (struct __CFBundle { }*)bundle;
- (id)bundleID;
- (struct _xpc_connection_s { }*)connection;
- (void)dealloc;
- (id)debugDescription;
- (BOOL)hasEntitlement:(id)arg1;
- (id)initWithConnection:(struct _xpc_connection_s { }*)arg1;
- (id)localizedAppName;
- (id)name;
- (id)pid;
- (void)setBundleID:(id)arg1;

@end
