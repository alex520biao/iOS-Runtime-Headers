/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSData, NSDictionary, NSString;

@interface WLBarcode : NSObject <NSSecureCoding> {
    NSString *_altText;
    int _format;
    NSData *_messageData;
    NSDictionary *_options;
}

@property(copy) NSString * altText;
@property int format;
@property(copy) NSData * messageData;
@property(copy) NSDictionary * options;

+ (BOOL)supportsSecureCoding;

- (id)_imageFromBarcodeMessage;
- (id)_imageFromTextMessage;
- (id)altText;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (int)format;
- (unsigned int)hash;
- (id)image;
- (id)initWithBarcodeDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isTall;
- (id)messageData;
- (id)options;
- (void)setAltText:(id)arg1;
- (void)setFormat:(int)arg1;
- (void)setMessageData:(id)arg1;
- (void)setOptions:(id)arg1;

@end
