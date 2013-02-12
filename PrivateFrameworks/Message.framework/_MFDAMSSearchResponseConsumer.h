/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFConditionLock, NSDate;

@interface _MFDAMSSearchResponseConsumer : _MFDAMSBasicConsumer <DADSearchQueryConsumer> {
    MFConditionLock *doneCondition;
    NSDate *latestDateToAdd;
    double timeReceivedLastResponse;
    unsigned int totalCount;
}

@property(retain) NSDate * latestDateToAdd;

- (void)dealloc;
- (BOOL)handleItems:(id)arg1;
- (id)init;
- (id)latestDateToAdd;
- (void)resetDoneCondition;
- (void)searchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)searchQuery:(id)arg1 returnedResults:(id)arg2;
- (void)searchQuery:(id)arg1 returnedTotalCount:(id)arg2;
- (void)setLatestDateToAdd:(id)arg1;
- (void)waitUntilDone;
- (BOOL)waitUntilDoneBeforeDate:(id)arg1;

@end
