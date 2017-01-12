/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSIdentityProviderPickerViewController_iOS : UITableViewController <VSIdentityProviderPickerViewController, VSTableHeaderFooterViewDelegate> {
    unsigned int  _additionalProvidersMode;
    BOOL  _cancellationAllowed;
    <VSIdentityProviderPickerViewControllerDelegate> * _delegate;
    NSArray * _identityProviders;
    NSString * _requestingAppDisplayName;
    NSString * _resourceTitle;
}

@property (nonatomic) unsigned int additionalProvidersMode;
@property (getter=isCancellationAllowed, nonatomic) BOOL cancellationAllowed;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSIdentityProviderPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSArray *identityProviders;
@property (nonatomic, copy) NSString *requestingAppDisplayName;
@property (nonatomic, copy) NSString *resourceTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (int)_accessoryTypeForRowAtIndexPath:(id)arg1;
- (id)_additionalProvidersRowTitle;
- (void)_cancelButtonPressed:(id)arg1;
- (id)_cellReuseIdentifierForRowAtIndexPath:(id)arg1;
- (int)_cellStyleForRowAtIndexPath:(id)arg1;
- (void)_didPickAdditionalIdentityProviders;
- (void)_didPickIdentityProvider:(id)arg1;
- (void)_dismissAboutPrivacy:(id)arg1;
- (id)_identityProviderAtIndex:(unsigned int)arg1;
- (unsigned int)_sectionForIndexPath:(id)arg1;
- (void)_showAboutPrivacy:(id)arg1;
- (int)_textAlignmentForRowAtIndexPath:(id)arg1;
- (id)_titleForRowAtIndexPath:(id)arg1;
- (unsigned int)additionalProvidersMode;
- (id)delegate;
- (void)deselectSelectedProviderAnimated:(BOOL)arg1;
- (void)didInvalidateIntrinsicContentSizeForTableHeaderFooterView:(id)arg1;
- (id)identityProviders;
- (id)initWithStyle:(int)arg1;
- (BOOL)isCancellationAllowed;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)requestingAppDisplayName;
- (id)resourceTitle;
- (void)setAdditionalProvidersMode:(unsigned int)arg1;
- (void)setCancellationAllowed:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIdentityProviders:(id)arg1;
- (void)setRequestingAppDisplayName:(id)arg1;
- (void)setResourceTitle:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)titleForTableFooterView;
- (id)titleForTableHeaderView;
- (void)viewDidLoad;
- (void)willMoveToParentViewController:(id)arg1;

@end