/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITabBar;

@interface UITabBarSwappableImageView : UIView {
    id _alternate;
    int _buttonTag;
    int _currentAnimation;
    BOOL _flipped;
    float _scale;
    BOOL _showAlternate;
    UITabBar *_tabBar;
    id _value;
}

- (void)animateImage:(float)arg1 withTabBar:(id)arg2 withTag:(int)arg3;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)dealloc;
- (id)initWithImage:(id)arg1 alternateImage:(id)arg2;
- (void)setCurrentImage;
- (void)showAlternateImage:(BOOL)arg1;

@end
