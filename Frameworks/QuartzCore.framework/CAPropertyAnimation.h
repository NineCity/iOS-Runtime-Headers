/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CAValueFunction, NSString;

@interface CAPropertyAnimation : CAAnimation {
}

@property(getter=isAdditive) BOOL additive;
@property(getter=isCumulative) BOOL cumulative;
@property(copy) NSString * keyPath;
@property(retain) CAValueFunction * valueFunction;

+ (id)animationWithKeyPath:(id)arg1;

- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (BOOL)_setCARenderAnimation:(struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Timing {} *x4; struct Vector {} *x5; void *x6; unsigned int x7; unsigned int x8; }*)arg1 layer:(id)arg2;
- (BOOL)additive;
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;
- (BOOL)cumulative;
- (BOOL)isAdditive;
- (BOOL)isCumulative;
- (id)keyPath;
- (void)setAdditive:(BOOL)arg1;
- (void)setCumulative:(BOOL)arg1;
- (void)setKeyPath:(id)arg1;
- (void)setValueFunction:(id)arg1;
- (id)valueFunction;

@end
