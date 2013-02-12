/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CMDrawableStyle, CMTableGridInfo, OADOrientedBounds, OADTable;

@interface PMTableMapper : CMMapper {
    OADOrientedBounds *mBounds;
    CMTableGridInfo *mGrid;
    CMDrawableStyle *mStyle;
    OADTable *mTable;
}

- (id)cellStyle;
- (float)columnWidthAtIndex:(int)arg1 state:(id)arg2;
- (void)dealloc;
- (id)defaultCellFillForRow:(unsigned int)arg1 withState:(id)arg2;
- (id)defaultCellFillWithState:(id)arg1;
- (id)grid;
- (id)initWithOadTable:(id)arg1 bounds:(id)arg2 parent:(id)arg3;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)mapColumnGridAt:(id)arg1 withState:(id)arg2;
- (void)mapTablePropertiesWithState:(id)arg1;
- (unsigned int)rowCount;
- (id)tableBorderStyle;

@end
