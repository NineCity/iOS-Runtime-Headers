/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSDictionary, NSString, NSURL;

@interface SUMediaObject : NSObject {
    struct dispatch_queue_s { } *_dispatchQueue;
    unsigned int _imagePickerQualityType;
    NSDictionary *_pickerInfo;
}

@property(readonly) NSDictionary * imagePickerInfo;
@property unsigned int imagePickerQualityType;
@property(readonly) NSString * inputSourceMIMEType;
@property(readonly) NSString * mediaType;
@property(readonly) NSURL * mediaURL;
@property(readonly) NSURL * referenceURL;

+ (id)newMediaObjectWithImagePickerInfo:(id)arg1;

- (id)_fullSizeImage;
- (id)_newLibraryThumbnail;
- (id)copyPreparationOperations;
- (void)dealloc;
- (id)imagePickerInfo;
- (unsigned int)imagePickerQualityType;
- (id)init;
- (id)initWithImagePickerInfo:(id)arg1;
- (id)inputSourceMIMEType;
- (void)loadLibraryThumbnailWithCompletionBlock:(id)arg1;
- (id)mediaType;
- (id)mediaURL;
- (id)newComposeImageWithMaximumSize:(float)arg1;
- (id)newInputSource;
- (id)newThumbnailImageWithMaximumSize:(float)arg1;
- (id)referenceURL;
- (void)saveToLibraryWithCompletionBlock:(id)arg1;
- (void)setImagePickerQualityType:(unsigned int)arg1;

@end
