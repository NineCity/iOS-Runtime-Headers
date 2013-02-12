/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface AVController : NSObject {
    struct AVControllerPrivate { id x1; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x2; inout unsigned short x3; unsigned short x4; void*x5; const int x6; in void*x7; void*x8; id x9; void*x10; inout unsigned short x11; unsigned short x12; void*x13; const int x14; in void*x15; void*x16; id x17; void*x18; inout unsigned short x19; inout void*x20; void*x21; unsigned int x22/* : ? */; void*x23; const void*x24; id x25; Class x26; id x27; void*x28; void*x29; oneway unsigned long long x30; void*x31; void*x32; void*x33; void*x34; void*x35; void*x36; void*x37; double x38; void*x39; const void*x40; int x41; int x42; float x43; float x44; int x45; BOOL x46; id x47; void*x48; inout unsigned short x49; unsigned short x50; void*x51; const int x52; in void*x53; void*x54; float x55; struct __CFString {} *x56; id x57; void*x58; unsigned char x59; void*x60; unsigned long x61; void*x62; void*x63; void*x64; const void*x65; BOOL x66; BOOL x67; BOOL x68; id x69; void*x70; inout unsigned short x71; bycopy unsigned int x72/* : ? */; void*x73; void*x74; BOOL x75; void*x76; void*x77; struct OpaqueFigVisualContext {} *x78; id x79; void*x80; inout unsigned short x81; unsigned short x82; void*x83; const int x84; in void*x85; void*x86; struct __CFRunLoop {} *x87; unsigned int x88; int x89; int x90; int x91; BOOL x92; BOOL x93; BOOL x94; BOOL x95; id x96; void*x97; inout unsigned short x98; void*x99; void*x100; void*x101; void*x102; unsigned int x103/* : ? */; long x104; void*x105; void*x106; int x107; BOOL x108; void*x109; int x110; out in void*x111; const void*x112; void*x113; struct OpaqueFigPlayer {} *x114; id x115; void*x116; void*x117; oneway unsigned long long x118; void*x119; void*x120; void*x121; void*x122; void*x123; id x124; void*x125; void*x126; oneway void*x127; long x128; void*x129; void*x130; unsigned int x131/* : ? */; void*x132; BOOL x133; void*x134; unsigned long long x135; void*x136; void*x137; void*x138; void*x139; void*x140; id x141; void*x142; void*x143; oneway void*x144; long x145; void*x146; void*x147; unsigned int x148/* : ? */; void*x149; BOOL x150; void*x151; unsigned int x152; void*x153; void*x154; void*x155; void*x156; BOOL x157; BOOL x158; id x159; void*x160; inout unsigned short x161; void*x162; int x163; BOOL x164; void*x165; int x166; out in void*x167; const void*x168; void*x169; id x170; void*x171; inout unsigned short x172; void*x173; void*x174; BOOL x175; void*x176; const short x177; int x178; void x179; void*x180; unsigned long x181; out BOOL x182; void*x183; void*x184; BOOL x185; BOOL x186; BOOL x187; int x188; BOOL x189; } *_priv;
}

+ (id)avController;
+ (id)avControllerWithQueue:(id)arg1 error:(id*)arg2;
+ (id)compatibleAudioRouteForRoute:(id)arg1;
+ (id)convertFigTimeDictionaryToTimeIntervalWithKey:(id)arg1 stringURLToNSURLWithKey:(id)arg2 inDictionaries:(id)arg3;
+ (BOOL)isNetworkSupportedPath:(id)arg1;
+ (BOOL)isSupportedFileExtension:(id)arg1;
+ (BOOL)isSupportedMimeType:(id)arg1;
+ (void)setEnableNetworkMode:(BOOL)arg1;

