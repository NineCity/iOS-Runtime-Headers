/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class <FTPushHandlerDelegate>, NSArray, NSData;

@interface FTPushHandler : NSObject {
    id _delegate;
    BOOL _registeredForPush;
    NSArray *_topics;
}

@property <FTPushHandlerDelegate> * delegate;
@property(readonly) NSData * pushToken;
@property BOOL registered;
@property(readonly) NSArray * topics;

+ (id)alloc;

- (void)dealloc;
- (id)delegate;
- (id)initWithTopics:(id)arg1;
- (id)pushToken;
- (BOOL)registered;
- (void)requestKeepAlive;
- (void)setDelegate:(id)arg1;
- (void)setRegistered:(BOOL)arg1;
- (id)topics;

@end
