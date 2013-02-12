/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVCaptureFigAudioDevice, AVCaptureFigVideoDevice, AVCaptureVideoPreviewLayer, AVRunLoopCondition, AVWeakReference, NSError, NSMutableArray, NSMutableDictionary, NSString;

@interface AVCaptureSessionInternal : NSObject {
    NSMutableArray *activeConnections;
    AVCaptureFigAudioDevice *audioDevice;
    int beginConfigRefCount;
    NSMutableDictionary *captureOptions;
    NSMutableArray *connections;
    NSMutableArray *inputs;
    BOOL interrupted;
    NSMutableArray *outputs;
    NSMutableDictionary *previousFigRecorderOptions;
    struct OpaqueFigRecorder { } *recorder;
    BOOL recording;
    AVRunLoopCondition *runLoopCondition;
    BOOL running;
    NSString *sessionPreset;
    NSError *stopError;
    AVCaptureFigVideoDevice *videoDevice;
    AVCaptureVideoPreviewLayer *videoPreviewLayer;
    BOOL waitingForRecorderDidStartPreviewing;
    BOOL waitingForRecorderDidStartRecording;
    BOOL waitingForRecorderDidStopPreviewing;
    BOOL waitingForRecorderDidStopRecording;
    BOOL waitingForRecorderDidStopSource;
    AVWeakReference *weakReference;
}

- (void)dealloc;
- (id)init;

@end
