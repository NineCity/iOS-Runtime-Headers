/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSDate, NSMutableDictionary, NSMutableString;

@interface CMProgressiveArchiveManager : CMArchiveManager {
    struct { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); } *mCallBacks;
    void *mClient;
    NSMutableString *mCssString;
    NSMutableDictionary *mDataCache;
    NSMutableString *mHtmlLogString;
    NSDate *mLastCommitDate;
    BOOL mMainDataInited;
    NSDate *mStartDate;
    NSMutableDictionary *mStyleCache;
}

- (void)addCssStyle:(id)arg1 withName:(id)arg2;
- (id)addCssStyle:(id)arg1;
- (void)closeResourceAtPath:(id)arg1;
- (void)commitDataAtPath:(id)arg1;
- (id)createResourceWithName:(id)arg1;
- (id)cssStylesheetString;
- (void)dealloc;
- (id)initWithClient:(const void*)arg1 andCallBacks:(struct { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); }*)arg2;
- (BOOL)isCancelled;
- (BOOL)isProgressive;
- (void)pushCssToPath:(id)arg1;
- (void)pushData:(id)arg1 toPath:(id)arg2;
- (void)pushText:(id)arg1 toPath:(id)arg2;

@end
