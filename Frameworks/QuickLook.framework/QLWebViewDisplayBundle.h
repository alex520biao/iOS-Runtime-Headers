/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSData, NSMutableArray, NSURLRequest, QLPDFHanderDelegateForwarder, QLPreviewConverter, QLScrubView, UIWebView;

@interface QLWebViewDisplayBundle : QLDisplayBundle <UIWebViewDelegate, UIScrollViewDelegate, QLScrubViewDataSource, UIWebPDFViewHandlerDelegate> {
    unsigned int _isLoadedDuringZoom : 1;
    unsigned int _isHTMLContent : 1;
    unsigned int _isXMLContent : 1;
    unsigned int _isPDFContent : 1;
    unsigned int _isSpreadsheetContent : 1;
    unsigned int _isPlainText : 1;
    unsigned int _isRTFContent : 1;
    unsigned int _isCSVContent : 1;
    unsigned int _loadStarted : 1;
    float _defaultZoom;
    QLPDFHanderDelegateForwarder *_forwarder;
    NSMutableArray *_htmlSlideNodes;
    BOOL _inScroll;
    int _lastPage;
    float _navigationBarHeight;
    NSData *_pdfPreviewData;
    QLPreviewConverter *_previewConverter;
    NSURLRequest *_previewRequest;
    QLScrubView *_scrubView;
    UIWebView *_webView;
    BOOL _webViewReadyForThumbnailing;
}

+ (int)backgroundTypeForUTI:(id)arg1 andMode:(int)arg2;

- (id)_copyPreviewConverterForPreviewItem:(id)arg1;
- (struct CGPDFDocument { }*)_getCGPDFDocumentRef;
- (id)_getWebView:(BOOL)arg1;
- (void)_hideOverlayDidEnd:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_hideScrubberIfNeeded:(double)arg1;
- (id)_htmlPageXPath;
- (id)_htmlSlideNodes;
- (id)_scrubView;
- (void)_showScrubberIfNeeded:(double)arg1;
- (void)_tearDownWebView;
- (BOOL)acceptControllerTouch:(id)arg1 fromGestureRecognizer:(id)arg2;
- (id)alertViewForUIWebPDFViewHandler:(id)arg1;
- (void)cancelLoad;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentFrameWithoutOverlay;
- (unsigned int)currentPageNumber;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)loadWithHints:(id)arg1;
- (int)numberOfPagesInScrubView:(id)arg1;
- (struct CGPoint { float x1; float x2; })originForPDFPageLabelViewWithHandler:(id)arg1 proposedOrigin:(struct CGPoint { float x1; float x2; })arg2;
- (int)pageCount;
- (struct CGSize { float x1; float x2; })pageSizeAtIndex:(int)arg1;
- (id)pdfPreviewData;
- (void)pdfViewHandlerCompletedLayoutAndIsUnlocked:(id)arg1;
- (id)previewConverter;
- (id)printPageHelper;
- (void)scrollToPage:(unsigned int)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrubView:(id)arg1 didSelectPageAtIndex:(unsigned int)arg2;
- (struct CGSize { float x1; float x2; })scrubView:(id)arg1 pageSizeAtIndex:(unsigned int)arg2;
- (id)scrubView:(id)arg1 thumbnailOperationForPageAtIndex:(unsigned int)arg2;
- (void)setOverlayHidden:(BOOL)arg1 duration:(double)arg2;
- (void)setPreviewItem:(id)arg1;
- (void)setPreviewMode:(int)arg1;
- (void)uiWebView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)uiWebView:(id)arg1 didFirstLayoutInFrame:(id)arg2;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;
- (void)uiWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (id)uiWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (void)userInteractedWithScrubView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
