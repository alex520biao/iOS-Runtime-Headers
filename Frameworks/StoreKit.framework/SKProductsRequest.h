/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@class <SKProductsRequestDelegate>;

@interface SKProductsRequest : SKRequest {
    id _productsRequestInternal;
}

@property <SKProductsRequestDelegate> * delegate;

- (void)_handleReply:(id)arg1;
- (void)_sendXPCMessage;
- (void)dealloc;
- (id)init;
- (id)initWithProductIdentifiers:(id)arg1;

@end
