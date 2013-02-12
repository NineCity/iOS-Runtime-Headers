/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@class GMMDirectionsResponse, MKRoute, NSArray, NSDictionary, NSMutableArray;

@interface MKDirectionsResponse : NSObject {
    int _mode;
    GMMDirectionsResponse *_response;
    MKRoute *_route;
    NSMutableArray *_routes;
}

@property(readonly) NSDictionary * dictionaryRepresentation;
@property(readonly) int mode;
@property(readonly) GMMDirectionsResponse * response;
@property(retain) MKRoute * route;
@property(readonly) BOOL routeAvailable;
@property(retain) NSArray * routes;

- (id)_initWithResponse:(id)arg1 startSearchResult:(id)arg2 endSearchResult:(id)arg3 mode:(int)arg4;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 startSearchResult:(id)arg2 endSearchResult:(id)arg3;
- (id)initWithMode:(int)arg1;
- (id)initWithResponse:(id)arg1 startSearchResult:(id)arg2 endSearchResult:(id)arg3;
- (int)mode;
- (id)response;
- (id)route;
- (BOOL)routeAvailable;
- (id)routes;
- (void)setRoute:(id)arg1;
- (void)setRoutes:(id)arg1;

@end
