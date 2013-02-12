/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSArray, NSHashTable;

@interface NSKeyValueObservationInfo : NSObject {
    unsigned int _cachedHash;
    BOOL _cachedIsShareable;
    NSHashTable *_observables;
    NSArray *_observances;
    int _retainCountMinusOne;
}

- (id)_initWithObservances:(id*)arg1 count:(unsigned int)arg2;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned int)retainCount;

@end
