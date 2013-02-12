/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAbstractAlternateTracksViewController : MPViewController {
    unsigned int _previousTracks[2];
    unsigned int _selectedTracks[2];
}

- (void)_alternateTypesChangedNotification:(id)arg1;
- (void)addLoadingUI;
- (id)alternateTracks;
- (id)arrayForGroup:(int)arg1;
- (void)dealloc;
- (unsigned int)indexForGroup:(int)arg1;
- (id)init;
- (void)reloadData;
- (void)removeLoadingUI;
- (void)saveChanges;
- (unsigned int)typeForGroup:(int)arg1;

@end
