/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

@class NSTimer, UIBarButtonItem, UIProgressIndicator;

@interface AccountSettingsUIDetailController : PSListController {
    BOOL _addedToTaskList;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    NSTimer *_idleJiggleTimer;
    void *_powerAssertion;
    UIProgressIndicator *_progressIndicator;
    BOOL _validationInProgress;
}

@property(retain) UIBarButtonItem * cancelButton;
@property(retain) UIBarButtonItem * doneButton;

+ (BOOL)shouldPresentAsModalSheet;

- (id)_actionSheetWithButtons:(id)arg1 title:(id)arg2 destructive:(BOOL)arg3 cancelButtonIndex:(int)arg4 context:(id)arg5;
- (id)_alertViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonIndex:(int)arg4 context:(id)arg5;
- (void)_jiggleIdleTimer;
- (void)_layoutProgressIndicator;
- (void)_preventSleepAndDimming:(BOOL)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)cancelButton;
- (void)cancelButtonClicked:(id)arg1;
- (id)confirmDeleteAccountWithDataclasses:(id)arg1 context:(id)arg2;
- (void)confirmationView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dealloc;
- (void)dismissWithAnimation:(BOOL)arg1;
- (id)doneButton;
- (void)doneButtonClicked:(id)arg1;
- (id)init;
- (BOOL)presentedAsModalSheet;
- (void)reloadParentSpecifier;
- (void)reloadParentSpecifiers;
- (void)removeParentSpecifier;
- (void)setCancelButton:(id)arg1;
- (void)setCellsChecked:(BOOL)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setTaskCompletionEnabled:(BOOL)arg1;
- (BOOL)shouldReloadSpecifiersOnResume;
- (id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(BOOL)arg4 cancelButtonIndex:(int)arg5 context:(id)arg6;
- (id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(BOOL)arg4 context:(id)arg5;
- (id)specifiers;
- (void)startValidationWithPrompt:(id)arg1 userInteraction:(BOOL)arg2;
- (void)startValidationWithPrompt:(id)arg1;
- (void)stopValidationWithPrompt:(id)arg1 showButtons:(BOOL)arg2 animated:(BOOL)arg3;
- (void)stopValidationWithPrompt:(id)arg1 showButtons:(BOOL)arg2;
- (void)updateValidationPrompt:(id)arg1;
- (void)viewDidLoad;

@end
