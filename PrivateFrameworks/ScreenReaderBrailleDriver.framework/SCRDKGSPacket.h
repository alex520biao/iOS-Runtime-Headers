/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderBrailleDriver.framework/ScreenReaderBrailleDriver
 */

@class NSData;

@interface SCRDKGSPacket : NSObject {
    unsigned char _command;
    NSData *_data;
    unsigned char _subCommand;
}

@property unsigned char command;
@property(retain) NSData * data;
@property unsigned char subCommand;

- (unsigned char)command;
- (id)data;
- (void)dealloc;
- (void)setCommand:(unsigned char)arg1;
- (void)setData:(id)arg1;
- (void)setSubCommand:(unsigned char)arg1;
- (unsigned char)subCommand;

@end
