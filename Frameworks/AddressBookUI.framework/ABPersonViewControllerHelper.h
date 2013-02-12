/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class <ABPersonEditDelegate>, <ABPersonViewControllerPrivateDelegate>, <ABStyleProvider>, ABDatePickerViewController, ABModel, ABPeoplePickerNavigationController, ABPersonTableViewDataSource, NSArray, NSIndexPath, NSMutableArray, NSString, UIBarButtonItem, UIFont, UIPopoverController, UITableView, UIView, UIViewController;

@interface ABPersonViewControllerHelper : NSObject <ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, ABPersonTableViewDataSourceDelegate, ABPickerViewControllerDismissDelegate, UIActionSheetDelegate, UIPopoverControllerDelegate, ABPopoverRepresentDelegate, ABPersonEditDelegate, ABPersonViewControllerDelegate> {
    id _actionSheetDelegate;
    id _activeDialog;
    NSString *_addToPersonButtonTitle;
    void *_addressBook;
    BOOL _allowsAddingToAddressBook;
    BOOL _allowsSettingAsPreferredCardForName;
    BOOL _animatedRight;
    BOOL _appearsInLinkingPeoplePicker;
    BOOL _automaticallySetEditing;
    UITableView *_controllerTableView;
    ABDatePickerViewController *_datePickerViewController;
    id _deletionDelegate;
    BOOL _disablePopoverUpdates;
    NSArray *_displayedPeople;
    void *_displayedPerson;
    <ABPersonEditDelegate> *_editDelegate;
    int _favoritesListChangeNotificationCount;
    BOOL _hasLinkChanges;
    BOOL _ignoresReloadData;
    id _imagePicker;
    BOOL _isAnimatingDatePickerInputView;
    BOOL _isLocation;
    BOOL _isUnlinkingPerson;
    ABModel *_model;
    unsigned int _modelDatabaseExternalChangeCancellationCount;
    unsigned int _modelDatabaseLocalChangeCancellationCount;
    NSMutableArray *_peopleForUnifiedCard;
    ABPeoplePickerNavigationController *_peoplePickerForAddToContacts;
    ABPeoplePickerNavigationController *_peoplePickerForLinking;
    BOOL _personHeaderViewScrolls;
    ABPersonTableViewDataSource *_personTableViewDataSource;
    struct __CFArray { } *_personViewControllers;
    NSIndexPath *_popoverCellIndexPath;
    NSIndexPath *_popoverViewInCellIndexPath;
    UIPopoverController *_presentationPopoverController;
    UIBarButtonItem *_reusableCancelButton;
    UIViewController *_savedPopoverContentViewController;
    BOOL _savesNewContactOnSuspend;
    NSString *_shareMessageBody;
    BOOL _shareMessageBodyIsHTML;
    NSString *_shareMessageSubject;
    BOOL _shouldShowLinkingUI;
    BOOL _showsLinkedPeople;
    BOOL _showsPeoplePickerCancelButton;
    <ABStyleProvider> *_styleProvider;
    struct __CFDictionary { } *_valueByProperty;
    UIViewController *_viewController;
    BOOL _willPresentDatePickerViewController;
}

