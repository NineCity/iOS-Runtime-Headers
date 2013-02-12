/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSArray, NSMutableArray;

@interface SWUserInteractionSnapshotObserver : NSObject <SWRunWorkoutObserver> {
    NSMutableArray *_snapshots;
}

@property(readonly) NSArray * snapshots;

- (void)adjustSnapshotsForDistanceScaleFactor:(float)arg1;
- (void)dealloc;
- (id)init;
- (void)observeRunWorkoutControllerDataChange:(id)arg1 elapsedTime:(unsigned int)arg2 pace:(float)arg3 distance:(float)arg4 calories:(float)arg5 location:(id)arg6;
- (void)observeRunWorkoutStateChange:(id)arg1 oldState:(id)arg2 newState:(id)arg3;
- (void)observeRunWorkoutUserEvent:(id)arg1 userEvent:(id)arg2;
- (id)snapshots;

@end
