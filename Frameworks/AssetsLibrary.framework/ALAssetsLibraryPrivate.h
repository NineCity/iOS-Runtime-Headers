/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@class NSMutableArray, PLPhotoLibrary;

@interface ALAssetsLibraryPrivate : NSObject {
    NSMutableArray *_assets;
    BOOL _isValid;
    PLPhotoLibrary *_photoLibrary;
}

@property(retain) NSMutableArray * assets;
@property BOOL isValid;
@property(retain) PLPhotoLibrary * photoLibrary;

- (id)assets;
- (void)dealloc;
- (id)init;
- (BOOL)isValid;
- (id)photoLibrary;
- (void)setAssets:(id)arg1;
- (void)setIsValid:(BOOL)arg1;
- (void)setPhotoLibrary:(id)arg1;

@end
