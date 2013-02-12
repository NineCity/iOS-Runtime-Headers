/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class GMMGeometry, NSString;

@interface GMMNewLocation : PBCodable {
    GMMGeometry *_geocode;
    BOOL _hasIsVia;
    BOOL _isVia;
    NSString *_query;
    NSString *_queryRefinementToken;
}

@property(readonly) struct { double latitude; double longitude; } coordinate;
@property(retain) GMMGeometry * geocode;
@property(readonly) BOOL hasGeocode;
@property(readonly) BOOL hasIsVia;
@property(readonly) BOOL hasQuery;
@property(readonly) BOOL hasQueryRefinementToken;
@property BOOL isVia;
@property(retain) NSString * query;
@property(retain) NSString * queryRefinementToken;

- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)description;
- (id)description;
- (id)dictionaryRepresentation;
- (id)geocode;
- (BOOL)hasGeocode;
- (BOOL)hasIsVia;
- (BOOL)hasQuery;
- (BOOL)hasQueryRefinementToken;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isVia;
- (id)query;
- (id)queryRefinementToken;
- (BOOL)readFrom:(id)arg1;
- (void)setGeocode:(id)arg1;
- (void)setIsVia:(BOOL)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueryRefinementToken:(id)arg1;
- (void)writeTo:(id)arg1;

@end
