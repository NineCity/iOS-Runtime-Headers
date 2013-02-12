/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDCollection, EDReference, EDResources, NSString;

@interface EDTable : NSObject {
    boolmShowColumnStripes;
    boolmShowFirstColumn;
    boolmShowLastColumn;
    boolmShowRowStripes;
    unsigned int mDataAreaBorderDxfIndex;
    unsigned int mDataAreaDxfIndex;
    NSString *mDisplayName;
    unsigned int mHeaderRowBorderDxfIndex;
    unsigned int mHeaderRowCount;
    unsigned int mHeaderRowDxfIndex;
    NSString *mName;
    EDResources *mResources;
    unsigned int mStyleIndex;
    NSString *mStyleName;
    unsigned int mTableBorderDxfIndex;
    EDCollection *mTableColumns;
    EDReference *mTableRange;
    unsigned int mTotalsRowBorderDxfIndex;
    unsigned int mTotalsRowCount;
    unsigned int mTotalsRowDxfIndex;
}

+ (id)tableWithResources:(id)arg1;

- (id)dataAreaBorderDxf;
- (unsigned int)dataAreaBorderDxfIndex;
- (id)dataAreaDxf;
- (unsigned int)dataAreaDxfIndex;
- (void)dealloc;
- (id)displayName;
- (id)headerRowBorderDxf;
- (unsigned int)headerRowBorderDxfIndex;
- (unsigned int)headerRowCount;
- (id)headerRowDxf;
- (unsigned int)headerRowDxfIndex;
- (id)initWithResources:(id)arg1;
- (id)name;
- (void)setDataAreaBorderDxf:(id)arg1;
- (void)setDataAreaBorderDxfIndex:(unsigned int)arg1;
- (void)setDataAreaDxf:(id)arg1;
- (void)setDataAreaDxfIndex:(unsigned int)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setHeaderRowBorderDxf:(id)arg1;
- (void)setHeaderRowBorderDxfIndex:(unsigned int)arg1;
- (void)setHeaderRowCount:(unsigned int)arg1;
- (void)setHeaderRowDxf:(id)arg1;
- (void)setHeaderRowDxfIndex:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setShowColumnStripes:(bool)arg1;
- (void)setShowFirstColumn:(bool)arg1;
- (void)setShowLastColumn:(bool)arg1;
- (void)setShowRowStripes:(bool)arg1;
- (void)setStyle:(id)arg1;
- (void)setStyleIndex:(unsigned int)arg1;
- (void)setStyleName:(id)arg1;
- (void)setTableBorderDxf:(id)arg1;
- (void)setTableBorderDxfIndex:(unsigned int)arg1;
- (void)setTableRange:(id)arg1;
- (void)setTotalsRowBorderDxf:(id)arg1;
- (void)setTotalsRowBorderDxfIndex:(unsigned int)arg1;
- (void)setTotalsRowCount:(unsigned int)arg1;
- (void)setTotalsRowDxf:(id)arg1;
- (void)setTotalsRowDxfIndex:(unsigned int)arg1;
- (bool)showColumnStripes;
- (bool)showFirstColumn;
- (bool)showLastColumn;
- (bool)showRowStripes;
- (id)style;
- (unsigned int)styleIndex;
- (id)styleName;
- (id)tableBorderDxf;
- (unsigned int)tableBorderDxfIndex;
- (id)tableColumns;
- (id)tableRange;
- (id)totalsRowBorderDxf;
- (unsigned int)totalsRowBorderDxfIndex;
- (unsigned int)totalsRowCount;
- (id)totalsRowDxf;
- (unsigned int)totalsRowDxfIndex;

@end
