/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSCalendar, NSDictionary, NSIndexSet, NSMutableArray, NSMutableDictionary, PLCameraAlbum, PLConnection, PLPhotoAlbum, PLPhotoStreamAlbum, PLThumbnailManager, PLWStackedImageCache;

@interface PLPhotoLibrary : MLPhotoLibrary {
    PLPhotoAlbum *_allImportedPhotosAlbum;
    PLPhotoStreamAlbum *_allPhotoStreamPhotosAlbum;
    struct __CFDictionary { } *_allPhotos;
    PLPhotoAlbum *_allPhotosAlbum;
    PLConnection *_connection;
    int _databaseMigrationKind;
    NSCalendar *_exifConversionCalendar;
    NSDictionary *_existingThumbnailEntries;
    NSIndexSet *_existingThumbnailIndexes;
    PLPhotoAlbum *_iPadAllPhotosAlbum;
    PLPhotoAlbum *_lastImportedPhotosAlbum;
    double _lastRemoteDataModification;
    BOOL _listeningForITunesSyncing;
    NSMutableArray *_photoStreamAlbums;
    NSMutableDictionary *_photoStreamAlbumsByStreamID;
    id _ptpDelegate;
    BOOL _readOnly;
    PLCameraAlbum *_savedPhotosAlbum;
    PLWStackedImageCache *_stackedImageCache;
    PLThumbnailManager *_thumbnailManager;
}

+ (void)_presentSqliteCorruptionErrorDialog;
+ (id)allIndicatorFilePaths;
+ (id)anotherUid;
+ (BOOL)cameraRollNeedsMigration;
+ (long)creationDate:(id*)arg1 latitude:(double*)arg2 longitude:(double*)arg3 fromVideo:(id)arg4;
+ (id)dcimDirectory;
+ (id)dcimDirectoryPath;
+ (id)iTunesPhotosDirectory;
+ (id)imageWriterIndicatorFilePath;
+ (BOOL)isReadOnly;
+ (id)migrationIndicatorFilePath;
+ (void)moveDatabasesAside;
+ (BOOL)needsThumbnailMigration;
+ (BOOL)needsToRegenerateVideoThumbnailsForConnection:(id)arg1;
+ (id)photoDataDirectory;
+ (id)photoDataMiscDirectory;
+ (id)photoStreamsDataDirectory;
+ (BOOL)processCanReadSandboxForPath:(id)arg1;
+ (BOOL)processCanWriteSandboxForPath:(id)arg1;
+ (id)savedPhotosAlbum;
+ (void)setImageWriterIsBusy:(BOOL)arg1;
+ (void)setMigratorIsBusy:(BOOL)arg1;
+ (void)setPhotoStreamEnabled:(BOOL)arg1;
+ (void)setVideoCaptureIsBusy:(BOOL)arg1;
+ (id)sharedPhotoLibrary;
+ (id)sharedPhotoLibraryIfExists;
+ (id)sqliteErrorIndicatorFilePath;
+ (id)takingVideoIndicatorFilePath;

