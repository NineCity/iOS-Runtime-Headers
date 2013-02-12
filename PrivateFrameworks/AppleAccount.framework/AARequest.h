/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@class NSString, NSURLCredential, NSURLRequest;

@interface AARequest : NSObject {
    NSString *_urlString;
}

@property(readonly) NSURLCredential * urlCredential;
@property(readonly) NSURLRequest * urlRequest;

+ (id)protocolVersion;
+ (Class)responseClass;

- (id)bodyDictionary;
- (void)dealloc;
- (id)initWithURLString:(id)arg1;
- (id)urlCredential;
- (id)urlRequest;

@end
