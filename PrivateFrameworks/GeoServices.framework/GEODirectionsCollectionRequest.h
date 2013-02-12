/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray;

@interface GEODirectionsCollectionRequest : PBRequest {
    NSMutableArray *_requestElements;
}

@property(retain) NSMutableArray * requestElements;

- (void)addRequestElements:(id)arg1;
- (void)clearRequestElements;
- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)requestElements;
- (id)requestElementsAtIndex:(unsigned int)arg1;
- (unsigned int)requestElementsCount;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setRequestElements:(id)arg1;
- (void)writeTo:(id)arg1;

@end
