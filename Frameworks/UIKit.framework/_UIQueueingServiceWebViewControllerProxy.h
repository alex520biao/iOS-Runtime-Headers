/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <_UIQueueingServiceWebViewControllerProxyDelegate>, NSMutableArray;

@interface _UIQueueingServiceWebViewControllerProxy : NSObject {
    <_UIQueueingServiceWebViewControllerProxyDelegate> *_delegate;
    NSMutableArray *_queuedInvocations;
    id _serviceViewControllerProxy;
}

@property <_UIQueueingServiceWebViewControllerProxyDelegate> * delegate;
@property(retain) id serviceViewControllerProxy;

- (void)dealloc;
- (id)delegate;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)serviceViewControllerProxy;
- (void)setDelegate:(id)arg1;
- (void)setServiceViewControllerProxy:(id)arg1;

@end
