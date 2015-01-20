/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class <KeychainSyncViewControllerDelegate>, KeychainSyncHeaderView, PSSpecifier;

@interface PSKeychainSyncViewController : PSListController <KeychainSyncViewController> {
    <KeychainSyncViewControllerDelegate> *_delegate;
    PSSpecifier *_groupSpecifier;
    KeychainSyncHeaderView *_headerView;
}

@property <KeychainSyncViewControllerDelegate> * delegate;

- (void)dealloc;
- (id)delegate;
- (id)groupSpecifier;
- (id)headerView;
- (double)heightForHeaderInTableView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)specifiers;
- (id)viewForHeaderInTableView:(id)arg1;

@end