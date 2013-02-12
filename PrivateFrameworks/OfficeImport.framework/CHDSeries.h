/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CHDChart, CHDChartType, CHDData, CHDDataLabel, CHDDataValue, CHDErrorBar, CHDFormula, EDCollection, EDKeyedCollection, OADGraphicProperties;

@interface CHDSeries : NSObject <EDKeyedObject> {
    boolmDateTimeFormattingFlag;
    boolmHiddenFlag;
    CHDData *mCategoryData;
    CHDChart *mChart;
    CHDChartType *mChartType;
    EDKeyedCollection *mDataValuePropertiesCollection;
    CHDDataLabel *mDefaultDataLabel;
    CHDErrorBar *mErrorBarX;
    CHDErrorBar *mErrorBarY;
    OADGraphicProperties *mGraphicProperties;
    CHDDataValue *mLastCachedName;
    CHDFormula *mName;
    int mOrder;
    int mStyleIndex;
    EDCollection *mTrendlinesCollection;
    CHDData *mValueData;
}

+ (id)seriesWithChart:(id)arg1;

- (unsigned int)categoryCount;
- (id)categoryData;
- (id)chart;
- (id)chartType;
- (void)clearBackPointers;
- (id)dataValuePropertiesCollection;
- (void)dealloc;
- (id)defaultDataLabel;
- (id)defaultSeriesNameForIndex:(int)arg1;
- (id)errorBarXAxis;
- (id)errorBarYAxis;
- (id)graphicProperties;
- (bool)hasErrorBars;
- (bool)hasTrendlines;
- (id)initWithChart:(id)arg1;
- (bool)isDateTimeFormattingFlag;
- (bool)isEmpty;
- (bool)isHidden;
- (int)key;
- (id)lastCachedName;
- (id)name;
- (int)order;
- (void)setCategoryData:(id)arg1;
- (void)setChartType:(id)arg1;
- (void)setDataValuePropertiesCollection:(id)arg1;
- (void)setDateTimeFormattingFlag:(bool)arg1;
- (void)setDefaultDataLabel:(id)arg1;
- (void)setErrorBar:(id)arg1;
- (void)setErrorBarXAxis:(id)arg1;
- (void)setErrorBarYAxis:(id)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setHiddenFlag:(bool)arg1;
- (void)setLastCachedName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOrder:(int)arg1;
- (void)setStyleIndex:(int)arg1;
- (void)setTrendlineCollection:(id)arg1;
- (void)setValueData:(id)arg1;
- (id)shallowCopy;
- (int)styleIndex;
- (id)trendlineCollection;
- (id)valueData;

@end
