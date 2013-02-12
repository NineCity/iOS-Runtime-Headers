/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItemArtwork, NSArray, NSDate, NSString;

@interface MPMediaItem : MPMediaEntity {
}

@property(readonly) NSString * albumArtist;
@property(readonly) NSString * albumTitle;
@property(readonly) NSString * artist;
@property(readonly) MPMediaItemArtwork * artwork;
@property double bookmarkTime;
@property(readonly) NSArray * chapters;
@property(readonly) NSString * composer;
@property(readonly) NSString * effectiveAlbumArtist;
@property(readonly) double effectiveStopTime;
@property(readonly) NSString * genre;
@property BOOL hasBeenPlayed;
@property(readonly) BOOL isITunesU;
@property(readonly) BOOL isRental;
@property(copy) NSDate * lastPlayedDate;
@property(copy) NSDate * lastSkippedDate;
@property(readonly) int mediaType;
@property unsigned int playCount;
@property unsigned int playCountSinceSync;
@property(readonly) double playbackDuration;
@property(readonly) NSString * podcastTitle;
@property unsigned int rating;
@property(readonly) NSDate * releaseDate;
@property(readonly) BOOL rememberBookmarkTime;
@property unsigned int skipCount;
@property unsigned int skipCountSinceSync;
@property(readonly) double startTime;
@property(readonly) double stopTime;
@property(readonly) NSString * title;
@property(readonly) unsigned int year;

+ (void)_createFilterableDictionary;
+ (BOOL)_isValidItemProperty:(id)arg1;
+ (BOOL)canFilterByProperty:(id)arg1;
+ (id)dynamicProperties;
+ (id)persistentIDPropertyForGroupingType:(int)arg1;
+ (id)titlePropertyForGroupingType:(int)arg1;

- (id)albumArtist;
- (id)albumTitle;
- (id)artist;
- (id)artwork;
- (double)bookmarkTime;
- (id)chapterOfType:(int)arg1 atIndex:(unsigned int)arg2;
- (id)chapterOfType:(int)arg1 atTime:(double)arg2;
- (id)chapters;
- (id)chaptersOfType:(int)arg1;
- (id)composer;
- (unsigned int)countOfChaptersOfType:(int)arg1;
- (id)effectiveAlbumArtist;
- (double)effectiveStopTime;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)existsInLibrary;
- (void)gaplessHeuristicInfo:(unsigned int*)arg1 duration:(unsigned int*)arg2 lastPacketsResync:(unsigned int*)arg3 encodingDelay:(unsigned int*)arg4 encodingDrain:(unsigned int*)arg5;
- (id)genre;
- (BOOL)hasBeenPlayed;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentID:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isITunesU;
- (BOOL)isRental;
- (id)lastPlayedDate;
- (id)lastSkippedDate;
- (int)mediaType;
- (unsigned int)playCount;
- (unsigned int)playCountSinceSync;
- (double)playbackDuration;
- (id)podcastTitle;
- (id)predicateForProperty:(id)arg1;
- (unsigned int)rating;
- (id)releaseDate;
- (BOOL)rememberBookmarkTime;
- (id)representativeItem;
- (void)setBookmarkTime:(double)arg1;
- (void)setHasBeenPlayed:(BOOL)arg1;
- (void)setLastPlayedDate:(id)arg1;
- (void)setLastSkippedDate:(id)arg1;
- (void)setPlayCount:(unsigned int)arg1;
- (void)setPlayCountSinceSync:(unsigned int)arg1;
- (void)setRating:(unsigned int)arg1;
- (void)setSkipCount:(unsigned int)arg1;
- (void)setSkipCountSinceSync:(unsigned int)arg1;
- (unsigned int)skipCount;
- (unsigned int)skipCountSinceSync;
- (double)startTime;
- (double)stopTime;
- (id)title;
- (id)valueForProperty:(id)arg1;
- (unsigned int)year;

@end
