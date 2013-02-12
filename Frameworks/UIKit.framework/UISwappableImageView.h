/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIToolbar, _UISwappableImageViewAnimationProxy;

@interface UISwappableImageView : UIView {
    id _alternate;
    int _barButtonItemStyle;
    BOOL _bezel;
    int _bezelStyle;
    UIToolbar *_buttonBar;
    int _buttonTag;
    int _currentAnimation;
    BOOL _didDisableWindowAutorotation;
    SEL _didFinishSelector;
    id _didFinishTarget;
    BOOL _flipped;
    _UISwappableImageViewAnimationProxy *_proxy;
    float _scale;
    BOOL _showAlternate;
    BOOL _updateImage;
    id _value;
}

- (void)_willMoveToWindow:(id)arg1;
- (void)animateImage:(float)arg1 withButtonBar:(id)arg2 withTag:(int)arg3 target:(id)arg4 didFinishSelector:(SEL)arg5;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;
- (id)initWithImage:(id)arg1 alternateImage:(id)arg2 barStyle:(int)arg3 barButtonItemStyle:(int)arg4 tintColor:(id)arg5 bezel:(BOOL)arg6;
- (void)setBezelStyleForBarStyle:(int)arg1 tintColor:(id)arg2;
- (void)setFlipped:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)showAlternateImage:(BOOL)arg1;
- (void)updateImageIfNeeded;

@end
