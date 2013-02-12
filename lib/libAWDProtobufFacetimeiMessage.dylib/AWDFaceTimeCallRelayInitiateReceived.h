/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDProtobufFacetimeiMessage.dylib
 */

@class NSString;

@interface AWDFaceTimeCallRelayInitiateReceived : PBCodable {
    struct { 
        unsigned int timestamp : 1; 
    NSString *_guid;
    } _has;
    unsigned long long _timestamp;
}

@property(retain) NSString * guid;
@property(readonly) BOOL hasGuid;
@property BOOL hasTimestamp;
@property unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (BOOL)hasGuid;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
