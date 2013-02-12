/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSFileHandle;

@interface CoreDAVOctetStreamToFileParser : CoreDAVOctetStreamParser {
    NSFileHandle *_fileHandle;
}

@property(retain) NSFileHandle * fileHandle;

- (void)dealloc;
- (id)fileHandle;
- (id)initWithFileHandle:(id)arg1;
- (BOOL)processData:(id)arg1;
- (void)setFileHandle:(id)arg1;
- (BOOL)task:(id)arg1 receivedData:(id)arg2;

@end
