/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class UIImage;

@interface MPFullScreenTransportControls : MPTransportControls {
    UIImage *_backgroundImage;
    float _requiredFrameSizeWidth;
}

- (void)_layoutVolumeSlider:(id)arg1;
- (id)createVolumeSlider;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)init;
- (void)layoutSubviews;
- (void)reloadForAdditions:(id)arg1 removals:(id)arg2 animate:(BOOL)arg3;
- (void)setVisibleParts:(unsigned int)arg1 animated:(BOOL)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
