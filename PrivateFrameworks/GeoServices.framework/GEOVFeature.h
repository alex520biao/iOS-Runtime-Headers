/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOVCharacteristics, NSData, NSMutableArray;

@interface GEOVFeature : PBCodable {
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        int *list; 
        unsigned int count; 
        unsigned int size; 
    struct { 
        unsigned int businessID : 1; 
        unsigned int uID : 1; 
        unsigned int centerlineCount : 1; 
        unsigned int centerlineStart : 1; 
        unsigned int endLaneWidth : 1; 
        unsigned int endOffset : 1; 
        unsigned int endRoadOffset : 1; 
        unsigned int entryPointMask : 1; 
        unsigned int formOfWay : 1; 
        unsigned int minzoomRank : 1; 
        unsigned int placeType : 1; 
        unsigned int roadClass : 1; 
        unsigned int sectionCount : 1; 
        unsigned int sectionStart : 1; 
        unsigned int speedLimit : 1; 
        unsigned int startLaneWidth : 1; 
        unsigned int startOffset : 1; 
        unsigned int startRoadOffset : 1; 
        unsigned int styleGroup : 1; 
        unsigned int travelDirection : 1; 
        unsigned int type : 1; 
        unsigned int polyIsConvex : 1; 
    unsigned long long _businessID;
    unsigned int _centerlineCount;
    unsigned int _centerlineStart;
    GEOVCharacteristics *_characteristics;
    float _endLaneWidth;
    float _endOffset;
    float _endRoadOffset;
    unsigned int _entryPointMask;
    } _extrusionHeights;
    int _formOfWay;
    } _has;
    } _labelOffsets;
    float _minzoomRank;
    NSData *_oBSOLETECenterlines;
    NSData *_oBSOLETEShieldLabelPositions;
    NSData *_oBSOLETEVertexLabelPositions;
    int _placeType;
    NSData *_pointLabelPosition;
    BOOL _polyIsConvex;
    int _roadClass;
    int _sectionCount;
    int _sectionStart;
    } _shieldLabelOffsets;
    } _shieldLabelTypes;
    int _speedLimit;
    float _startLaneWidth;
    float _startOffset;
    float _startRoadOffset;
    NSMutableArray *_styleAttributes;
    unsigned int _styleGroup;
    int _travelDirection;
    int _type;
    long long _uID;
}

@property unsigned long long businessID;
@property unsigned int centerlineCount;
@property unsigned int centerlineStart;
@property(retain) GEOVCharacteristics * characteristics;
@property float endLaneWidth;
@property float endOffset;
@property float endRoadOffset;
@property unsigned int entryPointMask;
@property(readonly) int* extrusionHeights;
@property(readonly) unsigned int extrusionHeightsCount;
@property int formOfWay;
@property BOOL hasBusinessID;
@property BOOL hasCenterlineCount;
@property BOOL hasCenterlineStart;
@property(readonly) BOOL hasCharacteristics;
@property BOOL hasEndLaneWidth;
@property BOOL hasEndOffset;
@property BOOL hasEndRoadOffset;
@property BOOL hasEntryPointMask;
@property BOOL hasFormOfWay;
@property BOOL hasMinzoomRank;
@property(readonly) BOOL hasOBSOLETECenterlines;
@property(readonly) BOOL hasOBSOLETEShieldLabelPositions;
@property(readonly) BOOL hasOBSOLETEVertexLabelPositions;
@property BOOL hasPlaceType;
@property(readonly) BOOL hasPointLabelPosition;
@property BOOL hasPolyIsConvex;
@property BOOL hasRoadClass;
@property BOOL hasSectionCount;
@property BOOL hasSectionStart;
@property BOOL hasSpeedLimit;
@property BOOL hasStartLaneWidth;
@property BOOL hasStartOffset;
@property BOOL hasStartRoadOffset;
@property BOOL hasStyleGroup;
@property BOOL hasTravelDirection;
@property BOOL hasType;
@property BOOL hasUID;
@property(readonly) int* labelOffsets;
@property(readonly) unsigned int labelOffsetsCount;
@property float minzoomRank;
@property(retain) NSData * oBSOLETECenterlines;
@property(retain) NSData * oBSOLETEShieldLabelPositions;
@property(retain) NSData * oBSOLETEVertexLabelPositions;
@property int placeType;
@property(retain) NSData * pointLabelPosition;
@property BOOL polyIsConvex;
@property int roadClass;
@property int sectionCount;
@property int sectionStart;
@property(readonly) int* shieldLabelOffsets;
@property(readonly) unsigned int shieldLabelOffsetsCount;
@property(readonly) int* shieldLabelTypes;
@property(readonly) unsigned int shieldLabelTypesCount;
@property int speedLimit;
@property float startLaneWidth;
@property float startOffset;
@property float startRoadOffset;
@property(retain) NSMutableArray * styleAttributes;
@property unsigned int styleGroup;
@property int travelDirection;
@property int type;
@property long long uID;

