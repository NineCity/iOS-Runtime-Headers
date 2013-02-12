/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSMutableSet, NSString;

@interface ISNetworkObserver : NSObject <ISSingleton, SSDownloadQueueObserver> {
    struct dispatch_queue_s { } *_dispatchQueue;
    double _lastNetworkTypeChangeTime;
    int _networkType;
    int _networkUsageCount;
    struct __CFBag { } *_networkUsageCountByAsset;
    NSMutableSet *_observedDownloadQueues;
    struct __SCNetworkReachability { } *_reachability;
}

@property(readonly) NSString * connectionTypeHeader;
@property(readonly) double lastNetworkTypeChangeTime;
@property int networkType;
@property(readonly) BOOL shouldShowCellularAutomaticDownloadsSwitch;
@property(getter=isUsingNetwork,readonly) BOOL usingNetwork;
@property(getter=isWiFiEnabled,readonly) BOOL wifiEnabled;

+ (void)set3GEnabled:(BOOL)arg1;
+ (void)setAirplaneModeEnabled:(BOOL)arg1;
+ (void)setSharedInstance:(id)arg1;
+ (void)setWiFiEnabled:(BOOL)arg1;
+ (id)sharedInstance;

- (int)_currentNetworkType;
- (void)_dataStatusChangedNotification:(id)arg1;
- (int)_networkTypeFromDataIndicator:(id)arg1;
- (BOOL)_ntsIsUsingNetwork;
- (void)_postTypeChangedNotificationFromValue:(int)arg1 toValue:(int)arg2;
- (void)_postUsageChangedToValue:(BOOL)arg1;
- (void)_reloadNetworkType;
- (int)_setNetworkType:(int)arg1;
- (void)_telephonyObserverAvailableNotification:(id)arg1;
- (void)beginObservingDownloadQueue:(id)arg1;
- (void)beginUsingNetwork;
- (void)beginUsingNetworkForAssetType:(int)arg1;
- (id)connectionTypeHeader;
- (id)copyActiveAssetTypes;
- (id)copyValueForCarrierBundleKey:(id)arg1;
- (void)dealloc;
- (void)downloadQueue:(id)arg1 changedWithRemovals:(id)arg2;
- (void)downloadQueueNetworkUsageChanged:(id)arg1;
- (void)endObservingDownloadQueue:(id)arg1;
- (void)endUsingNetwork;
- (void)endUsingNetworkForAssetType:(int)arg1;
- (id)init;
- (BOOL)isUsingNetwork;
- (BOOL)isWiFiEnabled;
- (double)lastNetworkTypeChangeTime;
- (int)networkType;
- (void)reloadNetworkType;
- (void)setNetworkType:(int)arg1;
- (BOOL)shouldShowCellularAutomaticDownloadsSwitch;

@end
