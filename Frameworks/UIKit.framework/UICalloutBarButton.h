/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSTimer, UITextReplacement;

@interface UICalloutBarButton : UIButton {
    SEL m_action;
    BOOL m_configured;
    float m_contentScale;
    float m_contentWidth;
    int m_flashCount;
    NSTimer *m_flashTimer;
    BOOL m_isText;
    BOOL m_padLeft;
    BOOL m_padRight;
    int m_position;
    BOOL m_single;
    UITextReplacement *m_textReplacement;
    int m_type;
}

@property(readonly) SEL action;
@property(readonly) float contentScale;
@property(readonly) float contentWidth;
@property(retain) UITextReplacement * textReplacement;
@property(readonly) int type;

+ (void)_initializeSafeCategory;
+ (id)buttonWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3 inView:(id)arg4;
+ (id)buttonWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3 inView:(id)arg4;

- (BOOL)_accessibilityEscape;
- (void)_commonSetupWithAction:(SEL)arg1 type:(int)arg2;
- (unsigned long long)accessibilityTraits;
- (SEL)action;
- (void)cancelFlash;
- (void)configureForLeftPosition:(int)arg1;
- (void)configureForMiddlePosition;
- (void)configureForRightPosition:(int)arg1;
- (void)configureForSingle:(int)arg1;
- (void)configureLabel;
- (float)contentScale;
- (float)contentWidth;
- (void)dealloc;
- (void)flash;
- (void)flashCallback:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (void)sendCallback;
- (void)setContentScale:(float)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setTextReplacement:(id)arg1;
- (void)setupWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3;
- (void)setupWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3;
- (id)textReplacement;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)type;

@end
