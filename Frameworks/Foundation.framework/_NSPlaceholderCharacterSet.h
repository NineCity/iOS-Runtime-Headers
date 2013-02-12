/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSCharacterSet;

@interface _NSPlaceholderCharacterSet : NSCharacterSet {
    struct { 
        unsigned int _inverted : 1; 
        unsigned int _builtin : 1; 
        unsigned int _isCF : 1; 
        unsigned int _reserved : 29; 
    } _flags;
    NSCharacterSet *_invertedSet;
    NSCharacterSet *_original;
}

- (void)_expandInverted;
- (struct __CFCharacterSet { }*)_expandedCFCharacterSet;
- (id)autorelease;
- (id)bitmapRepresentation;
- (BOOL)characterIsMember:(unsigned short)arg1;
- (void)dealloc;
- (BOOL)hasMemberInPlane:(unsigned char)arg1;
- (id)initWithSet:(id)arg1 options:(unsigned int)arg2;
- (id)invertedSet;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSupersetOfSet:(id)arg1;
- (BOOL)longCharacterIsMember:(unsigned long)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (oneway void)release;
- (id)replacementObjectForCoder:(id)arg1;
- (id)replacementObjectForKeyedArchiver:(id)arg1;
- (id)retain;
- (unsigned int)retainCount;

@end
