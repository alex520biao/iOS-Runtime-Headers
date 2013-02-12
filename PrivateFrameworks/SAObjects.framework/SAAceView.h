/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString;

@interface SAAceView : AceObject <SAAceSerializable, SADeferredKeyObject> {
}

@property(copy) NSNumber * listenAfterSpeaking;
@property(copy) NSString * speakableText;
@property(copy) NSString * viewId;

+ (id)aceView;
+ (id)aceViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)deferredKeys;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)listenAfterSpeaking;
- (void)setListenAfterSpeaking:(id)arg1;
- (void)setSpeakableText:(id)arg1;
- (void)setViewId:(id)arg1;
- (id)speakableText;
- (id)viewId;

@end
