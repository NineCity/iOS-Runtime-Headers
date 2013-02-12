/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray;

@interface UITapGestureRecognizer : UIGestureRecognizer {
    struct CGPoint { 
        float x; 
        float y; 
    unsigned int _delaysRecognitionForGreaterTapCounts;
    id _imp;
    } _locationInView;
}

@property(readonly) struct CGPoint { float x; float y; } centroid;
@property(readonly) struct CGPoint { float x; float y; } location;
@property unsigned int numberOfTapsRequired;
@property unsigned int numberOfTouchesRequired;
@property(readonly) NSArray * touches;

+ (void)addTapGestureRecognizerToView:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3 tapCount:(unsigned int)arg4 touchCount:(unsigned int)arg5;
+ (void)addTapGestureRecognizerToView:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3 tapCount:(unsigned int)arg4;
+ (void)addTapGestureRecognizerToView:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3;

- (void)_appendSubclassDescription:(id)arg1;
- (BOOL)_delaysRecognitionForGreaterTapCounts;
- (void)_resetGestureRecognizer;
- (void)_setDelaysRecognitionForGreaterTapCounts:(BOOL)arg1;
- (BOOL)_shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (float)allowableMovement;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (struct CGPoint { float x1; float x2; })centroid;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { float x1; float x2; })location;
- (struct CGPoint { float x1; float x2; })locationInView:(id)arg1;
- (struct CGPoint { float x1; float x2; })locationOfTouch:(unsigned int)arg1 inView:(id)arg2;
- (double)maximumIntervalBetweenSuccessiveTaps;
- (double)maximumSingleTapDuration;
- (unsigned int)numberOfTapsRequired;
- (unsigned int)numberOfTouches;
- (unsigned int)numberOfTouchesRequired;
- (void)setAllowableMovement:(float)arg1;
- (void)setMaximumIntervalBetweenSuccessiveTaps:(double)arg1;
- (void)setMaximumSingleTapDuration:(double)arg1;
- (void)setNumberOfTapsRequired:(unsigned int)arg1;
- (void)setNumberOfTouchesRequired:(unsigned int)arg1;
- (BOOL)tapIsPossibleForTapRecognizer:(id)arg1;
- (void)tapRecognizerFailedToRecognizeTap:(id)arg1;
- (void)tapRecognizerRecognizedTap:(id)arg1;
- (id)touches;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
