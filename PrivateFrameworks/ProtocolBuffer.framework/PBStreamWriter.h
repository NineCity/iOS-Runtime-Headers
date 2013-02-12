/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@class NSOutputStream;

@interface PBStreamWriter : PBDataWriter {
    NSOutputStream *_stream;
}

@property(retain) NSOutputStream * stream;

+ (id)writeProtoBuffers:(id)arg1 toFile:(id)arg2;

- (void)dealloc;
- (id)initWithOutputStream:(id)arg1;
- (void)setStream:(id)arg1;
- (id)stream;
- (int)write:(char *)arg1 maxLength:(unsigned int)arg2;

@end
