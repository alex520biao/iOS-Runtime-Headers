/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetTrack, AVWeakReference, NSDictionary;

@interface AVMediaSelectionTrackOption : AVMediaSelectionOption {
    NSDictionary *_dictionary;
    BOOL _displaysNonForcedSubtitles;
    id _groupID;
    AVAssetTrack *_track;
    AVWeakReference *_weakReferenceToGroup;
}

- (id)_groupID;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (void)dealloc;
- (id)dictionary;
- (BOOL)displaysNonForcedSubtitles;
- (id)group;
- (BOOL)hasMediaCharacteristic:(id)arg1;
- (unsigned int)hash;
- (id)initWithAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPlayable;
- (id)locale;
- (id)mediaSubTypes;
- (id)mediaType;
- (id)metadataForFormat:(id)arg1;
- (id)track;
- (int)trackID;

@end
