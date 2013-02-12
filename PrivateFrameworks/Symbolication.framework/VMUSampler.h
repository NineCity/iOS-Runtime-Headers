/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@class NSConditionLock, NSMapTable, NSMutableArray, NSString, VMUProcessDescription, VMUTaskMemoryCache;

@interface VMUSampler : NSObject {
    struct _CSTypeRef { 
        unsigned int _opaque_1; 
        unsigned int _opaque_2; 
    void *_cfi;
    id _delegate;
    double _interval;
    NSMapTable *_lastThreadBacktraceMap;
    unsigned int _mainThread;
    unsigned int _maxPreviousThreadCount;
    VMUTaskMemoryCache *_memCache;
    BOOL _needTaskPortDealloc;
    unsigned int _numberOfCopiedBacktraces;
    unsigned int _numberOfSamples;
    int _pid;
    unsigned int _previousThreadCount;
    unsigned int *_previousThreadList;
    VMUProcessDescription *_processDescription;
    NSString *_processName;
    BOOL _recordThreadStates;
    unsigned int _sampleLimit;
    NSMutableArray *_samples;
    BOOL _sampling;
    struct sampling_context_t { } *_samplingContext;
    unsigned int _samplingThreadPort;
    BOOL _shouldOutputSignature;
    BOOL _showDispatchQueueNames;
    BOOL _stacksFixed;
    NSConditionLock *_stateLock;
    } _symbolicator;
    unsigned int _task;
    BOOL _taskIs64Bit;
    double _tbInterval;
    double _tbRate;
    double _timeLimit;
    double _timeSpentSamplingWithCFI;
    double _timeSpentSamplingWithoutCFI;
}

+ (void)initialize;
+ (id)sampleAllThreadsOfPID:(int)arg1 withSymbolicator:(id)arg2;
+ (id)sampleAllThreadsOfPID:(int)arg1;
+ (id)sampleAllThreadsOfTask:(unsigned int)arg1 symbolicate:(BOOL)arg2;
+ (id)sampleAllThreadsOfTask:(unsigned int)arg1 withSymbolicator:(id)arg2 symbolicate:(BOOL)arg3;
+ (id)sampleAllThreadsOfTask:(unsigned int)arg1 withSymbolicator:(id)arg2;
+ (id)sampleAllThreadsOfTask:(unsigned int)arg1;

- (void)_fixupStacks:(id)arg1;
- (void)_makeHighPriority;
- (void)_makeTimeshare;
- (void)_runSamplingThread;
- (void)dealloc;
- (id)delegate;
- (id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1 returnedConcurrentFlag:(BOOL*)arg2 returnedThreadId:(unsigned long long*)arg3;
- (id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1;
- (void)finalize;
- (void)flushData;
- (void)forceStop;
- (id)initWithPID:(int)arg1 options:(unsigned int)arg2;
- (id)initWithPID:(int)arg1 orTask:(unsigned int)arg2 options:(unsigned int)arg3;
- (id)initWithPID:(int)arg1;
- (id)initWithTask:(unsigned int)arg1 options:(unsigned int)arg2;
- (id)initWithTask:(unsigned int)arg1;
- (void)initializeSamplingContext:(BOOL)arg1;
- (unsigned int)mainThread;
- (int)pid;
- (void)preloadSymbols;
- (unsigned int)recordSampleTo:(id)arg1 beginTime:(double)arg2 endTime:(double)arg3 thread:(unsigned int)arg4;
- (id)sampleAllThreadsOnce;
- (unsigned int)sampleCount;
- (void)sampleForDuration:(unsigned int)arg1 interval:(unsigned int)arg2;
- (unsigned int)sampleLimit;
- (id)sampleThread:(unsigned int)arg1;
- (id)samples;
- (double)samplingInterval;
- (void)setDelegate:(id)arg1;
- (void)setRecordThreadStates:(BOOL)arg1;
- (void)setSampleLimit:(unsigned int)arg1;
- (void)setSamplingInterval:(double)arg1;
- (void)setShouldOutputSignature:(BOOL)arg1;
- (void)setTimeLimit:(double)arg1;
- (BOOL)shouldOutputSignature;
- (BOOL)start;
- (BOOL)stop;
- (void)stopSampling;
- (id)stopSamplingAndReturnCallNode;
- (struct _CSTypeRef { unsigned int x1; unsigned int x2; })symbolicator;
- (id)threadNameForThread:(unsigned int)arg1 returnedThreadId:(unsigned long long*)arg2 returnedDispatchQueueSerialNum:(unsigned long long*)arg3;
- (id)threadNameForThread:(unsigned int)arg1;
- (double)timeLimit;
- (BOOL)waitUntilDone;
- (void)writeOutput:(id)arg1 append:(BOOL)arg2;

@end
