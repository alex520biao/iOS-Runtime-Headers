/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class <CoreDAVAccountInfoProvider>, <CoreDAVTaskManager>, NSError, NSSet, NSString;

@interface CoreDAVContainerMultiGetTask : CoreDAVTask <CoreDAVContainerMultiGetSubmittable> {
    NSSet *_additionalPropElements;
    Class _appSpecificDataItemClass;
    NSString *_appSpecificDataProp;
    NSString *_appSpecificMultiGetCommand;
    NSString *_appSpecificMultiGetNameSpace;
    NSString *_appSpecificNamespace;
    NSSet *_missingURLs;
    NSSet *_parsedContents;
    BOOL _shouldIgnoreResponseErrors;
    NSSet *_urls;
}

@property <CoreDAVAccountInfoProvider> * accountInfoProvider;
@property(retain) NSSet * additionalPropElements;
@property(copy) id completionBlock;
@property(readonly) NSError * error;
@property(readonly) NSSet * missingURLs;
@property(readonly) NSSet * parsedContents;
@property BOOL shouldIgnoreResponseErrors;
@property <CoreDAVTaskManager> * taskManager;
@property double timeoutInterval;

- (id)additionalPropElements;
- (id)copyAdditionalPropElements;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)dealloc;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithURLs:(id)arg1 atContainerURL:(id)arg2 appSpecificDataItemClass:(Class)arg3;
- (id)missingURLs;
- (id)parsedContents;
- (id)requestBody;
- (void)setAdditionalPropElements:(id)arg1;
- (void)setAdditionalProperties:(id)arg1 onDataItem:(id)arg2;
- (void)setShouldIgnoreResponseErrors:(BOOL)arg1;
- (BOOL)shouldIgnoreResponseErrors;

@end
