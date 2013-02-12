/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface _PFArray : NSArray {
    struct _PFArrayFlags { 
        unsigned int shouldRetain : 1; 
        unsigned int shouldRelease : 1; 
        unsigned int useExtendedRelease : 1; 
        unsigned int freeBackingArray : 1; 
        unsigned int copyBackingArray : 1; 
        unsigned int managedObjects : 1; 
        unsigned int _RESERVED : 27; 
    id *_array;
    int _cd_rc;
    unsigned int _count;
    } _flags;
}

+ (BOOL)accessInstanceVariablesDirectly;
+ (void)initialize;

- (unsigned int)_flags;
- (id*)_objectsPointer;
- (void)_setShouldRelease:(BOOL)arg1;
- (void)_setShouldUseExtendedRelease:(BOOL)arg1;
- (id)arrayFromObjectIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (void)getObjects:(id*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)getObjects:(id*)arg1;
- (unsigned int)indexOfManagedObjectForObjectID:(id)arg1;
- (unsigned int)indexOfObject:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)indexOfObject:(id)arg1;
- (unsigned int)indexOfObjectIdenticalTo:(id)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)indexOfObjectIdenticalTo:(id)arg1;
- (id)initWithObjects:(const id*)arg1 count:(unsigned int)arg2;
- (id)initWithObjects:(id*)arg1 count:(unsigned int)arg2 andFlags:(unsigned int)arg3;
- (id)managedObjectIDAtIndex:(unsigned int)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)newArrayFromObjectIDs;
- (id)objectAtIndex:(unsigned int)arg1;
- (void)release;
- (id)retain;
- (unsigned int)retainCount;
- (id)subarrayWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;

@end
