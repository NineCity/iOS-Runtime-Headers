/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSArray, NSData, NSDictionary, NSNumber, NSString;

@interface FTInitiateMessage : FTMessage {
    NSData *_aliasSignature;
    NSString *_aliasUserID;
    NSArray *_canonicalizedPeers;
    NSArray *_peers;
    NSDictionary *_regionInformation;
    NSData *_selfBlob;
    NSNumber *_selfNATType;
    NSData *_selfNatIP;
    NSData *_selfPushToken;
}

@property(copy) NSData * aliasSignature;
@property(copy) NSString * aliasUserID;
@property(copy) NSArray * canonicalizedPeers;
@property(copy) NSArray * peers;
@property(copy) NSDictionary * regionInformation;
@property(copy) NSData * selfBlob;
@property(copy) NSNumber * selfNATType;
@property(copy) NSData * selfNatIP;
@property(copy) NSData * selfPushToken;

- (id)additionalMessageHeaders;
- (id)aliasSignature;
- (id)aliasUserID;
- (id)bagKey;
- (id)canonicalizedPeers;
- (void)dealloc;
- (void)handleResponseDictionary:(id)arg1;
- (id)messageBody;
- (id)peers;
- (id)regionInformation;
- (id)requiredKeys;
- (id)selfBlob;
- (id)selfNATType;
- (id)selfNatIP;
- (id)selfPushToken;
- (void)setAliasSignature:(id)arg1;
- (void)setAliasUserID:(id)arg1;
- (void)setCanonicalizedPeers:(id)arg1;
- (void)setPeers:(id)arg1;
- (void)setRegionInformation:(id)arg1;
- (void)setSelfBlob:(id)arg1;
- (void)setSelfNATType:(id)arg1;
- (void)setSelfNatIP:(id)arg1;
- (void)setSelfPushToken:(id)arg1;

@end
