/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConstantString : NSSimpleCString {
}

- (const char *)_fastCStringContents:(BOOL)arg1;
- (id)autorelease;
- (const char *)cString;
- (unsigned int)cStringLength;
- (BOOL)canBeConvertedToEncoding:(unsigned int)arg1;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (int)compare:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)fastestEncoding;
- (void)finalize;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)hash;
- (id)initWithCharactersNoCopy:(unsigned short*)arg1 length:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToString:(id)arg1;
- (unsigned int)length;
- (const char *)lossyCString;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;
- (unsigned int)smallestEncoding;

@end
