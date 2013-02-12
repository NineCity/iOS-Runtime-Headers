/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@class IMMessage, NSDate, NSString;

@interface IMChatItem : NSObject {
    NSDate *_date;
    id _datum1;
    id _datum2;
    id _datum3;
    NSString *_guid;
    BOOL _isFromArchive;
}

@property(readonly) NSDate * date;
@property(readonly) NSString * guid;
@property(readonly) BOOL isFromArchive;
@property(readonly) IMMessage * message;
@property(readonly) NSString * stringValue;

- (id)_initWithGUID:(id)arg1 date:(id)arg2 datum1:(id)arg3 datum2:(id)arg4 datum3:(id)arg5;
- (void)_setIsFromArchive:(BOOL)arg1;
- (id)date;
- (void)dealloc;
- (id)guid;
- (BOOL)isFromArchive;
- (id)message;
- (id)stringValue;

@end
