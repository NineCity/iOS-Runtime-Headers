/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray;

@interface AVPlayerOccasionalCaller : AVPlayerTimelyCaller {
    id _block;
    struct OpaqueFigPlaybackItem { } *_figPlaybackItem;
    NSArray *_times;
}

- (struct { long long x1; int x2; unsigned int x3; long long x4; })_nextFiringTimeAfterTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_previousFiringTimeBeforeTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)_resetTimerForPlayerNewRate:(float)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)_startObservingPlaybackItemNotificationsForCurrentItem;
- (void)_stopObservingPlaybackItemNotifications;
- (void)_stopRespondingToPlayerStateChanges;
- (void)dealloc;
- (void)finalize;
- (id)initWithPlayer:(id)arg1 times:(id)arg2 queue:(struct dispatch_queue_s { }*)arg3 block:(id)arg4;
- (void)invalidate;
- (void)itemTimeJumped;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
