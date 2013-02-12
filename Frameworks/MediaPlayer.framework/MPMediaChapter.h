/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaChapter : NSObject <NSCoding> {
    unsigned int _chapterIndex;
    int _chapterType;
    double _playbackDuration;
    double _playbackTime;
    id _value;
}

@property unsigned int chapterIndex;
@property int chapterType;
@property double playbackDuration;
@property double playbackTime;
@property(retain) id value;

- (int)_sortByChapterIndex:(id)arg1;
- (unsigned int)chapterIndex;
- (int)chapterType;
- (void)dealloc;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)playbackDuration;
- (double)playbackTime;
- (void)setChapterIndex:(unsigned int)arg1;
- (void)setChapterType:(int)arg1;
- (void)setPlaybackDuration:(double)arg1;
- (void)setPlaybackTime:(double)arg1;
- (void)setValue:(id)arg1;
- (id)title;
- (id)value;

@end
