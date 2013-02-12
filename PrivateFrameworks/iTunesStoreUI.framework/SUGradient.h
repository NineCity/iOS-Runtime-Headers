/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, NSLock, NSMutableArray;

@interface SUGradient : NSObject <NSCoding, NSCopying> {
    struct SUGradientPoint { 
        struct CGPoint { 
            float x; 
            float y; 
        } point; 
        float radius; 
    struct SUGradientPoint { 
        struct CGPoint { 
            float x; 
            float y; 
        } point; 
        float radius; 
    NSMutableArray *_colorStops;
    NSLock *_lock;
    } _p0;
    } _p1;
    BOOL _sorted;
    int _type;
}

@property(readonly) NSArray * colorStopColors;
@property(readonly) NSArray * colorStopOffsets;
@property(readonly) int gradientType;
@property(readonly) int numberOfColorStops;
@property(readonly) struct SUGradientPoint { struct CGPoint { float x; float y; } point; float radius; } p0;
@property(readonly) struct SUGradientPoint { struct CGPoint { float x; float y; } point; float radius; } p1;

+ (id)gradientWithColor:(id)arg1;

- (void)addColorStopWithOffset:(float)arg1 color:(struct CGColor { }*)arg2;
- (id)colorStopColors;
- (id)colorStopOffsets;
- (struct CGGradient { }*)copyCGGradient;
- (struct CGShading { }*)copyShading;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (int)gradientType;
- (id)initWithCoder:(id)arg1;
- (id)initWithPoint0:(struct SUGradientPoint { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; })arg1 point1:(struct SUGradientPoint { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; })arg2 type:(int)arg3;
- (id)initWithPropertyList:(id)arg1;
- (id)initWithType:(int)arg1;
- (int)numberOfColorStops;
- (struct SUGradientPoint { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; })p0;
- (struct SUGradientPoint { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; float x2; })p1;

@end
