/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSArray, NSMutableArray, NSTimer;

@interface MKPlaceHeaderBackgroundView_Slideshow : MKPlaceHeaderBackgroundView {
    struct { 
        unsigned int hasMultiplePhotos; 
        unsigned int isFirstImageRequested; 
        unsigned int isFirstImagePreloaded; 
    NSMutableArray *_images;
    unsigned long long _iteration;
    long long _nextImageIndex;
    } _slideShowFlags;
    NSArray *_slides;
    NSTimer *_timer;
}

+ (bool)canDisplayImagesForMapItem:(id)arg1;

- (void).cxx_destruct;
- (void)addSlideShowImage:(id)arg1;
- (void)clearSlideShowImages;
- (id)currentSlide;
- (void)dealloc;
- (void)loadBackgroundContent;
- (void)loadBusinessImages:(unsigned long long)arg1;
- (id)nextSlide;
- (void)pause;
- (void)pauseBackgroundAnimation;
- (void)preloadBackgroundContent;
- (void)prepareForPresentation;
- (void)present;
- (void)reset;
- (void)resume;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)showNextImage;
- (void)startBackgroundAnimation;

@end