/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIBezierPath : NSObject <NSCopying, NSCoding> {
    float _flatness;
    struct CGPath { } *_immutablePath;
    BOOL _immutablePathIsValid;
    int _lineCapStyle;
    float *_lineDashPattern;
    unsigned int _lineDashPatternCount;
    float _lineDashPhase;
    int _lineJoinStyle;
    float _lineWidth;
    float _miterLimit;
    struct CGPath { } *_path;
    BOOL _usesEvenOddFillRule;
}

@property struct CGPath { }* CGPath;
@property(readonly) struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } bounds;
@property(readonly) struct CGPoint { float x; float y; } currentPoint;
@property(getter=isEmpty,readonly) BOOL empty;
@property float flatness;
@property int lineCapStyle;
@property int lineJoinStyle;
@property float lineWidth;
@property float miterLimit;
@property BOOL usesEvenOddFillRule;

+ (id)_bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 byRoundingCorners:(unsigned int)arg2 cornerRadius:(float)arg3;
+ (id)_roundedRectBezierPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withRoundedCorners:(int)arg2 cornerRadius:(float)arg3 segments:(int)arg4;
+ (id)bezierPath;
+ (id)bezierPathForBottomOfRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withCornerRadius:(float)arg2;
+ (id)bezierPathForTopOfRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withCornerRadius:(float)arg2;
+ (id)bezierPathWithArcCenter:(struct CGPoint { float x1; float x2; })arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4 clockwise:(BOOL)arg5;
+ (id)bezierPathWithCGPath:(struct CGPath { }*)arg1;
+ (id)bezierPathWithOvalInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)bezierPathWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 byRoundingCorners:(unsigned int)arg2 cornerRadii:(struct CGSize { float x1; float x2; })arg3;
+ (id)bezierPathWithRoundedRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 cornerRadius:(float)arg2;
+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withRoundedCorners:(int)arg2 withCornerRadii:(id)arg3;
+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withRoundedCorners:(int)arg2 withCornerRadius:(float)arg3;
+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withRoundedEdges:(int)arg2;
+ (id)roundedRectBezierPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withTopCornerRadius:(float)arg2 withBottomCornerRadius:(float)arg3;
+ (id)shadowBezierPath:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withRoundedEdges:(int)arg2;

- (struct CGPath { }*)CGPath;
- (struct CGPath { }*)_createMutablePathByDecodingData:(id)arg1;
- (id)_initWithCGMutablePath:(struct CGPath { }*)arg1;
- (struct CGPath { }*)_mutablePath;
- (struct CGPath { }*)_pathRef;
- (void)addArcWithCenter:(struct CGPoint { float x1; float x2; })arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4 clockwise:(BOOL)arg5;
- (void)addClip;
- (void)addCurveToPoint:(struct CGPoint { float x1; float x2; })arg1 controlPoint1:(struct CGPoint { float x1; float x2; })arg2 controlPoint2:(struct CGPoint { float x1; float x2; })arg3;
- (void)addLineToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)addQuadCurveToPoint:(struct CGPoint { float x1; float x2; })arg1 controlPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)appendBezierPath:(id)arg1;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint { float x1; float x2; })arg1 radius:(float)arg2 startAngle:(float)arg3 endAngle:(float)arg4 clockwise:(BOOL)arg5;
- (void)appendBezierPathWithOvalInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 transform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg2;
- (void)appendBezierPathWithOvalInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)appendBezierPathWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)appendPath:(id)arg1;
- (void)applyTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })bounds;
- (void)clip;
- (void)closePath;
- (BOOL)containsPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGPoint { float x1; float x2; })currentPoint;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)fill;
- (void)fillWithBlendMode:(int)arg1 alpha:(float)arg2;
- (float)flatness;
- (void)getLineDash:(float*)arg1 count:(int*)arg2 phase:(float*)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEmpty;
- (int)lineCapStyle;
- (int)lineJoinStyle;
- (void)lineToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (float)lineWidth;
- (float)miterLimit;
- (void)moveToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)removeAllPoints;
- (void)setCGPath:(struct CGPath { }*)arg1;
- (void)setFlatness:(float)arg1;
- (void)setLineCapStyle:(int)arg1;
- (void)setLineDash:(const float*)arg1 count:(int)arg2 phase:(float)arg3;
- (void)setLineJoinStyle:(int)arg1;
- (void)setLineWidth:(float)arg1;
- (void)setMiterLimit:(float)arg1;
- (void)setUsesEvenOddFillRule:(BOOL)arg1;
- (void)stroke;
- (void)strokeWithBlendMode:(int)arg1 alpha:(float)arg2;
- (BOOL)usesEvenOddFillRule;

@end
