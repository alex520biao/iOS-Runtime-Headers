/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class <VKGlobeAdapterDelegate>, VKDebugModel, VKGlobeViewWrapper, VKLabelFeaturePool, VKLabelManager, VKScene, VKStylesheet, VKTrafficIncidentsMapModel;

@interface VKGlobeAdapter : NSObject <VKLabelManagerDelegate> {
    struct { 
        double x; 
        double y; 
        double z; 
    struct { 
        double latitude; 
        double longitude; 
    struct vector<std::__1::weak_ptr<altitude::LabelData>, vk_allocator<std::__1::weak_ptr<altitude::LabelData>> > { 
        struct weak_ptr<altitude::LabelData> {} *__begin_; 
        struct weak_ptr<altitude::LabelData> {} *__end_; 
        struct __compressed_pair<std::__1::weak_ptr<altitude::LabelData> *, vk_allocator<std::__1::weak_ptr<altitude::LabelData>> > { 
            struct weak_ptr<altitude::LabelData> {} *__first_; 
        } __end_cap_; 
    struct vector<std::__1::weak_ptr<altitude::TrafficTile>, vk_allocator<std::__1::weak_ptr<altitude::TrafficTile>> > { 
        struct weak_ptr<altitude::TrafficTile> {} *__begin_; 
        struct weak_ptr<altitude::TrafficTile> {} *__end_; 
        struct __compressed_pair<std::__1::weak_ptr<altitude::TrafficTile> *, vk_allocator<std::__1::weak_ptr<altitude::TrafficTile>> > { 
            struct weak_ptr<altitude::TrafficTile> {} *__first_; 
        } __end_cap_; 
    } _activeLabelData;
    } _activeTrafficTiles;
    VKDebugModel *_debugModel;
    <VKGlobeAdapterDelegate> *_delegate;
    VKLabelFeaturePool *_featurePool;
    } _focusCoordinate;
    } _focusPoint;
    VKGlobeViewWrapper *_globeViewWrapper;
    VKTrafficIncidentsMapModel *_incidentMapModel;
    VKScene *_incidentScene;
    VKLabelManager *_labelManager;
    BOOL _labelMarkerSelectionEnabled;
    int _labelScaleFactor;
    BOOL _localizeLabels;
    VKScene *_scene;
    VKStylesheet *_stylesheet;
}

@property <VKGlobeAdapterDelegate> * delegate;
@property BOOL labelMarkerSelectionEnabled;
@property int labelScaleFactor;
@property BOOL localizeLabels;
@property(retain) VKTrafficIncidentsMapModel * trafficIncidentsMapModel;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_newMapTileForLabelTile:(id)arg1 layer:(unsigned int)arg2;
- (void)_updateLabelDataManagerCallbacks;
- (void)_updateTrafficManagerCallbacks;
- (id)calloutController;
- (void)computeActiveTileSet:(unsigned int)arg1;
- (void)dealloc;
- (void)debugHighlightLabelAtScreenPoint:(struct CGPoint { float x1; float x2; })arg1 viewTransform:(id)arg2;
- (id)delegate;
- (void)deselectLabelMarkerAnimated:(BOOL)arg1;
- (void)didTapZoom;
- (void)drawWithContext:(id)arg1;
- (void)flushLabelTiles;
- (BOOL)hasOcclusionAtLocalPoint:(struct { float x1; float x2; })arg1 inLabelTile:(id)arg2;
- (id)initWithCanvas:(id)arg1 camera:(id)arg2 mapType:(int)arg3;
- (void)labelManager:(id)arg1 didDeselectLabelMarker:(id)arg2;
- (void)labelManager:(id)arg1 labelMarker:(id)arg2 calloutAccessoryControlTapped:(id)arg3;
- (void)labelManager:(id)arg1 setNeedsDisplay:(BOOL)arg2;
- (void)labelManager:(id)arg1 setNeedsLayout:(BOOL)arg2;
- (void)labelManager:(id)arg1 willSelectLabelMarker:(id)arg2;
- (id)labelMarkerForSelectionAtPoint:(struct CGPoint { float x1; float x2; })arg1 pointLabelsOnly:(BOOL)arg2;
- (BOOL)labelMarkerSelectionEnabled;
- (int)labelScaleFactor;
- (void)layoutWithContext:(id)arg1;
- (BOOL)localizeLabels;
- (void)selectLabelMarker:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)selectedLabelMarker;
- (void)setCalloutController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFocusPoint:(struct { double x1; double x2; double x3; })arg1 coordinate:(struct { double x1; double x2; })arg2;
- (void)setGlobeViewWrapper:(id)arg1;
- (void)setLabelMarkerSelectionEnabled:(BOOL)arg1;
- (void)setLabelScaleFactor:(int)arg1;
- (void)setLocalizeLabels:(BOOL)arg1;
- (void)setStylesheet:(id)arg1;
- (void)setTrafficIncidentsMapModel:(id)arg1;
- (id)trafficIncidentsMapModel;
- (void)willTapZoom;

@end
