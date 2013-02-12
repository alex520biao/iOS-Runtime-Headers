/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@class NSData, NSDictionary, NSMutableDictionary, NSString;

@interface VCCallInfo : NSObject {
    unsigned long auNumber;
    int callID;
    int cellTech;
    NSData *connectionData;
    double firstDegradedMeasure;
    NSString *hardwareVersion;
    BOOL is4x;
    BOOL isIOS;
    BOOL isVideoQualityDegraded;
    double lastBadVideoQualityTime;
    double lastGoodVideoQualityTime;
    double lastVideoQualityDegradedSwitchTime;
    unsigned long maxBandwidth;
    NSString *osVersion;
    NSString *participantID;
    NSData *relayConnectionData;
    NSDictionary *relayRequest;
    NSMutableDictionary *relayRequestResponse;
    NSDictionary *relayUpdate;
    NSString *sdp;
    BOOL supportsDynamicMaxBitrate;
    BOOL useNewPLCalc;
    BOOL usesInitialFECImplementation;
    double videoDegradedThreshold;
    BOOL videoIsPaused;
    unsigned long visibleRectCropping;
}

@property unsigned long auNumber;
@property int callID;
@property int cellTech;
@property(retain) NSData * connectionData;
@property(copy) NSString * hardwareVersion;
@property(readonly) BOOL isIOS;
@property BOOL isVideoQualityDegraded;
@property unsigned long maxBandwidth;
@property(copy) NSString * osVersion;
@property(copy) NSString * participantID;
@property(retain) NSData * relayConnectionData;
@property(retain) NSDictionary * relayRequest;
@property(retain) NSMutableDictionary * relayRequestResponse;
@property(retain) NSDictionary * relayUpdate;
@property(readonly) BOOL requiresImplicitFeatureString;
@property(retain) NSString * sdp;
@property BOOL supportsDynamicMaxBitrate;
@property(readonly) BOOL useNewPLCalc;
@property(readonly) BOOL usesInitialFECImplementation;
@property BOOL videoIsPaused;
@property unsigned long visibleRectCropping;

- (unsigned long)auNumber;
- (struct VoiceIOFarEndVersionInfo { unsigned char x1[64]; unsigned char x2[64]; unsigned int x3; })audioVersionInfo:(BOOL)arg1;
- (int)callID;
- (int)cellTech;
- (id)connectionData;
- (void)dealloc;
- (id)hardwareVersion;
- (id)init;
- (BOOL)isIOS;
- (BOOL)isVideoQualityDegraded;
- (unsigned long)maxBandwidth;
- (id)osVersion;
- (id)participantID;
- (id)relayConnectionData;
- (id)relayRequest;
- (id)relayRequestResponse;
- (id)relayUpdate;
- (BOOL)requiresImplicitFeatureString;
- (id)sdp;
- (void)setAuNumber:(unsigned long)arg1;
- (void)setCallID:(int)arg1;
- (void)setCellTech:(int)arg1;
- (void)setConnectionData:(id)arg1;
- (void)setHardwareVersion:(id)arg1;
- (void)setIsVideoQualityDegraded:(BOOL)arg1;
- (void)setMaxBandwidth:(unsigned long)arg1;
- (void)setOsVersion:(id)arg1;
- (void)setParticipantID:(id)arg1;
- (void)setRelayConnectionData:(id)arg1;
- (void)setRelayRequest:(id)arg1;
- (void)setRelayRequestResponse:(id)arg1;
- (void)setRelayUpdate:(id)arg1;
- (void)setSdp:(id)arg1;
- (void)setSupportsDynamicMaxBitrate:(BOOL)arg1;
- (void)setUserAgent:(id)arg1;
- (void)setVideoIsPaused:(BOOL)arg1;
- (void)setVisibleRectCropping:(unsigned long)arg1;
- (BOOL)supportsDynamicMaxBitrate;
- (BOOL)supportsSpecialAACBundle;
- (BOOL)updateWithCurrentFramerate:(double)arg1 bitrate:(double)arg2 packetLossRate:(float)arg3 time:(double)arg4;
- (BOOL)useNewPLCalc;
- (BOOL)usesInitialFECImplementation;
- (BOOL)videoIsPaused;
- (unsigned long)visibleRectCropping;

@end
