/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADParagraph;

@interface PMParagraphMapper : CMMapper {
    OADParagraph *mParagraph;
}

- (void)addEndCharacterStyleToStyle:(id)arg1;
- (id)createParagraphStyleWithState:(id)arg1;
- (int)firstTextRunFontSize;
- (id)fontScheme;
- (id)initWithOadParagraph:(id)arg1 parent:(id)arg2;
- (void)mapAt:(id)arg1 withState:(id)arg2;

@end
