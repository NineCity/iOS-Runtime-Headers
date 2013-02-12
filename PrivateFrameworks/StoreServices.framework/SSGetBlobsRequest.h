/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSGetBlobsRequestContext;

@interface SSGetBlobsRequest : SSBlobsRequest <SSCoding> {
}

@property(readonly) SSGetBlobsRequestContext * blobsRequestContext;

- (id)copyPropertyListEncoding;
- (id)initWithBlobsRequestContext:(id)arg1;
- (id)initWithPropertyListEncoding:(id)arg1;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id*)arg2;

@end
