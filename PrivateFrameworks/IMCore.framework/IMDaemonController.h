/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class IMDaemonListener, IMLocalObject, IMRemoteObject<FZDaemon>, NSLock, NSMutableArray, NSPort, NSProtocolChecker, NSString;

@interface IMDaemonController : NSObject {
    BOOL _autoReconnect;
    NSLock *_blockingLock;
    IMDaemonListener *_daemonListener;
    id _delegate;
    unsigned int _gMyFZListenerCapabilities;
    BOOL _hasCheckedForDaemon;
    BOOL _inBlockingConnect;
    NSString *_listenerID;
    IMLocalObject *_localObject;
    BOOL _preventReconnect;
    NSProtocolChecker *_protocol;
    IMRemoteObject<FZDaemon> *_remoteObject;
    NSMutableArray *_services;
    BOOL _systemShuttingDown;
}

@property(setter=_setCapabilities:) unsigned int _capabilities;
@property BOOL autoReconnect;
@property unsigned int capabilities;
@property id delegate;
@property(readonly) BOOL isConnected;
@property(readonly) BOOL isConnecting;
@property(readonly) IMDaemonListener * listener;
@property(readonly) NSPort * localPort;

+ (void)_blockUntilSendQueueIsEmpty;
+ (id)sharedController;

- (oneway void)_addressBookChanged:(id)arg1;
- (void)_agentDidLaunchNotification:(id)arg1;
- (unsigned int)_capabilities;
- (BOOL)_connectToDaemonWithLaunch:(BOOL)arg1 capabilities:(unsigned long long)arg2;
- (void)_handleDaemonException:(id)arg1;
- (void)_localObjectDiedNotification:(id)arg1;
- (void)_makeConnectionWithLaunch:(BOOL)arg1;
- (id)_remoteObject;
- (void)_remoteObjectDiedNotification:(id)arg1;
- (void)_setCapabilities:(unsigned int)arg1;
- (oneway void)addListener:(id)arg1 withListenerID:(id)arg2 capabilities:(unsigned int)arg3;
- (BOOL)autoReconnect;
- (id)autorelease;
- (void)blockUntilConnected;
- (unsigned int)capabilities;
- (BOOL)connectToDaemon;
- (BOOL)connectToDaemonWithLaunch:(BOOL)arg1 capabilities:(unsigned int)arg2 blockUntilConnected:(BOOL)arg3;
- (BOOL)connectToDaemonWithLaunch:(BOOL)arg1;
- (void)dealloc;
- (id)delegate;
- (void)disconnectFromDaemon;
- (void)disconnectFromDaemonWithForce:(BOOL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (BOOL)isConnected;
- (BOOL)isConnecting;
- (oneway void)listener:(id)arg1 setDaemonShouldLogoutWithoutStatusListeners:(BOOL)arg2;
- (oneway void)listener:(id)arg1 setDaemonShouldTerminateWithoutActiveListeners:(BOOL)arg2;
- (oneway void)listener:(id)arg1 setListenerCapabilities:(unsigned int)arg2;
- (oneway void)listener:(id)arg1 setValue:(id)arg2 ofPersistentProperty:(id)arg3;
- (oneway void)listener:(id)arg1 setValue:(id)arg2 ofProperty:(id)arg3;
- (id)listener;
- (void)localObjectDiedNotification:(id)arg1;
- (id)localPort;
- (id)methodSignatureForSelector:(SEL)arg1;
- (oneway void)release;
- (void)remoteObjectDiedNotification:(id)arg1;
- (unsigned int)retainCount;
- (void)sendABInformationToDaemon;
- (void)setAutoReconnect:(BOOL)arg1;
- (void)setCapabilities:(unsigned int)arg1;
- (void)setDaemonLogsOutWithoutStatusListeners:(BOOL)arg1;
- (void)setDaemonTerminatesWithoutListeners:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMyPicture:(id)arg1 smallPictureData:(id)arg2;
- (void)setMyProfile:(id)arg1;
- (void)setMyStatus:(unsigned int)arg1 message:(id)arg2 forAccount:(id)arg3;
- (void)setMyStatus:(unsigned int)arg1 message:(id)arg2;
- (void)setPresenceValue:(id)arg1 forKey:(id)arg2 forAccount:(id)arg3;
- (oneway void)setValue:(id)arg1 ofPersistentProperty:(id)arg2;
- (oneway void)setValue:(id)arg1 ofProperty:(id)arg2;

@end
