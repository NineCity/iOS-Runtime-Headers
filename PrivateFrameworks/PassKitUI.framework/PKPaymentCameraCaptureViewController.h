/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentCameraCaptureViewController : CRCameraReader <CRCameraReaderDelegate, PKPaymentSetupViewControllerCanHideSetupLaterButton> {
    PKPaymentSetupBrowseProductsViewController * _browseCardsController;
    <PKPaymentCameraCaptureViewControllerDelegate> * _cameraCaptureDelegate;
    PKCameraCaptureInstructionView * _cameraInstructionView;
    UIView * _cameraView;
    int  _context;
    BOOL  _hideSetupLaterButton;
    PKPaymentCardManualEntryViewController * _manualEntryController;
    NSArray * _outputObjects;
    <PKPaymentSetupViewControllerDelegate> * _setupDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BOOL hideSetupLaterButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_manualEntryButtonPressed:(id)arg1;
- (void)_pushManualEntryViewController;
- (void)_setupLater:(id)arg1;
- (void)cameraReader:(id)arg1 didFailWithError:(id)arg2;
- (void)cameraReader:(id)arg1 didRecognizeObjects:(id)arg2;
- (void)cameraReaderDidCancel:(id)arg1;
- (void)cameraReaderDidEnd:(id)arg1;
- (void)dealloc;
- (BOOL)hideSetupLaterButton;
- (id)init;
- (id)initWithCameraCaptureDelegate:(id)arg1;
- (id)initWithProvisioningController:(id)arg1 context:(int)arg2 setupDelegate:(id)arg3;
- (void)loadView;
- (void)pk_applyAppearance:(id)arg1;
- (void)setHideSetupLaterButton:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end