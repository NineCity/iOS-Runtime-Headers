/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface GQDTSpiceTableModel : GQDTTableModel {
}

+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (struct __CFArray { }*)createSizeArrayFromPositionVector:(struct vector<float,std::allocator<float> > { struct _Vector_impl { float *x_1_1_1; float *x_1_1_2; float *x_1_1_3; } x1; }*)arg1;
- (int)readAttributesFromReader:(struct _xmlTextReader { }*)arg1;
- (int)setColumnWidthsFromState:(id)arg1;
- (int)setRowHeightsFromState:(id)arg1;

@end
