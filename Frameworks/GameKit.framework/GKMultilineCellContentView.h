/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKUITheme, NSArray, UIImage;

@interface GKMultilineCellContentView : UIView <GKTableViewCellContents> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct CGSize { 
        float width; 
        float height; 
    } _contentInsets;
    int _disclosureStyle;
    BOOL _highlighted;
    UIImage *_image;
    } _imageInsets;
    } _imageSize;
    NSArray *_lines;
    BOOL _loadingImage;
    id _representedObject;
    } _textInsets;
    GKUITheme *_theme;
}

@property struct UIEdgeInsets { float top; float left; float bottom; float right; } contentInsets;
@property int disclosureStyle;
@property(getter=isHighlighted) BOOL highlighted;
@property(retain) UIImage * image;
@property struct UIEdgeInsets { float top; float left; float bottom; float right; } imageInsets;
@property struct CGSize { float width; float height; } imageSize;
@property(retain) NSArray * lines;
@property BOOL loadingImage;
@property(retain) id representedObject;
@property struct UIEdgeInsets { float top; float left; float bottom; float right; } textInsets;
@property(retain) GKUITheme * theme;

+ (id)threeLineContentViewWithTheme:(id)arg1 shouldHighlight:(BOOL)arg2;
+ (id)threeLineContentViewWithTheme:(id)arg1;

- (id)accessibilityLabel;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentRectForBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)description;
- (int)disclosureStyle;
- (void)drawImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)drawLines:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)image;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })imageInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })imageSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithNumberOfLines:(unsigned int)arg1;
- (BOOL)isAccessibilityElement;
- (BOOL)isHighlighted;
- (id)lineAtIndex:(unsigned int)arg1;
- (id)lines;
- (void)loadIconForGame:(id)arg1;
- (BOOL)loadingImage;
- (float)preferredHeightForOrientation:(int)arg1;
- (void)prepareForReuse;
- (id)representedObject;
- (void)setAttributedText:(id)arg1 forLine:(unsigned int)arg2;
- (void)setContentInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setDisclosureStyle:(int)arg1;
- (void)setFont:(id)arg1 forLine:(unsigned int)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)setImage:(id)arg1;
- (void)setImageInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setLines:(id)arg1;
- (void)setLoadingImage:(BOOL)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)setText:(id)arg1 forLine:(unsigned int)arg2;
- (void)setTextColor:(id)arg1 forLine:(unsigned int)arg2;
- (void)setTextInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setTheme:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })textInsets;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })textRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)theme;

@end
