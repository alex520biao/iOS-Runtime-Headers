/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceSearchFeedbackRequest : PBRequest {
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    struct { 
        unsigned int sessionGUID : 1; 
        unsigned int businessID : 1; 
        unsigned int timestamp : 1; 
        unsigned int feedbackType : 1; 
        unsigned int numberOfResults : 1; 
        unsigned int positionInResults : 1; 
        unsigned int sequenceNumber : 1; 
    long long _businessID;
    int _feedbackType;
    } _has;
    int _numberOfResults;
    int _positionInResults;
    int _sequenceNumber;
    } _sessionGUID;
    double _timestamp;
}

@property long long businessID;
@property int feedbackType;
@property BOOL hasBusinessID;
@property BOOL hasFeedbackType;
@property BOOL hasNumberOfResults;
@property BOOL hasPositionInResults;
@property BOOL hasSequenceNumber;
@property BOOL hasSessionGUID;
@property BOOL hasTimestamp;
@property int numberOfResults;
@property int positionInResults;
@property int sequenceNumber;
@property struct { unsigned long long x1; unsigned long long x2; } sessionGUID;
@property double timestamp;

- (long long)businessID;
- (void)copyTo:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)feedbackType;
- (BOOL)hasBusinessID;
- (BOOL)hasFeedbackType;
- (BOOL)hasNumberOfResults;
- (BOOL)hasPositionInResults;
- (BOOL)hasSequenceNumber;
- (BOOL)hasSessionGUID;
- (BOOL)hasTimestamp;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (int)numberOfResults;
- (int)positionInResults;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (int)sequenceNumber;
- (struct { unsigned long long x1; unsigned long long x2; })sessionGUID;
- (void)setBusinessID:(long long)arg1;
- (void)setFeedbackType:(int)arg1;
- (void)setHasBusinessID:(BOOL)arg1;
- (void)setHasFeedbackType:(BOOL)arg1;
- (void)setHasNumberOfResults:(BOOL)arg1;
- (void)setHasPositionInResults:(BOOL)arg1;
- (void)setHasSequenceNumber:(BOOL)arg1;
- (void)setHasSessionGUID:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setNumberOfResults:(int)arg1;
- (void)setPositionInResults:(int)arg1;
- (void)setSequenceNumber:(int)arg1;
- (void)setSessionGUID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
