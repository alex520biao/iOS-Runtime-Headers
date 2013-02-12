/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface EKDaemonConnection : NSObject {
    NSObject<OS_dispatch_queue> *_connectionLock;
    unsigned int _connectionPort;
    NSString *_dbPath;
    id _delegate;
    unsigned int _machPort;
    unsigned int _nextID;
    unsigned long _options;
    BOOL _registeredForStartNote;
    NSObject<OS_dispatch_queue> *_replyHandlerLock;
    NSMutableDictionary *_replyHandlers;
    NSObject<OS_dispatch_source> *_replySource;
    unsigned int _serverPort;
}

@property id delegate;
@property(readonly) unsigned int port;

- (BOOL)_connectToServer;
- (void)_daemonRestarted;
- (void)_finishAllRepliesOnServerDeath;
- (void)_processReplyWithID:(unsigned int)arg1 data:(id)arg2 finished:(BOOL)arg3;
- (id)addReplyHandler:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)disconnect;
- (id)initWithOptions:(unsigned long)arg1 path:(id)arg2;
- (unsigned int)port;
- (void)removeReplyHandler:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
