/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface AVSystemController : NSObject {
    struct AVSystemControllerPrivate { BOOL x1; BOOL x2; float x3; id x4; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x5; inout unsigned short x6; unsigned short x7; void*x8; const int x9; in void*x10; void*x11; struct OpaqueFigPlayer {} *x12; } *_priv;
}

+ (void)initialize;
+ (id)sharedAVSystemController;

- (id)attributeForKey:(id)arg1;
- (BOOL)changeActiveCategoryVolumeBy:(float)arg1 fallbackCategory:(id)arg2 resultVolume:(float*)arg3 affectedCategory:(id*)arg4;
- (BOOL)changeActiveCategoryVolumeBy:(float)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (BOOL)changeActiveCategoryVolumeBy:(float)arg1;
- (BOOL)changeVolumeBy:(float)arg1 forCategory:(id)arg2;
- (BOOL)currentRouteHasVolumeControl;
- (void)dealloc;
- (BOOL)enablePortDiscovery:(BOOL)arg1;
- (BOOL)getActiveCategoryMuted:(BOOL*)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (BOOL)getActiveCategoryMuted:(BOOL*)arg1;
- (BOOL)getActiveCategoryVolume:(float*)arg1 andName:(id*)arg2 fallbackCategory:(id)arg3;
- (BOOL)getActiveCategoryVolume:(float*)arg1 andName:(id*)arg2 forRoute:(id)arg3 andDeviceIdentifier:(id)arg4;
- (BOOL)getActiveCategoryVolume:(float*)arg1 andName:(id*)arg2;
- (BOOL)getPortDiscoveryEnabled;
- (BOOL)getVolume:(float*)arg1 forCategory:(id)arg2;
- (void)handleServerDied;
- (id)init;
- (void)makeError:(id*)arg1 withDescription:(id)arg2 code:(long)arg3;
- (BOOL)okToNotifyFromThisThread;
- (id)pickableRoutesForCategory:(id)arg1;
- (void)postEffectiveVolumeNotification:(void*)arg1;
- (void)postFullMuteDidChangeNotification:(void*)arg1;
- (id)routeForCategory:(id)arg1;
- (BOOL)setActiveCategoryVolumeTo:(float)arg1 fallbackCategory:(id)arg2 resultVolume:(float*)arg3 affectedCategory:(id*)arg4;
- (BOOL)setActiveCategoryVolumeTo:(float)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3;
- (BOOL)setActiveCategoryVolumeTo:(float)arg1;
- (BOOL)setAttribute:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (BOOL)setPickedRouteWithPassword:(id)arg1 withPassword:(id)arg2;
- (BOOL)setVolumeTo:(float)arg1 forCategory:(id)arg2;
- (BOOL)toggleActiveCategoryMuted;
- (BOOL)toggleActiveCategoryMutedForRoute:(id)arg1 andDeviceIdentifier:(id)arg2;
- (id)volumeCategoryForAudioCategory:(id)arg1;

@end
