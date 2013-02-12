/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSDateFormatter, PKJob, UIButton;

@interface UIPrintStatusTableViewController : UITableViewController {
    UIButton *_cancelButton;
    PKJob *_printJob;
    NSDateFormatter *_sentFormatter;
}

- (void)cancelPrinting;
- (void)dealloc;
- (id)initWithJob:(id)arg1;
- (void)loadView;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)popToJobsView;
- (void)setupCancelButton;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)updateCancelButton;
- (void)updateJobInfo;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
