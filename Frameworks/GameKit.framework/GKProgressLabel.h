/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSString, UIActivityIndicatorView, UILabel;

@interface GKProgressLabel : UIView {
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_label;
    BOOL _loading;
    NSString *_text;
}

@property(copy) NSString * text;

- (id)_loadingString;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setLoading:(BOOL)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
