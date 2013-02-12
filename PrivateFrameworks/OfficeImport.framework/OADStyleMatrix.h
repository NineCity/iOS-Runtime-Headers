/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface OADStyleMatrix : NSObject {
    NSMutableArray *mBgFills;
    NSMutableArray *mEffects;
    NSMutableArray *mFills;
    NSMutableArray *mStrokes;
}

- (void)addBgFill:(id)arg1;
- (void)addEffects:(id)arg1;
- (void)addFill:(id)arg1;
- (void)addStroke:(id)arg1;
- (id)bgFillAtIndex:(unsigned int)arg1;
- (unsigned int)bgFillCount;
- (void)dealloc;
- (id)effectsAtIndex:(unsigned int)arg1 color:(id)arg2;
- (id)effectsAtIndex:(unsigned int)arg1;
- (unsigned int)effectsCount;
- (id)fillAtIndex:(unsigned int)arg1 color:(id)arg2;
- (id)fillAtIndex:(unsigned int)arg1;
- (unsigned int)fillCount;
- (id)init;
- (id)strokeAtIndex:(unsigned int)arg1 color:(id)arg2;
- (id)strokeAtIndex:(unsigned int)arg1;
- (unsigned int)strokeCount;

@end
