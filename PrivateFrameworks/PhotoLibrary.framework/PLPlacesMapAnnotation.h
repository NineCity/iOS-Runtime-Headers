/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class MLAlbum, NSString;



@interface PLPlacesMapAnnotation : NSObject <MKAnnotation>
{
    struct { 
        double latitude; 
        double longitude; 
    } _coordinate;
    NSString *_title;
    NSString *_subtitle;
    id _context;
    MLAlbum *_photoAlbum;
    struct { 
        double latitude; 
        double longitude; 
    } _animationOrigin;
    struct { 
        double latitude; 
        double longitude; 
    } _animationDestination;
    unsigned int _animationOriginSet : 1;
    unsigned int _animationDestinationSet : 1;
    unsigned int _isAnimationOnlyAnnotation : 1;
}

@property ? coordinate;
@property(retain) id context;


- (void)setSubtitle:(id)arg1;
- (id)subtitle;
- (void)setContext:(id)arg1;
- (id)context;
- (id)title;
- (BOOL)isEqual:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (struct { double x1; double x2; })coordinate;
- (id)initWithLongitude:(double)arg1 latitude:(double)arg2 title:(id)arg3 subtitle:(id)arg4 photoAlbum:(id)arg5;
- (id)initAnimationOnlyAnnotationWithLongitude:(double)arg1 latitude:(double)arg2;
- (id)photoAlbum;
- (void)updateToTitle:(id)arg1 subtitle:(id)arg2 album:(id)arg3;
- (void)updateCoordinate:(struct { double x1; double x2; })arg1;
- (void)resetAfterMapChange;
- (void)resetAfterMapChangeWhenVisible;
- (BOOL)isAnimationOnlyAnnotation;
- (BOOL)hasAnimationOrigin;
- (struct { double x1; double x2; })animationOrigin;
- (void)setAnimationOrigin:(struct { double x1; double x2; })arg1;
- (BOOL)hasAnimationDestination;
- (struct { double x1; double x2; })animationDestination;
- (void)setAnimationDestination:(struct { double x1; double x2; })arg1;
- (void)clearAnimationInformation;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;

@end