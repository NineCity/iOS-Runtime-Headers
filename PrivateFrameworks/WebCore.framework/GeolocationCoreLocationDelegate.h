/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class CLLocationManager, GeolocationCoreLocationDelegate;

@interface GeolocationCoreLocationDelegate : NSObject <CLLocationManagerDelegate> {
    struct GeolocationManager { struct RetainPtr<GeolocationCoreLocationDelegate> { 
            GeolocationCoreLocationDelegate *m_ptr; 
        } x1; struct HashSet<WebCore::GeolocationLink*,WTF::PtrHash<WebCore::GeolocationLink*>,WTF::HashTraits<WebCore::GeolocationLink*> > { 
            struct HashTable<WebCore::GeolocationLink*,WebCore::GeolocationLink*,WTF::IdentityExtractor<WebCore::GeolocationLink*>,WTF::PtrHash<WebCore::GeolocationLink*>,WTF::HashTraits<WebCore::GeolocationLink*>,WTF::HashTraits<WebCore::GeolocationLink*> > { 
                struct GeolocationLink {} **m_table; 
                int m_tableSize; 
                int m_tableSizeMask; 
                int m_keyCount; 
                int m_deletedCount; 
            } m_impl; 
        } x2; boolx3; struct RefPtr<WebCore::Geoposition> { 
            struct Geoposition {} *m_ptr; 
        } x4; struct RefPtr<WebCore::PositionError> { 
            struct PositionError {} *m_ptr; 
    double m_accuracy;
        } x5; } *m_callback;
    BOOL m_locationDenied;
    CLLocationManager *m_locationManager;
}

@property BOOL wantsHighAccuracy;

- (void)createLocationManager;
- (void)dealloc;
- (id)initWithCallback:(struct GeolocationManager { struct RetainPtr<GeolocationCoreLocationDelegate> { id x_1_1_1; } x1; struct HashSet<WebCore::GeolocationLink*,WTF::PtrHash<WebCore::GeolocationLink*>,WTF::HashTraits<WebCore::GeolocationLink*> > { struct HashTable<WebCore::GeolocationLink*,WebCore::GeolocationLink*,WTF::IdentityExtractor<WebCore::GeolocationLink*>,WTF::PtrHash<WebCore::GeolocationLink*>,WTF::HashTraits<WebCore::GeolocationLink*>,WTF::HashTraits<WebCore::GeolocationLink*> > { struct GeolocationLink {} **x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; int x_1_2_5; } x_2_1_1; } x2; boolx3; struct RefPtr<WebCore::Geoposition> { struct Geoposition {} *x_4_1_1; } x4; struct RefPtr<WebCore::PositionError> { struct PositionError {} *x_5_1_1; } x5; }*)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)sendError:(id)arg1 withString:(id)arg2;
- (void)sendLocation:(id)arg1;
- (void)setWantsHighAccuracy:(BOOL)arg1;
- (void)start;
- (void)stop;
- (BOOL)wantsHighAccuracy;

@end
