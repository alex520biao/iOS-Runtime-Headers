/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class GraphRenderOperation, LineGraphView, NSArray, NSMutableArray, StockChartData, UIView, UIView<StockGraphViewContainer>;

@interface StockGraphView : UIView <GraphRenderOperationDelegate> {
    StockChartData *_chartData;
    UIView<StockGraphViewContainer> *_chartViewDelegate;
    unsigned int _dataCount;
    unsigned int _dataSize;
    BOOL _detailedMode;
    NSArray *_dottedLinePositions;
    BOOL _isRendered;
    NSMutableArray *_linePointCounts;
    LineGraphView *_lineView;
    float _lineWidth;
    unsigned long long _maxVolume;
    struct CGPoint { float x1; float x2; } *_points;
    GraphRenderOperation *_renderOperation;
    BOOL _showingVolume;
    int _valueCount;
    int _valueIndex;
    struct CGPoint { float x1; float x2; } *_values;
    float _volumeBarWidth;
    struct { float x1; unsigned long long x2; } *_volumeBars;
    BOOL _volumeCollapsed;
    unsigned int _volumeCount;
    unsigned int _volumeSize;
    UIView *_volumeView;
}

@property UIView<StockGraphViewContainer> * chartViewDelegate;
@property BOOL detailedMode;
@property(setter=setDottedLinePositionsWithLabelInfo:,retain) NSArray * dottedLinePositions;
@property(readonly) BOOL isRendered;

+ (id)SelectedLineColor;

- (void).cxx_destruct;
- (void)_finishCurrentLine;
- (void)_layoutSubviews;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_lineViewFrameForBoundsSize:(struct CGSize { float x1; float x2; })arg1;
- (unsigned long long)_normalizedAccumulatedVolumeInDataRange:(struct CGPoint { float x1; float x2; })arg1;
- (float)_priceAtTime:(double)arg1 dataPosition:(double*)arg2;
- (void)_processGraphDataForWidth:(float)arg1;
- (double)_timeAtPosition:(double)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_trueGraphPointsRegion;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_volumeViewFrameForBoundsSize:(struct CGSize { float x1; float x2; })arg1;
- (void)animateSetShowingVolume:(BOOL)arg1;
- (void)cancelRenderOperation;
- (id)chartViewDelegate;
- (void)clearData;
- (void)clearPaths;
- (void)dealloc;
- (BOOL)detailedMode;
- (id)dottedLinePositions;
- (void)graphRenderOperationDidFinish:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isRendered;
- (void)loadStockChartData:(id)arg1;
- (struct { double x1; double x2; unsigned long long x3; })plottedPointNearestToPoint:(struct CGPoint { float x1; float x2; }*)arg1;
- (void)prepareToAnimateSetShowingVolume:(BOOL)arg1;
- (void)readyForDisplayFromChartData;
- (void)recomputePathsAndRenderIfNeeded;
- (void)resizeSelectedLineClipViewWithLeftX:(float)arg1 rightX:(float)arg2;
- (struct CGPoint { float x1; float x2; })rightmostPlottedPoint;
- (void)setChartViewDelegate:(id)arg1;
- (void)setDetailedMode:(BOOL)arg1;
- (void)setDottedLinePositionsWithLabelInfo:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setShowingSelectedLine:(BOOL)arg1;
- (void)setVolumeCollapsed:(BOOL)arg1;
- (BOOL)showingVolume;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })volumeBarRectNearestToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)volumeDidAnimate;

@end
