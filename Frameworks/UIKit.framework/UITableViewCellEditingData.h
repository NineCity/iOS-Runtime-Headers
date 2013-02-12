/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITableViewCell, UITableViewCellDeleteConfirmationControl, UITableViewCellEditControl, UITableViewCellReorderControl, UIView;

@interface UITableViewCellEditingData : NSObject {
    UITableViewCell *_cell;
    UITableViewCellDeleteConfirmationControl *_deleteConfirmationControl;
    UITableViewCellEditControl *_editControl;
    int _editingStyle;
    UITableViewCellReorderControl *_reorderControl;
    UIView *_reorderSeparatorView;
}

@property(getter=isDataRequired,readonly) BOOL dataRequired;

- (void)dealloc;
- (id)deleteConfirmationControl:(BOOL)arg1;
- (id)editControl:(BOOL)arg1;
- (id)initWithTableViewCell:(id)arg1 editingStyle:(int)arg2;
- (BOOL)isDataRequired;
- (id)reorderControl:(BOOL)arg1;
- (id)reorderSeparatorView:(BOOL)arg1;

@end
