/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSString, UIAlertView;

@interface MPMediaTypeManager : NSObject {
    UIAlertView *_activeAlert;
    NSString *_alertLocalizationKey;
    NSString *_bundleID;
    NSString *_defaultsKey;
    BOOL _installed;
    int _mediaType;
    NSString *_supportsMediaKey;
}

@property(retain) UIAlertView * activeAlert;
@property(readonly) NSString * alertLocalizationKey;
@property(readonly) NSString * bundleID;
@property(readonly) NSString * defaultsKey;
@property BOOL installed;
@property(readonly) int mediaType;
@property(readonly) NSString * supportsMediaKey;

- (id)activeAlert;
- (id)alertLocalizationKey;
- (id)bundleID;
- (void)dealloc;
- (id)defaultsKey;
- (id)initWithMediaType:(int)arg1 bundleID:(id)arg2 supportsMediaKey:(id)arg3 defaultsKey:(id)arg4 alertLocalizationKey:(id)arg5;
- (BOOL)installed;
- (int)mediaType;
- (void)setActiveAlert:(id)arg1;
- (void)setInstalled:(BOOL)arg1;
- (id)supportsMediaKey;

@end
