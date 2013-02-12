/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

@class NSArray, NSMutableArray;

@interface EAAccessoryManager : NSObject {
    NSMutableArray *_connectedAccessories;
}

@property(readonly) NSArray * connectedAccessories;

+ (BOOL)isLoggingEnabled;
+ (id)sharedAccessoryManager;

- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_cleanUpForTaskSuspend;
- (id)_connectedAccessories;
- (void)_ephemerisURLAvailable:(id)arg1;
- (void)_externalAccessoryAccessibilityAction:(id)arg1;
- (void)_externalAccessoryAccessibilityContextChanged:(id)arg1;
- (void)_externalAccessoryAccessibilityItemPropertyRequest:(id)arg1;
- (void)_externalAccessoryAccessibilitySystemPropertyChanged:(id)arg1;
- (void)_externalAccessoryAccessibilitySystemPropertyRequest:(id)arg1;
- (void)_externalAccessoryConnected:(id)arg1;
- (void)_externalAccessoryDisconnected:(id)arg1;
- (void)_externalAccessoryIPodOutOptionsChanged:(id)arg1;
- (void)_externalAccessoryPortPropertyChanged:(id)arg1;
- (void)_externalAccessoryUpdated:(id)arg1;
- (void)_gpsTimeRequested:(id)arg1;
- (void)_iapServerDied:(id)arg1;
- (id)_initFromSingletonCreationMethod;
- (void)_locationNmeaDataAvailable:(id)arg1;
- (void)_locationPointDataAvailable:(id)arg1;
- (void)_nmeaFilteringSupportChanged:(id)arg1;
- (void)_notifyObserversThatAccessoryDisconnectedWithUserInfo:(id)arg1;
- (BOOL)areLocationAccessoriesEnabled;
- (id)connectedAccessories;
- (void)dealloc;
- (id)init;
- (void)registerForLocalNotifications;
- (void)setAreLocationAccessoriesEnabled:(BOOL)arg1;
- (void)setShouldAllowCppRuntime:(BOOL)arg1;
- (void)setShouldAllowInternalProtocols:(BOOL)arg1;
- (void)setShouldAllowLegacyLingoAccessories:(BOOL)arg1;
- (BOOL)shouldAllowCppRuntime;
- (BOOL)shouldAllowInternalProtocols;
- (BOOL)shouldAllowLegacyLingoAccessories;
- (void)unregisterForLocalNotifications;

@end
