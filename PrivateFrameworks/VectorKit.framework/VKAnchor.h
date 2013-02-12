/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class <VKAnchorDelegate>;

@interface VKAnchor : NSObject {
    struct { 
        double x; 
        double y; 
        double z; 
    struct { 
        double latitude; 
        double longitude; 
    } _coordinate;
    <VKAnchorDelegate> *_delegate;
    } _mercatorPoint;
}

@property struct { double x1; double x2; } coordinate;
@property <VKAnchorDelegate> * delegate;
@property(readonly) BOOL followsTerrain;
@property(readonly) BOOL isGeocentric;
@property(readonly) BOOL isMercator;
@property struct { double x1; double x2; double x3; } mercatorPoint;
@property(readonly) struct { double x1; double x2; double x3; } worldPoint;

- (struct { double x1; double x2; })coordinate;
- (id)delegate;
- (BOOL)followsTerrain;
- (id)initWithCoordinate:(struct { double x1; double x2; })arg1;
- (id)initWithMercatorPoint:(struct { double x1; double x2; double x3; })arg1;
- (BOOL)isGeocentric;
- (BOOL)isMercator;
- (struct { double x1; double x2; double x3; })mercatorPoint;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setMercatorPoint:(struct { double x1; double x2; double x3; })arg1;
- (int)worldIndexWithContext:(id)arg1;
- (struct { double x1; double x2; double x3; })worldPoint;
- (void)worldPointDidChange;

@end
