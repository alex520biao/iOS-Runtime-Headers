/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMapTable, VKPolylineOverlay, VKPolylineOverlayPainter;

@interface VKPolylineGroupOverlayPainter : VKOverlayPainter <VKPolylineGroupOverlayObserver> {
    NSMapTable *_polylinesToPainters;
    VKPolylineOverlay *_selectedPolyline;
}

@property(readonly) VKPolylineOverlayPainter * selectedPolylinePainter;

- (void)_addPainterForOverlay:(id)arg1;
- (void)dealloc;
- (void)drawDebug:(id)arg1 tiles:(id)arg2;
- (void)drawWithContext:(id)arg1 tiles:(id)arg2;
- (id)initWithOverlay:(id)arg1;
- (void)layoutWithContext:(id)arg1 tiles:(id)arg2 keysInView:(id)arg3;
- (void)polylineGroup:(id)arg1 didAddPolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didRemovePolyline:(id)arg2;
- (void)polylineGroup:(id)arg1 didSelectPolyline:(id)arg2;
- (id)selectedPolylinePainter;
- (void)setContainerModel:(id)arg1;

@end
