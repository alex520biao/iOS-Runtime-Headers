/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOSearchSubstring : PBCodable  {
    int _beginIndex;
    int _endIndex;
    int _stringType;
}

@property int stringType;
@property int beginIndex;
@property int endIndex;


- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (BOOL)readFrom:(id)arg1;
- (void)setEndIndex:(int)arg1;
- (int)endIndex;
- (void)setBeginIndex:(int)arg1;
- (int)beginIndex;
- (void)setStringType:(int)arg1;
- (int)stringType;
- (id)dictionaryRepresentation;

@end