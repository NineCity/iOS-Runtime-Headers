/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class AVController, NSArray, NSDictionary, NSString;

@interface MPAudioDeviceController : NSObject {
    AVController *_avController;
    NSString *_category;
    id _delegate;
    BOOL _fakeRouteAvailable;
    NSArray *_pickableRoutes;
    NSDictionary *_pickedRoute;
}

@property BOOL routeDiscoveryEnabled;

+ (BOOL)routeDiscoveryEnabled;
+ (void)setRouteDiscoveryEnabled:(BOOL)arg1;

- (void)_mediaServerDied;
- (BOOL)_pickRoute:(id)arg1 withPassword:(id)arg2;
- (BOOL)_pickRoute:(id)arg1;
- (id)_pickableRoutes;
- (void)_pickableRoutesChangedNotification:(id)arg1;
- (id)_pickedRoute;
- (void)_portStatusDidChangeNotification:(id)arg1;
- (void)_registerForAVControllerNotifications;
- (BOOL)_routeIsHandset:(id)arg1;
- (BOOL)_routeIsHeadphones:(id)arg1;
- (BOOL)_routeIsReceiver:(id)arg1;
- (BOOL)_routeIsSpeaker:(id)arg1;
- (BOOL)_routeIsWireless:(id)arg1;
- (void)_sendFakeRouteChange;
- (BOOL)airtunesRouteIsPicked;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)clearCachedRoutes;
- (void)dealloc;
- (BOOL)handsetRouteIsPicked;
- (int)indexOfPickedRoute;
- (id)init;
- (id)initWithAVController:(id)arg1;
- (void)invalidateAVController;
- (id)nameOfPickedRoute;
- (unsigned int)numberOfAudioRoutes;
- (BOOL)pickBestDeviceRoute;
- (BOOL)pickHandsetRoute;
- (BOOL)pickRouteAtIndex:(unsigned int)arg1 withPassword:(id)arg2;
- (BOOL)pickRouteAtIndex:(unsigned int)arg1;
- (BOOL)pickSpeakerRoute;
- (id)pickedRouteDescription;
- (BOOL)receiverRouteIsPicked;
- (void)restorePickedRoute;
- (BOOL)routeDiscoveryEnabled;
- (id)routeNameAtIndex:(unsigned int)arg1 isPicked:(BOOL*)arg2;
- (BOOL)routeOtherThanHandsetAndSpeakerIsAvailable;
- (BOOL)routeOtherThanHandsetIsAvailable;
- (BOOL)routeRequiresPasswordAtIndex:(unsigned int)arg1;
- (id)routeTypeAtIndex:(unsigned int)arg1;
- (void)setAVController:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRouteDiscoveryEnabled:(BOOL)arg1;
- (BOOL)speakerRouteIsPicked;
- (BOOL)volumeControlIsAvailable;
- (BOOL)wirelessRouteIsPicked;

@end
