/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <CoreDAVAccountInfoProvider>, <CoreDAVResponseBodyParser>, <CoreDAVTaskDelegate>, <CoreDAVTaskManager>, CoreDAVRequestLogger, NSDate, NSDictionary, NSError, NSHTTPURLResponse, NSURL, NSURLConnection, NSURLRequest;

@interface CoreDAVTask : NSObject {
    <CoreDAVAccountInfoProvider> *_accountInfoProvider;
    id _completionBlock;
    NSURLConnection *_connection;
    void *_context;
    NSDate *_dateConnectionWentOut;
    <CoreDAVTaskDelegate> *_delegate;
    int _depth;
    BOOL _didCancel;
    BOOL _didFailWithError;
    BOOL _didFinishLoading;
    BOOL _didReceiveData;
    BOOL _didReceiveResponse;
    BOOL _didSendRequest;
    NSError *_error;
    BOOL _finished;
    CoreDAVRequestLogger *_logger;
    int _numDownloadedElements;
    NSError *_passwordNotificationError;
    BOOL _receivedBadPasswordResponse;
    NSURLRequest *_request;
    id _requestProgressBlock;
    NSHTTPURLResponse *_response;
    <CoreDAVResponseBodyParser> *_responseBodyParser;
    id _responseProgressBlock;
    int _responseStatusCode;
    <CoreDAVTaskManager> *_taskManager;
    double _timeoutInterval;
    unsigned int _totalBytesReceived;
    NSURL *_url;
}

@property <CoreDAVAccountInfoProvider> * accountInfoProvider;
@property(copy) id completionBlock;
@property void* context;
@property <CoreDAVTaskDelegate> * delegate;
@property int depth;
@property(retain) NSError * error;
@property(copy) id requestProgressBlock;
@property(retain) <CoreDAVResponseBodyParser> * responseBodyParser;
@property(retain,readonly) NSDictionary * responseHeaders;
@property(copy) id responseProgressBlock;
@property int responseStatusCode;
@property <CoreDAVTaskManager> * taskManager;
@property double timeoutInterval;
@property unsigned int totalBytesReceived;
@property(retain,readonly) NSURL * url;

+ (unsigned int)uniqueQueryID;

- (id)_applyAuthenticationChain:(struct __CFArray { }*)arg1 toRequest:(id)arg2;
- (id)_createBodyData;
- (void)_failImmediately;
- (void)_handleBadPasswordResponse;
- (BOOL)_includeGeneralHeaders;
- (id)accountInfoProvider;
- (id)additionalHeaderValues;
- (id)completionBlock;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(int)arg2 totalBytesWritten:(int)arg3 totalBytesExpectedToWrite:(int)arg4;
- (id)connection:(id)arg1 needNewBodyStream:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (BOOL)connectionShouldUseCredentialStorage:(id)arg1;
- (void*)context;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (int)depth;
- (id)description;
- (id)error;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)httpMethod;
- (id)initWithURL:(id)arg1;
- (void)loadRequest:(id)arg1;
- (int)numDownloadedElements;
- (void)performCoreDAVTask;
- (void)reportStatusWithError:(id)arg1;
- (id)requestBody;
- (id)requestBodyStream;
- (id)requestProgressBlock;
- (void)reset;
- (id)responseBodyParser;
- (id)responseHeaders;
- (id)responseProgressBlock;
- (int)responseStatusCode;
- (void)setAccountInfoProvider:(id)arg1;
- (void)setCompletionBlock:(id)arg1;
- (void)setContext:(void*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDepth:(int)arg1;
- (void)setError:(id)arg1;
- (void)setRequestProgressBlock:(id)arg1;
- (void)setResponseBodyParser:(id)arg1;
- (void)setResponseProgressBlock:(id)arg1;
- (void)setResponseStatusCode:(int)arg1;
- (void)setTaskManager:(id)arg1;
- (void)setTimeoutInterval:(double)arg1;
- (void)setTotalBytesReceived:(unsigned int)arg1;
- (void)startModal;
- (id)taskManager;
- (void)tearDownResources;
- (double)timeoutInterval;
- (unsigned int)totalBytesReceived;
- (id)url;
- (BOOL)validate:(id*)arg1;

@end
