/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@class NSString;

@interface TIWordTokenizer : NSObject {
    struct { 
        unsigned short buffer[64]; 
        struct __CFString {} *theString; 
        unsigned short *directBuffer; 
        struct { 
            int location; 
            int length; 
        } rangeToBuffer; 
        int bufferedRangeStart; 
        int bufferedRangeEnd; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    unsigned int m_bufferOffset;
    } m_inlineBuffer;
    } m_searchRange;
    NSString *m_string;
    } m_tokenRange;
}

- (struct _NSRange { unsigned int x1; unsigned int x2; })advanceToNextToken;
- (id)allTokensForString:(id)arg1;
- (void)dealloc;
- (id)init;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfCurrentToken;
- (void)setString:(id)arg1 withSearchRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;

@end
