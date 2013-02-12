/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSNetService : NSObject {
    id _delegate;
    id _netService;
    id _reserved;
}

+ (id)dataFromTXTRecordDictionary:(id)arg1;
+ (id)dictionaryFromTXTRecordData:(id)arg1;

- (id)TXTRecordData;
- (void)_dispatchCallBackWithError:(struct { int x1; int x2; })arg1;
- (struct __CFNetService { }*)_internalNetService;
- (id)_monitors;
- (void)_scheduleInDefaultRunLoopForMode:(id)arg1;
- (id)addresses;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (id)domain;
- (void)finalize;
- (BOOL)getInputStream:(out id*)arg1 outputStream:(out id*)arg2;
- (unsigned int)hash;
- (id)hostName;
- (id)initWithCFNetService:(struct __CFNetService { }*)arg1;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 port:(int)arg4;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (int)port;
- (void)publish;
- (void)publishWithOptions:(unsigned int)arg1;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)resolve;
- (void)resolveWithTimeout:(double)arg1;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDelegate:(id)arg1;
- (BOOL)setTXTRecordData:(id)arg1;
- (void)startMonitoring;
- (void)stop;
- (void)stopMonitoring;
- (id)type;

@end
