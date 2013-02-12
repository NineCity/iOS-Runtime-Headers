/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSDate, NSFileHandle, NSString;

@interface DARollableLog : NSObject {
    NSString *_baseFilename;
    struct dispatch_source_s { } *_fdWatcher;
    NSFileHandle *_fh;
    NSString *_generationalFilenameFormat;
    NSDate *_lastStatDate;
    struct dispatch_queue_s { } *_logQueue;
    struct dispatch_queue_s { } *_logRequestQueue;
}

@property(retain) NSFileHandle * fh;
@property(retain) NSDate * lastStatDate;

+ (id)_filenameWithBase:(id)arg1 generationalFormat:(id)arg2 generation:(int)arg3;
+ (id)_generationalFormatFromBase:(id)arg1;
+ (id)allLogFilesForFilename:(id)arg1;
+ (void)enableLogRolling;
+ (id)loggerWithFilename:(id)arg1;

- (id)_filenameWithGenerationNumber:(int)arg1;
- (id)_fullCompressedFilePathWithGenerationNumber:(int)arg1;
- (id)_fullFilePathWithGenerationNumber:(int)arg1;
- (void)_loadUpHandle;
- (void)_rollLogs;
- (void)_statFileIfNecessaryForRollingCheck;
- (id)compressFile:(id)arg1;
- (id)fh;
- (id)initWithFilename:(id)arg1;
- (id)lastStatDate;
- (void)logData:(id)arg1;
- (void)logString:(id)arg1;
- (void)setFh:(id)arg1;
- (void)setLastStatDate:(id)arg1;
- (void)slurpDataFromFile:(id)arg1;

@end
