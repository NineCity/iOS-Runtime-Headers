/* Generated by RuntimeBrowser
   Image: /System/Library/AccessibilityBundles/PhotoLibraryFramework.axbundle/PhotoLibraryFramework
 */

@interface PLCameraViewAccessibility : PLCameraViewAccessibility_super {
}

+ (void)_initializeSafeCategory;

- (void)_toggleCameraButtonWasPressed:(id)arg1;
- (void)_updateOverlayControls;
- (BOOL)_zoomSliderIsAllowedVisible;
- (void)cameraControllerVideoCaptureDidStart:(id)arg1;
- (void)cameraControllerVideoCaptureDidStop:(id)arg1 withReason:(int)arg2 userInfo:(id)arg3;
- (void)hideStaticClosedIris;
- (void)openIrisWithDidFinishSelector:(SEL)arg1 withDuration:(float)arg2;
- (void)showStaticClosedIris;
- (void)showZoomSlider;
- (BOOL)zoomSliderShouldBeVisible;

@end
