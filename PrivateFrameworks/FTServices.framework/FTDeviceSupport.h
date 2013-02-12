/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSDictionary, NSString;

@interface FTDeviceSupport : NSObject {
    int _carrierBundleSupported;
    BOOL _commCenterDead;
    BOOL _duringRestore;
    NSString *_lastDeviceID;
    NSString *_model;
    BOOL _shouldUseSIMState;
    BOOL _supportsFT;
    BOOL _supportsSMS;
}

@property(readonly) NSDictionary * CTNetworkInformation;
@property(readonly) BOOL canReceiveCalls;
@property(readonly) BOOL canRegister;
@property(readonly) BOOL canSendCalls;
@property(readonly) BOOL commCenterDead;
@property(readonly) BOOL conferencingAllowed;
@property(readonly) BOOL conferencingBlocked;
@property(readonly) BOOL conferencingEnabled;
@property(readonly) NSString * deviceID;
@property(readonly) NSString * deviceIDPrefix;
@property(readonly) NSString * model;
@property(readonly) BOOL registrationSupported;
@property(readonly) BOOL supportsAppleIDIdentification;
@property(readonly) BOOL supportsSMSIdentification;
@property(readonly) NSString * userAgentString;

+ (id)sharedInstance;

- (id)CTNetworkInformation;
- (void)_carrierChanged;
- (void)_commCenterAlive;
- (void)_handleSIMStateChanged:(id)arg1;
- (void)_lockdownStateChanged:(id)arg1;
- (void)_operatorChanged;
- (void)_registerForCapabilityNotifications;
- (void)_registerForCommCenterReadyNotifications;
- (void)_registerForCoreTelephonyNotifications;
- (void)_registerForLockdownNotifications;
- (void)_unregisterForCapabilityNotifications;
- (void)_unregisterForCommCenterReadyNotifications;
- (void)_unregisterForCoreTelephonyNotifications;
- (void)_unregisterForLockdownNotifications;
- (void)_updateCapabilities;
- (id)autorelease;
- (BOOL)canReceiveCalls;
- (BOOL)canRegister;
- (BOOL)canSendCalls;
- (BOOL)commCenterDead;
- (BOOL)conferencingAllowed;
- (BOOL)conferencingBlocked;
- (BOOL)conferencingEnabled;
- (void)dealloc;
- (id)deviceID;
- (id)deviceIDPrefix;
- (id)init;
- (id)model;
- (BOOL)registrationSupported;
- (oneway void)release;
- (unsigned int)retainCount;
- (BOOL)supportsAppleIDIdentification;
- (BOOL)supportsSMSIdentification;
- (id)userAgentString;

@end
