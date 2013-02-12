/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class <DASearchQueryConsumer>, NSString;

@interface DASearchQuery : NSObject {
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    struct __CFMachPort { } *_callbackPort;
    BOOL _cancelled;
    <DASearchQueryConsumer> *_consumer;
    } _range;
    unsigned int _searchID;
    NSString *_searchString;
    int _timeLimit;
}

@property BOOL cancelled;
@property <DASearchQueryConsumer> * consumer;
@property struct _NSRange { unsigned int location; unsigned int length; } range;
@property(readonly) NSString * searchString;
@property int timeLimit;

+ (id)searchQueryWithSearchString:(id)arg1 consumer:(id)arg2;

- (struct __CFMachPort { }*)callbackPort;
- (BOOL)cancelled;
- (id)consumer;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (void)handleBrokenPipe;
- (id)initWithSearchString:(id)arg1 consumer:(id)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (unsigned int)searchID;
- (id)searchString;
- (void)sendFinishedToConsumerWithError:(id)arg1;
- (void)sendResultsToConsumer:(id)arg1;
- (void)setCallbackPort:(struct __CFMachPort { }*)arg1;
- (void)setCancelled:(BOOL)arg1;
- (void)setConsumer:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)setSearchID:(unsigned int)arg1;
- (void)setTimeLimit:(int)arg1;
- (int)timeLimit;

@end
