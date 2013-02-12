/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetExportSessionInternal, AVAudioMix, AVVideoComposition, NSArray, NSError, NSString, NSURL;

@interface AVAssetExportSession : NSObject {
    AVAssetExportSessionInternal *_exportSession;
}

@property(copy) AVAudioMix * audioMix;
@property(readonly) NSError * error;
@property long long fileLengthLimit;
@property(readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } maxDuration;
@property(copy) NSArray * metadata;
@property(copy) NSString * outputFileType;
@property(copy) NSURL * outputURL;
@property(readonly) NSString * presetName;
@property(readonly) float progress;
@property BOOL shouldOptimizeForNetworkUse;
@property(readonly) int status;
@property(readonly) NSArray * supportedFileTypes;
@property struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property(copy) AVVideoComposition * videoComposition;

+ (id)_figRemakerNotificationNames;
+ (id)_settingForPreset:(id)arg1;
+ (id)_utTypesForPresets;
+ (id)allExportPresets;
+ (id)exportPresetsCompatibleWithAsset:(id)arg1;
+ (id)exportSessionWithAsset:(id)arg1 presetName:(id)arg2;

- (id)_actualPresetName;
- (void)_addListeners;
- (BOOL)_canPassThroughAudio:(id)arg1 checkEnabled:(BOOL)arg2 checkProtected:(BOOL)arg3;
- (BOOL)_canPassThroughVideo:(id)arg1 checkEnabled:(BOOL)arg2 checkAll:(BOOL)arg3 checkProtected:(BOOL)arg4;
- (struct OpaqueFigRemaker { }*)_createFigRemaker;
- (struct CGSize { float x1; float x2; })_getSourceDimension;
- (int)_getTrackCountOfType:(id)arg1 checkEnabled:(BOOL)arg2;
- (void)_handleFigRemakerNotification:(id)arg1;
- (void)_handleFigRemakerNotificationAsync:(id)arg1;
- (BOOL)_hasProtectedNonAudioVideoTracks;
- (void)_removeListeners;
- (id)_settingForFigRemaker;
- (BOOL)_totalSizeOfTracksIsWithinFileLengthLimit:(id)arg1 forSetting:(id)arg2;
- (void)_transitionToStatus:(int)arg1 error:(id)arg2;
- (void)_updateProgress;
- (id)audioMix;
- (void)cancelExport;
- (void)dealloc;
- (id)description;
- (id)error;
- (void)exportAsynchronouslyWithCompletionHandler:(id)arg1;
- (long long)fileLengthLimit;
- (void)finalize;
- (id)init;
- (id)initWithAsset:(id)arg1 presetName:(id)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxDuration;
- (id)metadata;
- (id)outputFileType;
- (id)outputURL;
- (id)presetName;
- (float)progress;
- (void)release;
- (id)retain;
- (void)setAudioMix:(id)arg1;
- (void)setFileLengthLimit:(long long)arg1;
- (void)setMetadata:(id)arg1;
- (void)setOutputFileType:(id)arg1;
- (void)setOutputURL:(id)arg1;
- (void)setShouldOptimizeForNetworkUse:(BOOL)arg1;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setVideoComposition:(id)arg1;
- (BOOL)shouldOptimizeForNetworkUse;
- (int)status;
- (id)supportedFileTypes;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (id)videoComposition;

@end
