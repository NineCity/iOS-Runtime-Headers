/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLPhotoBrowserControllerDelegate>, MLAlbum, MLPhoto, NSArray, NSData, NSMutableArray, NSNumberFormatter, NSString, NSTimer, PLAirPlayBackgroundView, PLAirTunesButton, PLAirTunesService, PLAirTunesServiceBrowser, PLCropOverlay, PLEmptyAlbumView, PLExpandableImageView, PLImageCache, PLImageLoadingQueue, PLImageSource, PLPhotoPrinter, PLPhotoScrubber, PLPhotoTileViewController, PLPictureFramePlugin, PLProgressView, PLPublishingAgent, PLVideoRemaker, PLVideoView, UIActionSheet, UIAlertView, UIBarButtonItem, UIImage, UIImageView, UILongPressGestureRecognizer, UINavigationButton, UINavigationController, UIPageController, UIPopoverController, UIProgressHUD, UIScrollView, UIToolbar, UITransitionView, UIView, UIViewController, UIWindow;

@interface PLPhotoBrowserController : UIViewController <UIPageControllerDelegate, PLPhotoTileViewControllerDelegate, PLVideoViewDelegate, UIScrollViewDelegate, UIToolbarDelegate, UINavigationControllerDelegate, UIAlertViewDelegate, UIActionSheetDelegate, PLImageLoadingQueueDelegate, PhotoScrubberDataSource, UIPopoverControllerDelegate, PLUIEditImageViewControllerDelegate, PLCropPhotoControllerDelegate, PLPhotoPrinterDelegate, PLSlideshowSettingsViewControllerDelegate, PLSlideshowPluginDelegate, PLAirTunesServicePickerViewControllerDelegate, AirPlayRemoteSlideshowDelegate> {
    struct CGSize { 
        float width; 
        float height; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    unsigned int _didDisplayComposeSheet : 1;
    unsigned int _didSlideImageDown : 1;
    unsigned int _isAnimatingSendToEmail : 1;
    unsigned int _overlayIsHidden : 1;
    unsigned int _videoEditingMode : 1;
    unsigned int _remaking : 1;
    unsigned int _remakeAfterPublish : 1;
    unsigned int _isCroppingPhoto : 1;
    unsigned int _clearingFullScreenView : 1;
    unsigned int _scrolling : 1;
    unsigned int _canShowCopyCallout : 1;
    unsigned int _viewIsDisappearing : 1;
    unsigned int _didRotate : 1;
    unsigned int _didFinishSuckingToTrash : 1;
    unsigned int _didStartMusicPlayback : 1;
    unsigned int _rotationDisabledUnderCropOverlay : 1;
    unsigned int _isSettingWallpaper : 1;
    unsigned int _didSetSimpleRemotePriority : 1;
    unsigned int _paging : 1;
    unsigned int _collapsing : 1;
    unsigned int _rotating : 1;
    unsigned int _reloadPhotoScrubber : 1;
    unsigned int _videoViewWillBeginEditing : 1;
    unsigned int _playVideoOnActivation : 1;
    unsigned int _remakingWasCancelled : 1;
    unsigned int _canUploadHDVideoOver3G : 1;
    unsigned int _didSetHDVideoUploadCapability : 1;
    unsigned int _didShowHDRPrompt : 1;
    unsigned int _imagesAreShuffled : 1;
    unsigned int _didAddScrubberOnNavBar : 1;
    unsigned int _didVideoViewStateChange : 1;
    unsigned int _showAirTunesOption : 1;
    unsigned int _slideShowIsStreamed : 1;
    unsigned int _airTunesSlideShowIsEnding : 1;
    SEL _actionAfterForcedRotation;
    UIBarButtonItem *_actionItem;
    UIActionSheet *_actionView;
    PLAirPlayBackgroundView *_airTunesBackgroundView;
    PLAirTunesServiceBrowser *_airTunesBrowser;
    PLAirTunesButton *_airTunesButton;
    UIPopoverController *_airTunesServicePickerPopover;
    MLAlbum *_album;
    int _albumFilter;
    UIAlertView *_alertView;
    BOOL _animating;
    } _animationFrame;
    UIView *_animationView;
    unsigned int _appInteractionDisabled;
    id _attachmentIdentifier;
    int _autohideControlCount;
    NSArray *_availableAirTunesServices;
    BOOL _beingRotated;
    unsigned int _bottomBarDisabled;
    UIToolbar *_buttonBar;
    struct __CFDictionary { } *_buttonGroups;
    UITransitionView *_cameraTransitionView;
    BOOL _canPlaySlideshow;
    UIViewController *_composeSheetViewController;
    } _contentStartSize;
    PLCropOverlay *_cropOverlay;
    int _currentAirTunesMode;
    NSString *_currentAirTunesTransition;
    int _currentButtonGroup;
    unsigned int _currentIndex;
    PLPublishingAgent *_currentPublishingAgent;
    MLPhoto *_currentVideo;
    <PLPhotoBrowserControllerDelegate> *_delegate;
    unsigned int _deletedIndex;
    PLPhotoTileViewController *_deletedTile;
    int _directionToMoveAfterSmoothScrollCompletes;
    NSData *_emailData;
    NSString *_emailDataMimeType;
    NSString *_emailImageExtension;
    PLEmptyAlbumView *_emptyCameraView;
    float _endScale;
    UIView *_fadeToBlackView;
    BOOL _fadingToBlack;
    NSMutableArray *_filteredAlbumImages;
    UIView *_fromView;
    PLImageSource *_fullScreenLowResSource;
    PLImageSource *_fullScreenSource;
    PLImageSource *_fullSizeSource;
    PLImageCache *_imageCache;
    struct __CFDictionary { } *_imageRequests;
    BOOL _isCameraApp;
    MLPhoto *_itemToBeDeleted;
    unsigned int _lastDisplayedRemoteSlideshowPhotoIndex;
    int _lastStreamedPhotoIndex;
    PLImageLoadingQueue *_loadQueue;
    UIImage *_loadedImage;
    double _maximumTrimLength;
    UINavigationController *_mmsController;
    unsigned int _navigationBarDisabled;
    UIPageController *_pageController;
    MLPhoto *_pendingPhoto;
    UIPopoverController *_peoplePickerContainer;
    void *_person;
    int _personCount;
    SEL _photoAction;
    PLPhotoPrinter *_photoPrinter;
    PLPhotoScrubber *_photoScrubber;
    UINavigationButton *_playPauseButton;
    UIBarButtonItem *_playSlideshowItem;
    BOOL _playingVideo;
    unsigned int _previousIndex;
    id _previousLeftBarButtonItem;
    id _previousRightBarButtonItem;
    unsigned int _previousSimpleRemotePriority;
    int _previousToolbarMode;
    NSTimer *_progressUpdateTimer;
    PLProgressView *_progressView;
    PLPublishingAgent *_publishingAgentToPresent;
    UILongPressGestureRecognizer *_recognizer;
    PLVideoRemaker *_remaker;
    UIView *_remakerContainerView;
    int _remakerMode;
    NSMutableArray *_reusableTiles;
    UIBarButtonItem *_rotateItem;
    unsigned int _rotationDisabled;
    UIProgressHUD *_savingPhotoHud;
    UIScrollView *_scroller;
    NSNumberFormatter *_scrubOverlayTitleFormatter;
    NSTimer *_scrubTimer;
    unsigned int _scrubbedImageIndex;
    PLImageSource *_scrubberLoupeSource;
    PLImageSource *_scrubberSource;
    BOOL _scrubbingStarted;
    BOOL _scrubbingTopSpeed;
    PLAirTunesService *_selectedAirTunesService;
    BOOL _showingNextImage;
    double _slideshowDelay;
    unsigned int _slideshowEndIndex;
    BOOL _slideshowIsEnding;
    BOOL _slideshowIsLoading;
    BOOL _slideshowIsOrigami;
    PLPictureFramePlugin *_slideshowPlugin;
    UIPopoverController *_slideshowSettingsPopover;
    UIViewController *_slideshowSettingsViewController;
    BOOL _slideshowStartedInFullScreen;
    int _slideshowStatus;
    BOOL _slideshowTimerIsRunning;
    UITransitionView *_slideshowTransitionView;
    UIView *_slideshowView;
    float _startScale;
    unsigned int _statusBarIsLocked;
    int _statusBarMode;
    struct __CFDictionary { } *_tileCache;
    UIView *_toView;
    NSTimer *_toolbarTimer;
    UINavigationButton *_trashItem;
    UIView *_tvOutContentView;
    UIView *_tvOutFromView;
    BOOL _tvOutOn;
    UIPageController *_tvOutPageController;
    UIScrollView *_tvOutScroller;
    struct __CFDictionary { } *_tvOutTileCache;
    UIView *_tvOutToView;
    UITransitionView *_tvOutTransitionView;
    UIWindow *_tvOutWindow;
    UIImageView *_viewForTrashCanAnimation;
    NSArray *_wallpaperItems;
    int _wallpaperMode;
}

