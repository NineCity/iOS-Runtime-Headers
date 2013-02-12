/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class MLPhotoDCFDirectory, NSDate, NSMutableSet, NSString;

@interface MLPhotoDCFFileGroup : MLPhotoDCFObject {
    unsigned int _hashComputed : 1;
    unsigned int _addedExtensions : 1;
    unsigned int _writeIsPending : 1;
    NSDate *_date;
    id _delegate;
    MLPhotoDCFDirectory *_directory;
    NSString *_directoryPath;
    NSMutableSet *_extensions;
    unsigned int _hash;
    NSString *_prebakedThumbnailPath;
    NSString *_preferredExtension;
    NSString *_videoFileExtension;
}

+ (id)allMetadataFileExtensions;
+ (struct CGImage { }*)createThumbnailOfImage:(struct CGImage { }*)arg1 format:(int)arg2 fullPath:(id)arg3 orientation:(int)arg4 outThumbnailData:(id*)arg5;

- (void)addExtension:(id)arg1;
- (void)addExtensionsFromMetadataDirectory;
- (int)compare:(id)arg1;
- (void)createMetadataDirectoryIfNecessary;
- (void)createWildcatThumbnailsFromImage:(struct CGImage { }*)arg1 orientation:(int)arg2 options:(id)arg3 delegate:(id)arg4;
- (id)date;
- (void)dealloc;
- (id)delegate;
- (void)deleteFiles;
- (void)deleteObsoleteFiles;
- (id)description;
- (id)directory;
- (id)extensions;
- (void)forceAddExtensionsFromMetadataDirectory;
- (BOOL)hasObsoleteFiles;
- (BOOL)hasPrebakedLandscapeScrubberThumbnails;
- (BOOL)hasPrebakedPortraitScrubberThumbnails;
- (BOOL)hasPrebakedThumbnail;
- (BOOL)hasPrebakedWildcatThumbnails;
- (BOOL)hasThumbnail;
- (BOOL)hasVideoFile;
- (unsigned int)hash;
- (id)imageSourceTypeHint;
- (id)initWithName:(id)arg1 number:(int)arg2 directory:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;
- (BOOL)isValidImage;
- (BOOL)isWritePending;
- (id)lowResolutionFilename;
- (id)pathForContainingDirectory;
- (id)pathForFullSizeImage;
- (id)pathForGroupWithoutExtension;
- (id)pathForLowResolutionFile;
- (id)pathForMetadata;
- (id)pathForMetadataWithGroupName;
- (id)pathForPrebakedLandscapeScrubberThumbnails;
- (id)pathForPrebakedPortraitScrubberThumbnails;
- (id)pathForPrebakedThumbnail;
- (id)pathForPrebakedWildcatThumbnailsFile;
- (id)pathForThumbnailFile;
- (id)pathForTrimmedVideoFile;
- (id)pathForVideoFile;
- (id)pathForVideoPreviewFile;
- (id)prebakedLandscapeScrubberThumbnailsFilename;
- (id)prebakedPortraitScrubberThumbnailsFilename;
- (id)prebakedThumbnailFilename;
- (id)prebakedWildcatThumbnailsFilename;
- (void)setDate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setWriteIsPending:(BOOL)arg1;
- (id)thumbnailFilename;
- (id)videoPreviewFilename;

@end
