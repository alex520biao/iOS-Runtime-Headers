/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDSLPageMargins, GQDSStylesheet;

@interface GQDSLPublication : GQDRoot {
    struct CGSize { 
        float width; 
        float height; 
    BOOL mHasBody;
    BOOL mHasFooters;
    BOOL mHasHeaders;
    BOOL mIsOldAssetNameMapInitialized;
    BOOL mIsOldTemplateNameMapInitialized;
    struct __CFDictionary { } *mOldAssetNameMap;
    struct __CFDictionary { } *mOldTemplateNameMap;
    GQDSLPageMargins *mPageMargins;
    } mPageSize;
    BOOL mShowOutliner;
    GQDSStylesheet *mStylesheet;
}

+ (struct _xmlNs { struct _xmlNs {} *x1; int x2; char *x3; char *x4; void *x5; struct _xmlDoc {} *x6; }*)appNamespace;

- (id).cxx_construct;
- (struct __CFString { }*)createFixedPathForOldAppBundleResourcePath:(struct __CFString { }*)arg1;
- (struct __CFArray { }*)createUpgradedPathComponentsFromOldTemplatePathComponents:(struct __CFArray { }*)arg1;
- (struct __CFString { }*)createUpgradedPathForOldAssetPath:(struct __CFString { }*)arg1;
- (struct __CFURL { }*)createUrlToAppBundleResource:(struct __CFString { }*)arg1 processorBundle:(struct __CFBundle { }*)arg2;
- (void)dealloc;
- (BOOL)hasBody;
- (BOOL)hasFooters;
- (BOOL)hasHeaders;
- (id)init;
- (void)initializeAppBundleResourcesUrl;
- (id)pageMargins;
- (struct CGSize { float x1; float x2; })pageSize;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (void)setPageMargins:(id)arg1;
- (void)setStylesheet:(id)arg1;
- (BOOL)showOutliner;
- (id)stylesheet;

@end
