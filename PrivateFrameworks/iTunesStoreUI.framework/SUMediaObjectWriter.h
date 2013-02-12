/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class SUMediaObject;

@interface SUMediaObjectWriter : NSObject {
    id _completionBlock;
    SUMediaObject *_mediaObject;
    unsigned int _taskIdentifier;
}

@property(copy) id completionBlock;
@property(readonly) SUMediaObject * mediaObject;

- (void)_beginTaskCompletion;
- (void)_endTaskCompletion;
- (id)completionBlock;
- (void)dealloc;
- (id)init;
- (id)initWithMediaObject:(id)arg1;
- (id)mediaObject;
- (void)setCompletionBlock:(id)arg1;
- (void)writeMediaObject;

@end