- (id)_figPlayerNotifications;
- (BOOL)activate:(id*)arg1;
- (id)addNextFeederItemToQueue;
- (void)applyDesiredRepeatMode;
- (id)attributeForKey:(id)arg1;
- (void)avPlaybackQueueCurrentItemChangedNotification:(id)arg1;
- (BOOL)beginInterruption:(id*)arg1;
- (BOOL)beginRepeatGap;
- (id)bookmarkGroupIDForAVItem:(id)arg1;
- (double)bookmarkTimeForAVItem:(id)arg1;
- (BOOL)canBeginInterruption;
- (void)cancelAllCGImageRequests;
- (void)cancelContinueAfterRepeatGap;
- (void)checkQueueSpace;
- (void)continueAfterRepeatGap;
- (long)copyImageForTime:(struct __CVBuffer {}**)arg1 time:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2;
- (struct OpaqueFigPlaybackItem { }*)createItemWithURL:(id)arg1 flags:(unsigned long)arg2 error:(int*)arg3;
- (struct OpaqueFigPlaybackItem { }*)currentFPItem;
- (id)currentItem;
- (void)currentItemHasChanged:(id)arg1;
- (void)currentItemWillChangeToItem:(id)arg1 oldItemCurrentTime:(double)arg2;
- (double)currentTime;
- (void)dealloc;
- (id)delegate;
- (void)dequeueDeadItem;
- (void)dequeueFirstItem;
- (void)endInterruptionWithStatus:(id)arg1;
- (void)ensurePlaybackQueueImmed;
- (int)eqPreset;
- (id)errorWithDescription:(id)arg1 code:(long)arg2;
- (void)feederInvalidatedWithCurrentItemMoved:(id)arg1;
- (void)feederRangeWasInserted:(id)arg1;
- (void)feederRangeWasRemoved:(id)arg1;
- (void)figPlayerNotificationHandler:(id)arg1;
- (void)fmpEffectiveVolumeDidChange;
- (void)fpItemNotification:(id)arg1 sender:(id)arg2;
- (struct CGImage { }*)grabCGImageAtTime:(double)arg1 withTimeOptions:(int)arg2 withImageOptions:(id)arg3 actualTime:(double*)arg4;
- (BOOL)havePlayedCurrentItem;
- (unsigned int)indexOfCurrentQueueFeederItem;
- (id)init;
- (id)initForStreaming;
- (id)initWithError:(id*)arg1;
- (id)initWithQueue:(id)arg1 error:(id*)arg2;
- (id)initWithQueue:(id)arg1 fmpType:(unsigned int)arg2 error:(id*)arg3;
- (BOOL)isCurrentItemReady;
- (BOOL)isNewImageAvailableForTime:(const struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg1 willNeverBeAvailable:(BOOL*)arg2;
- (BOOL)isValid;
- (void)itemHasFinishedPlayingNotification:(id)arg1;
- (id)lkLayer;
- (void)logPerformanceDataForCurrentItem;
- (void)makeCurrentItemReady;
- (void)makeError:(id*)arg1 withDescription:(id)arg2 code:(long)arg3;
- (BOOL)muted;
- (BOOL)okToNotifyFromThisThread;
- (id)outputQTESFilePath;
- (void)pause;
- (BOOL)play:(id*)arg1;
- (BOOL)playNextItem:(id*)arg1;
- (struct AVControllerPrivate { id x1; id x2; id x3; id x4; Class x5; id x6; int x7; int x8; float x9; float x10; int x11; BOOL x12; id x13; float x14; struct __CFString {} *x15; id x16; BOOL x17; BOOL x18; BOOL x19; id x20; struct OpaqueFigVisualContext {} *x21; id x22; struct __CFRunLoop {} *x23; unsigned int x24; int x25; int x26; int x27; BOOL x28; BOOL x29; BOOL x30; BOOL x31; id x32; struct OpaqueFigPlayer {} *x33; id x34; id x35; id x36; BOOL x37; BOOL x38; id x39; id x40; BOOL x41; BOOL x42; BOOL x43; int x44; BOOL x45; }*)privateStorage;
- (id)queue;
- (id)queueFeeder;
- (float)rate;
- (void)rateDidChangeToRate:(float)arg1;
- (void)registerTimeMarkerObserver:(id)arg1 forItem:(id)arg2 times:(id)arg3 context:(id)arg4;
- (void)removeObserver:(id)arg1 fromTMOArray:(id)arg2;
- (int)repeatMode;
- (void)requestAsyncCGImagesAtTimes:(id)arg1 requestIDs:(id)arg2 withTimeOptions:(int)arg3 withImageOptions:(id)arg4;
- (void)requestAsyncCGImagesAtTimes:(id)arg1 withTimeOptions:(int)arg2 withImageOptions:(id)arg3;
- (BOOL)resumePlayback:(double)arg1 error:(id*)arg2;
- (void)safeSubtitleCommandPosted:(void*)arg1;
- (void)scheduleQueueSpaceCheck;
- (void)scheduleUpdateTimeMarkerObservations;
- (void)seekToDate:(id)arg1;
- (void)setAVItemClass:(Class)arg1;
- (void)setApplyVideoTrackMatrix;
- (BOOL)setAttribute:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setCurrentTime:(double)arg1 options:(int)arg2;
- (void)setCurrentTime:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEQPreset:(int)arg1;
- (BOOL)setIndexOfCurrentQueueFeederItem:(unsigned int)arg1 error:(id*)arg2;
- (void)setLayer:(id)arg1;
- (void)setMuted:(BOOL)arg1;
- (void)setOutputQTESFilePath:(id)arg1;
- (BOOL)setPickedRouteWithPassword:(id)arg1 withPassword:(id)arg2;
- (void)setQueue:(id)arg1;
- (void)setQueueFeeder:(id)arg1 withIndex:(int)arg2;
- (void)setQueueFeeder:(id)arg1;
- (BOOL)setRate:(float)arg1 error:(id*)arg2;
- (BOOL)setRepeatMode:(int)arg1;
- (void)setShouldDisplayClosedCaptions:(BOOL)arg1;
- (void)setSubtitleRecipient:(id)arg1;
- (void)setVibrationEnabled:(BOOL)arg1;
- (void)setVibrationPattern:(id)arg1;
- (void)setVisualContext:(struct OpaqueFigVisualContext { }*)arg1;
- (void)setVolume:(float)arg1;
- (BOOL)shouldBeginPlayingItem:(id)arg1 error:(id*)arg2;
- (BOOL)shouldDisplayClosedCaptions;
- (void)stepByCount:(int)arg1;
- (void)unregisterTimeMarkerObserver:(id)arg1 forItem:(id)arg2;
- (long)updateActionAtEnd;
- (void)updateTimeMarkerObservations;
- (BOOL)vibrationEnabled;
- (id)vibrationPattern;
- (struct OpaqueFigVisualContext { }*)visualContext;
- (float)volume;

@end
