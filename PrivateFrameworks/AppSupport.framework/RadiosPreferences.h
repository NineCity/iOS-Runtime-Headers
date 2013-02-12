/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <RadiosPreferencesDelegate>;

@interface RadiosPreferences : NSObject {
    int _applySkipCount;
    BOOL _cachedAirplaneMode;
    <RadiosPreferencesDelegate> *_delegate;
    BOOL _isCachedAirplaneModeValid;
    struct __SCPreferences { } *_prefs;
    BOOL notifyForExternalChangeOnly;
}

@property BOOL airplaneMode;
@property <RadiosPreferencesDelegate> * delegate;
@property BOOL notifyForExternalChangeOnly;

- (BOOL)airplaneMode;
- (void)dealloc;
- (id)delegate;
- (void*)getValueForKey:(id)arg1;
- (id)init;
- (void)initializeSCPrefs:(id)arg1;
- (BOOL)notifyForExternalChangeOnly;
- (void)notifyTarget:(unsigned int)arg1;
- (void)refresh;
- (void)setAirplaneMode:(BOOL)arg1;
- (void)setCallback:(int (*)())arg1 withContext:(struct { int x1; void *x2; int (*x3)(); int (*x4)(); int (*x5)(); }*)arg2;
- (void)setDelegate:(id)arg1;
- (void)setNotifyForExternalChangeOnly:(BOOL)arg1;
- (void)setValue:(void*)arg1 forKey:(id)arg2;
- (void)synchronize;

@end
