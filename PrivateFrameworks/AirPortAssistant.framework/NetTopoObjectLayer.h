/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class BubbleTextLayer, NSMutableArray, NSString, NSTimer, NetTopoObjectLayer;

@interface NetTopoObjectLayer : CALayer {
    struct CGSize { 
        float width; 
        float height; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGSize { 
        float width; 
        float height; 
    NetTopoObjectLayer *_ancestor;
    id _associatedNode;
    } _boundsSizeConstraint;
    float _change;
    NSMutableArray *_children;
    unsigned int _column;
    NetTopoObjectLayer *_contourThread;
    BOOL _ghosted;
    } _imageCroppedFrame;
    } _imageFrame;
    BOOL _isExpanded;
    BubbleTextLayer *_labelLayer;
    float _labelPinnedHeight;
    struct CGColor { } *_labelSelectedFillColor2;
    struct CGColor { } *_labelSelectedFillColor;
    struct CGColor { } *_labelSelectedTextColor;
    NSString *_labelString;
    struct CGColor { } *_labelUnselectedFillColor;
    struct CGColor { } *_labelUnselectedTextColor;
    float _layoutScale;
    float _mod;
    unsigned int _number;
    struct CGImage { } *_objectImage;
    NetTopoObjectLayer *_parent;
    float _prelim;
    unsigned int _row;
    BubbleTextLayer *_secondaryLabelLayer;
    struct CGColor { } *_secondaryLabelSelectedTextColor;
    NSString *_secondaryLabelString;
    struct CGColor { } *_secondaryLabelUnselectedTextColor;
    BOOL _selectable;
    BOOL _selected;
    struct CGColor { } *_selectionColor;
    } _selectionSize;
    float _shift;
    BOOL _smallSize;
    float _statusLightInterval;
    unsigned int _statusLightMode;
    unsigned int _statusLightState;
    NSTimer *_statusLightTimer;
    struct CGImage {} *_statusLights[4];
}

@property NetTopoObjectLayer * ancestor;
@property(retain) id associatedNode;
@property struct CGSize { float x1; float x2; } boundsSizeConstraint;
@property float change;
@property(retain) NSMutableArray * children;
@property unsigned int column;
@property NetTopoObjectLayer * contourThread;
@property(getter=isExpanded) BOOL expanded;
@property(getter=isGhosted) BOOL ghosted;
@property(retain) NSString * label;
@property float labelPinnedHeight;
@property float layoutScale;
@property float mod;
@property unsigned int number;
@property(readonly) unsigned int numberOfChildren;
@property(retain) struct CGImage { }* objectImage;
@property(retain) NetTopoObjectLayer * parent;
@property(readonly) NetTopoObjectLayer * parentDevice;
@property float prelim;
@property unsigned int row;
@property(retain) NSString * secondaryLabel;
@property(getter=isSelectable) BOOL selectable;
@property(getter=isSelected) BOOL selected;
@property struct CGSize { float x1; float x2; } selectionSize;
@property float shift;
@property BOOL smallSize;
@property(retain) struct CGImage { }* statusBadgeImage;
@property(retain) struct CGImage { }* statusLightImage;
@property unsigned int statusLightMode;

+ (BOOL)needsDisplayForKey:(id)arg1;

- (void)addChild:(id)arg1;
- (id)ancestor;
- (id)associatedNode;
- (struct CGSize { float x1; float x2; })boundsSizeConstraint;
- (float)change;
- (id)childAtIndex:(unsigned int)arg1;
- (id)children;
- (unsigned int)column;
- (id)contourThread;
- (void)dealloc;
- (void)deallocStatusImages;
- (id)debugDescription;
- (id)describeOne:(id)arg1 uiLayer:(id)arg2 indent:(unsigned int)arg3;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)firstChild;
- (struct { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGPoint { float x_2_1_1; float x_2_1_2; } x2; struct CGPoint { float x_3_1_1; float x_3_1_2; } x3; struct CGPoint { float x_4_1_1; float x_4_1_2; } x4; })getConnectionAttachmentLocations;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })getFrameContainingAllSublayers;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })getImageSelectionBounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })getUserInteractionBounds;
- (id)init;
- (void)initializeStatusImages;
- (void)insertChild:(id)arg1 atIndex:(unsigned int)arg2;
- (BOOL)isExpanded;
- (BOOL)isSelectable;
- (id)label;
- (float)labelPinnedHeight;
- (id)lastChild;
- (float)layoutScale;
- (void)layoutSublayers;
- (float)mod;
- (unsigned int)number;
- (unsigned int)numberOfChildren;
- (struct CGImage { }*)objectImage;
- (id)parent;
- (id)parentDevice;
- (float)prelim;
- (void)removeChild:(id)arg1;
- (unsigned int)row;
- (id)secondaryLabel;
- (struct CGSize { float x1; float x2; })selectionSize;
- (void)setAncestor:(id)arg1;
- (void)setAssociatedNode:(id)arg1;
- (void)setBoundsSizeConstraint:(struct CGSize { float x1; float x2; })arg1;
- (void)setChange:(float)arg1;
- (void)setChildren:(id)arg1;
- (void)setColumn:(unsigned int)arg1;
- (void)setContourThread:(id)arg1;
- (void)setExpanded:(BOOL)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelPinnedHeight:(float)arg1;
- (void)setLayoutScale:(float)arg1;
- (void)setMod:(float)arg1;
- (void)setNumber:(unsigned int)arg1;
- (void)setObjectImage:(struct CGImage { }*)arg1;
- (void)setParent:(id)arg1;
- (void)setPrelim:(float)arg1;
- (void)setRow:(unsigned int)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setSelectable:(BOOL)arg1;
- (void)setSelectionSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setShift:(float)arg1;
- (void)setSmallSize:(BOOL)arg1;
- (void)setStatusBadgeImage:(struct CGImage { }*)arg1;
- (void)setStatusLightImage:(struct CGImage { }*)arg1;
- (void)setStatusLightMode:(unsigned int)arg1;
- (float)shift;
- (BOOL)smallSize;
- (struct CGImage { }*)statusBadgeImage;
- (struct CGImage { }*)statusLightImage;
- (unsigned int)statusLightMode;
- (void)updateStatusLight:(id)arg1;

@end
