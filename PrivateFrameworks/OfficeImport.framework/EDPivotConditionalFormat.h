/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDCollection;

@interface EDPivotConditionalFormat : NSObject {
    EDCollection *mPivotAreas;
    unsigned int mPriority;
    int mScope;
    int mType;
}

+ (id)pivotConditionalFormat;

- (void)dealloc;
- (id)init;
- (id)pivotAreas;
- (unsigned int)priority;
- (int)scope;
- (void)setPriority:(unsigned int)arg1;
- (void)setScope:(int)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
