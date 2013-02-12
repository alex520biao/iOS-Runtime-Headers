/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSDate, VKAttributedRoute, VKAttributedRouteMatch;

@interface VKAttributedRouteMatch : NSObject {
    struct { 
        unsigned int index; 
        float offset; 
    struct { 
        unsigned int index; 
        float offset; 
    struct { 
        double latitude; 
        double longitude; 
    unsigned int _consecutiveProgressionsOffRoute;
    } _coordinateOnRoute;
    double _distanceFromRoute;
    double _distanceTraveledOffRoute;
    BOOL _isPoorMatch;
    } _lastGoodMatchCoordinate;
    NSDate *_lastTimeInTunnel;
    double _matchedCourse;
    double _modifiedCourseAccuracy;
    double _modifiedHorizontalAccuracy;
    VKAttributedRouteMatch *_projectedFrom;
    struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; id x_1_1_12; int x_1_1_13; } x1; unsigned int x2; unsigned int x3; int x4; int x5; unsigned int x6; unsigned int x7; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; } x8; struct { /* ? */ } *x9; } *_road;
    VKAttributedRoute *_route;
    } _routeCoordinate;
    unsigned int _stepIndex;
    NSDate *_timestamp;
}

@property unsigned int consecutiveProgressionsOffRoute;
@property struct { double x1; double x2; } coordinateOnRoute;
@property double distanceFromRoute;
@property double distanceTraveledOffRoute;
@property BOOL isPoorMatch;
@property struct { unsigned int x1; float x2; } lastGoodMatchCoordinate;
@property(retain) NSDate * lastTimeInTunnel;
@property(readonly) double matchedCourse;
@property double modifiedCourseAccuracy;
@property double modifiedHorizontalAccuracy;
@property(readonly) float offset;
@property(readonly) unsigned int pointIndex;
@property(retain) VKAttributedRouteMatch * projectedFrom;
@property struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; id x_1_1_12; int x_1_1_13; } x1; unsigned int x2; unsigned int x3; int x4; int x5; unsigned int x6; unsigned int x7; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; } x8; struct { /* ? */ } *x9; }* road;
@property(readonly) VKAttributedRoute * route;
@property(readonly) struct { unsigned int x1; float x2; } routeCoordinate;
@property(readonly) BOOL routeMatchedToEnd;
@property(readonly) unsigned int stepIndex;
@property(readonly) double timeSinceTunnel;
@property(readonly) NSDate * timestamp;

- (id).cxx_construct;
- (unsigned int)consecutiveProgressionsOffRoute;
- (struct { double x1; double x2; })coordinateOnRoute;
- (void)dealloc;
- (id)description;
- (double)distanceFromRoute;
- (double)distanceTraveledOffRoute;
- (unsigned int)hash;
- (id)initWithRoute:(id)arg1 routeCoordinate:(struct { unsigned int x1; float x2; })arg2 coordinateOnRoute:(struct { double x1; double x2; })arg3 stepIndex:(unsigned int)arg4 matchedCourse:(double)arg5 timestamp:(id)arg6;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualIgnoringScore:(id)arg1;
- (BOOL)isPoorMatch;
- (struct { unsigned int x1; float x2; })lastGoodMatchCoordinate;
- (id)lastTimeInTunnel;
- (double)matchedCourse;
- (double)modifiedCourseAccuracy;
- (double)modifiedHorizontalAccuracy;
- (float)offset;
- (unsigned int)pointIndex;
- (id)projectedFrom;
- (struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; id x_1_1_12; int x_1_1_13; } x1; unsigned int x2; unsigned int x3; int x4; int x5; unsigned int x6; unsigned int x7; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; } x8; struct { /* ? */ } *x9; }*)road;
- (id)route;
- (struct { unsigned int x1; float x2; })routeCoordinate;
- (BOOL)routeMatchBehind:(id)arg1;
- (BOOL)routeMatchedToEnd;
- (void)setConsecutiveProgressionsOffRoute:(unsigned int)arg1;
- (void)setCoordinateOnRoute:(struct { double x1; double x2; })arg1;
- (void)setDistanceFromRoute:(double)arg1;
- (void)setDistanceTraveledOffRoute:(double)arg1;
- (void)setIsPoorMatch:(BOOL)arg1;
- (void)setLastGoodMatchCoordinate:(struct { unsigned int x1; float x2; })arg1;
- (void)setLastTimeInTunnel:(id)arg1;
- (void)setModifiedCourseAccuracy:(double)arg1;
- (void)setModifiedHorizontalAccuracy:(double)arg1;
- (void)setProjectedFrom:(id)arg1;
- (void)setRoad:(struct { struct { id x_1_1_1; char *x_1_1_2; unsigned int x_1_1_3; unsigned int x_1_1_4; unsigned int x_1_1_5; unsigned int x_1_1_6; unsigned int x_1_1_7; unsigned long long x_1_1_8; BOOL x_1_1_9; unsigned long long x_1_1_10; float x_1_1_11; id x_1_1_12; int x_1_1_13; } x1; unsigned int x2; unsigned int x3; int x4; int x5; unsigned int x6; unsigned int x7; struct { float x_8_1_1; float x_8_1_2; float x_8_1_3; float x_8_1_4; } x8; struct { /* ? */ } *x9; }*)arg1;
- (unsigned int)stepIndex;
- (double)timeSinceTunnel;
- (id)timestamp;

@end
