/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, OADTextBodyProperties, OADTextListStyle;

@interface OADTextBody : NSObject {
    NSMutableArray *mParagraphs;
    OADTextBodyProperties *mProperties;
    OADTextListStyle *mTextListStyle;
}

- (id)addParagraph;
- (void)addParagraphsFromTextBody:(id)arg1;
- (void)applyTextListStyle:(id)arg1;
- (void)dealloc;
- (id)findFirstTextRunOfClass:(Class)arg1;
- (void)flattenProperties;
- (id)init;
- (BOOL)isEmpty;
- (id)overrideTextListStyle;
- (id)paragraphAtIndex:(unsigned int)arg1;
- (unsigned int)paragraphCount;
- (id)plainText;
- (id)properties;
- (void)removeAllParagraphs;
- (void)removeTrailingNewlines;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(id)arg1;
- (void)setProperties:(id)arg1;
- (id)textListStyle;

@end
