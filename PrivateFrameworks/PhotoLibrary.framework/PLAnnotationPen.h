/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSMutableSet, NSSet;

@interface PLAnnotationPen : NSObject {
    id _context;
    SEL _selector;
    NSMutableSet *_set;
    id _target;
}

@property id context;
@property SEL selector;
@property(readonly) NSSet * set;
@property id target;

- (void)addAnnotations:(id)arg1;
- (id)context;
- (void)dealloc;
- (id)description;
- (BOOL)empty;
- (id)init;
- (void)removeAllAnnotations;
- (void)removeAnnotation:(id)arg1;
- (void)removeAnnotations:(id)arg1;
- (SEL)selector;
- (id)set;
- (void)setContext:(id)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
