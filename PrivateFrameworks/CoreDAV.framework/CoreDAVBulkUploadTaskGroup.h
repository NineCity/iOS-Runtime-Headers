/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class <CoreDAVTaskGroupDelegate>, NSDictionary, NSMutableDictionary, NSString, NSURL;

@interface CoreDAVBulkUploadTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate> {
    void *_context;
    NSURL *_folderURL;
    NSMutableDictionary *_hrefToETag;
    NSString *_lastKnownCTag;
    unsigned int _multiPutBatchMaxNumResources;
    unsigned int _multiPutBatchMaxSize;
    NSMutableDictionary *_remainingHREFsToModDeleteActions;
    NSMutableDictionary *_remainingUUIDsToAddActions;
    NSMutableDictionary *_uuidToHREF;
    BOOL _validCTag;
}

@property(readonly) void* context;
@property <CoreDAVTaskGroupDelegate> * delegate;
@property(readonly) NSURL * folderURL;
@property(readonly) NSDictionary * hrefToETag;
@property unsigned int multiPutBatchMaxNumResources;
@property unsigned int multiPutBatchMaxSize;
@property(retain) NSString * newCTag;
@property(readonly) NSDictionary * uuidToHREF;
@property(readonly) BOOL validCTag;

- (void)_sendNextBatch;
- (void)cancelTasks;
- (void*)context;
- (void)dealloc;
- (id)description;
- (id)folderURL;
- (id)hrefToETag;
- (id)initWithFolderURL:(id)arg1 checkCTag:(id)arg2 uuidsToAddActions:(id)arg3 hrefsToModDeleteActions:(id)arg4 context:(void*)arg5 accountInfoProvider:(id)arg6 taskManager:(id)arg7;
- (unsigned int)multiPutBatchMaxNumResources;
- (unsigned int)multiPutBatchMaxSize;
- (Class)multiPutTaskClass;
- (id)newCTag;
- (void)setMultiPutBatchMaxNumResources:(unsigned int)arg1;
- (void)setMultiPutBatchMaxSize:(unsigned int)arg1;
- (void)setNewCTag:(id)arg1;
- (void)startTaskGroup;
- (void)syncAway;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)taskGroupWillCancelWithError:(id)arg1;
- (id)uuidToHREF;
- (BOOL)validCTag;

@end
