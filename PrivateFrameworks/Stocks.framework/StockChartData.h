/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

@class NSArray, NSDate, NSString, NSTimeZone, StockGraphImageSet;

@interface StockChartData : NSObject {
    int chartInterval;
    double expirationTime;
    StockGraphImageSet *graphImageSets[2];
    BOOL hasVolume;
    NSArray *interestingIndexes;
    BOOL isUnavailable;
    int labelAlignments[2];
    NSArray *labelInfoArrays[4];
    NSDate *marketCloseDate;
    NSDate *marketOpenDate;
    NSTimeZone *marketTimeZone;
    struct { double x1; double x2; unsigned long long x3; } *maxValue;
    struct { double x1; double x2; unsigned long long x3; } *minValue;
    unsigned int stockValueCount;
    struct { double x1; double x2; unsigned long long x3; } *stockValues;
    NSString *symbol;
}

@property int chartInterval;
@property double expirationTime;
@property BOOL hasVolume;
@property(retain) NSArray * interestingIndexes;
@property BOOL isUnavailable;
@property(retain) NSDate * marketCloseDate;
@property(retain) NSDate * marketOpenDate;
@property(retain) NSTimeZone * marketTimeZone;
@property struct { double x1; double x2; unsigned long long x3; }* maxValue;
@property struct { double x1; double x2; unsigned long long x3; }* minValue;
@property(readonly) unsigned int stockValueCount;
@property(readonly) struct { double x1; double x2; unsigned long long x3; }* stockValues;
@property(copy) NSString * symbol;

- (void).cxx_destruct;
- (struct { double x1; double x2; unsigned long long x3; }*)allocateStockValuesWithCount:(unsigned int)arg1;
- (int)chartInterval;
- (void)clearAllImageSets;
- (void)dealloc;
- (id)description;
- (double)expirationTime;
- (BOOL)hasVolume;
- (id)imageSetForStockGraphSize:(int)arg1;
- (id)initWithSymbol:(id)arg1 interval:(int)arg2;
- (id)interestingIndexes;
- (BOOL)isUnavailable;
- (int)labelAlignmentForDetailedMode:(BOOL)arg1;
- (id)labelInfoArrayForYAxis:(BOOL)arg1 detailedMode:(BOOL)arg2;
- (id)marketCloseDate;
- (id)marketOpenDate;
- (id)marketTimeZone;
- (struct { double x1; double x2; unsigned long long x3; }*)maxValue;
- (struct { double x1; double x2; unsigned long long x3; }*)minValue;
- (void)setChartInterval:(int)arg1;
- (void)setExpirationTime:(double)arg1;
- (void)setHasVolume:(BOOL)arg1;
- (void)setImageSet:(id)arg1 forStockGraphSize:(int)arg2;
- (void)setInterestingIndexes:(id)arg1;
- (void)setIsUnavailable:(BOOL)arg1;
- (void)setLabelAlignment:(int)arg1 forDetailedMode:(BOOL)arg2;
- (void)setLabelInfoArray:(id)arg1 forYAxis:(BOOL)arg2 detailedMode:(BOOL)arg3;
- (void)setMarketCloseDate:(id)arg1;
- (void)setMarketOpenDate:(id)arg1;
- (void)setMarketTimeZone:(id)arg1;
- (void)setMaxValue:(struct { double x1; double x2; unsigned long long x3; }*)arg1;
- (void)setMinValue:(struct { double x1; double x2; unsigned long long x3; }*)arg1;
- (void)setSymbol:(id)arg1;
- (unsigned int)stockValueCount;
- (struct { double x1; double x2; unsigned long long x3; }*)stockValues;
- (id)symbol;

@end
