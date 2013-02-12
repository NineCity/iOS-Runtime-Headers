/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVController, NSString, NSTimer, UIImageView, UILabel;

@interface MPVolumeSlider : UISlider {
    MPAVController *_avController;
    NSTimer *_commitTimer;
    UILabel *_routeNameLabel;
    int _style;
    UIImageView *_thumbImageView;
    UIImageView *_thumbMaskImageView;
    NSString *_volumeAudioCategory;
}

@property(retain) MPAVController * MPAVController;
@property(readonly) int style;
@property(copy) NSString * volumeAudioCategory;

+ (void)_initializeSafeCategory;

- (id)MPAVController;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_availableRoutesDidChangeNotification:(id)arg1;
- (void)_commitVolumeChange;
- (void)_destinationDidChangeNotification:(id)arg1;
- (void)_endTracking;
- (void)_layoutForAvailableRoutes;
- (void)_layoutMaskForThumb;
- (id)_maxTrackImageForStyle:(int)arg1;
- (id)_minTrackImageForStyle:(int)arg1;
- (void)_routeNameLabelAnimationDidEnd;
- (void)_setValue:(float)arg1 andSendAction:(BOOL)arg2;
- (void)_systemMuteDidChange:(id)arg1;
- (void)_systemVolumeDidChange:(id)arg1;
- (id)_thumbImageForStyle:(int)arg1;
- (void)_updateVolumeFromAVController;
- (void)_volumeDidChange:(id)arg1;
- (id)accessibilityLabel;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (id)createThumbView;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (float)maximumValue;
- (float)minimumValue;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)setAlpha:(float)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setMPAVController:(id)arg1;
- (void)setVolumeAudioCategory:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)style;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })thumbRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 trackRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 value:(float)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })trackRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)volumeAudioCategory;

@end
