/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@class <SBUIPluginControllerHost>;

@interface SBUIPluginController : NSObject <SBPluginBundleController, SBUIPluginViewController> {
    <SBUIPluginControllerHost> *_host;
    BOOL _isVisible;
}

@property <SBUIPluginControllerHost> * host;
@property(getter=isVisible) BOOL visible;


- (void)viewDidAppear;
- (id)host;
- (BOOL)isVisible;
- (void)setVisible:(BOOL)arg1;
- (id)view;
- (void)noteInterruption;
- (BOOL)handledWiredMicButtonTap;
- (BOOL)handledMenuButtonTap;
- (BOOL)handledMenuButtonDownEvent;
- (BOOL)handledPasscodeUnlockWithCompletion:(id)arg1;
- (struct CGSize { float x1; float x2; })desiredSizeForRevealMode:(int)arg1;
- (BOOL)handleActivationEvent:(int)arg1 context:(void*)arg2;
- (void)cancelPendingActivationEvent:(int)arg1;
- (void)prepareForActivationEvent:(int)arg1 afterInterval:(double)arg2;
- (BOOL)wantsActivationEvent:(int)arg1 interval:(double*)arg2;
- (BOOL)supportedAndEnabled;
- (void)registeredWithHost;
- (void)viewDidRotateFromInterfaceOrientation:(int)arg1;
- (void)viewWillAnimateRotationToInterfaceOrientation:(int)arg1;
- (void)viewWillRotateToInterfaceOrientation:(int)arg1;
- (void)_postVisibilityDidChangeNotification;
- (void)setHost:(id)arg1;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewWillAppear;

@end