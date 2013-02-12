/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <VKLabelManagerDelegate>, NSSet, NSString, VKCalloutController, VKLabelDisplayList, VKLabelMarker, VKLabelNavSupport, VKLabelOcclusionTester, VKStylesheet;

@interface VKLabelManager : NSObject <VKLabelMarkerDelegate> {
    struct vector<std::__1::shared_ptr<vk::Label>, vk_allocator<std::__1::shared_ptr<vk::Label>> > { 
        struct shared_ptr<vk::Label> {} *__begin_; 
        struct shared_ptr<vk::Label> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<vk::Label> *, vk_allocator<std::__1::shared_ptr<vk::Label>> > { 
            struct shared_ptr<vk::Label> {} *__first_; 
        } __end_cap_; 
    struct vector<std::__1::shared_ptr<vk::Label>, vk_allocator<std::__1::shared_ptr<vk::Label>> > { 
        struct shared_ptr<vk::Label> {} *__begin_; 
        struct shared_ptr<vk::Label> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<vk::Label> *, vk_allocator<std::__1::shared_ptr<vk::Label>> > { 
            struct shared_ptr<vk::Label> {} *__first_; 
        } __end_cap_; 
    struct vector<std::__1::shared_ptr<vk::Label>, vk_allocator<std::__1::shared_ptr<vk::Label>> > { 
        struct shared_ptr<vk::Label> {} *__begin_; 
        struct shared_ptr<vk::Label> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<vk::Label> *, vk_allocator<std::__1::shared_ptr<vk::Label>> > { 
            struct shared_ptr<vk::Label> {} *__first_; 
        } __end_cap_; 
    struct vector<std::__1::shared_ptr<vk::Label>, vk_allocator<std::__1::shared_ptr<vk::Label>> > { 
        struct shared_ptr<vk::Label> {} *__begin_; 
        struct shared_ptr<vk::Label> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<vk::Label> *, vk_allocator<std::__1::shared_ptr<vk::Label>> > { 
            struct shared_ptr<vk::Label> {} *__first_; 
        } __end_cap_; 
    struct vector<std::__1::shared_ptr<vk::Label>, vk_allocator<std::__1::shared_ptr<vk::Label>> > { 
        struct shared_ptr<vk::Label> {} *__begin_; 
        struct shared_ptr<vk::Label> {} *__end_; 
        struct __compressed_pair<std::__1::shared_ptr<vk::Label> *, vk_allocator<std::__1::shared_ptr<vk::Label>> > { 
            struct shared_ptr<vk::Label> {} *__first_; 
        } __end_cap_; 
    struct LabelCollider { 
        struct vector<vk::CollisionObject *, vk_allocator<vk::CollisionObject *> > { 
            struct CollisionObject {} **__begin_; 
            struct CollisionObject {} **__end_; 
            struct __compressed_pair<vk::CollisionObject **, vk_allocator<vk::CollisionObject *> > { 
                struct CollisionObject {} **__first_; 
            } __end_cap_; 
        } _objects; 
        struct vector<vk::SapEntry, vk_allocator<vk::SapEntry> > { 
            struct SapEntry {} *__begin_; 
            struct SapEntry {} *__end_; 
            struct __compressed_pair<vk::SapEntry *, vk_allocator<vk::SapEntry> > { 
                struct SapEntry {} *__first_; 
            } __end_cap_; 
        } _axisY; 
        struct vector<vk::SapOverlap, vk_allocator<vk::SapOverlap> > { 
            struct SapOverlap {} *__begin_; 
            struct SapOverlap {} *__end_; 
            struct __compressed_pair<vk::SapOverlap *, vk_allocator<vk::SapOverlap> > { 
                struct SapOverlap {} *__first_; 
            } __end_cap_; 
        } _overlaps; 
    unsigned int _atlasEvictionStamp;
    VKCalloutController *_calloutController;
    } _collider;
    BOOL _debugSkipLabels;
    } _dedupeCandidates;
    <VKLabelManagerDelegate> *_delegate;
    NSString *_desiredLocale;
    VKLabelDisplayList *_displayList;
    } _displayedLabels;
    int _focusDeltaValueIndex;
    double _focusDeltaValues[5];
    unsigned int _frameStamp;
    BOOL _hasLoadingPOITiles;
    BOOL _iconsShouldAlignToPixels;
    BOOL _isNavSupportActive;
    BOOL _isTapZooming;
    BOOL _justDidLayout;
    struct LabelContext { id x1; id x2; id x3; id x4; struct ViewTransform {} *x5; int x6; int x7; unsigned int x8; float x9; boolx10; boolx11; boolx12; boolx13; boolx14; boolx15; int x16; struct { double x_17_1_1; double x_17_1_2; double x_17_1_3; double x_17_1_4; } x17; struct { float x_18_1_1; float x_18_1_2; float x_18_1_3; float x_18_1_4; } x18; struct { float x_19_1_1; float x_19_1_2; float x_19_1_3; float x_19_1_4; } x19; struct { float x_20_1_1; float x_20_1_2; float x_20_1_3; float x_20_1_4; } x20; int x21; } *_labelContext;
    BOOL _labelMarkerSelectionEnabled;
    int _labelMode;
    int _labelScaleFactor;
    } _labels;
    double _lastFocusDistance;
    NSSet *_lastLayoutTiles;
    unsigned int _layoutStamp;
    BOOL _localizeLabels;
    int _mapType;
    BOOL _mustPushLabels;
    VKLabelNavSupport *_navSupport;
    } _occlusionCandidates;
    VKLabelOcclusionTester *_occlusionTester;
    BOOL _occlusionTestingEnabled;
    BOOL _occlusionTestingIsActive;
    float _prevEyeAngle;
    double _prevEyeHeight;
    float _prevHeading;
    double _prevTimestamp;
    unsigned int _renderStamp;
    } _roadSigns;
    VKLabelMarker *_selectedLabelMarker;
    VKStylesheet *_stylesheet;
    int _vectorType;
}

