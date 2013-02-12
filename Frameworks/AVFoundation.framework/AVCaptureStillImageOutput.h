/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureStillImageOutputInternal, NSArray, NSDictionary;

@interface AVCaptureStillImageOutput : AVCaptureOutput {
    AVCaptureStillImageOutputInternal *_internal;
}

@property(readonly) NSArray * availableImageDataCVPixelFormatTypes;
@property(readonly) NSArray * availableImageDataCodecTypes;
@property(copy) NSDictionary * outputSettings;

+ (struct CGImage { }*)cgImageForBGRASurface:(struct __IOSurface { }*)arg1 size:(unsigned long)arg2;
+ (void)initialize;
+ (id)jpegStillImageNSDataRepresentation:(struct opaqueCMSampleBuffer { }*)arg1;
+ (id)jpegStillImageNSDataRepresentationForBGRASurface:(struct __IOSurface { }*)arg1 size:(unsigned long)arg2;
+ (id)jpegStillImageNSDataRepresentationForSurface:(struct __IOSurface { }*)arg1 size:(unsigned long)arg2 metadata:(id)arg3;

- (id)_applyOverridesToCaptureOptions:(id)arg1;
- (void)_updateStillImageDataSizeForCaptureOptions:(id)arg1;
- (id)availableImageDataCVPixelFormatTypes;
- (id)availableImageDataCodecTypes;
- (void)captureStillImageAsynchronouslyFromConnection:(id)arg1 completionHandler:(id)arg2;
- (void)captureStillImageSurfaceAsynchronouslyFromConnection:(id)arg1 completionHandler:(id)arg2;
- (void)configureAndInitiateCopyStillImageForRequest:(id)arg1;
- (id)connectionMediaTypes;
- (void)dealloc;
- (id)firstActiveConnection;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (void)handlePhotoTakenForRequest:(id)arg1 info:(id)arg2;
- (unsigned long)imageDataFormatType;
- (id)init;
- (BOOL)isCapturingStillImage;
- (BOOL)isChromaNoiseReductionEnabled;
- (BOOL)isEV0CaptureEnabled;
- (BOOL)isHDRCaptureEnabled;
- (long long)maxStillImageDataSize;
- (id)outputSettings;
- (struct CGSize { float x1; float x2; })previewImageSize;
- (BOOL)resumeVideoProcessing;
- (id)scaleAndCropDictionary;
- (void)setChromaNoiseReductionEnabled:(BOOL)arg1;
- (void)setEV0CaptureEnabled:(BOOL)arg1;
- (void)setHDRCaptureEnabled:(BOOL)arg1;
- (void)setOutputSettings:(id)arg1;
- (void)setPreviewImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setSuspendsVideoProcessingDuringStillImageCapture:(BOOL)arg1;
- (BOOL)suspendsVideoProcessingDuringStillImageCapture;

@end
