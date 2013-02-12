/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString, NSURL, SAObjectSupport;

@interface SACommandSupport : AceObject <SAAceSerializable> {
}

@property(copy) NSString * aceVersion;
@property(copy) NSString * commandId;
@property(retain) SAObjectSupport * resultSupport;
@property(copy) NSURL * serverEndpoint;
@property(copy) NSArray * supportedConstraints;
@property int weight;

+ (id)commandSupport;
+ (id)commandSupportWithDictionary:(id)arg1 context:(id)arg2;

- (id)aceVersion;
- (id)commandId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)resultSupport;
- (id)serverEndpoint;
- (void)setAceVersion:(id)arg1;
- (void)setCommandId:(id)arg1;
- (void)setResultSupport:(id)arg1;
- (void)setServerEndpoint:(id)arg1;
- (void)setSupportedConstraints:(id)arg1;
- (void)setWeight:(int)arg1;
- (id)supportedConstraints;
- (int)weight;

@end
