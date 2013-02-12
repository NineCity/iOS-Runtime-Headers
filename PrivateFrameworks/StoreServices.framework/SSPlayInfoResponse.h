/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSData, NSError;

@interface SSPlayInfoResponse : NSObject <NSCopying> {
    NSError *_error;
    NSData *_playInfoData;
}

@property(readonly) NSError * error;
@property(readonly) NSData * playInfoData;

- (id)copyPropertyListEncoding;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)initWithPlayInfoData:(id)arg1 error:(id)arg2;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)playInfoData;

@end
