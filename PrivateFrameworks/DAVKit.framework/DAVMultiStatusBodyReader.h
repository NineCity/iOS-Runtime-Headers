/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

@class NSArray, NSMutableData;

@interface DAVMultiStatusBodyReader : NSObject <DAVResponseBodyReader> {
    NSMutableData *readData;
    Class responseClass;
    NSArray *responses;
}

+ (id)multiStatusBodyReader;
+ (id)multiStatusBodyReaderWithResponseClass:(Class)arg1;
+ (id)propFindBodyReader;

- (void)_calculateResponses;
- (void)dealloc;
- (id)init;
- (id)initForPropFind;
- (id)initWithResponseClass:(Class)arg1;
- (BOOL)request:(id)arg1 acceptResponseWithHTTPStatusCode:(int)arg2;
- (void)request:(id)arg1 readResponseBody:(id)arg2;
- (id)responses;

@end
