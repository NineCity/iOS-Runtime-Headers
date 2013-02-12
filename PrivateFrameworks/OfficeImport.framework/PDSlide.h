/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, PDNotesSlide, PDSlideLayout;

@interface PDSlide : PDSlideChild {
    NSMutableArray *mComments;
    PDNotesSlide *mNotesSlide;
    PDSlideLayout *mSlideLayout;
}

- (void)addComment:(id)arg1;
- (id)commentAtIndex:(unsigned int)arg1;
- (unsigned int)commentCount;
- (void)dealloc;
- (id)defaultTheme;
- (void)doneWithContent;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2;
- (id)notesSlide;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2;
- (id)parentSlideBase;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3;
- (id)parentTextStyleForTables;
- (void)setInheritedTextStyle:(id)arg1 placeholderType:(int)arg2 defaultTextListStyle:(id)arg3;
- (void)setNotesSlide:(id)arg1;
- (void)setSlideLayout:(id)arg1;
- (id)slideLayout;

@end
