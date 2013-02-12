/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSString;

@interface VMUSourceInfo : VMUAddressRange <NSCopying> {
    unsigned int _fileOffset;
    unsigned int _lineNumber;
    NSString *_path;
}

+ (id)sourceInfoWithPath:(id)arg1 addressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg2 lineNumber:(unsigned int)arg3 fileOffset:(unsigned int)arg4;

- (struct _VMURange { unsigned long long x1; unsigned long long x2; })addressRange;
- (int)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)fileName;
- (unsigned int)fileOffset;
- (id)initWithPath:(id)arg1 addressRange:(struct _VMURange { unsigned long long x1; unsigned long long x2; })arg2 lineNumber:(unsigned int)arg3 fileOffset:(unsigned int)arg4;
- (BOOL)isEqualToSourceInfo:(id)arg1;
- (unsigned int)lineNumber;
- (id)path;

@end
