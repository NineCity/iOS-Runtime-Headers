/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDReference;

@interface EDPane : NSObject {
    int mActivePane;
    EDReference *mTopLeftCell;
    double mXSplitPosition;
    double mYSplitPosition;
}

+ (id)pane;

- (int)activePane;
- (void)dealloc;
- (id)init;
- (void)setActivePane:(int)arg1;
- (void)setTopLeftCell:(id)arg1;
- (void)setXSplitPosition:(double)arg1;
- (void)setYSplitPosition:(double)arg1;
- (id)topLeftCell;
- (double)xSplitPosition;
- (double)ySplitPosition;

@end
