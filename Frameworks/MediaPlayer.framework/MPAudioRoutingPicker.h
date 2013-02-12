/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAudioDeviceController, NSArray;

@interface MPAudioRoutingPicker : UIAlertView <MPAudioDeviceControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    MPAudioDeviceController *_audioDeviceController;
    BOOL _ignoringInteractionEvents;
    NSArray *_routes;
}

- (BOOL)_pickRouteAtIndex:(unsigned int)arg1 withPassword:(id)arg2;
- (void)audioDeviceControllerAudioRoutesChanged:(id)arg1;
- (void)dealloc;
- (id)initWithAVPlayer:(id)arg1;
- (BOOL)requiresPortraitOrientation;
- (void)setAVPlayer:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)willMoveToSuperview:(id)arg1;

@end