@property(retain) VKCalloutController * calloutController;
@property BOOL debugSkipLabels;
@property <VKLabelManagerDelegate> * delegate;
@property(readonly) NSString * desiredLocale;
@property BOOL labelMarkerSelectionEnabled;
@property int labelMode;
@property int labelScaleFactor;
@property BOOL localizeLabels;
@property(readonly) VKLabelNavSupport * navSupport;
@property BOOL occlusionTestingEnabled;
@property(readonly) unsigned int renderStamp;
@property(readonly) VKLabelMarker * selectedLabelMarker;
@property(retain) VKStylesheet * stylesheet;
@property int vectorType;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addFocusValue:(const struct ViewTransform { int (**x1)(); int x2; struct { double x_3_1_1; double x_3_1_2; double x_3_1_3; } x3; struct { double x_4_1_1; double x_4_1_2; double x_4_1_3; } x4; struct { double x_5_1_1; double x_5_1_2; double x_5_1_3; } x5; float x6; float x7; boolx8; float x9; double x10; struct { double x_11_1_1[4][4]; } x11; struct { double x_12_1_1[4][4]; } x12; struct { double x_13_1_1[4][4]; } x13; id x14; float x15; boolx16; struct { double x_17_1_1; double x_17_1_2; double x_17_1_3; } x17; struct { double x_18_1_1; double x_18_1_2; double x_18_1_3; } x18; double x19; double x20; struct CGSize { float x_21_1_1; float x_21_1_2; } x21; float x22; struct { BOOL x_23_1_1; double x_23_1_2; double x_23_1_3; double x_23_1_4; double x_23_1_5; } x23; struct { double x_24_1_1; double x_24_1_2; double x_24_1_3; } x24; struct { double x_25_1_1; double x_25_1_2; double x_25_1_3; } x25; }*)arg1;
- (BOOL)_animateLabelsForTime:(double)arg1;
- (double)_animationMultiplier;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (struct shared_ptr<vk::Label> { struct Label {} *x1; struct __shared_weak_count {} *x2; })_labelAtScreenPoint:(struct CGPoint { float x1; float x2; })arg1 pointLabelsOnly:(BOOL)arg2;
- (void)_localeChanged:(id)arg1;
- (void)_setNeedsDisplay;
- (void)_setNeedsLayout;
- (void)_setSelectedLabelMarker:(id)arg1;
- (void)activeTileGroupChanged:(id)arg1;
- (id)calloutController;
- (void)clearScene;
- (void)dealloc;
- (BOOL)debugSkipLabels;
- (id)delegate;
- (void)deselectLabelMarkerAnimated:(BOOL)arg1;
- (id)desiredLocale;
- (void)didTapZoom;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (void)forEachDisplayedLabel:(id)arg1;
- (id)init;
- (void)labelMarker:(id)arg1 leftCalloutAccessoryViewDidChange:(id)arg2;
- (void)labelMarker:(id)arg1 rightCalloutAccessoryViewDidChange:(id)arg2;
- (id)labelMarkerForSelectionAtPoint:(struct CGPoint { float x1; float x2; })arg1 featurePool:(id)arg2 pointLabelsOnly:(BOOL)arg3;
- (BOOL)labelMarkerSelectionEnabled;
- (int)labelMode;
- (int)labelScaleFactor;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (BOOL)localizeLabels;
- (void)mapTypeChanged:(id)arg1;
- (id)navSupport;
- (BOOL)occlusionTestingEnabled;
- (unsigned int)renderStamp;
- (void)selectLabelMarker:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3;
- (id)selectedLabelMarker;
- (void)setCalloutController:(id)arg1;
- (void)setDebugSkipLabels:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGlobeViewWrapper:(id)arg1;
- (void)setLabelMarkerSelectionEnabled:(BOOL)arg1;
- (void)setLabelMode:(int)arg1;
- (void)setLabelScaleFactor:(int)arg1;
- (void)setLocalizeLabels:(BOOL)arg1;
- (void)setMapType:(int)arg1;
- (void)setOcclusionTestingEnabled:(BOOL)arg1;
- (void)setStylesheet:(id)arg1;
- (void)setVectorType:(int)arg1;
- (id)stylesheet;
- (int)vectorType;
- (void)willTapZoom;

@end
