/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Conference.framework/Conference
 */

@class <CNFRegWizardControllerDelegate>;

@interface CNFRegWizardController : PSSetupController {
    struct { 
        unsigned int automaticKeyboardWasDisabled : 1; 
        unsigned int shouldListenForSuspension : 1; 
        unsigned int canStartNested : 1; 
        unsigned int canShowSplashScreen : 1; 
        unsigned int canShowDisabledScreen : 1; 
        unsigned int reloadOnViewWillAppear : 1; 
    <CNFRegWizardControllerDelegate> *_firstRunDelegate;
    id _resignListener;
    id _resumeListener;
    } _wizardFlags;
}

@property BOOL canShowDisabledScreen;
@property BOOL canShowSplashScreen;
@property BOOL canStartNested;
@property(readonly) int currentControllerDisplayStyle;
@property <CNFRegWizardControllerDelegate> * firstRunDelegate;
@property BOOL reloadOnViewWillAppear;

+ (int)_firstRunState;
+ (void)setGlobalAppearanceStyle:(int)arg1;
+ (void)setSupportsAutoRotation:(BOOL)arg1;
+ (BOOL)shouldShowFirstRunController:(BOOL)arg1;
+ (BOOL)shouldShowFirstRunController;

- (void)_startListeningForResignResume;
- (void)_stopListeningForResignResume;
- (BOOL)canShowDisabledScreen;
- (BOOL)canShowSplashScreen;
- (BOOL)canStartNested;
- (id)controllerClassesToShow:(BOOL)arg1;
- (id)controllerToShow:(BOOL)arg1;
- (id)controllerToShow;
- (id)controllersToShow:(BOOL)arg1;
- (id)controllersToShow;
- (int)currentControllerDisplayStyle;
- (void)dealloc;
- (void)dismiss:(BOOL)arg1 aliased:(BOOL)arg2;
- (void)dismissWithState:(unsigned int)arg1;
- (void)firstRunController:(id)arg1 finishedWithState:(unsigned int)arg2;
- (id)firstRunDelegate;
- (id)init;
- (BOOL)reloadOnViewWillAppear;
- (void)setCanShowDisabledScreen:(BOOL)arg1;
- (void)setCanShowSplashScreen:(BOOL)arg1;
- (void)setCanStartNested:(BOOL)arg1;
- (void)setFirstRunDelegate:(id)arg1;
- (void)setReloadOnViewWillAppear:(BOOL)arg1;
- (void)setupController;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
