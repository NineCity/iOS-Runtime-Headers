/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSData, NSError, NSMutableData, NSString, NSURL, NSURLConnection;

@interface MCHTTPTransaction : NSObject {
    NSString *_CMSSignatureHeaderName;
    NSURLConnection *_connection;
    NSString *_contentType;
    NSURL *_currentURL;
    NSData *_data;
    struct dispatch_semaphore_s { } *_doneSema;
    NSError *_error;
    struct __SecIdentity { } *_identity;
    NSString *_method;
    NSURL *_permanentlyRedirectedURL;
    BOOL _rememberData;
    NSURL *_requestURL;
    NSMutableData *_responseData;
    int _statusCode;
    double _timeout;
    NSString *_userAgent;
}

@property(retain) NSString * CMSSignatureHeaderName;
@property(retain) NSString * contentType;
@property(retain) NSData * data;
@property(readonly) NSError * error;
@property(retain) NSString * method;
@property(readonly) NSURL * permanentlyRedirectedURL;
@property(readonly) NSData * responseData;
@property(readonly) int statusCode;
@property double timeout;
@property(retain) NSURL * url;
@property(retain) NSString * userAgent;

+ (id)performRequestURL:(id)arg1 method:(id)arg2 timeout:(double)arg3 userAgent:(id)arg4 contentType:(id)arg5 data:(id)arg6 identity:(struct __SecIdentity { }*)arg7 outPermanentlyRedirectedURL:(id*)arg8 outError:(id*)arg9;
+ (id)transactionWithURL:(id)arg1 method:(id)arg2;

- (id)CMSSignatureHeaderName;
- (void)_beginTransaction;
- (BOOL)_shouldAllowTrust:(struct __SecTrust { }*)arg1 forHost:(id)arg2;
- (BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (BOOL)connectionShouldUseCredentialStorage:(id)arg1;
- (id)contentType;
- (struct __SecIdentity { }*)copyIdentity;
- (id)data;
- (void)dealloc;
- (id)error;
- (id)initWithURL:(id)arg1 method:(id)arg2;
- (id)method;
- (void)performSynchronously;
- (id)permanentlyRedirectedURL;
- (id)responseData;
- (void)setCMSSignatureHeaderName:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setData:(id)arg1;
- (void)setIdentity:(struct __SecIdentity { }*)arg1;
- (void)setMethod:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setUrl:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (int)statusCode;
- (double)timeout;
- (id)url;
- (id)userAgent;

@end
