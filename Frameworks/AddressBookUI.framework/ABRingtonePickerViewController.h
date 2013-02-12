/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class ABRingtonePicker;

@interface ABRingtonePickerViewController : ABPickerViewController {
    BOOL _isTextToneViewController;
}

@property(readonly) ABRingtonePicker * picker;

- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; int x5; float x6; }*)arg1;
- (float)ab_heightToFitForViewInPopoverView;
- (void)cancelButtonClicked:(id)arg1;
- (id)init;
- (id)initAsRingtoneViewController:(BOOL)arg1;
- (void)loadView;
- (id)picker;
- (void)ringtoneSaveButtonClicked:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
