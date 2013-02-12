/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSDictionary, NSError, SSItemOfferDeviceError, SSPurchase;

@interface SSPurchaseValidationResponse : NSObject {
    SSItemOfferDeviceError *_deviceError;
    SSPurchase *_failedPurchase;
    NSError *_genericError;
    NSDictionary *_mismatchedSoftwareCapabilities;
    BOOL _valid;
}

@property(readonly) SSItemOfferDeviceError * deviceError;
@property(readonly) SSPurchase * failedPurchase;
@property(readonly) NSError * genericError;
@property(readonly) NSDictionary * mismatchedSoftwareCapabilities;
@property(getter=isValid,readonly) BOOL valid;

- (void)_setDeviceError:(id)arg1;
- (void)_setFailedPurchase:(id)arg1;
- (void)_setGenericError:(id)arg1;
- (void)_setMismatchedSoftwareCapabilities:(id)arg1;
- (void)_setValid:(BOOL)arg1;
- (void)dealloc;
- (id)deviceError;
- (id)failedPurchase;
- (id)genericError;
- (BOOL)isValid;
- (id)mismatchedSoftwareCapabilities;

@end