- (void)addExtrusionHeight:(int)arg1;
- (void)addLabelOffset:(int)arg1;
- (void)addShieldLabelOffset:(int)arg1;
- (void)addShieldLabelType:(int)arg1;
- (void)addStyleAttributes:(id)arg1;
- (unsigned long long)businessID;
- (unsigned int)centerlineCount;
- (unsigned int)centerlineStart;
- (id)characteristics;
- (void)clearExtrusionHeights;
- (void)clearLabelOffsets;
- (void)clearShieldLabelOffsets;
- (void)clearShieldLabelTypes;
- (void)clearStyleAttributes;
- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (float)endLaneWidth;
- (float)endOffset;
- (float)endRoadOffset;
- (unsigned int)entryPointMask;
- (int)extrusionHeightAtIndex:(unsigned int)arg1;
- (int*)extrusionHeights;
- (unsigned int)extrusionHeightsCount;
- (int)formOfWay;
- (BOOL)hasBusinessID;
- (BOOL)hasCenterlineCount;
- (BOOL)hasCenterlineStart;
- (BOOL)hasCharacteristics;
- (BOOL)hasEndLaneWidth;
- (BOOL)hasEndOffset;
- (BOOL)hasEndRoadOffset;
- (BOOL)hasEntryPointMask;
- (BOOL)hasFormOfWay;
- (BOOL)hasMinzoomRank;
- (BOOL)hasOBSOLETECenterlines;
- (BOOL)hasOBSOLETEShieldLabelPositions;
- (BOOL)hasOBSOLETEVertexLabelPositions;
- (BOOL)hasPlaceType;
- (BOOL)hasPointLabelPosition;
- (BOOL)hasPolyIsConvex;
- (BOOL)hasRoadClass;
- (BOOL)hasSectionCount;
- (BOOL)hasSectionStart;
- (BOOL)hasSpeedLimit;
- (BOOL)hasStartLaneWidth;
- (BOOL)hasStartOffset;
- (BOOL)hasStartRoadOffset;
- (BOOL)hasStyleGroup;
- (BOOL)hasTravelDirection;
- (BOOL)hasType;
- (BOOL)hasUID;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)labelOffsetAtIndex:(unsigned int)arg1;
- (int*)labelOffsets;
- (unsigned int)labelOffsetsCount;
- (float)minzoomRank;
- (id)oBSOLETECenterlines;
- (id)oBSOLETEShieldLabelPositions;
- (id)oBSOLETEVertexLabelPositions;
- (int)placeType;
- (id)pointLabelPosition;
- (BOOL)polyIsConvex;
- (BOOL)readFrom:(id)arg1;
- (int)roadClass;
- (int)sectionCount;
- (int)sectionStart;
- (void)setBusinessID:(unsigned long long)arg1;
- (void)setCenterlineCount:(unsigned int)arg1;
- (void)setCenterlineStart:(unsigned int)arg1;
- (void)setCharacteristics:(id)arg1;
- (void)setEndLaneWidth:(float)arg1;
- (void)setEndOffset:(float)arg1;
- (void)setEndRoadOffset:(float)arg1;
- (void)setEntryPointMask:(unsigned int)arg1;
- (void)setExtrusionHeights:(int*)arg1 count:(unsigned int)arg2;
- (void)setFormOfWay:(int)arg1;
- (void)setHasBusinessID:(BOOL)arg1;
- (void)setHasCenterlineCount:(BOOL)arg1;
- (void)setHasCenterlineStart:(BOOL)arg1;
- (void)setHasEndLaneWidth:(BOOL)arg1;
- (void)setHasEndOffset:(BOOL)arg1;
- (void)setHasEndRoadOffset:(BOOL)arg1;
- (void)setHasEntryPointMask:(BOOL)arg1;
- (void)setHasFormOfWay:(BOOL)arg1;
- (void)setHasMinzoomRank:(BOOL)arg1;
- (void)setHasPlaceType:(BOOL)arg1;
- (void)setHasPolyIsConvex:(BOOL)arg1;
- (void)setHasRoadClass:(BOOL)arg1;
- (void)setHasSectionCount:(BOOL)arg1;
- (void)setHasSectionStart:(BOOL)arg1;
- (void)setHasSpeedLimit:(BOOL)arg1;
- (void)setHasStartLaneWidth:(BOOL)arg1;
- (void)setHasStartOffset:(BOOL)arg1;
- (void)setHasStartRoadOffset:(BOOL)arg1;
- (void)setHasStyleGroup:(BOOL)arg1;
- (void)setHasTravelDirection:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setHasUID:(BOOL)arg1;
- (void)setLabelOffsets:(int*)arg1 count:(unsigned int)arg2;
- (void)setMinzoomRank:(float)arg1;
- (void)setOBSOLETECenterlines:(id)arg1;
- (void)setOBSOLETEShieldLabelPositions:(id)arg1;
- (void)setOBSOLETEVertexLabelPositions:(id)arg1;
- (void)setPlaceType:(int)arg1;
- (void)setPointLabelPosition:(id)arg1;
- (void)setPolyIsConvex:(BOOL)arg1;
- (void)setRoadClass:(int)arg1;
- (void)setSectionCount:(int)arg1;
- (void)setSectionStart:(int)arg1;
- (void)setShieldLabelOffsets:(int*)arg1 count:(unsigned int)arg2;
- (void)setShieldLabelTypes:(int*)arg1 count:(unsigned int)arg2;
- (void)setSpeedLimit:(int)arg1;
- (void)setStartLaneWidth:(float)arg1;
- (void)setStartOffset:(float)arg1;
- (void)setStartRoadOffset:(float)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setStyleGroup:(unsigned int)arg1;
- (void)setTravelDirection:(int)arg1;
- (void)setType:(int)arg1;
- (void)setUID:(long long)arg1;
- (int)shieldLabelOffsetAtIndex:(unsigned int)arg1;
- (int*)shieldLabelOffsets;
- (unsigned int)shieldLabelOffsetsCount;
- (int)shieldLabelTypeAtIndex:(unsigned int)arg1;
- (int*)shieldLabelTypes;
- (unsigned int)shieldLabelTypesCount;
- (int)speedLimit;
- (float)startLaneWidth;
- (float)startOffset;
- (float)startRoadOffset;
- (id)styleAttributes;
- (id)styleAttributesAtIndex:(unsigned int)arg1;
- (unsigned int)styleAttributesCount;
- (unsigned int)styleGroup;
- (int)travelDirection;
- (int)type;
- (long long)uID;
- (void)writeTo:(id)arg1;

@end
