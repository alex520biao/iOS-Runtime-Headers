/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSDate, NSNumber, NSString, SSItemImageCollection;

@interface SSPreorder : NSObject <SSXPCCoding> {
    NSNumber *_accountID;
    NSString *_artistName;
    SSItemImageCollection *_imageCollection;
    unsigned long long _itemID;
    NSString *_itemKind;
    long long _pid;
    unsigned long long _preorderID;
    double _releaseDate;
    NSString *_releaseDateString;
    NSString *_title;
}

@property(readonly) NSString * artistName;
@property(readonly) SSItemImageCollection * imageCollection;
@property(readonly) NSString * itemKind;
@property(readonly) long long persistentIdentifier;
@property(readonly) NSDate * releaseDate;
@property(readonly) NSString * releaseDateString;
@property(readonly) NSNumber * storeAccountIdentifier;
@property(readonly) unsigned long long storeItemIdentifier;
@property(readonly) unsigned long long storePreorderIdentifier;
@property(readonly) NSString * title;

- (id)_initWithPersistentIdentifier:(long long)arg1;
- (void)_setArtistName:(id)arg1;
- (void)_setImageCollection:(id)arg1;
- (void)_setItemKind:(id)arg1;
- (void)_setReleaseDate:(id)arg1;
- (void)_setReleaseDateString:(id)arg1;
- (void)_setStoreAccountIdentifier:(id)arg1;
- (void)_setStoreItemIdentifier:(long long)arg1;
- (void)_setStorePreorderIdentifier:(long long)arg1;
- (void)_setTitle:(id)arg1;
- (id)artistName;
- (id)copyReleaseDateStringWithStyle:(long)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)imageCollection;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)itemKind;
- (long long)persistentIdentifier;
- (id)releaseDate;
- (id)releaseDateString;
- (id)storeAccountIdentifier;
- (unsigned long long)storeItemIdentifier;
- (unsigned long long)storePreorderIdentifier;
- (id)title;

@end
