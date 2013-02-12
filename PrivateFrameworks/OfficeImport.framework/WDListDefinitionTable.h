/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, WDDocument, WDListDefinition;

@interface WDListDefinitionTable : NSObject {
    WDDocument *mDocument;
    WDListDefinition *mLastKnownGoodListDefinition;
    struct __CFDictionary { } *mListDefinitionMap;
    NSMutableArray *mListDefinitions;
    unsigned int mNextIdIndex;
}

- (id)addDefinition:(int)arg1;
- (id)addDefinition;
- (void)dealloc;
- (id)definitionAt:(int)arg1;
- (int)definitionCount;
- (id)definitionWithId:(int)arg1;
- (id)document;
- (id)initWithDocument:(id)arg1;
- (int)nextId;
- (void)setLastKnowGoodListDefinition:(id)arg1;

@end
