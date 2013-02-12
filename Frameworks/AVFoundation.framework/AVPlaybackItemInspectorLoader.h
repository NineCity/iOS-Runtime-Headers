/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlaybackItemInspectorLoader : AVAssetInspectorLoader {
    struct OpaqueFigFormatReaderLoader { } *_formatReaderLoader;
    struct OpaqueFigPlaybackItem { } *_playbackItem;
}

@property(getter=_playbackItem,readonly) struct OpaqueFigPlaybackItem { }* playbackItem;

- (void)_addFigObjectNotifications;
- (struct OpaqueFigFormatReader { }*)_copyFormatReaderFromFigObjectWithFigErrorCode:(int*)arg1;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (struct OpaqueFigFormatReaderLoader { }*)_formatReaderLoader;
- (BOOL)_inspectionRequiresAFormatReader;
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)arg1;
- (struct OpaqueFigPlaybackItem { }*)_playbackItem;
- (id)_playbackItemPropertiesForKeys:(id)arg1;
- (void)_removeFigObjectNotifications;
- (id)assetInspector;
- (void)cancelLoading;
- (void)dealloc;
- (void)finalize;
- (unsigned int)hash;
- (id)initWithURL:(id)arg1 playbackItem:(struct OpaqueFigPlaybackItem { }*)arg2;
- (BOOL)isEqual:(id)arg1;

@end
