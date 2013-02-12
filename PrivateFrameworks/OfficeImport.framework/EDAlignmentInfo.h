/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDAlignmentInfo : NSObject <NSCopying, EDImmutableObject> {
    boolmDoNotModify;
    boolmHorizontalAlignOverridden;
    boolmIndentOverridden;
    boolmTextWrapped;
    boolmTextWrappedOveridden;
    boolmVerticalAlignOverridden;
    int mHorizontalAlignment;
    int mIndent;
    int mTextRotation;
    int mVerticalAlignment;
}

+ (id)alignmentInfo;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)hash;
- (int)horizontalAlignment;
- (int)indent;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAlignmentInfo:(id)arg1;
- (bool)isHorizontalAlignOverridden;
- (bool)isIndentOverridden;
- (bool)isTextWrapped;
- (bool)isTextWrappedOverridden;
- (bool)isVerticalAlignOverridden;
- (void)setDoNotModify:(bool)arg1;
- (void)setHorizontalAlignment:(int)arg1;
- (void)setIndent:(int)arg1;
- (void)setTextRotation:(int)arg1;
- (void)setTextWrapped:(bool)arg1;
- (void)setVerticalAlignment:(int)arg1;
- (int)textRotation;
- (int)verticalAlignment;

@end