- (void)_addPhoto:(id)arg1 toEvent:(id)arg2;
- (void)_attachAuxDatabase;
- (void)_closeDatabaseConnection;
- (void)_compactThumbnailTablesIfNecessary;
- (void)_deleteFilesAndEmptyDirectoriesAtPaths:(id)arg1;
- (void)_deleteObsoleteMetadataFiles;
- (void)_detachAuxDatabase;
- (BOOL)_hasAtLeastOneItem:(BOOL)arg1;
- (id)_iTunesPhotos;
- (id)_imagesForAlbum:(id)arg1 firstImageOnly:(BOOL)arg2;
- (void)_loadExistingThumbnailEntries;
- (void)_loadPhotoLibraryAfterMigration;
- (void)_migrationDidFinish;
- (int)_nextAvailableThumbnailIndex;
- (void)_notifyChangedPhotos:(id)arg1;
- (void)_notifyPTPAboutAddedPhoto:(id)arg1;
- (void)_notifyPTPAboutDeletedPhoto:(id)arg1;
- (void)_notifyPTPAboutPhotoLibraryAvailable:(BOOL)arg1;
- (void)_notifyPhotoLibraryIsNoLongerAvailableOnMainThread;
- (void)_notifyProgress:(float)arg1;
- (void)_notifyRebuildProgressOnMainThread:(id)arg1;
- (int)_numberOfAssetsInDCIMDirectory;
- (int)_numberOfNonPhotoStreamAssetsInDatabase;
- (id)_occupiedThumbnailIndexes;
- (int)_orientationAfterRotatingOrientation:(int)arg1 clockwiseByDegrees:(int)arg2 transposeCoordinatesOut:(BOOL*)arg3;
- (int)_orientationOfFileAtPath:(id)arg1;
- (void)_photoAlbumChanged:(id)arg1;
- (void)_removeOrphanedThumbnailEntries;
- (id)_setPhotoAtPath:(id)arg1 toOrientation:(int)arg2;
- (int)_sortingCategoryForAlbum:(id)arg1;
- (void)_unloadExistingThumbnailEntries;
- (id)addDCIMEntryAtPath:(id)arg1 toEvent:(id)arg2 extensions:(id)arg3 progress:(struct { id x1; float x2; struct __CFArray {} *x3; float x4; BOOL x5; id x6; }*)arg4 notify:(BOOL)arg5 importSessionIdentifier:(int)arg6 isImported:(BOOL)arg7 gatherVideoInformation:(BOOL)arg8 previewImage:(id)arg9 thumbnailImage:(id)arg10 savedAssetType:(int)arg11;
- (void)addPhoto:(id)arg1 toAlbumsAndEvent:(id)arg2 invalidateStackedImageForEvent:(BOOL)arg3;
- (void)addPhotoToCameraRoll:(id)arg1;
- (void)addToKnownPhotoStreamAlbums:(id)arg1;
- (id)albumForStreamID:(id)arg1;
- (id)albumWithUuid:(id)arg1;
- (id)albums;
- (id)albumsForContentMode:(int)arg1;
- (id)allImportedPhotosAlbum;
- (id)allPhotoStreamPhotosAlbum;
- (id)allPhotoStreamPhotosAlbumIfItExists;
- (id)allPhotosAlbum;
- (id)allPhotosAlbumIfExists;
- (void)applicationWillEnterForeground:(id)arg1;
- (id)assetURLForPhoto:(id)arg1 extension:(id)arg2;
- (id)assetURLForPhoto:(id)arg1;
- (id)connection;
- (id)countOfAllPhotosAndVideos;
- (id)dataForPhoto:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8;
- (id)dateForPhoto:(id)arg1;
- (void)dealloc;
- (void)deleteAllImages;
- (void)deleteImages:(id)arg1;
- (BOOL)deleteImagesWithKeys:(id)arg1;
- (id)eventAlbumContainingPhoto:(id)arg1;
- (id)exifStringForDate:(id)arg1;
- (id)fileExtensionsForPhoto:(id)arg1;
- (void)finishVideoMigration;
- (void)flushAlbums;
- (void)flushDCIMAlbums;
- (void)flushPhotoStreamAlbums;
- (void)fullDcimMigration;
- (BOOL)hasAtLeastOneItem;
- (BOOL)hasAtLeastOnePhoto;
- (BOOL)hasAtLeastOnePhotoWithGPS;
- (BOOL)hasDelegateAndValidDatabase;
- (BOOL)hasPhotoWithCaptureDate:(id)arg1 fileName:(id)arg2 fileSize:(int)arg3;
- (BOOL)hasPhotoWithFileCreationDate:(id)arg1 fileName:(id)arg2 fileSize:(int)arg3;
- (id)iPadAllPhotosAlbum;
- (id)iPadAllPhotosAlbumIfExists;
- (id)iTunesFaceImageForRecordID:(int)arg1 faceIndex:(int)arg2 size:(struct CGSize { float x1; float x2; })arg3 returnLocationInImage:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4;
- (void)iTunesSyncPhaseDidFinish:(int)arg1 reason:(int)arg2;
- (void)iTunesSyncPhaseWillStart:(int)arg1;
- (id)imageForFormat:(int)arg1 forImage:(id)arg2;
- (id)imagePickerAlbums;
- (id)init;
- (void)initializeGraphicsServices;
- (void)insertAlbum:(id)arg1 intoSortedAlbums:(id)arg2;
- (BOOL)isPhotoInSavedPhotosAlbum:(id)arg1;
- (id)lastImportedPhotosAlbum;
- (BOOL)libraryIsAvailable;
- (void)listenForITunesSyncing;
- (void)loadDatabaseCreateForMigration:(BOOL)arg1;
- (void)migrateDcimToDatabase;
- (void)migrateSavedPhotoCaptureTimes;
- (void)modifyDCIMEntryForPhoto:(id)arg1;
- (void)modifyDCIMEntryForVideo:(id)arg1 progress:(struct { id x1; float x2; struct __CFArray {} *x3; float x4; BOOL x5; id x6; }*)arg2 previewImage:(id)arg3 thumbnailImage:(id)arg4;
- (BOOL)multiplePhotoStreamsAvailable;
- (BOOL)needsMigration;
- (id)newImageForDulcimerImage:(id)arg1 format:(int)arg2 outImageProperties:(const struct __CFDictionary {}**)arg3;
- (id)newImageForDulcimerImage:(id)arg1 format:(int)arg2;
- (id)nonPersistedEventWithTitle:(id)arg1;
- (id)pathsToFilesTrackedByExtras:(id)arg1;
- (id)photoFromAssetURL:(id)arg1;
- (void)photoLibraryAvailableNotification;
- (void)photoLibraryCorruptNotification;
- (void)photoLibraryRebuildingNotification;
- (id)photoStreamAlbums;
- (id)photoStreamAlbumsForPreferences;
- (id)photoWithPath:(id)arg1;
- (id)photoWithPrimaryKey:(int)arg1;
- (void)pictureWasChanged;
- (void)pictureWasDeletedNotification;
- (void)pictureWasTakenOrChanged;
- (id)posterImageForAlbum:(id)arg1;
- (void)preheatImageDataForImages:(id)arg1 withFormat:(int)arg2;
- (void)prepareToMigrateDcimToDatabase;
- (BOOL)ptpCanDeleteFiles;
- (BOOL)ptpDeletePhotoWithKey:(id)arg1 andExtension:(id)arg2;
- (BOOL)ptpDeletePhotosWithKeys:(id)arg1;
- (id)ptpInformationForFilesInDirectory:(id)arg1;
- (id)ptpInformationForPhotoWithPrimaryKey:(int)arg1;
- (id)ptpInformationForPhotosWithPrimaryKeys:(id)arg1;
- (id)ptpThumbnailForPhotoWithKey:(id)arg1;
- (void)removeFromKnownPhotoStreamAlbums:(id)arg1;
- (void)removePhotosFromAllAlbums:(id)arg1;
- (BOOL)rotateCameraPhoto:(id)arg1 byDegrees:(int)arg2;
- (BOOL)rotatePLPhoto:(id)arg1 byDegrees:(int)arg2;
- (BOOL)rotatePhoto:(id)arg1 byDegrees:(int)arg2;
- (void)saveToSavedPhotosAllPhotoInPhotoStreamAlbums:(id)arg1;
- (id)savedPhotosAlbum;
- (void)setPtpDelegate:(id)arg1;
- (void)setSqliteErrorAndExitIfNecessary;
- (id)syncedAlbums;
- (void)updateThumbnailsForPhoto:(id)arg1 previewImage:(id)arg2 thumbnailImage:(id)arg3;
- (id)userAlbums;
- (id)wallpaperAlbums;

@end
