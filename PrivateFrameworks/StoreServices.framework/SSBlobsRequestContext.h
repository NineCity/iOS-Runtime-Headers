/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString;

@interface SSBlobsRequestContext : NSObject <NSCopying, SSCoding> {
    unsigned int _blobRequestOptions;
    NSString *_blobStoreDomain;
}

@property unsigned int blobRequestOptions;
@property(copy) NSString * blobStoreDomain;

- (unsigned int)blobRequestOptions;
- (id)blobStoreDomain;
- (id)copyPropertyListEncoding;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithPropertyListEncoding:(id)arg1;
- (void)setBlobRequestOptions:(unsigned int)arg1;
- (void)setBlobStoreDomain:(id)arg1;

@end
