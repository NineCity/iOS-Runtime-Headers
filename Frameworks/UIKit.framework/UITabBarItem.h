/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSSet, NSString, UIImage, UIView;

@interface UITabBarItem : UIBarItem {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct { 
        unsigned int enabled : 1; 
        unsigned int style : 3; 
        unsigned int isSystemItem : 1; 
        unsigned int systemItem : 7; 
        unsigned int viewIsCustom : 1; 
        unsigned int animatedBadge : 1; 
        unsigned int customSelectedImage : 1; 
        unsigned int customUnselectedImage : 1; 
    SEL _action;
    NSString *_badgeValue;
    UIImage *_image;
    } _imageInsets;
    NSSet *_possibleTitles;
    UIImage *_selectedImage;
    } _tabBarItemFlags;
    int _tag;
    id _target;
    NSString *_title;
    UIImage *_unselectedImage;
    UIView *_view;
}

@property SEL action;
@property BOOL animatedBadge;
@property(copy) NSString * badgeValue;
@property(retain) UIImage * selectedImage;
@property int tag;
@property id target;
@property(retain) UIImage * unselectedImage;
@property(retain) UIView * view;
@property BOOL viewIsCustom;

+ (void)_initializeSafeCategory;

- (id)_createViewForTabBar:(id)arg1 showingBadge:(BOOL)arg2;
- (id)_internalTemplateImage;
- (id)_internalTitle;
- (void)_setInternalTemplateImage:(id)arg1;
- (void)_setInternalTitle:(id)arg1;
- (void)_updateView;
- (SEL)action;
- (BOOL)animatedBadge;
- (id)badgeValue;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })imageInsets;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTabBarSystemItem:(int)arg1 tag:(int)arg2;
- (id)initWithTitle:(id)arg1 image:(id)arg2 tag:(int)arg3;
- (BOOL)isEnabled;
- (BOOL)isSystemItem;
- (id)nextResponder;
- (id)selectedImage;
- (void)setAction:(SEL)arg1;
- (void)setAnimatedBadge:(BOOL)arg1;
- (void)setBadgeValue:(id)arg1 animated:(BOOL)arg2 blink:(BOOL)arg3;
- (void)setBadgeValue:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setImageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setSelectedImage:(id)arg1;
- (void)setTag:(int)arg1;
- (void)setTarget:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUnselectedImage:(id)arg1;
- (void)setView:(id)arg1;
- (void)setViewIsCustom:(BOOL)arg1;
- (int)systemItem;
- (int)tag;
- (id)target;
- (id)title;
- (id)unselectedImage;
- (id)view;
- (BOOL)viewIsCustom;

@end
