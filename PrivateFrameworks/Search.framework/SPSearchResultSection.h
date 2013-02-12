/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Search.framework/Search
 */

@class NSMutableArray, NSString;

@interface SPSearchResultSection : PBCodable {
    struct { 
        unsigned int domain : 1; 
        unsigned int flags : 1; 
    NSString *_category;
    NSString *_displayIdentifier;
    unsigned int _domain;
    int _flags;
    } _has;
    NSString *_icon;
    NSMutableArray *_results;
    NSString *_scheme;
}

@property(retain) NSString * category;
@property(retain) NSString * displayIdentifier;
@property unsigned int domain;
@property int flags;
@property(readonly) BOOL hasCategory;
@property(readonly) BOOL hasDisplayIdentifier;
@property BOOL hasDomain;
@property BOOL hasFlags;
@property(readonly) BOOL hasIcon;
@property(readonly) BOOL hasScheme;
@property(retain) NSString * icon;
@property(retain) NSMutableArray * results;
@property(retain) NSString * scheme;

- (void)addResults:(id)arg1;
- (id)category;
- (void)clearResults;
- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayIdentifier;
- (unsigned int)domain;
- (int)flags;
- (BOOL)hasCategory;
- (BOOL)hasDisplayIdentifier;
- (BOOL)hasDomain;
- (BOOL)hasEquivalentResults:(id)arg1;
- (BOOL)hasFlags;
- (BOOL)hasIcon;
- (BOOL)hasScheme;
- (unsigned int)hash;
- (id)icon;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)results;
- (id)resultsAtIndex:(unsigned int)arg1;
- (unsigned int)resultsCount;
- (id)scheme;
- (void)setCategory:(id)arg1;
- (void)setDisplayIdentifier:(id)arg1;
- (void)setDomain:(unsigned int)arg1;
- (void)setFlags:(int)arg1;
- (void)setHasDomain:(BOOL)arg1;
- (void)setHasFlags:(BOOL)arg1;
- (void)setIcon:(id)arg1;
- (void)setResults:(id)arg1;
- (void)setScheme:(id)arg1;
- (void)writeTo:(id)arg1;

@end
