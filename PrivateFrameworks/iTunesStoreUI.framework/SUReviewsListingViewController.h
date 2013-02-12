/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUButtonAccessoryView;

@interface SUReviewsListingViewController : SUStructuredPageViewController {
    SUButtonAccessoryView *_accessoryView;
}

- (id)_accessoryView;
- (BOOL)_canWriteReview;
- (id)_headerItem;
- (void)_reloadHeaderView;
- (void)_writeAReview:(id)arg1;
- (void)dealloc;
- (void)loadView;
- (void)reloadData;
- (void)reloadForChangedRowCount:(int)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewWillAppear:(BOOL)arg1;

@end