@property BOOL actionShouldPickHighlightedItem;
@property(retain) id activeDialog;
@property(copy) NSString * addToPersonButtonTitle;
@property void* addressBook;
@property BOOL allowsActions;
@property BOOL allowsAddToFavorites;
@property BOOL allowsAddingToAddressBook;
@property BOOL allowsCardEditing;
@property BOOL allowsConferencing;
@property BOOL allowsDeletion;
@property BOOL allowsSendingTextMessage;
@property BOOL allowsSettingAsPreferredCardForName;
@property BOOL allowsSharing;
@property BOOL allowsSounds;
@property(copy) NSString * alternateName;
@property BOOL appearsInLinkingPeoplePicker;
@property(readonly) NSString * attribution;
@property(getter=isAttributionEnabled,readonly) BOOL attributionEnabled;
@property BOOL automaticallySetEditing;
@property(readonly) BOOL canSave;
@property(readonly) UITableView * controllerTableView;
@property(retain) UIView * customMessageView;
@property(retain) ABDatePickerViewController * datePickerViewController;
@property(readonly) NSArray * displayedPeople;
@property void* displayedPerson;
@property <ABPersonEditDelegate> * editDelegate;
@property(readonly) BOOL hasChanges;
@property(readonly) BOOL hasImageChanges;
@property(readonly) BOOL hasLinkChanges;
@property(readonly) BOOL hasNameChanges;
@property(readonly) BOOL hasPopoverController;
@property BOOL ignoresReloadData;
@property BOOL isLocation;
@property(copy) NSString * message;
@property(copy) NSString * messageDetail;
@property(retain) UIFont * messageDetailFont;
@property(retain) UIFont * messageFont;
@property(retain) ABModel * model;
@property unsigned int modelDatabaseChangeCancellationCount;
@property(retain) UIView * personHeaderView;
@property BOOL personHeaderViewScrolls;
@property(readonly) ABPersonTableViewDataSource * personTableViewDataSource;
@property(readonly) <ABPersonViewControllerPrivateDelegate> * personViewDelegate;
@property(retain) NSIndexPath * popoverCellIndexPath;
@property(retain) NSIndexPath * popoverViewInCellIndexPath;
@property(getter=isReadonly,readonly) BOOL readonly;
@property(readonly) UIBarButtonItem * reusableCancelButton;
@property BOOL savesNewContactOnSuspend;
@property(copy) NSString * shareMessageBody;
@property BOOL shareMessageBodyIsHTML;
@property(copy) NSString * shareMessageSubject;
@property BOOL shouldShowLinkedPeople;
@property BOOL shouldShowLinkingUI;
@property BOOL showsPeoplePickerCancelButton;
@property(retain) <ABStyleProvider> * styleProvider;
@property(readonly) UIViewController * viewController;
@property(readonly) UIView * viewForActionSheet;

+ (void*)_newFakePersonForMergedPeople:(id)arg1;

