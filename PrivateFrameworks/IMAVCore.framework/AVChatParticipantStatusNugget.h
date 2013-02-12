/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
 */

@class NSDictionary, NSString;

@interface AVChatParticipantStatusNugget : NSObject <NSCoding> {
    unsigned int _ardRole;
    int _error;
    NSString *_imHandleID;
    NSString *_imHandleName;
    NSString *_invitedBy;
    unsigned int _reason;
    BOOL _sendingAudio;
    BOOL _sendingVideo;
    unsigned int _state;
    BOOL _usingICE;
    NSString *_vcPartyID;
}

@property(readonly) NSString * ID;
@property(readonly) unsigned int ardRole;
@property(readonly) NSDictionary * dictionaryDescription;
@property(readonly) int error;
@property(readonly) NSString * invitedBy;
@property(readonly) BOOL isUsingICE;
@property(readonly) NSString * name;
@property(readonly) unsigned int reason;
@property(readonly) BOOL sendingAudio;
@property(readonly) BOOL sendingVideo;
@property(readonly) unsigned int state;
@property(readonly) NSString * vcPartyID;

+ (id)filterNuggets:(id)arg1 filterEndedState:(BOOL)arg2 convertFromDict:(BOOL)arg3;
+ (id)nuggetWithDictionaryDescription:(id)arg1;

- (id)ID;
- (void)_configureWithDictionaryDescription:(id)arg1;
- (unsigned int)ardRole;
- (void)dealloc;
- (id)dictionaryDescription;
- (void)encodeWithCoder:(id)arg1;
- (int)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithParticipant:(id)arg1;
- (id)invitedBy;
- (BOOL)isUsingICE;
- (id)name;
- (unsigned int)reason;
- (BOOL)sendingAudio;
- (BOOL)sendingVideo;
- (void)setVCPartyID:(id)arg1;
- (unsigned int)state;
- (id)vcPartyID;

@end
