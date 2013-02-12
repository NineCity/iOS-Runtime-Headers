/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIActivityIndicatorView, UILabel;

@interface MPInlineTransportControls : MPTransportControls {
    UIActivityIndicatorView *_loadingMovieIndicator;
    UILabel *_loadingMovieLabel;
}

@property(readonly) struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } availableProgressControlAreaFrame;

+ (void)_initializeSafeCategory;

- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })availableProgressControlAreaFrame;
- (id)buttonImageForPart:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)pauseButtonImage;
- (id)playButtonImage;
- (void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(BOOL)arg3;
- (void)setDisabledParts:(unsigned int)arg1;

@end
