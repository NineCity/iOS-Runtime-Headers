/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSSetBlobsRequestContext;

@interface SSSetBlobsRequest : SSBlobsRequest <SSCoding> {
}

@property(readonly) SSSetBlobsRequestContext * blobsRequestContext;

- (id)copyPropertyListEncoding;
- (id)initWithBlobsRequestContext:(id)arg1;
- (id)initWithPropertyListEncoding:(id)arg1;
- (BOOL)issueRequestForIdentifier:(id)arg1 error:(id*)arg2;

@end
