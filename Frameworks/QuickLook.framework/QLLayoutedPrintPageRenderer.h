/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSMutableArray, UIWebPaginationInfo;

@interface QLLayoutedPrintPageRenderer : QLRemotePrintPageHelper {
    NSMutableArray *_nodes;
    UIWebPaginationInfo *_paginationInfo;
}

- (id)_currentNodes;
- (id)_htmlPageXPath;
- (void)dealloc;
- (int)numberOfPages;
- (id)pdfDataForPageAtIndex:(int)arg1 withSize:(struct CGSize { float x1; float x2; })arg2 printingDone:(BOOL*)arg3;
- (void)prepareForDrawingPages:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

@end
