/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class CLLocationManager, ISOperation, NSArray;

@interface SULocationObserver : NSObject <CLLocationManagerDelegate, ISOperationDelegate> {
    int _distanceFilter;
    CLLocationManager *_locationManager;
    NSArray *_locationSections;
    int _observeCount;
    ISOperation *_operation;
}

@property(retain) NSArray * locationSections;
@property(getter=isObservingLocation,readonly) BOOL observingLocation;

- (void)_cancelOperation;
- (void)_checkIfLocationsAreEnabled;
- (void)_handleEnabledCheckResponse:(id)arg1;
- (void)_handleLoadSectionsReseponse:(id)arg1;
- (void)_loadSectionsForLocation:(id)arg1;
- (void)_registerForLocationCallbacks;
- (void)_setDistanceFilter:(int)arg1;
- (void)_unregisterForLocationCallbacks;
- (void)beginObservingLocation;
- (void)dealloc;
- (void)endObserveringLocation;
- (void)endObservingLocation;
- (id)init;
- (BOOL)isObservingLocation;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (id)locationSections;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operationFinished:(id)arg1;
- (void)setLocationSections:(id)arg1;

@end
