/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface CNFRegListController : PSListController {
    id _appearBlock;
    BOOL _appeared;
    BOOL _shouldRerootPreferences;
    BOOL _showingChildController;
}

@property(copy) id appearBlock;
@property(readonly) int currentAppearanceStyle;
@property BOOL shouldRerootPreferences;
@property BOOL showingChildController;

- (BOOL)_handleURLDictionary:(id)arg1;
- (void)_performAppearBlock;
- (void)_setFieldsEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setLabel:(id)arg1 forSpecifier:(id)arg2 header:(BOOL)arg3;
- (void)_setSpecifierEnabled:(id)arg1 enabled:(BOOL)arg2 animated:(BOOL)arg3;
- (BOOL)_showWiFiAlertIfNecessary;
- (void)_updateExistingLabelForSpecifier:(id)arg1 header:(BOOL)arg2;
- (id)appearBlock;
- (void)applicationDidResume;
- (void)authorizationController:(id)arg1 authorizedAccount:(BOOL)arg2;
- (void)changePasswordControllerDidCancel:(id)arg1;
- (void)changePasswordControllerDidFinish:(id)arg1 withPassword:(id)arg2;
- (int)currentAppearanceStyle;
- (void)dealloc;
- (void)handleURL:(id)arg1;
- (id)init;
- (id)initWithParentController:(id)arg1;
- (void)loadView;
- (id)logName;
- (void)setAppearBlock:(id)arg1;
- (void)setShouldRerootPreferences:(BOOL)arg1;
- (void)setShowingChildController:(BOOL)arg1;
- (BOOL)shouldRerootPreferences;
- (BOOL)shouldSelectResponderOnAppearance;
- (BOOL)showingChildController;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (BOOL)wantsWiFiChooser;
- (void)willBecomeActive;
- (void)willResignActive;

@end
