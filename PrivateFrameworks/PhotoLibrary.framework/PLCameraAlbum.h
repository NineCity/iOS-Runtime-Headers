/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCameraAlbum : PLPhotoAlbum {
    BOOL _albumDidChange;
    BOOL _ignoreNotifications;
    unsigned int _previousImageCount;
}

+ (void)deletePreviewWellImage;
+ (id)photoAlbumWithDefaultValues;
+ (id)previewWellImage;
+ (BOOL)previewWellImageExists;
+ (void)savePreviewWellImage:(id)arg1 shouldNotify:(BOOL)arg2;

- (id)_slideshowSettingsPath;
- (unsigned int)count;
- (BOOL)deletedWhenEmpty;
- (int)indexOfPosterImage;
- (id)init;
- (BOOL)isEditable;
- (id)name;
- (id)posterImage;
- (void)setSlideshowSettings:(id)arg1;
- (id)slideshowSettings;

@end
