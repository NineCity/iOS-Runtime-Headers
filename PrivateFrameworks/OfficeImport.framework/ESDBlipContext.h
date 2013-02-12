/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface ESDBlipContext : NSObject <OCDDelayedMediaContext> {
    unsigned int mByteCount;
    unsigned int mStartOffset;
    struct SsrwOOStream { int (**x1)(); } *mStream;
    unsigned int mStreamID;
}

- (struct SsrwOOStream { int (**x1)(); }*)stream;
- (id)initWithOffset:(unsigned int)arg1 byteCount:(unsigned int)arg2 stream:(struct SsrwOOStream { int (**x1)(); }*)arg3 streamID:(unsigned int)arg4;
- (bool)loadDelayedNode:(id)arg1;
- (bool)saveDelayedMedia:(id)arg1 toFile:(id)arg2;

@end
