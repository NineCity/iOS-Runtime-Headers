/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPQueueFeeder;

@interface MPQueueFeederState : NSObject {
    unsigned int _currentItemIndex;
    double _currentTime;
    MPQueueFeeder *_feeder;
    int _feederMode;
}

@property unsigned int currentItemIndex;
@property double currentTime;
@property(retain) MPQueueFeeder * feeder;
@property int feederMode;

- (unsigned int)currentItemIndex;
- (double)currentTime;
- (void)dealloc;
- (id)description;
- (id)feeder;
- (int)feederMode;
- (id)initWithStateOfAVController:(id)arg1;
- (void)setCurrentItemIndex:(unsigned int)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setFeeder:(id)arg1;
- (void)setFeederMode:(int)arg1;

@end
