/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetWriterInputHelper, AVAssetWriterInputInternal, AVWeakReference, NSArray, NSDictionary, NSString;

@interface AVAssetWriterInput : NSObject {
    AVAssetWriterInputInternal *_internal;
}

@property(getter=_isAttachedToPixelBufferAdaptor,setter=_setAttachedToPixelBufferAdaptor:) BOOL attachedToPixelBufferAdaptor;
@property BOOL expectsMediaDataInRealTime;
@property(getter=_helper,setter=_setHelper:,retain) AVAssetWriterInputHelper * helper;
@property(readonly) NSString * mediaType;
@property(copy) NSArray * metadata;
@property(readonly) NSDictionary * outputSettings;
@property(getter=_pixelBufferPool,readonly) struct __CVPixelBufferPool { }* pixelBufferPool;
@property(getter=isReadyForMoreMediaData,readonly) BOOL readyForMoreMediaData;
@property(getter=_sourcePixelBufferAttributes,setter=_setSourcePixelBufferAttributes:,copy) NSDictionary * sourcePixelBufferAttributes;
@property(getter=_status,readonly) int status;
@property(getter=_weakReferenceToAssetWriter,setter=_setWeakReferenceToAssetWriter:,retain) AVWeakReference * weakReferenceToAssetWriter;

+ (id)assetWriterInputWithMediaType:(id)arg1 outputSettings:(id)arg2;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingReadyForMoreMediaData;
+ (id)keyPathsForValuesAffectingStatus;

- (BOOL)_appendPixelBuffer:(struct __CVBuffer { }*)arg1 withPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)_helper;
- (BOOL)_isAttachedToPixelBufferAdaptor;
- (struct __CVPixelBufferPool { }*)_pixelBufferPool;
- (BOOL)_prepareForWritingWithFigAssetWriter:(struct OpaqueFigAssetWriter { }*)arg1 mediaFileType:(id)arg2 error:(id*)arg3;
- (BOOL)_prepareToFinishWritingReturningError:(id*)arg1;
- (void)_setAttachedToPixelBufferAdaptor:(BOOL)arg1;
- (void)_setHelper:(id)arg1;
- (void)_setSourcePixelBufferAttributes:(id)arg1;
- (void)_setWeakReferenceToAssetWriter:(id)arg1;
- (id)_sourcePixelBufferAttributes;
- (int)_status;
- (void)_tellAssetWriterToTransitionToFailedStatusWithError:(id)arg1;
- (void)_transitionToTerminalStatus:(int)arg1;
- (id)_weakReferenceToAssetWriter;
- (BOOL)appendSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)dealloc;
- (id)description;
- (BOOL)expectsMediaDataInRealTime;
- (void)finalize;
- (id)init;
- (id)initWithMediaType:(id)arg1 outputSettings:(id)arg2;
- (BOOL)isReadyForMoreMediaData;
- (void)markAsFinished;
- (int)mediaTimeScale;
- (id)mediaType;
- (id)metadata;
- (id)outputSettings;
- (void)release;
- (void)requestMediaDataWhenReadyOnQueue:(struct dispatch_queue_s { }*)arg1 usingBlock:(id)arg2;
- (id)retain;
- (void)setExpectsMediaDataInRealTime:(BOOL)arg1;
- (void)setMediaTimeScale:(int)arg1;
- (void)setMetadata:(id)arg1;
- (void)setTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transform;

@end
