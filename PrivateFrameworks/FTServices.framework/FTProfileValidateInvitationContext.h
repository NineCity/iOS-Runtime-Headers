/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSDictionary, NSString;

@interface FTProfileValidateInvitationContext : FTProfileMessage {
    NSString *_basePhoneNumber;
    NSString *_regionID;
    NSString *_responseBasePhoneNumber;
    NSDictionary *_responseExtraInfo;
    NSString *_responseRegionID;
}

@property(copy) NSString * basePhoneNumber;
@property(copy) NSString * regionID;
@property(copy) NSString * responseBasePhoneNumber;
@property(copy) NSDictionary * responseExtraInfo;
@property(copy) NSString * responseRegionID;

- (id)bagKey;
- (id)basePhoneNumber;
- (void)dealloc;
- (void)handleResponseDictionary:(id)arg1;
- (id)messageBody;
- (id)regionID;
- (id)requiredKeys;
- (id)responseBasePhoneNumber;
- (id)responseExtraInfo;
- (id)responseRegionID;
- (void)setBasePhoneNumber:(id)arg1;
- (void)setRegionID:(id)arg1;
- (void)setResponseBasePhoneNumber:(id)arg1;
- (void)setResponseExtraInfo:(id)arg1;
- (void)setResponseRegionID:(id)arg1;

@end
