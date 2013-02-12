/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIStatusBar, UIStatusBarCorners;

@interface UIStatusBarWindow : UIWindow {
    UIStatusBarCorners *_bottomCorners;
    BOOL _cornersHidden;
    int _orientation;
    UIStatusBar *_statusBar;
    UIStatusBarCorners *_topCorners;
}

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })statusBarWindowFrame;

- (BOOL)_disableGroupOpacity;
- (BOOL)_disableViewScaling;
- (void)_fadeAnimationStopped:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (BOOL)_isStatusBarWindow;
- (void)_rotate;
- (void)_updateTransformLayerForClassicPresentation;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)orientation;
- (void)setCornersHidden:(BOOL)arg1 animationParameters:(id)arg2;
- (void)setOrientation:(int)arg1 animationParameters:(id)arg2;
- (void)setStatusBar:(id)arg1;
- (void)setTopCornerStyle:(int)arg1 bottomCornerStyle:(int)arg2 animationParameters:(id)arg3;

@end
