/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSDate, TSUProgressStage;

@interface TSUProgressContext : NSObject {
    TSUProgressStage *m_currentStage;
    double m_lastProgressReport;
    NSDate *m_lastReportTime;
}

+ (id)_singletonAlloc;
+ (void)addProgressObserver:(id)arg1 selector:(SEL)arg2;
+ (void)advanceProgress:(double)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2;
+ (void)createStageWithSteps:(double)arg1;
+ (double)currentPosition;
+ (void)endStage;
+ (void)nextSubStageWillTakeThisManyOfMySteps:(double)arg1;
+ (double)overallProgress;
+ (void)removeProgressObserver:(id)arg1;
+ (void)reset;
+ (void)setMessage:(id)arg1;
+ (void)setPercentageProgressFromCPProgressContext:(double)arg1;
+ (void)setProgress:(double)arg1;
+ (id)sharedContext;

- (void)_reset;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentStage;
- (void)dealloc;
- (id)init;
- (oneway void)release;
- (void)reportProgress:(double)arg1 overallProgress:(double)arg2;
- (id)retain;
- (unsigned int)retainCount;

@end
