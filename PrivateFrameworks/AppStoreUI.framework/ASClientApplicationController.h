/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

@class ISOperation, NSObject<OS_dispatch_source>, SSDownloadManager;

@interface ASClientApplicationController : SUClientApplicationController <SSDownloadManagerObserver> {
    SSDownloadManager *_downloadManager;
    ISOperation *_geniusStatisticsOperation;
    int _libraryURLType;
    NSObject<OS_dispatch_source> *_reloadFromServerTimer;
    BOOL _usingNetwork;
}

- (BOOL)_cancelDownloadingIconOnHomeScreenWithDisplayID:(id)arg1;
- (BOOL)_cancelDownloadingIconOnHomeScreenWithDownload:(id)arg1;
- (BOOL)_cancelDownloadingIconOnHomeScreenWithPurchase:(id)arg1;
- (void)_cancelGeniusStatisticsOperation;
- (void)_cancelReloadFromServerTimer;
- (void)_reloadDownloadManagerFromServer;
- (void)_setUsingNetwork:(BOOL)arg1;
- (void)_showAccessoryLookupForURL:(id)arg1;
- (id)_startDownloadManager;
- (void)_stopDownloadManager;
- (void)becomeActive;
- (BOOL)composeReviewWithViewController:(id)arg1 animated:(BOOL)arg2;
- (void)dealloc;
- (BOOL)displayClientURL:(id)arg1;
- (void)downloadManagerNetworkUsageDidChange:(id)arg1;
- (id)init;
- (id)initWithClientIdentifier:(id)arg1;
- (id)initWithClientInterface:(id)arg1;
- (BOOL)libraryContainsItemIdentifier:(unsigned long long)arg1;
- (void)purchaseManager:(id)arg1 failedToAddPurchases:(id)arg2;
- (id)purchaseManager:(id)arg1 purchaseBatchForItems:(id)arg2;
- (id)purchaseManager:(id)arg1 purchaseBatchForPurchases:(id)arg2;
- (void)resignActive;
- (void)returnToLibrary;
- (id)tabBarController:(id)arg1 rootViewControllerForSection:(id)arg2;
- (id)tabBarController:(id)arg1 viewControllerForContext:(id)arg2;
- (BOOL)wasLaunchedFromLibrary;

@end
