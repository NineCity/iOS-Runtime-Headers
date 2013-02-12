/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSDictionary, NSString;

@interface CKAudioMediaObject : CKAVMediaObject {
    NSDictionary *_transcodeOptions;
    NSString *_transcodePath;
}

+ (id)mimeTypesToFileExtensions;

- (void)dealloc;
- (id)effectiveExportedFilename;
- (id)filenameForMedia;
- (int)mediaType;
- (id)optionsForMedia;
- (void)prepareForTranscode;
- (id)previewTitle;
- (BOOL)shouldTranscodeForMMS;
- (unsigned long long)sizeInBytes;
- (double)transcodeDuration;
- (double)transcodeEndTime;
- (id)transcodeMimeType;
- (id)transcodePath;
- (double)transcodeStartTime;
- (id)transcodedFilename;
- (id)transcodedPathExtension;

@end
