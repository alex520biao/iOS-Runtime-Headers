/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableArray, NSObject<OS_xpc_object>, NSString, NSXPCConnection, NSXPCInterface;

@interface NSXPCDecoder : NSXPCCoder {
    NSMutableArray *_allowedClasses;
    NSXPCConnection *_connection;
    NSMutableArray *_containers;
    unsigned int _genericIndex;
    NSXPCInterface *_interface;
    NSObject<OS_xpc_object> *_oolObjects;
    NSString *_replyToSelector;
}

@property NSXPCConnection * _connection;
@property(retain) NSXPCInterface * interface;
@property(copy) NSString * replyToSelector;

- (id)__objectStuff:(id)arg1;
- (id)_connection;
- (id)_decodeArrayOfObjectsForKey:(id)arg1;
- (id)_decodeXPCObjectAtIndex:(id)arg1;
- (id)_initWithRootXPCObject:(id)arg1;
- (void)_popContainer;
- (void)_pushContainer:(id)arg1;
- (id)_topContainer;
- (id)allowedClasses;
- (BOOL)allowsKeyedCoding;
- (BOOL)containsValueForKey:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (BOOL)decodeBoolForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned int*)arg2;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (int)decodeIntegerForKey:(id)arg1;
- (id)decodeInvocation;
- (id)decodeObject;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)decodeObjectOfClasses:(id)arg1 forKey:(id)arg2;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void*)arg2;
- (id)decodeXPCObjectForKey:(id)arg1;
- (void)finalize;
- (id)interface;
- (id)replyToSelector;
- (void)setInterface:(id)arg1;
- (void)setReplyToSelector:(id)arg1;
- (void)set_connection:(id)arg1;

@end
