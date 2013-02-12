/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSArray, NSString, OADBackground, OADTableStyle, PDAnimation, PDTransition;

@interface PDSlideBase : NSObject {
    unsigned int mIsHidden : 1;
    unsigned int mIsDoneWithContent : 1;
    PDAnimation *mAnimation;
    OADBackground *mBackground;
    OADTableStyle *mDefaultTableStyle;
    NSArray *mDrawables;
    NSString *mName;
    PDTransition *mTransition;
}

+ (int)inheritedPlaceholderType:(int)arg1;

- (void)addSlideNumberPlaceholder:(id)arg1;
- (id)animation;
- (id)background;
- (id)colorMap;
- (id)colorScheme;
- (void)dealloc;
- (id)defaultTableStyle;
- (id)defaultTheme;
- (void)doneWithContent;
- (id)drawables;
- (id)drawingTheme;
- (id)fontScheme;
- (id)init;
- (BOOL)isHidden;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2;
- (id)name;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2;
- (id)parentSlideBase;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3;
- (id)parentTextStyleForTables;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 useBaseTypeMatch:(BOOL)arg3;
- (id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2;
- (void)setBackground:(id)arg1;
- (void)setDefaultTableStyle:(id)arg1;
- (void)setDrawables:(id)arg1 defaultTextListStyle:(id)arg2;
- (void)setInheritedTextStyle:(id)arg1 placeholderType:(int)arg2 defaultTextListStyle:(id)arg3;
- (void)setIsHidden:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setTransition:(id)arg1;
- (id)styleMatrix;
- (id)transition;

@end
