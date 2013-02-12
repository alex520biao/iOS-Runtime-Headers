/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLCapabilitiesManager : NSObject {
    BOOL _isRingtoneStoreAvailable;
    BOOL _isToneStoreAvailable;
}

@property BOOL isRingtoneStoreAvailable;
@property BOOL isToneStoreAvailable;

+ (void)_setDefaultCapabilitiesManager:(id)arg1;
+ (id)defaultCapabilitiesManager;

- (void)_checkRingtoneStoreAvailability;
- (void)dealloc;
- (BOOL)hasAdditionalTextTones;
- (BOOL)hasTelephonyCapability;
- (BOOL)hasVibratorCapability;
- (id)init;
- (BOOL)isRingtoneStoreAvailable;
- (BOOL)isToneStoreAvailable;
- (void)setIsRingtoneStoreAvailable:(BOOL)arg1;
- (void)setIsToneStoreAvailable:(BOOL)arg1;

@end
