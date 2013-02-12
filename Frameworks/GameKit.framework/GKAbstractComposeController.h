/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class ABPeoplePickerNavigationController, GKImageBackgroundView, GKRecipientGenerator, GKRecipientSelectionView, GKUITheme, NSDictionary, NSMutableArray, NSString, UIImageView, UINavigationController, UINavigationItem, UIPopoverController, UIResponder, UITextView, UIView;

@interface GKAbstractComposeController : UIViewController <UIActionSheetDelegate, UIModalViewDelegate, UITableViewDelegate, ABPeoplePickerNavigationControllerDelegate, UITextViewDelegate, UIPopoverControllerDelegate> {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    unsigned int _needsSetupForNewRecipient : 1;
    unsigned int _visible : 1;
    unsigned int _newRecipient : 1;
    NSDictionary *_abPropertiesCache;
    UIView *_accessoryView;
    GKImageBackgroundView *_backgroundView;
    UIImageView *_beneathMessageView;
    id _composeDelegate;
    BOOL _composeFieldsHidden;
    UIPopoverController *_composePopoverController;
    NSString *_lastMessage;
    } _lastSelectedRange;
    UITextView *_messageEntryView;
    UIImageView *_messageView;
    BOOL _mightHaveAccessoryView;
    UINavigationItem *_navItem;
    UINavigationController *_navigationController;
    ABPeoplePickerNavigationController *_peoplePickerController;
    } _previousKeyboardFrame;
    GKRecipientGenerator *_recipientGenerator;
    GKRecipientSelectionView *_recipientSelectionView;
    NSMutableArray *_recipients;
    UIResponder *_savedFirstResponder;
    int _savedStatusBarStyle;
    BOOL _sending;
    GKUITheme *_theme;
}

@property(retain) UIView * accessoryView;
@property(readonly) UIImageView * beneathMessageView;
@property id composeDelegate;
@property BOOL composeFieldsHidden;
@property(retain) UIPopoverController * composePopoverController;
@property(retain) NSString * lastMessage;
@property(readonly) UITextView * messageEntryView;
@property BOOL mightHaveAccessoryView;
@property(readonly) ABPeoplePickerNavigationController * peoplePickerController;
@property struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } previousKeyboardFrame;
@property(readonly) GKRecipientSelectionView * recipientSelectionView;
@property(readonly) NSMutableArray * recipients;
@property(retain) UIResponder * savedFirstResponder;
@property int savedStatusBarStyle;
@property BOOL sending;
@property(retain) GKUITheme * theme;

- (void)_localeChanged:(id)arg1;
- (id)_recipientGenerator;
- (void)_resetEntryViewSize;
- (void)_resetEntryViewSizeForInterfaceOrientation:(int)arg1 withKeyboardFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (void)_resetPopoverPosition;
- (void)_setupRecipientSelectionView;
- (void)_updateUI;
- (id)accessoryView;
- (void)addRecipient:(void*)arg1 property:(int)arg2 identifier:(int)arg3 address:(id)arg4 makingContentEntryViewActive:(BOOL)arg5;
- (void)addRecipients:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (id)beneathMessageView;
- (void)cancelButtonClicked:(id)arg1;
- (void)composeControllerCancelled:(id)arg1;
- (id)composeDelegate;
- (BOOL)composeFieldsHidden;
- (id)composePopoverController;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)dismissModalViewControllerAnimated:(BOOL)arg1;
- (void)dismissPeoplePicker:(id)arg1;
- (void)dismissPeoplePicker;
- (id)fadeTransition;
- (id)gkBackgroundView;
- (id)initWithNavigationController:(id)arg1;
- (BOOL)isNewRecipient;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (id)lastMessage;
- (void)layoutSubviewsForOrientation:(int)arg1;
- (void)loadView;
- (void)makeContentEntryViewActive;
- (void)makeContentEntryViewInactive;
- (void)makeRecipientEntryViewActive;
- (void)makeRecipientEntryViewInactive;
- (id)messageEntryView;
- (BOOL)mightHaveAccessoryView;
- (id)navigationItem;
- (id)peoplePickerController;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldAllowSelectingPerson:(void*)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldDismissAfterInsertEditorConfirmed:(BOOL)arg2 withPerson:(void*)arg3;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldShowInsertEditorForPerson:(void*)arg2 insertProperty:(int*)arg3 copyInsertValue:(id*)arg4 copyInsertLabel:(id*)arg5;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)popFirstResponder;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })previousKeyboardFrame;
- (id)proposedRecipients;
- (void)pushFirstResponder;
- (void)recipientSelectionView:(id)arg1 contentSizeChanged:(struct CGSize { float x1; float x2; })arg2;
- (void)recipientSelectionView:(id)arg1 didChangeSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)recipientSelectionView:(id)arg1 isValidAddress:(id)arg2;
- (id)recipientSelectionView:(id)arg1 recipientForAddress:(id)arg2;
- (id)recipientSelectionView:(id)arg1 recipientForRecord:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (id)recipientSelectionView:(id)arg1 recipientsForText:(id)arg2;
- (void)recipientSelectionView:(id)arg1 showPeoplePickerWithDelegate:(id)arg2;
- (id)recipientSelectionView;
- (void)recipientSelectionViewFinishedWithPeoplePicker:(id)arg1;
- (void)recipientSelectionViewRecipientListChanged:(id)arg1;
- (void)recipientSelectionViewReturnPressed:(id)arg1;
- (void)recipientSelectionViewTextChanged:(id)arg1;
- (id)recipients;
- (void)reload:(BOOL)arg1;
- (id)savedFirstResponder;
- (int)savedStatusBarStyle;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (BOOL)sending;
- (void)setAccessoryView:(id)arg1;
- (void)setComposeDelegate:(id)arg1;
- (void)setComposeFieldsHidden:(BOOL)arg1;
- (void)setComposePopoverController:(id)arg1;
- (void)setLastMessage:(id)arg1;
- (void)setMightHaveAccessoryView:(BOOL)arg1;
- (void)setPreviousKeyboardFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSavedFirstResponder:(id)arg1;
- (void)setSavedStatusBarStyle:(int)arg1;
- (void)setSending:(BOOL)arg1;
- (void)setTheme:(id)arg1;
- (void)setupForNewRecipient;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)showPeoplePickerWithDelegate:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (id)theme;
- (void)updateEnablednessOfSendButton;
- (void)updateNavigationButtons;
- (void)updateTitle;
- (void)updateViewVisibility;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
