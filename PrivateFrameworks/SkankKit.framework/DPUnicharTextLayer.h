/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

@interface DPUnicharTextLayer : SKLayer {
    struct CGFont { } *_font;
    struct CGColor { } *_fontColor;
    int _fontSize;
    unsigned long _numUnichars;
    unsigned short *_unichars;
}

- (void)dealloc;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)init;
- (void)setFont:(id)arg1;
- (void)setFontColor:(struct CGColor { }*)arg1;
- (void)setFontColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (void)setFontSize:(int)arg1;
- (void)setUnichars:(unsigned short*)arg1 count:(unsigned long)arg2;

@end
