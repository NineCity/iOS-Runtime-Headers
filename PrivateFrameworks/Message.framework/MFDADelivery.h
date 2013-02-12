/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class DAMailAccount, NSString;

@interface MFDADelivery : MFMailDelivery {
    DAMailAccount *_DAMailAccount;
    NSString *_accountId;
    NSString *_folderId;
    NSString *_forwardedLongId;
    NSString *_forwardedMessageId;
    NSString *_repliedLongId;
    NSString *_repliedMessageId;
}

- (void)dealloc;
- (int)deliverSynchronously;
- (id)initWithHeaders:(id)arg1 HTML:(id)arg2 plainTextAlternative:(id)arg3 other:(id)arg4;
- (id)initWithHeaders:(id)arg1 mixedContent:(id)arg2 textPartsAreHTML:(BOOL)arg3;
- (id)newMessageWriter;
- (void)setDAMailAccount:(id)arg1;

@end
