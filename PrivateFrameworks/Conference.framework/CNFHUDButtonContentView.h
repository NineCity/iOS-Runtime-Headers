/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class UIImageView, UILabel;

@interface CNFHUDButtonContentView : UIView {
    UIImageView *_imageView;
    int _orientation;
    UILabel *_titleLabel;
}

@property(retain) UIImageView * imageView;
@property int orientation;
@property(retain) UILabel * titleLabel;

- (void)dealloc;
- (id)imageView;
- (id)initWithTitle:(id)arg1 image:(id)arg2;
- (void)layoutSubviews;
- (int)orientation;
- (void)setImageView:(id)arg1;
- (void)setOrientation:(int)arg1;
- (void)setTitleLabel:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)titleLabel;

@end