@property(retain) MLAlbum * album;
@property(readonly) UIScrollView * albumScroller;
@property(retain) UIToolbar * buttonBar;
@property(readonly) BOOL canEditVideo;
@property BOOL canPlaySlideshow;
@property BOOL canShowCopyCallout;
@property MLPhoto * currentImage;
@property(readonly) PLExpandableImageView * currentImageView;
@property(readonly) PLPhotoTileViewController * currentTile;
@property unsigned int currentTileIndex;
@property(readonly) NSArray * currentToolbarItems;
@property(readonly) UIImage * currentUIImage;
@property(readonly) PLVideoView * currentVideoView;
@property <PLPhotoBrowserControllerDelegate> * delegate;
@property BOOL isCameraApp;
@property(readonly) MLPhoto * nextImage;
@property(readonly) UIPageController * pageController;
@property(retain) UIScrollView * pageControllerScrollView;
@property(readonly) UIView * pageControllerView;
@property(retain) PLPhotoScrubber * photoScrubber;
@property(readonly) UIView * remakerContainerView;

+ (void)_initializeSafeCategory;

- (id)_actionViewRootView;
- (void)_airTunesButtonWasPressed;
- (void)_airTunesServiceDidDisconnect:(id)arg1;
- (void)_airTunesServicesDidChange:(id)arg1;
- (BOOL)_airTunesSlideShowShouldContinue;
- (void)_airTunesSlideShowTimerFired;
- (void)_airTunesSlideShowViewWasTapped;
- (BOOL)_albumScrollerIsVisible;
- (void)_animateSendToEmail;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_animationDestinationRectForImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_backgroundSavePhoto:(id)arg1;
- (id)_buttonItemViewWithTag:(int)arg1;
- (BOOL)_canEmailPhoto;
- (BOOL)_canRotateCurrentItem;
- (BOOL)_canTrimCurrentVideoInPlace;
- (BOOL)_canUploadHDVideo;
- (void)_cancelProgressTimer;
- (void)_cancelRemaking;
- (void)_cancelScrubTimer;
- (void)_cancelToolbarTimer;
- (void)_cancelVideoEditingMode:(id)arg1;
- (void)_capabilitiesChanged;
- (void)_cleanseCache:(struct __CFDictionary {}**)arg1 tileIndex:(int)arg2;
- (void)_cleanseTileCachesForTVOutTileIndex:(int)arg1;
- (void)_cleanseTileCachesForTileIndex:(int)arg1;
- (void)_clearCurrentPhotoPrinter;
- (void)_clearFullScreenView;
- (void)_clearPublishingAgent:(id)arg1;
- (void)_clearTileCache;
- (void)_commonDidBeginRemaking;
- (void)_commonDidEndRemaking:(id)arg1 pathToTrimmedFile:(id)arg2 didSucceed:(BOOL)arg3;
- (void)_commonDidFinishEmailAnimation:(BOOL)arg1;
- (void)_commonRemakingProgressDidChange:(float)arg1;
- (void)_composeSheetDidDisplay;
- (void)_configureTVOutPageController;
- (void)_configureVideoViewInTile:(id)arg1;
- (int)_currentIndexFromScrollPosition;
- (BOOL)_currentItemIsPlaying;
- (BOOL)_currentItemIsVideo;
- (id)_currentTVOutTile;
- (id)_currentTVOutVideoView;
- (void)_delayedExitEditingMode;
- (void)_didLoadImage:(id)arg1 forImageID:(int)arg2;
- (BOOL)_didSetDataForCurrentItem;
- (void)_disableIdleTimer;
- (void)_discardPhotoScrubber;
- (void)_dismissActionMenuAndShowButtonBar:(BOOL)arg1;
- (void)_dismissAirtunesServicePickerPopover;
- (void)_dismissCropOverlay;
- (void)_dismissModalViewControllerAnimated:(BOOL)arg1;
- (void)_dismissPeoplePickerPopover;
- (BOOL)_dismissPopovers;
- (void)_displayLastImageForSlideshowPlugin:(id)arg1;
- (double)_durationForCurrentVideo;
- (void)_endPeoplePicker;
- (void)_endSettingWallpaper:(id)arg1;
- (void)_endSlideshow;
- (void)_endSlideshowSettings;
- (void)_enqueueReusableTile:(id)arg1;
- (void)_enterVideoEditingMode;
- (void)_externalScreenGotDisconnected;
- (void)_fadeIn;
- (void)_fadeOutAndCollapse:(BOOL)arg1;
- (void)_fadeOutAndCollapseAnimation:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_fadeToViewContents;
- (void)_fadeToViewContentsAnimation:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_finishedSlidingImageDown:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_finishedSlidingImageUp:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_flushTileCache;
- (void)_flushTileCachePreservingTileAtIndex:(unsigned int)arg1 newTileIndex:(unsigned int)arg2;
- (void)_forceDismissActionSheet:(BOOL)arg1 enableToolbarTimer:(BOOL)arg2;
- (void)_forceDismissAlertView:(BOOL)arg1 enableToolbarTimer:(BOOL)arg2;
- (void)_forceRemoveSavingPhotoHUD;
- (id)_fullScreenPreviewImageForPhoto:(id)arg1;
- (id)_getButtonForAirTunesMode:(int)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; int x5; float x6; }*)arg1;
- (void)_handleDirectionButtonMouseDown:(id)arg1 direction:(int)arg2;
- (void)_hideCallout;
- (void)_hideToolbarFired:(id)arg1;
- (void)_hideTrimUI;
- (id)_imageForMode:(int)arg1 isHighlighted:(BOOL)arg2;
- (BOOL)_isAirPlayEnabled;
- (BOOL)_isScrolling;
- (id)_itemsForButtonGroup:(int)arg1;
- (void)_loadImageForTile:(id)arg1 fromImageSource:(id)arg2;
- (void)_loadSlideshowPlugin;
- (void)_longPressRecognized:(id)arg1;
- (id)_lowResolutionPreviewImageForPhoto:(id)arg1;
- (void)_makeTilesPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (id)_modelImageForTileIndex:(unsigned int)arg1;
- (id)_navigationBar;
- (id)_navigationController;
- (void)_networkReachabilityDidChange:(id)arg1;
- (id)_newAlbumFromImages:(id)arg1 startingAtIndex:(unsigned int)arg2;
- (id)_newTileAtIndex:(unsigned int)arg1 withPhoto:(id)arg2 size:(struct CGSize { float x1; float x2; })arg3 isTileTVOut:(BOOL)arg4;
- (id)_nextAirTunesSlideshowPhoto;
- (void)_overlayAnimationFinished;
- (void)_performCloseTrashAnimation;
- (void)_performOpenTrashAnimation;
- (void)_performSendViaEmail;
- (void)_photoScrubberDidBeginScrubbing:(id)arg1;
- (void)_photoScrubberDidEndScrubbing:(id)arg1;
- (void)_photoScrubberValueDidChange:(id)arg1;
- (void)_playTimerFired;
- (void)_preloadNextImage;
- (void)_preloadTileAtIndex:(unsigned int)arg1;
- (void)_prepareForSucking;
- (void)_prepareForTVOut;
- (void)_prepareToFade;
- (void)_processAlbumChangedWithItems:(id)arg1 albumModificationMode:(int)arg2;
- (void)_processUpdatedPhotos:(id)arg1;
- (void)_publishToMobileMeClicked;
- (void)_publishToYouTubeClicked;
- (void)_publishingAgentDidEndRemaking:(id)arg1;
- (void)_publishingAgentDidFinishPublishing:(id)arg1;
- (void)_publishingAgentDidStartPublishing:(id)arg1;
- (void)_publishingAgentDidStartRemaking:(id)arg1;
- (void)_publishingAgentsDidForceCancel:(id)arg1;
- (void)_reallySendViaEmail:(id)arg1;
- (void)_reallyShowPeoplePicker;
- (void)_redisplayActionSheet:(id)arg1;
- (void)_redisplayPopovers;
- (void)_removeAirTunesOption;
- (void)_removeAirTunesSlideShowViewAndReset;
- (void)_removeProgressView;
- (void)_removeSavingPhotoHUDForPhoto:(id)arg1;
- (void)_removeTVOutWindow;
- (void)_repositionPopoversIfNecessary;
- (void)_resetScrubTimerForDirection:(int)arg1;
- (void)_resetToolbarTimer:(float)arg1;
- (void)_rotationAnimation:(id)arg1 finished:(BOOL)arg2 context:(struct { id x1; int x2; }*)arg3;
- (void)_runLKTransition:(id)arg1 transitionView:(id)arg2 fromView:(id)arg3 toView:(id)arg4;
- (void)_runLKTransition:(id)arg1;
- (void)_savePhoto:(BOOL)arg1;
- (void)_savePhotoFinished:(id)arg1;
- (void)_scrubTimerFired:(id)arg1;
- (void)_setAutohidesControls:(BOOL)arg1;
- (void)_setImageAsHomeScreenAndLockScreenClicked:(id)arg1;
- (void)_setImageAsHomeScreenClicked:(id)arg1;
- (void)_setImageAsLockScreenClicked:(id)arg1;
- (void)_setMusicIsPlaying:(BOOL)arg1 forPhoto:(id)arg2;
- (void)_setMusicIsPlaying:(BOOL)arg1;
- (void)_setSelectedAirTunesService:(id)arg1;
- (void)_setShouldRasterizeOverlays:(BOOL)arg1;
- (void)_setupButtonBar;
- (void)_setupPhotoScrubber:(BOOL)arg1;
- (BOOL)_shouldRespondToButtonBarButtons;
- (BOOL)_shouldShowAssignToContactOption;
- (BOOL)_shouldShowVideoPlayOverlay;
- (void)_showButtonGroup:(int)arg1 withDuration:(double)arg2;
- (void)_showCompositionForPublishingBundleNamed:(id)arg1;
- (void)_showConfirmationForPassthroughTrimming:(id)arg1;
- (void)_showCropOverlayWithTitle:(id)arg1 subtitle:(id)arg2 cropButtonTitle:(id)arg3 disablingRotation:(BOOL)arg4 duration:(float)arg5;
- (void)_showHDRPromptIfNeeded;
- (void)_showImageAtIndex:(unsigned int)arg1;
- (void)_showMMSComposeSheet;
- (void)_showNavigationBarAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_showOverlaysForResume;
- (void)_showPeoplePicker;
- (void)_showSavingPhotoHUDForPhoto:(id)arg1;
- (void)_showSlideshowSettings:(id)arg1;
- (void)_showTileCache;
- (void)_showTrimUI;
- (void)_showVideoTooLongAlert;
- (void)_simpleRemoteActionDidOccur:(id)arg1;
- (void)_slideshowViewWasTapped:(id)arg1;
- (void)_startAirTunesSlideShow;
- (void)_startSettingWallpaper:(id)arg1;
- (void)_startSlideshowTimer;
- (int)_statusBarStyle;
- (void)_stopAirTunesSlideShow:(BOOL)arg1;
- (void)_stopScrubbing:(id)arg1;
- (void)_stopSlideshowForResignActive:(id)arg1;
- (void)_stopSlideshowTimer;
- (void)_stopSlideshowWithStatus:(int)arg1;
- (void)_stopStreamingPhotosToAirTunes;
- (void)_stopVideoPlaybackForIndex:(int)arg1;
- (void)_streamPhoto:(id)arg1 withTransition:(id)arg2;
- (id)_tileForTileIndex:(unsigned int)arg1 shouldCreate:(BOOL)arg2 tileCache:(struct __CFDictionary { }*)arg3;
- (int)_toolbarMode;
- (void)_transcodeVideoUsingMode:(int)arg1;
- (void)_transitionToImage:(id)arg1 fromOldIndex:(int)arg2 toNewIndex:(int)arg3 transition:(int)arg4 transitionView:(id)arg5;
- (void)_transitionToImage:(id)arg1 fromOldIndex:(int)arg2 toNewIndex:(int)arg3 transition:(int)arg4;
- (void)_trashClosedAnimationFinished;
- (void)_trashOpenAnimationFinished;
- (void)_trimVideo:(id)arg1;
- (void)_updateButtonBar:(BOOL)arg1;
- (void)_updateFilteredImagesAndShuffle:(BOOL)arg1;
- (void)_updateNavigationBar;
- (void)_updateProgressView;
- (void)_updateTVOutOffset;
- (void)_updateTileCache:(struct __CFDictionary {}**)arg1;
- (void)_updateVideoScrubberWidth;
- (id)_visibleViewController;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)airPlayRemoteSlideshowAssetKeys:(id)arg1;
- (void)airTunesServicePickerViewController:(id)arg1 didSelectService:(id)arg2;
- (BOOL)airplayRemoteSlideshow:(id)arg1 handleEvent:(id)arg2;
- (BOOL)airplayRemoteSlideshow:(id)arg1 requestAssetWithInfo:(id)arg2 completion:(id)arg3;
- (id)album;
- (void)albumChanged:(id)arg1;
- (id)albumScroller;
- (void)albumScrollerDidEndSmoothScroll;
- (void)albumsChanged:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)animateToIndex;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationResumed:(id)arg1;
- (void)applicationWillBeginSuspendAnimation:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (BOOL)autohideControlsIsEnabled;
- (id)buttonBar;
- (BOOL)canEditVideo;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)canPlaySlideshow;
- (BOOL)canShowCopyCallout;
- (BOOL)canShowNextImage:(BOOL)arg1;
- (BOOL)canShowNextImage;
- (BOOL)canShowPreviousImage;
- (void)cancelCropPhoto:(id)arg1;
- (void)composeSheetIsReady;
- (void)copy:(id)arg1;
- (void)cropOverlayWasCancelled:(id)arg1;
- (void)cropOverlayWasOKed:(id)arg1;
- (void)cropPhoto:(id)arg1;
- (id)currentImage;
- (id)currentImageView;
- (id)currentTile;
- (unsigned int)currentTileIndex;
- (id)currentToolbarItems;
- (id)currentUIImage;
- (id)currentVideoView;
- (void)dealloc;
- (id)delegate;
- (void)deleteCurrentPhoto:(id)arg1;
- (void)deleteImageClicked:(id)arg1;
- (void)didFinishSuckingToTrash:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)didLoadFullScreenImage:(id)arg1 forPhotoAtIndex:(unsigned int)arg2;
- (void)didMoveToPhotoAtIndex:(unsigned int)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)disableAutohideControls;
- (void)displayActionMenu:(id)arg1;
- (void)displayCropOverlay:(id)arg1;
- (void)displayNextPhoto:(id)arg1;
- (void)displayPreviousPhoto:(id)arg1;
- (double)durationForTransition:(int)arg1;
- (void)editImageViewController:(id)arg1 didEditImageWithOptions:(id)arg2;
- (void)editImageViewControllerDidCancel:(id)arg1;
- (void)enableAutohideControls;
- (void)endSettingWallpaper;
- (void)fadeInAnimation:(id)arg1 finished:(id)arg2;
- (void)finishDelete;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForCurrentImageAtDefaultScale;
- (void)hideOverlays;
- (void)hideOverlaysWithDuration:(float)arg1 hideStatusBar:(BOOL)arg2;
- (void)hideToolbarWithDuration:(double)arg1;
- (void)imageLoadingQueue:(id)arg1 didLoadImage:(id)arg2 forObject:(id)arg3 fromSource:(id)arg4;
- (void)imageViewDidSwitchToFullSizeImage:(id)arg1;
- (void)imageViewWillSwitchToFullSizeImage:(id)arg1;
- (id)initWithImageCache:(id)arg1;
- (BOOL)isCameraApp;
- (BOOL)isPhotoTileParentPageControllerAnimating:(id)arg1;
- (BOOL)isRotationEnabled;
- (void)loadCurrentConfiguration:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)mouseDownInLeftButton:(id)arg1;
- (void)mouseDownInRightButton:(id)arg1;
- (id)nextImage;
- (int)numPhotosInAlbumForPhotoScrubber:(id)arg1;
- (id)pageController:(id)arg1 viewControllerLeftOfController:(id)arg2;
- (id)pageController:(id)arg1 viewControllerRightOfController:(id)arg2;
- (id)pageController;
- (void)pageControllerDidEndPaging:(id)arg1;
- (id)pageControllerScrollView;
- (id)pageControllerView;
- (void)pageControllerWillBeginPaging:(id)arg1;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (id)photoCountFormatter;
- (void)photoPrinterDidDismissPrintingOptions:(id)arg1;
- (void)photoPrinterWillPresentPrintingOptions:(id)arg1;
- (id)photoScrollerTitle;
- (id)photoScrubber:(id)arg1 loadImageSynchronously:(BOOL)arg2 atIndex:(int)arg3 forLoupe:(BOOL)arg4;
- (id)photoScrubber;
- (void)photoTileViewController:(id)arg1 didDisappear:(BOOL)arg2;
- (void)photoTileViewController:(id)arg1 willAppear:(BOOL)arg2;
- (BOOL)photoTileViewControllerAllowsEditing:(id)arg1;
- (void)photoTileViewControllerCancelImageRequests:(id)arg1;
- (void)photoTileViewControllerDidEndGesture:(id)arg1;
- (void)photoTileViewControllerDidSetHDRTypeForPhoto:(id)arg1;
- (BOOL)photoTileViewControllerIsDisplayingLandscape:(id)arg1;
- (void)photoTileViewControllerRequestsFullScreenImage:(id)arg1;
- (void)photoTileViewControllerRequestsFullSizeImage:(id)arg1;
- (void)photoTileViewControllerSingleTap:(id)arg1;
- (void)photoTileViewControllerWillBeginGesture:(id)arg1;
- (void)playSlideshowClicked:(id)arg1;
- (void)playSlideshowFromAlbumUsingOrigami:(BOOL)arg1;
- (void)playSlideshowFromPhotoViewer;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)prepareForSlideshow;
- (void)printCurrentPhoto:(id)arg1;
- (void)publishToMobileMeClicked;
- (void)publishToYouTubeClicked;
- (id)remakerContainerView;
- (void)resetToolbarTimer;
- (void)rotateCurrentPhoto:(id)arg1;
- (void)rotateImageByDegrees:(int)arg1;
- (id)rotatingFooterView;
- (void)saveCurrentPhoto:(id)arg1;
- (void)savePhotoToCameraRoll;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)sendViaEmailClicked;
- (void)sendViaMMSClicked;
- (void)setAirTunesMode:(int)arg1;
- (void)setAlbum:(id)arg1;
- (void)setAlbumScrollerEnabled:(BOOL)arg1;
- (void)setAppInteractionDisabled:(BOOL)arg1;
- (void)setBottomBarDisabled:(BOOL)arg1;
- (void)setButtonBar:(id)arg1;
- (void)setCanPlaySlideshow:(BOOL)arg1;
- (void)setCanShowCopyCallout:(BOOL)arg1;
- (void)setCurrentImage:(id)arg1;
- (void)setCurrentTileIndex:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsCameraApp:(BOOL)arg1;
- (void)setNavigationBarDisabled:(BOOL)arg1;
- (void)setPageControllerScrollView:(id)arg1;
- (void)setPhotoScrubber:(id)arg1;
- (void)setRotationDisabled:(BOOL)arg1;
- (void)setSearchForAirTunesService:(BOOL)arg1;
- (void)setStatusBarIsLocked:(BOOL)arg1;
- (void)setVideoEditingMode:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setVideoEditingMode:(BOOL)arg1;
- (void)showFullScreenPhotoEditTools;
- (void)showNextImageWithTransition:(int)arg1;
- (void)showOverlaysWithDuration:(float)arg1;
- (void)showPreviousImageWithTransition:(int)arg1;
- (void)slideshowPluginDidDisplayFinalImage:(id)arg1;
- (void)slideshowPluginReadyToBegin:(id)arg1;
- (id)slideshowSettingsViewController:(id)arg1 alternateTransitionLocalizationsForAirPlayService:(id)arg2;
- (void)slideshowSettingsViewController:(id)arg1 didSelectAirPlayService:(id)arg2;
- (id)slideshowSettingsViewController:(id)arg1 slideshowSettingsForAirPlayService:(id)arg2;
- (id)slideshowSettingsViewController:(id)arg1 transitionKeysForAirPlayService:(id)arg2;
- (void)slideshowSettingsViewControllerPlayButtonWasPressed:(id)arg1;
- (void)smsComposeControllerCancelled:(id)arg1;
- (void)smsComposeControllerDataInserted:(id)arg1;
- (void)smsComposeControllerSendStarted:(id)arg1;
- (void)startSettingWallpaper;
- (BOOL)statusBarIsLocked;
- (int)statusBarMode;
- (void)stopSlideshow:(BOOL)arg1;
- (void)storeCurrentConfiguration:(id)arg1;
- (void)suckToTrash:(id)arg1 transitionParent:(id)arg2;
- (unsigned int)tileIndexOfImage:(id)arg1;
- (void)togglePlay;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)updateAfterAnimation;
- (void)updateAfterCollapse;
- (void)updateNavigationItemTitle;
- (void)updateOverlays;
- (void)updateProgressView;
- (void)updateTVOutStateAfterAnimation;
- (BOOL)videoEditingMode;
- (void)videoRemaker:(id)arg1 progressDidChange:(float)arg2;
- (void)videoRemakerDidBeginRemaking:(id)arg1;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (void)videoView:(id)arg1 remakingProgressDidChange:(float)arg2;
- (void)videoView:(id)arg1 scrubberWasCreated:(id)arg2;
- (BOOL)videoViewCanBeginPlayback:(id)arg1;
- (BOOL)videoViewCanCreateMetadata:(id)arg1;
- (void)videoViewDidBeginEditing:(id)arg1;
- (void)videoViewDidBeginPlayback:(id)arg1;
- (void)videoViewDidBeginRemaking:(id)arg1;
- (void)videoViewDidBeginScrubbing:(id)arg1;
- (void)videoViewDidCancelEditing:(id)arg1;
- (void)videoViewDidEndPlayback:(id)arg1 didFinish:(BOOL)arg2;
- (void)videoViewDidEndRemaking:(id)arg1 didSucceed:(BOOL)arg2;
- (void)videoViewDidEndScrubbing:(id)arg1;
- (void)videoViewDidPausePlayback:(id)arg1;
- (id)videoViewSelectedAirTunesService:(id)arg1;
- (BOOL)videoViewShouldDisplayScrubber:(id)arg1;
- (BOOL)videoViewShouldPlayImmediately:(id)arg1;
- (BOOL)videoViewShouldRespondToPlayOverlayTap:(id)arg1;
- (void)videoViewWillBeginEditing:(id)arg1;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willPresentActionSheet:(id)arg1;

@end
