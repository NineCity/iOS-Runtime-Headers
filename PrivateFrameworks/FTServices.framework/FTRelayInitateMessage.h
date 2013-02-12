/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSData, NSNumber, NSString;

@interface FTRelayInitateMessage : FTMessage {
    NSString *_peerID;
    NSNumber *_peerNATIP;
    NSNumber *_peerNatType;
    NSData *_peerPushToken;
    NSData *_peerRelayIP;
    NSNumber *_peerRelayPort;
    NSData *_relayConnectionId;
    NSData *_relayTokenAllocReq;
    NSData *_relayTransactionIdAlloc;
    NSNumber *_relayType;
    NSNumber *_selfNATIP;
    NSNumber *_selfNatType;
    NSData *_selfPushToken;
    NSData *_selfRelayIP;
    NSNumber *_selfRelayPort;
}

@property(copy) NSString * peerID;
@property(copy) NSNumber * peerNATIP;
@property(copy) NSNumber * peerNatType;
@property(copy) NSData * peerPushToken;
@property(copy) NSData * peerRelayIP;
@property(copy) NSNumber * peerRelayPort;
@property(copy) NSData * relayConnectionId;
@property(copy) NSData * relayTokenAllocReq;
@property(copy) NSData * relayTransactionIdAlloc;
@property(copy) NSNumber * relayType;
@property(copy) NSNumber * selfNATIP;
@property(copy) NSNumber * selfNatType;
@property(copy) NSData * selfPushToken;
@property(copy) NSData * selfRelayIP;
@property(copy) NSNumber * selfRelayPort;

- (id)bagKey;
- (void)dealloc;
- (void)handleResponseDictionary:(id)arg1;
- (id)messageBody;
- (id)peerID;
- (id)peerNATIP;
- (id)peerNatType;
- (id)peerPushToken;
- (id)peerRelayIP;
- (id)peerRelayPort;
- (id)relayConnectionId;
- (id)relayTokenAllocReq;
- (id)relayTransactionIdAlloc;
- (id)relayType;
- (id)requiredKeys;
- (id)selfNATIP;
- (id)selfNatType;
- (id)selfPushToken;
- (id)selfRelayIP;
- (id)selfRelayPort;
- (void)setPeerID:(id)arg1;
- (void)setPeerNATIP:(id)arg1;
- (void)setPeerNatType:(id)arg1;
- (void)setPeerPushToken:(id)arg1;
- (void)setPeerRelayIP:(id)arg1;
- (void)setPeerRelayPort:(id)arg1;
- (void)setRelayConnectionId:(id)arg1;
- (void)setRelayTokenAllocReq:(id)arg1;
- (void)setRelayTransactionIdAlloc:(id)arg1;
- (void)setRelayType:(id)arg1;
- (void)setSelfNATIP:(id)arg1;
- (void)setSelfNatType:(id)arg1;
- (void)setSelfPushToken:(id)arg1;
- (void)setSelfRelayIP:(id)arg1;
- (void)setSelfRelayPort:(id)arg1;

@end
