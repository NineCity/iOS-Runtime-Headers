/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKHeaderLabelView, GKUITheme, NSString;

@interface GKComposeHeaderView : UIScrollView {
    NSString *_label;
    GKHeaderLabelView *_labelView;
    NSString *_navTitle;
}

@property(retain) GKUITheme * theme;

+ (float)defaultHeight;

- (id)_automationID;
- (BOOL)_canBecomeFirstResponder;
- (void)dealloc;
- (void)handleTouchesEnded;
- (id)labelView;
- (void)layoutSubviews;
- (float)maxLabelX;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (id)navTitle;
- (void)setLabel:(id)arg1;
- (void)setLabelHighlighted:(BOOL)arg1;
- (void)setNavTitle:(id)arg1;
- (void)setTheme:(id)arg1;
- (id)theme;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
