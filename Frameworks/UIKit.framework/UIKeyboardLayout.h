/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, UITouch;

@interface UIKeyboardLayout : UIView <UIKeyboardLayoutProtocol> {
    UITouch *_activeTouch;
    int _orientation;
    UITouch *_shiftKeyTouch;
    UITouch *_swipeTouch;
    NSMutableArray *_uncommittedTouches;
    int m_orientation;
}

@property(retain) UITouch * activeTouch;
@property int orientation;
@property(retain) UITouch * shiftKeyTouch;
@property(retain) UITouch * swipeTouch;

- (id)activationIndicatorView;
- (id)activeTouch;
- (void)addSwipeRecognizer;
- (id)baseKeyForString:(id)arg1;
- (BOOL)canProduceString:(id)arg1;
- (id)candidateList;
- (void)changeToKeyplane:(id)arg1;
- (void)commitTouchesBeforeTouch:(id)arg1;
- (void)deactivateActiveKeys;
- (void)dealloc;
- (void)didClearInput;
- (BOOL)doesKeyCharging;
- (float)flickDistance;
- (float)hitBuffer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isShiftKeyBeingHeld;
- (BOOL)isShiftKeyPlaneChooser;
- (id)keyplaneForKey:(id)arg1;
- (void)longPressAction;
- (int)orientation;
- (BOOL)performReturnAction;
- (void)phraseBoundaryDidChange;
- (void)restoreDefaultsForAllKeys;
- (void)restoreDefaultsForKey:(id)arg1;
- (void)setAction:(SEL)arg1 forKey:(id)arg2;
- (void)setActiveTouch:(id)arg1;
- (void)setAutoshift:(BOOL)arg1;
- (void)setLabel:(id)arg1 forKey:(id)arg2;
- (void)setLongPressAction:(SEL)arg1 forKey:(id)arg2;
- (void)setOrientation:(int)arg1;
- (void)setShift:(BOOL)arg1;
- (void)setShiftKeyTouch:(id)arg1;
- (void)setSwipeTouch:(id)arg1;
- (void)setTarget:(id)arg1 forKey:(id)arg2;
- (BOOL)shiftKeyRequiresImmediateUpdate;
- (id)shiftKeyTouch;
- (BOOL)shouldShowIndicator;
- (void)showKeyboardType:(int)arg1 withAppearance:(int)arg2;
- (id)simulateTouchForCharacter:(id)arg1 errorVector:(struct CGPoint { float x1; float x2; })arg2 shouldTypeVariants:(BOOL)arg3 baseKeyForVariants:(BOOL)arg4;
- (void)swipeGestureRecognized:(id)arg1;
- (id)swipeTouch;
- (void)touchCancelled:(id)arg1;
- (void)touchDown:(id)arg1;
- (void)touchDragged:(id)arg1;
- (void)touchUp:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updateLocalizedKeys;
- (void)updateReturnKey;
- (BOOL)usesAutoShift;

@end
