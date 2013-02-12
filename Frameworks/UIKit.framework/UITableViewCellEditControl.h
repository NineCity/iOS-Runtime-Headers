/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITableViewCell;

@interface UITableViewCellEditControl : UIControl {
    unsigned int _rotated : 1;
    unsigned int _rotating : 1;
    unsigned int _hiding : 1;
    unsigned int _reserved : 27;
    unsigned int _style : 2;
    UITableViewCell *_cell;
}

@property(getter=isHiding) BOOL hiding;
@property(getter=isRotated) BOOL rotated;

+ (id)_deleteImage;
+ (id)_deleteImageBackground;
+ (void)_initializeSafeCategory;
+ (id)_insertImage;
+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_minusRect;
+ (id)_multiSelectHighlightedImage;
+ (id)_multiSelectNotSelectedImage;
+ (id)_multiSelectSelectedImage;
+ (struct CGSize { float x1; float x2; })defaultSize;

- (id)_currentImage;
- (id)_minusView;
- (void)_multiselectColorChanged;
- (void)_toggleRotate;
- (void)_toggleRotateAnimationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)_updateImageView;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)initWithTableViewCell:(id)arg1 editingStyle:(int)arg2;
- (BOOL)isAccessibilityElement;
- (BOOL)isHiding;
- (BOOL)isRotated;
- (BOOL)isRotating;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHiding:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setRotated:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setRotated:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;

@end
