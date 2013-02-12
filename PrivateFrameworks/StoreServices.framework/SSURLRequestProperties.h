/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSArray, NSData, NSDictionary, NSInputStream, NSString, NSURL;

@interface SSURLRequestProperties : NSObject <NSCoding, NSCopying, NSMutableCopying> {
    int _allowedRetryCount;
    int _assetType;
    unsigned int _cachePolicy;
    NSString *_clientIdentifier;
    struct dispatch_queue_s { } *_dispatchQueue;
    long long _expectedContentLength;
    NSData *_httpBody;
    NSInputStream *_httpBodyStream;
    NSDictionary *_httpHeaders;
    NSString *_httpMethod;
    BOOL _isITunesStoreRequest;
    NSDictionary *_requestParameters;
    BOOL _shouldProcessProtocol;
    double _timeoutInterval;
    NSString *_urlBagKey;
    int _urlBagType;
    id _urlBagURLBlock;
    NSArray *_urls;
}

@property(copy,readonly) NSData * HTTPBody;
@property(retain,readonly) NSInputStream * HTTPBodyStream;
@property(copy,readonly) NSDictionary * HTTPHeaders;
@property(copy,readonly) NSString * HTTPMethod;
@property(getter=isITunesStoreRequest,readonly) BOOL ITunesStoreRequest;
@property(retain,readonly) NSURL * URL;
@property(copy,readonly) NSString * URLBagKey;
@property(readonly) int URLBagType;
@property(copy,readonly) id URLBagURLBlock;
@property(copy,readonly) NSArray * URLs;
@property(readonly) int allowedRetryCount;
@property(readonly) int assetType;
@property(readonly) unsigned int cachePolicy;
@property(readonly) BOOL canBeResolved;
@property(copy,readonly) NSString * clientIdentifier;
@property(readonly) long long expectedContentLength;
@property(copy,readonly) NSDictionary * requestParameters;
@property(readonly) BOOL shouldProcessProtocol;
@property(readonly) double timeoutInterval;

- (id)HTTPBody;
- (id)HTTPBodyStream;
- (id)HTTPHeaders;
- (id)HTTPMethod;
- (id)URL;
- (id)URLBagKey;
- (int)URLBagType;
- (id)URLBagURLBlock;
- (id)URLs;
- (id)_initCommon;
- (int)allowedRetryCount;
- (int)assetType;
- (unsigned int)cachePolicy;
- (BOOL)canBeResolved;
- (id)clientIdentifier;
- (id)copyPropertyListEncoding;
- (id)copyURLRequest;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (long long)expectedContentLength;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithURLRequest:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isITunesStoreRequest;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)requestParameters;
- (BOOL)shouldProcessProtocol;
- (double)timeoutInterval;

@end
