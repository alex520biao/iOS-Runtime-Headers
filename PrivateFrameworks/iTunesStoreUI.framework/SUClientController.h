/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class ISURLOperationPool, MFMailComposeViewController, NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, SUClientInterface, SUImageCache, SUScriptExecutionContext, UIViewController;

@interface SUClientController : NSObject <SUClientInterfaceDelegate, MFMailComposeViewControllerDelegate, SUPurchaseManagerDelegate> {
    BOOL _active;
    SUClientInterface *_clientInterface;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    SUImageCache *_imageCache;
    ISURLOperationPool *_imageOperationPool;
    ISURLOperationPool *_imagePool;
    NSString *_localStoreFrontAtLastSuspend;
    MFMailComposeViewController *_mailComposeViewController;
    struct __CFArray { } *_offeredAssetTypes;
    NSArray *_overlayConfigurations;
    UIViewController *_rootViewController;
    SUScriptExecutionContext *_scriptExecutionContext;
    NSString *_synchedStoreFrontAtLastSuspend;
    NSMutableDictionary *_urlBagKeys;
}

@property(getter=isActive,readonly) BOOL active;
@property(copy) SUClientInterface * clientInterface;
@property(retain) SUImageCache * imageCache;
@property(retain) ISURLOperationPool * imageOperationPool;
@property(retain) UIViewController * rootViewController;
@property(readonly) SUScriptExecutionContext * scriptExecutionContext;
@property(readonly) NSString * storeContentLanguage;
@property(getter=isStoreEnabled,readonly) BOOL storeEnabled;
@property(readonly) BOOL storeFrontDidChangeSinceLastSuspend;

+ (void)setSharedController:(id)arg1;
+ (id)sharedController;

- (id)URLBagKeyForIdentifier:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_dialogNotification:(id)arg1;
- (void)_memoryWarningNotification:(id)arg1;
- (id)_newAccountViewControllerForButtonAction:(id)arg1;
- (id)_newComposeReviewViewControllerForButtonAction:(id)arg1;
- (void)_presentDialog:(id)arg1;
- (void)_purgeCaches;
- (void)_reloadOverlayConfigurationsFromURLBag;
- (void)_reloadScriptExecutionContextFromURLBag;
- (void)_reloadUserDefaultsFromURLBag;
- (void)autosaveMessageWithCompletionBlock:(id)arg1;
- (void)bagDidLoadNotification:(id)arg1;
- (void)becomeActive;
- (void)cancelAllOperations;
- (id)clientIdentifier;
- (void)clientInterface:(id)arg1 exitStoreWithReason:(int)arg2;
- (void)clientInterface:(id)arg1 presentDialog:(id)arg2;
- (void)clientInterface:(id)arg1 setStatusBarHidden:(BOOL)arg2 withAnimation:(int)arg3;
- (void)clientInterface:(id)arg1 setStatusBarStyle:(int)arg2 animated:(BOOL)arg3;
- (id)clientInterface;
- (void)composeEmailByRestoringAutosavedMessage;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2 animated:(BOOL)arg3;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
- (BOOL)composeReviewWithViewController:(id)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (void)dismissMailComposeViewControllerAnimated:(BOOL)arg1;
- (void)dismissOverlayBackgroundViewController;
- (BOOL)dismissTopViewControllerAnimated:(BOOL)arg1;
- (BOOL)displayClientURL:(id)arg1;
- (void)exitStoreWithReason:(int)arg1;
- (BOOL)ignoresExpectedClientsProtocol;
- (id)imageCache;
- (id)imageOperationPool;
- (id)init;
- (id)initWithClientIdentifier:(id)arg1;
- (id)initWithClientInterface:(id)arg1;
- (BOOL)isActive;
- (BOOL)isComposingEmail;
- (BOOL)isStoreEnabled;
- (BOOL)libraryContainsItemIdentifier:(unsigned long long)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (id)newScriptInterface;
- (struct __CFArray { }*)offeredAssetTypes;
- (BOOL)openClientURL:(id)arg1;
- (BOOL)openURL:(id)arg1 inClientWithIdentifier:(id)arg2;
- (BOOL)openURL:(id)arg1;
- (id)overlayBackgroundViewController;
- (id)overlayConfigurationForStorePage:(id)arg1;
- (BOOL)performActionForDialog:(id)arg1 button:(id)arg2;
- (BOOL)presentAccountViewController:(id)arg1 animated:(BOOL)arg2;
- (BOOL)presentAccountViewController:(id)arg1 showNavigationBar:(BOOL)arg2 animated:(BOOL)arg3;
- (void)presentExternalURLViewController:(id)arg1;
- (void)presentMailComposeViewController:(id)arg1 animated:(BOOL)arg2;
- (BOOL)presentOverlayBackgroundViewController:(id)arg1;
- (void)purchaseManager:(id)arg1 didAddPurchases:(id)arg2;
- (void)purchaseManager:(id)arg1 failedToAddPurchases:(id)arg2;
- (void)purchaseManager:(id)arg1 willAddPurchases:(id)arg2;
- (void)purchaseManagerDidEndUpdates:(id)arg1;
- (void)purchaseManagerWillBeginUpdates:(id)arg1;
- (void)resignActive;
- (id)rootViewController;
- (id)scriptExecutionContext;
- (id)scriptInterfaceForClientInterface:(id)arg1;
- (void)setClientInterface:(id)arg1;
- (void)setIgnoresExpectedClientsProtocol:(BOOL)arg1;
- (void)setImageCache:(id)arg1;
- (void)setImageOperationPool:(id)arg1;
- (void)setOfferedAssetTypes:(struct __CFArray { }*)arg1;
- (void)setRootViewController:(id)arg1;
- (void)setURLBagKey:(id)arg1 forIdentifier:(id)arg2;
- (void)setUserAgent:(id)arg1;
- (void)setViewControllerFactory:(id)arg1;
- (id)storeContentLanguage;
- (BOOL)storeFrontDidChangeSinceLastSuspend;
- (id)userAgent;
- (id)viewControllerFactory;

@end
