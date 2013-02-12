/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIButton, UIKeyboardEmojiCategoriesControl, UIKeyboardEmojiCategoryController, UIKeyboardEmojiFactory, UIKeyboardEmojiRecentsController, UIKeyboardEmojiScrollView;

@interface UIKeyboardLayoutEmoji : UIKeyboardLayout <UIKeyboardEmojiController> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    UIKeyboardEmojiCategoriesControl *_categoriesView;
    UIKeyboardEmojiCategoryController *_categoryController;
    } _categoryFrame;
    UIButton *_deleteButton;
    } _deleteFrame;
    UIKeyboardEmojiFactory *_emojiFactory;
    UIKeyboardEmojiScrollView *_emojiView;
    UIButton *_globeButton;
    } _globeFrame;
    UIKeyboardEmojiRecentsController *_recentsController;
}

@property(readonly) struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } categoryFrame;
@property(readonly) struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } deleteFrame;
@property(readonly) struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } globeFrame;

+ (void)_initializeSafeCategory;
+ (void)emojiKeyboardPreferencesChanged;
+ (id)emojiLayout;
+ (BOOL)isLandscape;
+ (id)localizedStringForKey:(id)arg1;

- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)accessibilityContainerElements;
- (void)categoryChanged;
- (void)categoryChangedNoSounds;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })categoryFrame;
- (void)categoryReselected;
- (void)deactivateActiveKeys;
- (void)dealloc;
- (id)defaultsDictionary;
- (void)deleteBegin;
- (void)deleteEnd;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })deleteFrame;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)emojiForCodePoint:(id)arg1;
- (void)emojiSelected:(id)arg1;
- (void)globeDown;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })globeFrame;
- (void)globeLongPressGestureRecognized:(id)arg1;
- (void)globeSwitch;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)recents;
- (BOOL)setDefaultsDictionary:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setKeyboardDefault;
- (BOOL)shouldShowIndicator;
- (void)showKeyboardType:(int)arg1 withAppearance:(int)arg2;

@end
