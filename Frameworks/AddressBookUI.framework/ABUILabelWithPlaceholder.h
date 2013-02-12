/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString, UIColor, UIFont, UILabel;

@interface ABUILabelWithPlaceholder : UIView {
    NSString *_actualText;
    UIColor *_actualTextColor;
    BOOL _isPlaceholderActive;
    UILabel *_label;
    NSString *_placeholder;
}

@property UIFont * font;
@property UIColor * highlightedTextColor;
@property(copy) NSString * placeholder;
@property UIColor * shadowColor;
@property struct CGSize { float width; float height; } shadowOffset;
@property(copy) NSString * text;
@property(retain) UIColor * textColor;

+ (void)_initializeSafeCategory;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_labelFrameForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_setActualText:(id)arg1;
- (void)_setActualTextColor:(id)arg1;
- (id)accessibilityLabel;
- (void)dealloc;
- (id)font;
- (id)highlightedTextColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAccessibilityElement;
- (id)label;
- (float)labelLeftEdgeInset;
- (void)layoutSubviews;
- (id)placeholder;
- (void)setFont:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlightedTextColor:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)setText:(id)arg1;
- (void)setTextColor:(id)arg1;
- (id)shadowColor;
- (struct CGSize { float x1; float x2; })shadowOffset;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)sizeToFit;
- (id)text;
- (id)textColor;

@end
