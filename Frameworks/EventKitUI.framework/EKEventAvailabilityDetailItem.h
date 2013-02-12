/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UITableViewCell;

@interface EKEventAvailabilityDetailItem : EKEventDetailItem {
    UITableViewCell *_cell;
}

- (id)cellForSubitemAtIndex:(int)arg1;
- (BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2;
- (float)defaultCellHeightForSubitemAtIndex:(int)arg1 forWidth:(float)arg2;
- (id)detailViewControllerWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forSubitemAtIndex:(int)arg2;
- (BOOL)eventEditItemViewControllerCommit:(id)arg1;
- (void)reset;

@end