- (void)_attemptSave;
- (void)_conferencingAvailabilityChanged:(id)arg1;
- (void)_datePickerInputViewDismissAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_dismissDatePickerInputViewAnimated:(BOOL)arg1;
- (id)_existingViewControllerTableView;
- (void)_favoritesListChanged:(id)arg1;
- (void)_finalizeLinkChanges;
- (void)_invalidatePeopleForUnifiedCard;
- (void*)_personToUseForAddressBook;
- (void)_presentDatePickerViewControllerAsInputView:(id)arg1 andScrollToIndexPath:(id)arg2;
- (void)_presentShareContactByEmailViewController:(id)arg1;
- (void)_setDisplayedPerson:(void*)arg1 invalidatePeopleForUnifiedCard:(BOOL)arg2;
- (void)_updateDisplayedPeople;
- (float)ab_heightToFitForViewInPopoverView;
- (void)ab_updatePopoverSize;
- (id)ab_viewControllerToPresentCamera;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (BOOL)actionShouldPickHighlightedItem;
- (id)activeDialog;
- (id)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 detailText:(id)arg3 style:(int)arg4 target:(id)arg5 selector:(SEL)arg6 forProperty:(int)arg7 withActionGrouping:(int)arg8 ordering:(int)arg9;
- (id)addActionWithTitle:(id)arg1 shortTitle:(id)arg2 target:(id)arg3 selector:(SEL)arg4 forProperty:(int)arg5 withActionGrouping:(int)arg6 ordering:(int)arg7;
- (id)addToPersonButtonTitle;
- (void*)addressBook;
- (void)addressBookChangedLocally:(struct __CFDictionary { }*)arg1;
- (BOOL)allowsActions;
- (BOOL)allowsAddToFavorites;
- (BOOL)allowsAddingToAddressBook;
- (BOOL)allowsCardEditing;
- (BOOL)allowsConferencing;
- (BOOL)allowsDeletion;
- (BOOL)allowsSendingTextMessage;
- (BOOL)allowsSettingAsPreferredCardForName;
- (BOOL)allowsSharing;
- (BOOL)allowsSounds;
- (id)alternateName;
- (BOOL)appearsInLinkingPeoplePicker;
- (void)applicationDidResume;
- (void)applicationWillSuspend;
- (id)attribution;
- (BOOL)automaticallySetEditing;
- (BOOL)canSave;
- (void)client:(id)arg1 didDismissActionSheet:(id)arg2;
- (void)conference:(id)arg1 person:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (id)controllerTableView;
- (id)controllerToPresentSheet;
- (BOOL)copyInsertValue:(id*)arg1 property:(int*)arg2 forPerson:(void*)arg3;
- (id)customMessageView;
- (id)datePickerViewController;
- (void)dealloc;
- (void)deleteDialog:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)didDismissModalViewController;
- (void)dismissPickerViewController:(id)arg1;
- (id)displayedPeople;
- (void*)displayedPerson;
- (id)editDelegate;
- (void)endEditingTransactions;
- (void)finishTearingDownImagePickerController;
- (void)getVCardData:(id*)arg1 exportMode:(int)arg2 fileName:(id*)arg3;
- (BOOL)hasActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 property:(int)arg4 actionGrouping:(int)arg5 ordering:(int)arg6;
- (BOOL)hasChanges;
- (BOOL)hasImageChanges;
- (BOOL)hasLinkChanges;
- (BOOL)hasNameChanges;
- (BOOL)hasPopoverController;
- (void)ignoreNextLocalChange;
- (BOOL)ignoresReloadData;
- (void)imagePicker:(id)arg1 didDismissActionSheet:(id)arg2;
- (void)imagePicker:(id)arg1 pickedPhoto:(id)arg2;
- (void)imagePicker:(id)arg1 presentActionSheet:(id)arg2;
- (id)imagePickerControllerViewControllerToPresentCamera:(id)arg1;
- (id)imagePickerControllerViewControllerToPresentModal:(id)arg1;
- (id)imagePickerControllerViewForApplyImageAnimation:(id)arg1;
- (void)imagePickerWillBeRemoved:(id)arg1;
- (void)imagePickerWillBeShown:(id)arg1;
- (void)imageUpdatedForPerson:(void*)arg1;
- (id)initWithViewController:(id)arg1 style:(int)arg2;
- (BOOL)isAttributionEnabled;
- (BOOL)isLocation;
- (BOOL)isPresentingDatePickerViewControllerForPersonTableViewDataSource:(id)arg1;
- (BOOL)isReadonly;
- (BOOL)loadChatKitAndReturnBundle:(id*)arg1;
- (BOOL)loadMessageUIAndReturnBundle:(id*)arg1;
- (void)loadUnknownViewWithPerson:(void*)arg1 allowActions:(BOOL)arg2;
- (void)loadViewWithDisplayedProperties:(struct __CFArray { }*)arg1 person:(void*)arg2 allowDeletion:(BOOL)arg3 allowActions:(BOOL)arg4;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (BOOL)makeFirstFieldBecomeFirstResponder;
- (BOOL)manuallyLinkPerson:(void*)arg1;
- (BOOL)manuallyUnlinkPerson:(void*)arg1;
- (id)message;
- (id)messageDetail;
- (id)messageDetailFont;
- (id)messageFont;
- (id)model;
- (unsigned int)modelDatabaseChangeCancellationCount;
- (void)nameUpdatedForPerson:(void*)arg1;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 informDelegate:(BOOL)arg3;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2;
- (id)peopleForUnifiedCard;
- (void)peoplePickerNavigationController:(id)arg1 insertEditorDidConfirm:(BOOL)arg2 forPerson:(void*)arg3;
- (void)peoplePickerNavigationController:(id)arg1 requestedLinkForPerson:(void*)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldAllowSelectingPerson:(void*)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void*)arg2 insertProperty:(int*)arg3 copyInsertValue:(id*)arg4 copyInsertLabel:(id*)arg5;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)performAction:(int)arg1 forPropertyAtIndex:(int)arg2 inPropertyGroup:(id)arg3 withContext:(void*)arg4;
- (void)performAction:(int)arg1 forPropertyAtIndex:(int)arg2 inPropertyGroup:(id)arg3;
- (void)performDefaultActionForPropertyAtIndex:(int)arg1 inPropertyGroup:(id)arg2;
- (id)personHeaderView;
- (BOOL)personHeaderViewScrolls;
- (id)personImageView;
- (void)personTableViewDataSource:(id)arg1 conference:(id)arg2 person:(void*)arg3 property:(int)arg4 identifier:(int)arg5;
- (void)personTableViewDataSource:(id)arg1 didBeginEditingProperty:(int)arg2;
- (void)personTableViewDataSource:(id)arg1 didDismissActionSheet:(id)arg2;
- (void)personTableViewDataSource:(id)arg1 didFinishEditingProperty:(int)arg2;
- (void)personTableViewDataSource:(id)arg1 didUpdateValueForProperty:(int)arg2;
- (void)personTableViewDataSource:(id)arg1 dismissDatePickerViewController:(id)arg2;
- (void)personTableViewDataSource:(id)arg1 presentActionSheet:(id)arg2 fromView:(id)arg3;
- (void)personTableViewDataSource:(id)arg1 presentDatePickerViewController:(id)arg2 fromView:(id)arg3 passthroughViews:(id)arg4 forIndexPath:(id)arg5;
- (void)personTableViewDataSource:(id)arg1 presentPickerViewController:(id)arg2 fromView:(id)arg3 forIndexPath:(id)arg4;
- (void)personTableViewDataSource:(id)arg1 selectedAddToFavoritesActionForPropertyAtIndex:(int)arg2 inPropertyGroup:(id)arg3 entryType:(int)arg4;
- (void)personTableViewDataSource:(id)arg1 selectedImageForEditing:(BOOL)arg2;
- (BOOL)personTableViewDataSource:(id)arg1 selectedPropertyAtIndex:(int)arg2 inPropertyGroup:(id)arg3 withMemberCell:(id)arg4 forEditing:(BOOL)arg5;
- (void)personTableViewDataSource:(id)arg1 selectedSMSActionForPropertyAtIndex:(int)arg2 inPropertyGroup:(id)arg3;
- (void)personTableViewDataSource:(id)arg1 shareContact:(id)arg2;
- (void)personTableViewDataSource:(id)arg1 shouldPushCardForPerson:(void*)arg2 showingLinkedPeople:(BOOL)arg3;
- (BOOL)personTableViewDataSource:(id)arg1 shouldShowAction:(id)arg2;
- (BOOL)personTableViewDataSource:(id)arg1 shouldUnlinkPerson:(void*)arg2;
- (id)personTableViewDataSource;
- (void)personTableViewDataSourceAskedToPresentLinkingPeoplePicker:(id)arg1;
- (void)personTableViewDataSourceDidSwipeToDelete:(id)arg1;
- (BOOL)personTableViewDataSourceIsLocation:(id)arg1;
- (void)personTableViewDataSourceSelectedAddToContacts:(id)arg1;
- (void)personTableViewDataSourceSelectedDeletePerson:(id)arg1;
- (void)personTableViewDataSourceShouldIgnoreNextLocalChange:(id)arg1;
- (BOOL)personTableViewDataSourceShouldPresentDatePickerViaDelegate:(id)arg1;
- (BOOL)personTableViewDataSourceShouldShowContactSources:(id)arg1;
- (BOOL)personTableViewDataSourceShouldShowLinkedPeople:(id)arg1;
- (void)personTableViewDataSourceWillPresentDatePickerViewController:(id)arg1;
- (BOOL)personViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)personViewControllerIsGoingAway:(id)arg1;
- (id)personViewDelegate;
- (void)personWasDeleted;
- (id)popoverCellIndexPath;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (BOOL)popoverControllerShouldDismissPopover:(id)arg1;
- (BOOL)popoverSizeUpdatesDisabled;
- (id)popoverViewInCellIndexPath;
- (void)preferredPersonDidChangeToPerson:(void*)arg1;
- (id)prepareViewWithDisplayedProperties:(struct __CFArray { }*)arg1 person:(void*)arg2 allowActions:(BOOL)arg3;
- (void)presentAddToContactsSheetIfNeeded:(id)arg1;
- (void)presentModalViewController:(id)arg1;
- (void)presentNewContactViewControllerForAddToContacts:(id)arg1;
- (void)presentPeoplePickerNavigationControllerForAddToContacts:(id)arg1;
- (id)primarySourceNameForPerson:(void*)arg1;
- (void)pushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1;
- (void)reloadData;
- (void)reloadDataInvalidatingPeopleForUnifiedCard:(BOOL)arg1;
- (void)reloadDeleteButton;
- (void)reloadImageData;
- (void)reloadLinkingUISection;
- (void)reloadNameData;
- (void)reloadPropertyGroups;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(int)arg3 withActionGrouping:(int)arg4 ordering:(int)arg5 animated:(BOOL)arg6;
- (void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(int)arg3 withActionGrouping:(int)arg4 ordering:(int)arg5;
- (void)removeDisplayedPeople;
- (void)removeImagePickerControllerFromUI;
- (void)removeSelectedPerson;
- (void)removeSelectedPersonFromBarButtonItem:(id)arg1;
- (id)reusableCancelButton;
- (BOOL)savesNewContactOnSuspend;
- (id)secondarySourceNameForPerson:(void*)arg1;
- (id)selectedPeople;
- (void)setActionShouldPickHighlightedItem:(BOOL)arg1;
- (void)setActiveDialog:(id)arg1 handleDismiss:(BOOL)arg2;
- (void)setActiveDialog:(id)arg1;
- (void)setAddToPersonButtonTitle:(id)arg1;
- (void)setAddressBook:(void*)arg1;
- (void)setAllowsActions:(BOOL)arg1;
- (void)setAllowsAddToFavorites:(BOOL)arg1;
- (void)setAllowsAddingToAddressBook:(BOOL)arg1;
- (void)setAllowsCardEditing:(BOOL)arg1;
- (void)setAllowsConferencing:(BOOL)arg1;
- (void)setAllowsDeletion:(BOOL)arg1;
- (void)setAllowsSendingTextMessage:(BOOL)arg1;
- (void)setAllowsSettingAsPreferredCardForName:(BOOL)arg1;
- (void)setAllowsSharing:(BOOL)arg1;
- (void)setAllowsSounds:(BOOL)arg1;
- (void)setAlternateName:(id)arg1;
- (void)setAppearsInLinkingPeoplePicker:(BOOL)arg1;
- (void)setAsPreferredCardForName:(id)arg1;
- (void)setAttribution:(id)arg1 enabled:(BOOL)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)setAutomaticallySetEditing:(BOOL)arg1;
- (void)setCustomMessageView:(id)arg1;
- (void)setDatePickerViewController:(id)arg1;
- (void)setDisplayedPeople:(id)arg1;
- (void)setDisplayedPerson:(void*)arg1;
- (void)setEditDelegate:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(BOOL)arg4;
- (void)setIgnoresReloadData:(BOOL)arg1;
- (void)setIsLocation:(BOOL)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageDetail:(id)arg1;
- (void)setMessageDetailFont:(id)arg1;
- (void)setMessageFont:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setModelDatabaseChangeCancellationCount:(unsigned int)arg1;
- (void)setPeopleForUnifiedCard:(id)arg1;
- (void)setPersonHeaderView:(id)arg1;
- (void)setPersonHeaderViewScrolls:(BOOL)arg1;
- (void)setPopoverCellIndexPath:(id)arg1;
- (void)setPopoverSizeUpdatesDisabled:(BOOL)arg1;
- (void)setPopoverViewInCellIndexPath:(id)arg1;
- (void)setPrimaryProperty:(int)arg1 countryCode:(id)arg2;
- (void)setSavesNewContactOnSuspend:(BOOL)arg1;
- (void)setShareMessageBody:(id)arg1;
- (void)setShareMessageBodyIsHTML:(BOOL)arg1;
- (void)setShareMessageSubject:(id)arg1;
- (void)setShouldShowLinkedPeople:(BOOL)arg1;
- (void)setShouldShowLinkingUI:(BOOL)arg1;
- (void)setShowsPeoplePickerCancelButton:(BOOL)arg1;
- (void)setStringValue:(id)arg1 forProperty:(int)arg2;
- (void)setStyleProvider:(id)arg1;
- (void)shareActionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)shareContact:(id)arg1;
- (void)shareContactByEmail:(id)arg1;
- (void)shareContactByTextMessage:(id)arg1;
- (void)shareContactFromButtonItem:(id)arg1 sender:(id)arg2;
- (void)shareContactFromButtonItem:(id)arg1;
- (id)shareMessageBody;
- (BOOL)shareMessageBodyIsHTML;
- (id)shareMessageSubject;
- (BOOL)shouldAnimateDatePickerInputView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)shouldShowAddToExistingContact;
- (BOOL)shouldShowLinkedPeople;
- (BOOL)shouldShowLinkingUI;
- (void)showImageMenu;
- (BOOL)showsPeoplePickerCancelButton;
- (void)smsComposeControllerCancelled:(id)arg1;
- (void)smsComposeControllerSendStarted:(id)arg1;
- (id)styleProvider;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (id)unknownPersonViewDelegate;
- (void)updateAllowsSettingAsPreferredCardForName;
- (void)updateEditButton;
- (void)updateLinkBarButtonItem;
- (void)updateRecord;
- (id)vCardFileName;
- (id)viewController;
- (id)viewControllerToPresentModal;
- (id)viewControllerToPresentUnknownModal;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (id)viewForActionSheet;
- (id)viewToRepresentPopover:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
