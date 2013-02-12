/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSMutableString, NSString, UIImage, UIImageView, UIProgressIndicator, UIScrollView, UITextLabel, UIView, UIWebDocumentView;

@interface MPTextView : MPSwipableView {
    UIImage *_albumArtwork;
    UIImageView *_background;
    UIImageView *_faderView;
    UIView *_headerView;
    UIProgressIndicator *_loadingIndicator;
    UITextLabel *_loadingLabel;
    BOOL _needsLayout;
    NSString *_rawText;
    BOOL _scrollIndicatorFlashDisabled;
    UIScrollView *_scrollView;
    NSMutableString *_text;
    UIWebDocumentView *_webView;
}

@property(retain) UIImage * artwork;
@property(retain) UIView * headerView;

- (void)_addLoadingUI;
- (void)_addTextUI;
- (void)_createTextUIIfNeeded;
- (struct CGImage { }*)_newFaderImage:(BOOL)arg1;
- (struct CGImage { }*)_newFaderImageBackgroundWithSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_removeLoadingUI;
- (void)_removeTextUI;
- (void)_updateFaderImage:(BOOL)arg1;
- (void)_updateLoadingUIForWillLoad:(BOOL)arg1;
- (id)artwork;
- (void)dealloc;
- (BOOL)hasText;
- (id)headerView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)movedFromSuperview:(id)arg1;
- (void)movedToSuperview:(id)arg1;
- (void)noteDidSnapshot;
- (void)noteWillSnapshot;
- (void)setArtwork:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setNeedsLayout;
- (void)setScrollIndicatorFlashDisabled:(BOOL)arg1;
- (void)setText:(id)arg1 willLoad:(BOOL)arg2;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;

@end
