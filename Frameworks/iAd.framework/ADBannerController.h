/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@class ADBannerViewURLActionHandler, ADHostWindowController, ADStatusBarAttributes, CPDistributedMessagingCenter, NSString, UIView<ADBannerControllerDelegate>;

@interface ADBannerController : NSObject <ADMessageProxyItem> {
    BOOL _bannerWillLeaveApplication;
    double _createdAt;
    ADBannerViewURLActionHandler *_currentURLHandler;
    UIView<ADBannerControllerDelegate> *_delegate;
    ADHostWindowController *_hostWindowController;
    struct dispatch_queue_s { } *_ipcReplyQueue;
    BOOL _isOpen;
    NSString *_proxyItemIdentifier;
    CPDistributedMessagingCenter *_remoteMessageCenter;
    BOOL _serverReachable;
    ADStatusBarAttributes *_statusBarAttributesBackup;
}

@property(readonly) BOOL bannerWillLeaveApplication;
@property double createdAt;
@property(retain) ADBannerViewURLActionHandler * currentURLHandler;
@property UIView<ADBannerControllerDelegate> * delegate;
@property(retain) ADHostWindowController * hostWindowController;
@property struct dispatch_queue_s { }* ipcReplyQueue;
@property(readonly) BOOL isOpen;
@property(readonly) NSString * proxyItemIdentifier;
@property(retain) CPDistributedMessagingCenter * remoteMessageCenter;
@property(readonly) BOOL serverReachable;
@property(retain) ADStatusBarAttributes * statusBarAttributesBackup;

- (void)_close;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidResignActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)backupStatusBarUI;
- (void)bannerFrameDidChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 orientation:(int)arg2;
- (void)bannerKeysDidChange:(id)arg1;
- (void)bannerViewDidFailToReceiveAddWithErrorMessage:(id)arg1 userInfo:(id)arg2;
- (void)bannerViewDidLoadAdMessage:(id)arg1 userInfo:(id)arg2;
- (void)bannerViewReachbilityChanged:(id)arg1 userInfo:(id)arg2;
- (void)bannerViewUrlActionMessage:(id)arg1 userInfo:(id)arg2;
- (BOOL)bannerWillLeaveApplication;
- (void)cancelBannerViewAction;
- (void)checkForSessionOpenTimeout;
- (void)close;
- (void)controllerKeysDidChange:(id)arg1;
- (double)createdAt;
- (id)currentURLHandler;
- (void)dealloc;
- (void)deferredDispatchToAdViewDelegate:(SEL)arg1 parameter:(id)arg2;
- (id)delegate;
- (id)description;
- (void)deviceOrientationDidChangeNotification:(id)arg1;
- (void)dismissHostWindowController;
- (void)executeBannerViewActionFrom:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withClickLocation:(struct CGPoint { float x1; float x2; })arg2;
- (void)handleBannerVisibilityHeartbeatNotification:(id)arg1;
- (id)hostWindowController;
- (id)init;
- (void)interstitialPresentedInView:(BOOL)arg1;
- (void)interstitialTouchedDismissAreaWithControlEvent:(unsigned int)arg1;
- (void)interstitialViewExpiredAndWasUnloaded:(id)arg1 userInfo:(id)arg2;
- (void)interstitialWasRemovedFromSuperview:(id)arg1;
- (struct dispatch_queue_s { }*)ipcReplyQueue;
- (BOOL)isOpen;
- (id)keysDidChangeMessageDictionary:(id)arg1;
- (void)loadDebuggerFromPath:(id)arg1 portName:(id)arg2;
- (void)loadLocalAd:(id)arg1;
- (void)open;
- (id)proxyItemIdentifier;
- (void)refuseBannerViewAction;
- (id)remoteMessageCenter;
- (void)restoreStatusBarUI;
- (void)sendMessageName:(id)arg1 userInfo:(id)arg2;
- (void)serverCenterDidTerminate;
- (BOOL)serverReachable;
- (void)sessionDidOpenMesssage:(id)arg1 userInfo:(id)arg2;
- (double)sessionOpenTimeoutInterval;
- (void)setAuthenticationUserName:(id)arg1;
- (void)setCreatedAt:(double)arg1;
- (void)setCurrentURLHandler:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostWindowController:(id)arg1;
- (void)setIpcReplyQueue:(struct dispatch_queue_s { }*)arg1;
- (void)setRemoteMessageCenter:(id)arg1;
- (void)setStatusBarAttributesBackup:(id)arg1;
- (id)statusBarAttributesBackup;
- (void)storyboardDidChangeSupportedOrientations:(id)arg1 userInfo:(id)arg2;
- (void)storyboardDidFinishFirstSignificantDraw:(id)arg1 userInfo:(id)arg2;
- (void)storyboardDidTransitionIn:(id)arg1 userInfo:(id)arg2;
- (void)storyboardDidTransitionOut:(id)arg1 userInfo:(id)arg2;
- (void)storyboardOpenURLMessage:(id)arg1 userInfo:(id)arg2;
- (void)storyboardStatusBarChangesEndMessage:(id)arg1 userInfo:(id)arg2;
- (void)storyboardStatusBarChangesStartMessage:(id)arg1 userInfo:(id)arg2;
- (void)storyboardStatusBarDidChangeMessage:(id)arg1 userInfo:(id)arg2;
- (void)storyboardWillTransitionIn:(id)arg1 userInfo:(id)arg2;
- (void)storyboardWillTransitionOut:(id)arg1 userInfo:(id)arg2;
- (void)unloadAndClose;
- (void)updateSpecification;

@end
