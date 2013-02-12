/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface TSUNoCopyDictionary : NSMutableDictionary {
    struct __CFDictionary { } *mDictionary;
}

- (id)allKeys;
- (id)allValues;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (void)getObjects:(id*)arg1 andKeys:(id*)arg2;
- (id)init;
- (id)initWithCFDictionary:(struct __CFDictionary { }*)arg1;
- (id)initWithCapacity:(unsigned int)arg1;
- (id)keyEnumerator;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectEnumerator;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
