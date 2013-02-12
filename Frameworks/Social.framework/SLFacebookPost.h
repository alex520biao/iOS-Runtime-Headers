/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class NSArray, NSMutableArray, NSString, NSURL, SLFacebookAlbum, SLFacebookPlace, SLFacebookPostPrivacySetting;

@interface SLFacebookPost : NSObject <NSCoding> {
    SLFacebookAlbum *_album;
    NSMutableArray *_imageAssetURLs;
    NSMutableArray *_imageData;
    NSURL *_link;
    NSString *_maskedApplicationID;
    SLFacebookPlace *_place;
    SLFacebookPostPrivacySetting *_privacySetting;
    NSString *_text;
}

@property(retain) SLFacebookAlbum * album;
@property(retain) NSArray * imageAssetURLs;
@property(retain) NSArray * imageData;
@property(retain) NSURL * link;
@property(retain) NSString * maskedApplicationID;
@property(retain) SLFacebookPlace * place;
@property(retain) SLFacebookPostPrivacySetting * privacySetting;
@property(retain) NSString * text;

- (void).cxx_destruct;
- (id)_encodableObjectProperties;
- (void)addImageAssetURL:(id)arg1;
- (void)addImageData:(id)arg1;
- (id)album;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (id)imageAssetURLs;
- (id)imageData;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)link;
- (id)maskedApplicationID;
- (id)place;
- (id)privacySetting;
- (void)setAlbum:(id)arg1;
- (void)setImageAssetURLs:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setLink:(id)arg1;
- (void)setMaskedApplicationID:(id)arg1;
- (void)setPlace:(id)arg1;
- (void)setPrivacySetting:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
