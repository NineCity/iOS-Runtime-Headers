/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@interface ADTargetingData : PBCodable {
    BOOL _hasHorizontalAccuracy;
    BOOL _hasLatitude;
    BOOL _hasLongitude;
    BOOL _hasTimezone;
    float _horizontalAccuracy;
    float _latitude;
    float _longitude;
    float _timezone;
}

@property(readonly) BOOL hasHorizontalAccuracy;
@property(readonly) BOOL hasLatitude;
@property(readonly) BOOL hasLongitude;
@property(readonly) BOOL hasTimezone;
@property float horizontalAccuracy;
@property float latitude;
@property float longitude;
@property float timezone;

- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasHorizontalAccuracy;
- (BOOL)hasLatitude;
- (BOOL)hasLongitude;
- (BOOL)hasTimezone;
- (float)horizontalAccuracy;
- (id)init;
- (float)latitude;
- (float)longitude;
- (BOOL)readFrom:(id)arg1;
- (void)setHorizontalAccuracy:(float)arg1;
- (void)setLatitude:(float)arg1;
- (void)setLongitude:(float)arg1;
- (void)setTimezone:(float)arg1;
- (float)timezone;
- (void)writeTo:(id)arg1;

@end
