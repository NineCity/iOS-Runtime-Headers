/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@class DASettingsTemplate, DAStatusReport, NSArray, NSData, NSMutableDictionary, NSString, NSURL;

@interface DAAccount : BasicAccount <AccountFullAccountProtocol, AccountCreationProtocol, BasicAccountSyncing> {
    struct __CFDictionary { } *_changeTypesByDataclass;
    struct __CFDictionary { } *_consumers;
    int _dataclasses;
    NSString *_embargoedPassword;
    BOOL _hasDirtyBits;
    BOOL _hasInitted;
    NSMutableDictionary *_haveWarnedAboutCertDict;
    int _originalDataclasses;
    DASettingsTemplate *_settingsTemplate;
    BOOL _shouldAutodiscoverPrincipalURL;
    BOOL _shouldFailAllTasks;
    BOOL _shouldPromptForPassword;
    DAStatusReport *_statusReport;
    NSURL *_urlToRemoveFromKeychain;
}

@property(copy) NSString * accountDescription;
@property(setter=setDAAccountVersion:) int daAccountVersion;
@property(copy) NSString * emailAddress;
@property(copy) NSArray * emailAddresses;
@property(readonly) int enabledDataclassesBitmask;
@property(copy) NSString * host;
@property(copy) NSData * identityPersist;
@property(readonly) BOOL isChildAccount;
@property(copy) NSString * password;
@property(copy,readonly) NSString * persistentUUID;
@property int port;
@property(copy) NSURL * principalURL;
@property(retain,readonly) NSString * scheduleIdentifier;
@property(copy) NSString * scheme;
@property(retain) DASettingsTemplate * settingsTemplate;
@property BOOL shouldAutodiscoverPrincipalURL;
@property BOOL shouldFailAllTasks;
@property BOOL shouldPromptForPassword;
@property(readonly) DAStatusReport * statusReport;
@property(copy,readonly) NSString * tag;
@property BOOL useSSL;
@property(copy) NSString * user;
@property(copy) NSString * username;

+ (Class)accountClass;
+ (Class)accountClassWithProperties:(id)arg1;
+ (id)basicAccountProperties;
+ (Class)classForAccountType:(id)arg1;
+ (Class)clientClass;
+ (Class)daemonClass;
+ (id)defaultProperties;
+ (id)newAccountOfAccountType:(id)arg1;

