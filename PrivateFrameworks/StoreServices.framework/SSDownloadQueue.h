/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSArray, NSLock, NSMutableArray, NSMutableSet, NSSet;

@interface SSDownloadQueue : NSObject {
    NSSet *_downloadKinds;
    NSMutableArray *_downloads;
    NSMutableSet *_kindsUsingNetwork;
    int _lastUpdatedIndex;
    NSLock *_lock;
    struct __CFSet { } *_observers;
    NSMutableArray *_placeholders;
    NSMutableArray *_preorders;
    BOOL _registeringWithDaemon;
}

@property(readonly) NSSet * downloadKinds;
@property(readonly) NSArray * downloads;
@property(readonly) NSArray * placeholderDownloads;
@property(readonly) NSArray * preorders;
@property(getter=isUsingNetwork,readonly) BOOL usingNetwork;

+ (id)mediaDownloadKinds;
+ (id)softwareApplicationDownloadKinds;
+ (void)triggerDownloads;

- (id)_copyPlaceholdersByRemovingIdentifier:(id)arg1;
- (void)_daemonExited:(id)arg1;
- (void)_daemonExitedMainThread:(id)arg1;
- (void)_downloadReplaced:(id)arg1;
- (void)_downloadStatusChanged:(id)arg1;
- (void)_downloadsAdded:(id)arg1;
- (void)_downloadsChanged:(id)arg1;
- (void)_downloadsRemoved:(id)arg1;
- (void)_filterPlaceholderDownloads;
- (int)_indexOfDownloadWithIdentifier:(id)arg1;
- (void)_messageObserversWithFunction:(int (*)())arg1 context:(void*)arg2;
- (void)_networkUsageChanged:(id)arg1;
- (void)_observeDaemon;
- (void)_preOrdersChanged:(id)arg1;
- (void)_registerAfterDaemonLaunch;
- (void)_registerWithDaemon;
- (void)_removeAllPlaceholders;
- (void)_resetKindsUsingNetwork;
- (void)_sendDownloadStatusChangedAtIndex:(int)arg1;
- (void)_sendQueueChangedWithRemovals:(id)arg1;
- (void)_sendQueueNetworkUsageChanged;
- (void)_sendQueuePreOrdersChanged;
- (void)_stopObservingDaemon;
- (BOOL)addDownload:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addPlaceholderDownloads:(id)arg1;
- (BOOL)canCancelDownload:(id)arg1;
- (BOOL)cancelDownload:(id)arg1;
- (void)dealloc;
- (id)downloadForItemIdentifier:(unsigned long long)arg1;
- (id)downloadKinds;
- (id)downloads;
- (id)init;
- (id)initWithDownloadKinds:(id)arg1;
- (BOOL)isUsingNetwork;
- (id)placeholderDownloads;
- (id)preorders;
- (BOOL)reloadFromServer;
- (void)removeObserver:(id)arg1;
- (void)removePlaceholderDownload:(id)arg1;
- (BOOL)startPreOrderDownload:(id)arg1;

@end
