/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIStatusBarItem, UIStatusBarLayoutManager;



@interface UIStatusBarItemView : UIView 
{
    UIStatusBarItem *_item;
    NSInteger _foregroundStyle;
    BOOL _visible;
    BOOL _allowsUpdates;
    UIStatusBarLayoutManager *_layoutManager;
    float _currentOverlap;
    struct CGContext { } *_imageContext;
    float _imageContextScale;
}

@property BOOL allowsUpdates;
@property(getter=isVisible) BOOL visible;
@property(readonly) NSInteger foregroundStyle;
@property UIStatusBarLayoutManager *layoutManager;
@property(readonly) UIStatusBarItem *item;

+ (id)createViewForItem:(id)arg1 withData:(struct { BOOL x1[22]; BOOL x2[64]; NSInteger x3; NSInteger x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[100]; BOOL x8[1024]; NSUInteger x9; NSInteger x10; NSInteger x11; NSUInteger x12; NSInteger x13; NSUInteger x14; BOOL x15[150]; NSInteger x16; NSInteger x17; unsigned int x18 : 1; BOOL x19[256]; unsigned int x20 : 1; BOOL x21[100]; unsigned int x22 : 1; unsigned int x23 : 1; }*)arg2 actions:(NSInteger)arg3 foregroundStyle:(NSInteger)arg4;
+ (id)imageNamed:(id)arg1 forForegroundStyle:(NSInteger)arg2;
+ (void)_initializeSafeCategory;

- (id)initWithItem:(id)arg1 data:(struct { BOOL x1[22]; BOOL x2[64]; NSInteger x3; NSInteger x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[100]; BOOL x8[1024]; NSUInteger x9; NSInteger x10; NSInteger x11; NSUInteger x12; NSInteger x13; NSUInteger x14; BOOL x15[150]; NSInteger x16; NSInteger x17; unsigned int x18 : 1; BOOL x19[256]; unsigned int x20 : 1; BOOL x21[100]; unsigned int x22 : 1; unsigned int x23 : 1; }*)arg2 actions:(NSInteger)arg3 style:(NSInteger)arg4;
- (void)setVisible:(BOOL)arg1 frame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 duration:(double)arg3;
- (void)setCurrentOverlap:(float)arg1;
- (float)currentOverlap;
- (float)currentLeftOverlap;
- (float)currentRightOverlap;
- (float)setStatusBarData:(struct { BOOL x1[22]; BOOL x2[64]; NSInteger x3; NSInteger x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[100]; BOOL x8[1024]; NSUInteger x9; NSInteger x10; NSInteger x11; NSUInteger x12; NSInteger x13; NSUInteger x14; BOOL x15[150]; NSInteger x16; NSInteger x17; unsigned int x18 : 1; BOOL x19[256]; unsigned int x20 : 1; BOOL x21[100]; unsigned int x22 : 1; unsigned int x23 : 1; }*)arg1 actions:(NSInteger)arg2;
- (float)updateContentsAndWidth;
- (void)drawText:(id)arg1 forStyle:(NSInteger)arg2;
- (void)drawText:(id)arg1 forStyle:(NSInteger)arg2 forWidth:(float)arg3 lineBreakMode:(NSInteger)arg4 letterSpacing:(float)arg5;
- (BOOL)usesSmallerTextFont;
- (id)textFont;
- (id)textColorForStyle:(NSInteger)arg1;
- (float)standardPadding;
- (float)extraLeftPadding;
- (float)extraRightPadding;
- (float)maximumOverlap;
- (BOOL)updateForNewData:(struct { BOOL x1[22]; BOOL x2[64]; NSInteger x3; NSInteger x4; BOOL x5[100]; BOOL x6[100]; BOOL x7[100]; BOOL x8[1024]; NSUInteger x9; NSInteger x10; NSInteger x11; NSUInteger x12; NSInteger x13; NSUInteger x14; BOOL x15[150]; NSInteger x16; NSInteger x17; unsigned int x18 : 1; BOOL x19[256]; unsigned int x20 : 1; BOOL x21[100]; unsigned int x22 : 1; unsigned int x23 : 1; }*)arg1 actions:(NSInteger)arg2;
- (BOOL)animatesDataChange;
- (BOOL)animatesFrameChange;
- (void)performPendedActions;
- (void)beginImageContextWithMinimumWidth:(float)arg1;
- (id)imageFromImageContextClippedToWidth:(float)arg1;
- (void)endImageContext;
- (BOOL)allowsUpdates;
- (void)setAllowsUpdates:(BOOL)arg1;
- (id)contentsImageForStyle:(NSInteger)arg1;
- (NSInteger)foregroundStyle;
- (BOOL)isVisible;
- (id)item;
- (void)setLayoutManager:(id)arg1;
- (void)setVisible:(BOOL)arg1;
- (id)layoutManager;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)accessibilityHint;

@end