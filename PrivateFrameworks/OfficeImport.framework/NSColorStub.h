/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface NSColorStub : NSObject {
    struct CGColor { } *cgColor;
}

+ (id)blackColor;
+ (id)clearColor;
+ (id)colorWithBGR:(unsigned long)arg1;
+ (id)colorWithBGRValue:(long)arg1;
+ (id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3 alpha:(int)arg4;
+ (id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3;
+ (id)colorWithCalibratedHue:(float)arg1 saturation:(float)arg2 brightness:(float)arg3 alpha:(float)arg4;
+ (id)colorWithCalibratedRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)colorWithCsColour:(const struct CsColour { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; }*)arg1;
+ (id)colorWithCsColour:(const struct CsColour { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; }*)arg1;
+ (id)colorWithDeviceRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
+ (id)colorWithEshColor:(const struct EshColor { struct Data { int x_1_1_1; union Value { struct RGB { unsigned char x_1_3_1; unsigned char x_1_3_2; unsigned char x_1_3_3; } x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; struct AdjustedColor { unsigned char x_4_3_1; unsigned char x_4_3_2; unsigned int x_4_3_3 : 4; unsigned int x_4_3_4 : 1; unsigned int x_4_3_5 : 1; unsigned int x_4_3_6 : 1; } x_2_2_4; } x_1_1_2; } x1; }*)arg1;
+ (id)colorWithEshColor:(const struct EshColor { struct Data { int x_1_1_1; union Value { struct RGB { unsigned char x_1_3_1; unsigned char x_1_3_2; unsigned char x_1_3_3; } x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; struct AdjustedColor { unsigned char x_4_3_1; unsigned char x_4_3_2; unsigned int x_4_3_3 : 4; unsigned int x_4_3_4 : 1; unsigned int x_4_3_5 : 1; unsigned int x_4_3_6 : 1; } x_2_2_4; } x_1_1_2; } x1; }*)arg1;
+ (id)colorWithPatternImage:(struct CGImage { }*)arg1;
+ (id)colorWithRGBBytes:(unsigned char)arg1 :(unsigned char)arg2 :(unsigned char)arg3;
+ (id)colorWithRGBValue:(long)arg1;
+ (id)colorWithSystemColorID:(int)arg1;
+ (id)stringForSystemColorID:(int)arg1;
+ (id)whiteColor;

- (float)alphaComponent;
- (id)blendedColorWithFraction:(float)arg1 ofColor:(id)arg2;
- (float)blueComponent;
- (struct CGColor { }*)cgColorRef;
- (id)colorSpaceName;
- (id)colorUsingColorSpaceName:(id)arg1;
- (id)colorWithAlphaComponent:(float)arg1;
- (id)colorWithShadeValue:(double)arg1;
- (id)colorWithTintValue:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CsColour { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; })csColour;
- (struct CsColour { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; })csColour;
- (void)dealloc;
- (id)description;
- (struct EshColor { struct Data { int x_1_1_1; union Value { struct RGB { unsigned char x_1_3_1; unsigned char x_1_3_2; unsigned char x_1_3_3; } x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; struct AdjustedColor { unsigned char x_4_3_1; unsigned char x_4_3_2; unsigned int x_4_3_3 : 4; unsigned int x_4_3_4 : 1; unsigned int x_4_3_5 : 1; unsigned int x_4_3_6 : 1; } x_2_2_4; } x_1_1_2; } x1; })eshColor;
- (struct EshColor { struct Data { int x_1_1_1; union Value { struct RGB { unsigned char x_1_3_1; unsigned char x_1_3_2; unsigned char x_1_3_3; } x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; struct AdjustedColor { unsigned char x_4_3_1; unsigned char x_4_3_2; unsigned int x_4_3_3 : 4; unsigned int x_4_3_4 : 1; unsigned int x_4_3_5 : 1; unsigned int x_4_3_6 : 1; } x_2_2_4; } x_1_1_2; } x1; })eshColor;
- (void)getRGBBytes:(char *)arg1 :(char *)arg2 :(char *)arg3;
- (void)getRed:(float*)arg1 green:(float*)arg2 blue:(float*)arg3 alpha:(float*)arg4;
- (float)greenComponent;
- (id)init;
- (id)initWithGCColor:(struct CGColor { }*)arg1;
- (BOOL)isBlack;
- (BOOL)isEqualToColor:(id)arg1;
- (float)redComponent;
- (id)rgbColor;
- (void)set;
- (id)solidColoredBitmap:(struct CGSize { float x1; float x2; })arg1;
- (id)solidColoredPngImage;
- (unsigned long)toBGR;
- (struct { unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; })ttColor;

@end
