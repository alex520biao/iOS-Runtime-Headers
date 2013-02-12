/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class NSArray, NSDictionary, NSString;

@interface BKSApplicationLaunchSettings : NSObject <NSCopying, BKSXPCCoding> {
    NSArray *_arguments;
    BOOL _checkForLeaks;
    BOOL _disableASLR;
    NSDictionary *_environment;
    NSString *_standardError;
    NSString *_standardOut;
    BOOL _waitForDebugger;
}

@property(retain) NSArray * arguments;
@property BOOL checkForLeaks;
@property BOOL disableASLR;
@property(retain) NSDictionary * environment;
@property(copy) NSString * standardError;
@property(copy) NSString * standardOut;
@property BOOL waitForDebugger;

- (id)arguments;
- (BOOL)checkForLeaks;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)disableASLR;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)environment;
- (id)initWithSettings:(id)arg1 zone:(struct _NSZone { }*)arg2;
- (id)initWithXPCDictionary:(id)arg1;
- (void)setArguments:(id)arg1;
- (void)setCheckForLeaks:(BOOL)arg1;
- (void)setDisableASLR:(BOOL)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setStandardError:(id)arg1;
- (void)setStandardOut:(id)arg1;
- (void)setWaitForDebugger:(BOOL)arg1;
- (id)standardError;
- (id)standardOut;
- (BOOL)waitForDebugger;

@end
