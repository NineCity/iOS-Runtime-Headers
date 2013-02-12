/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface OADCustomShapeGeometry : OADShapeGeometry {
    NSMutableArray *mFormulas;
    struct CsRect<long int> { long x1[4]; } *mGeometryCoordSpace;
    struct CsPoint<long int> { long x1[2]; } *mLimo;
    NSMutableArray *mPaths;
    NSMutableArray *mTextBodyRects;
}

- (void)addFormula:(id)arg1;
- (void)addPath:(id)arg1;
- (void)addTextBodyRect:(id)arg1;
- (void)dealloc;
- (id)formulaAtIndex:(unsigned int)arg1;
- (unsigned int)formulaCount;
- (struct CsRect<long int> { long x1[4]; })geometryCoordSpace;
- (id)init;
- (struct CsPoint<long int> { long x1[2]; })limo;
- (id)pathAtIndex:(unsigned int)arg1;
- (unsigned int)pathCount;
- (void)setGeometryCoordSpace:(struct CsRect<long int> { long x1[4]; })arg1;
- (void)setLimo:(struct CsPoint<long int> { long x1[2]; })arg1;
- (id)textBodyRectAtIndex:(unsigned int)arg1;
- (unsigned int)textBodyRectCount;

@end
