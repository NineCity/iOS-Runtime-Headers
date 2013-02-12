/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSInvocation, NSMutableDictionary, NSMutableSet;

@interface DADConnection : NSObject <AccountNotificationProtocol> {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    NSMutableSet *_accountIdsWithAlreadyResetCerts;
    NSMutableSet *_accountIdsWithAlreadyResetThrottleTimers;
    struct __CFMachPort { } *_callbackPort;
    NSMutableDictionary *_defaultContainerIDCache;
    } _lock;
    unsigned int _publicPort;
    unsigned int _serverPort;
    NSInvocation *_statusReportInvocation;
}

+ (void)noteAccountChanges:(id)arg1;
+ (void)setShouldIgnoreAccountChanges;
+ (id)sharedConnection;

- (id)_getStatusReportDictsFromClient;
- (void)_handleFoldersUpdated:(id)arg1 forAccountID:(id)arg2;
- (void)_handleNewPolicyKey:(id)arg1 forAccountID:(id)arg2;
- (void)_handleSendFailure:(int)arg1 inCodeNamed:(const char *)arg2;
- (void)_reallyRegisterForInterrogation;
- (void)_registerForAppResumedNotification;
- (BOOL)_requestDaemonChangeAgentMonitoringStatus:(BOOL)arg1;
- (BOOL)_resetCertWarningsForAccountId:(id)arg1 andDataclasses:(int)arg2;
- (BOOL)_resetThrottleTimersForAccountId:(id)arg1;
- (void)_setPublicPort:(unsigned int)arg1;
- (BOOL)cancelServerContactsSearch:(id)arg1;
- (id)currentPolicyKeyForAccountID:(id)arg1;
- (void)dealloc;
- (id)defaultContainerIdentifierForAccountID:(id)arg1 andDataclass:(int)arg2;
- (void)handleBrokenPipe;
- (BOOL)handleURL:(id)arg1;
- (id)init;
- (void)invalidateServerPort;
- (int)openDADConnectionOnRunLoop:(struct __CFRunLoop { }*)arg1;
- (BOOL)performServerContactsSearch:(id)arg1 forAccountWithID:(id)arg2 onRunloop:(id)arg3;
- (BOOL)processMeetingRequests:(id)arg1 inFolderWithId:(id)arg2 forAccountWithId:(id)arg3;
- (unsigned int)publicPort;
- (BOOL)registerForInterrogationWithInvocation:(id)arg1;
- (BOOL)removeStoresForAccountWithID:(id)arg1;
- (BOOL)reportFolderItemsSyncSuccess:(BOOL)arg1 forFolderWithID:(id)arg2 andAccountWithID:(id)arg3;
- (void)requestDaemonShutdown;
- (BOOL)requestDaemonStartMonitoringAgents;
- (BOOL)requestDaemonStopMonitoringAgents;
- (BOOL)requestPolicyUpdateForAccountID:(id)arg1;
- (void)resetTimersAndWarnings;
- (BOOL)resumeWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (unsigned int)serverPort;
- (unsigned int)serverPortWithTimeout:(unsigned int)arg1;
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 forAccountID:(id)arg4;
- (id)statusReports;
- (void)stopWatching;
- (BOOL)stopWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (BOOL)suspendWatchingFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;
- (BOOL)updateContentsOfAllFoldersForAccountID:(id)arg1 andDataclass:(int)arg2;
- (BOOL)updateContentsOfFoldersWithKeys:(id)arg1 forAccountID:(id)arg2 andDataclass:(int)arg3;
- (BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(int)arg2 ignoreThrottleTimer:(BOOL)arg3;
- (BOOL)updateFolderListForAccountID:(id)arg1 andDataclasses:(int)arg2;
- (BOOL)upgradeAccountWithId:(id)arg1 withProtocolVersion:(id)arg2;
- (BOOL)watchFoldersWithKeys:(id)arg1 forAccountID:(id)arg2;

@end
