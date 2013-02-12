/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CNFRegLearnMoreButton, NSString, PSSpecifier;

@interface CNFRegSignInController : CNFRegFirstRunController <CNFRegCreateAccountControllerDelegate> {
    PSSpecifier *_actionGroupSpecifier;
    id _alertHandler;
    PSSpecifier *_createAccountButtonSpecifier;
    BOOL _hideLearnMoreButton;
    CNFRegLearnMoreButton *_learnMoreButton;
    PSSpecifier *_passwordSpecifier;
    NSString *_pendingPassword;
    NSString *_pendingUsername;
    PSSpecifier *_signInButtonSpecifier;
    unsigned int _signinFailureCount;
    PSSpecifier *_usernameSpecifier;
}

@property(copy) id alertHandler;
@property BOOL hideLearnMoreButton;
@property(copy) NSString * pendingPassword;
@property(copy) NSString * pendingUsername;
@property unsigned int signinFailureCount;

- (void)_buildCreateAccountButtonSpecifierCache:(id)arg1;
- (void)_buildCredentialSpecifierCache:(id)arg1;
- (void)_buildSignInGroupSpecifierCache:(id)arg1;
- (void)_buildSpecifierCache:(id)arg1;
- (void)_finishSignInWithAccount:(id)arg1 animated:(BOOL)arg2;
- (void)_handleTimeout;
- (void)_incrementSigninFailureCount;
- (void)_launchForgotPasswordUrl;
- (void)_layoutLearnMoreButton;
- (void)_resetSigninFailureCount;
- (void)_resignFirstResponders;
- (void)_returnKeyWasPressed:(id)arg1;
- (id)_rightButtonItem;
- (void)_setFieldsEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setupAppearBlockForAccountAuthorizeWithAuthID:(id)arg1 token:(id)arg2;
- (void)_setupAppearBlockForNewPasswordWithAppleID:(id)arg1;
- (void)_setupEventHandlers;
- (void)_showAccountNotAuthorizedSheetWithAuthID:(id)arg1 token:(id)arg2;
- (void)_showNewPasswordNeededSheetWithAppleID:(id)arg1;
- (void)_showRegistrationFailureWithError:(id)arg1;
- (void)_showSigninFailureAlert;
- (void)_startTimeout;
- (void)_updateControllerState;
- (void)_updateDescriptionText;
- (void)_updateUI;
- (id)alertHandler;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)bundle;
- (void)cancelButtonTapped;
- (void)createAccountControllerDidFinish:(id)arg1 withAppleId:(id)arg2 andPassword:(id)arg3;
- (void)dealloc;
- (id)getPasswordForSpecifier:(id)arg1;
- (id)getUserNameForSpecifier:(id)arg1;
- (void)handleURL:(id)arg1;
- (BOOL)hideLearnMoreButton;
- (id)init;
- (void)learnMorePressed:(id)arg1;
- (void)loadView;
- (id)logName;
- (void)passwordFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2;
- (BOOL)passwordIsEmpty;
- (id)passwordTextField;
- (id)pendingPassword;
- (id)pendingUsername;
- (void)setAlertHandler:(id)arg1;
- (void)setCreateAccountButtonEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHideLearnMoreButton:(BOOL)arg1;
- (void)setPasswordEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setPendingPassword:(id)arg1;
- (void)setPendingUsername:(id)arg1;
- (void)setSignInButtonEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSigninFailureCount:(unsigned int)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setUsernameEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showCreateAccountController;
- (void)signInTapped:(id)arg1;
- (unsigned int)signinFailureCount;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)usernameFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2;
- (BOOL)usernameIsEmpty;
- (id)usernameTextField;
- (id)validationString;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willBecomeActive;
- (void)willResignActive;

@end
