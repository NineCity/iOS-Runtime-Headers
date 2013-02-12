/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage;

@interface GKBackgroundDrawDescriptor : NSObject {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    UIImage *_borderImage;
    } _borderInsets;
    BOOL _drawOutline;
    int _sectionLocation;
}

@property(retain) UIImage * borderImage;
@property struct UIEdgeInsets { float top; float left; float bottom; float right; } borderInsets;
@property BOOL drawOutline;
@property int sectionLocation;

- (id)borderImage;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })borderInsets;
- (void)dealloc;
- (id)description;
- (BOOL)drawOutline;
- (int)sectionLocation;
- (void)setBorderImage:(id)arg1;
- (void)setBorderInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setDrawOutline:(BOOL)arg1;
- (void)setSectionLocation:(int)arg1;

@end
