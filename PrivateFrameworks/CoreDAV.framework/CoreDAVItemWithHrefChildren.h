/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVItemWithNoChildren, NSMutableSet;

@interface CoreDAVItemWithHrefChildren : CoreDAVItem {
    NSMutableSet *_hrefs;
    CoreDAVItemWithNoChildren *_unauthenticated;
}

@property(retain) NSMutableSet * hrefs;
@property(retain) CoreDAVItemWithNoChildren * unauthenticated;

+ (id)copyParseRules;

- (void)addHref:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)hrefs;
- (id)hrefsAsFullURLs;
- (id)hrefsAsOriginalURLs;
- (id)hrefsAsStrings;
- (void)setHrefs:(id)arg1;
- (void)setUnauthenticated:(id)arg1;
- (id)unauthenticated;

@end