- (int)_actionForTrust:(struct __SecTrust { }*)arg1 host:(id)arg2 service:(id)arg3;
- (id)_exceptionsDict;
- (void)_handlePasswordNotification:(struct __CFUserNotification { }*)arg1 response:(unsigned long)arg2 callback:(id)arg3;
- (void)_removeHostsToTrust;
- (void)_removePasswordFromKeychainKeepCache:(BOOL)arg1;
- (void)_setPersistentUUID:(id)arg1;
- (void)_setProperties:(id)arg1;
- (BOOL)_upgradeSelfFromPreKirkwood;
- (BOOL)accountBoolPropertyForKey:(id)arg1;
- (int)accountChangeTypeForDataclass:(int)arg1;
- (BOOL)accountContainsEmailAddress:(id)arg1;
- (id)accountDescription;
- (id)accountID;
- (int)accountIntPropertyForKey:(id)arg1;
- (BOOL)accountNeedsUpgrade;
- (BOOL)autodiscoverAccountConfigurationWithConsumer:(id)arg1;
- (void)cancelAllSearchQueries;
- (void)cancelAutodiscovery;
- (void)cancelSearchQuery:(id)arg1;
- (void)checkValidityWithConsumer:(id)arg1;
- (void)cleanupAccountFiles;
- (id)consumerForTask:(id)arg1;
- (id)contactsFolders;
- (int)daAccountVersion;
- (void)dealloc;
- (id)defaultContactsFolder;
- (id)defaultContainerIdentifierForDADataclass:(int)arg1;
- (id)defaultEventsFolder;
- (id)defaultNotesFolder;
- (id)deletedItemsFolder;
- (id)description;
- (id)domainOnly;
- (id)emailAddress;
- (id)emailAddresses;
- (int)enabledDataclassesBitmask;
- (BOOL)enabledForDataclass:(int)arg1;
- (id)eventsFolders;
- (struct __CFData { }*)exceptionsForDigest:(id)arg1;
- (void)getRootFolderWithConsumer:(id)arg1;
- (void)handleTrust:(struct __SecTrust { }*)arg1 forHost:(id)arg2 withCompletionBlock:(id)arg3;
- (BOOL)handleTrustChallenge:(id)arg1;
- (BOOL)hasDirtyBits;
- (BOOL)haveWarnedAboutCert:(id)arg1;
- (id)host;
- (id)identityPersist;
- (id)inboxFolder;
- (id)init;
- (id)initWithProperties:(id)arg1;
- (BOOL)isActiveSyncAccount;
- (BOOL)isCalDAVAccount;
- (BOOL)isCalDAVChildAccount;
- (BOOL)isCardDAVAccount;
- (BOOL)isChildAccount;
- (BOOL)isDisabled;
- (BOOL)isEqualToAccount:(id)arg1;
- (BOOL)isLDAPAccount;
- (BOOL)isOwnedByPayload:(id)arg1;
- (int)keychainAccessibilityType;
- (id)localizedIdenticalAccountFailureMessage;
- (id)localizedInvalidPasswordMessage;
- (BOOL)monitorFolderWithID:(id)arg1;
- (BOOL)monitorFoldersWithIDs:(id)arg1;
- (id)notesFolders;
- (BOOL)originallyEnabledForDataclass:(int)arg1;
- (id)owningProfile;
- (id)password;
- (void)performSearchQuery:(id)arg1 consumer:(id)arg2;
- (id)persistentUUID;
- (int)port;
- (id)principalURL;
- (BOOL)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2;
- (void)removeClientCertificateData;
- (void)removeConsumerForTask:(id)arg1;
- (void)removePasswordFromKeychain;
- (void)renewAccountCredentialsWithHandler:(id)arg1;
- (void)resetAccountID;
- (BOOL)resetCertWarnings;
- (void)resetStatusReport;
- (void)resumeMonitoringFoldersWithIDs:(id)arg1;
- (void)saveAccountProperties;
- (void)saveAccountSettings;
- (void)saveChildAccountSettingsWithAccountsManager:(id)arg1;
- (id)scheduleIdentifier;
- (id)scheme;
- (BOOL)searchQueriesRunning;
- (BOOL)sendEmailsForCalEvents:(id)arg1 consumer:(id)arg2;
- (id)sentItemsFolder;
- (void)setAccountBoolProperty:(BOOL)arg1 forKey:(id)arg2;
- (void)setAccountDescription:(id)arg1;
- (void)setAccountIntProperty:(int)arg1 forKey:(id)arg2;
- (void)setConsumer:(id)arg1 forTask:(id)arg2;
- (void)setDAAccountVersion:(int)arg1;
- (void)setEmailAddress:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setEmbargoedPassword:(id)arg1;
- (void)setEnabled:(BOOL)arg1 forDataclass:(int)arg2 changeType:(int)arg3;
- (void)setExceptions:(struct __CFData { }*)arg1 forDigest:(id)arg2;
- (void)setHaveWarnedAboutCert:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setIdentityPersist:(id)arg1;
- (void)setP12Data:(id)arg1 password:(id)arg2;
- (void)setPassword:(id)arg1;
- (void)setPort:(int)arg1;
- (void)setPrincipalURL:(id)arg1;
- (void)setScheme:(id)arg1;
- (void)setSettingsTemplate:(id)arg1;
- (void)setShouldAutodiscoverPrincipalURL:(BOOL)arg1;
- (void)setShouldFailAllTasks:(BOOL)arg1;
- (void)setShouldPromptForPassword:(BOOL)arg1;
- (void)setUseSSL:(BOOL)arg1;
- (void)setUser:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)settingsTemplate;
- (BOOL)shouldAllowTrust:(struct __SecTrust { }*)arg1 forHost:(id)arg2;
- (BOOL)shouldAutodiscoverPrincipalURL;
- (BOOL)shouldFailAllTasks;
- (BOOL)shouldPromptForPassword;
- (id)stateString;
- (id)statusReport;
- (void)stopMonitoringFolderWithID:(id)arg1;
- (void)stopMonitoringFolders;
- (void)stopMonitoringFoldersWithIDs:(id)arg1;
- (BOOL)supportsDataclass:(int)arg1;
- (int)supportsMailboxSearch;
- (void)suspendMonitoringFoldersWithIDs:(id)arg1;
- (id)syncStoreIdentifier;
- (void)synchronizeBookmarkTreeWithConsumer:(id)arg1 hasRemoteChanges:(BOOL)arg2;
- (void)synchronizeContactsFolder:(id)arg1 previousTag:(id)arg2 previousSyncToken:(id)arg3 actions:(id)arg4 highestIdContext:(struct { int x1; int x2; }*)arg5 isInitialUberSync:(BOOL)arg6 isResyncAfterConnectionFailed:(BOOL)arg7 consumer:(id)arg8;
- (void)synchronizeEventsFolder:(id)arg1 previousTag:(id)arg2 actions:(id)arg3 highestIdContext:(struct { int x1; int x2; int x3; int x4; }*)arg4 isInitialUberSync:(BOOL)arg5 isResyncAfterConnectionFailed:(BOOL)arg6 consumer:(id)arg7;
- (void)synchronizeNotesFolder:(id)arg1 noteContext:(id)arg2 previousTag:(id)arg3 actions:(id)arg4 changeSet:(id)arg5 notesToDeleteAfterSync:(id)arg6 isInitialUberSync:(BOOL)arg7 isResyncAfterConnectionFailed:(BOOL)arg8 consumer:(id)arg9;
- (id)tag;
- (void)takeValuesFromAccount:(id)arg1;
- (void)tearDown;
- (BOOL)upgradeAccount;
- (id)urlForKeychain;
- (BOOL)useSSL;
- (id)user;
- (id)username;
- (id)usernameWithoutDomain;
- (id)version;

@end
