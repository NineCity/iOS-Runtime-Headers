/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, UIFont;

@interface _UIDateLabelCache : NSObject {
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    } _amSize;
    NSString *_amString;
    struct __CFDictionary { } *_dateSizeCache;
    struct __CFDictionary { } *_dateStringCache;
    BOOL _designatorValid;
    double _noon;
    } _pmSize;
    NSString *_pmString;
    double _previousWeek;
    struct __CFDateFormatter { } *_shortDateFormatter;
    struct __CFDateFormatter { } *_shortTimeFormatter;
    BOOL _timeDesignatorAppearsBeforeTime;
    UIFont *_timeDesignatorFont;
    struct __CFDateFormatter { } *_timeFormatter;
    double _today;
    double _tomorrow;
    struct __CFTimeZone { } *_tz;
    BOOL _use24HourTime;
}

- (void)_loadDesignatorStrings;
- (void)_localeDidChange;
- (void)_localeWillChange;
- (void)_significantTimeChange;
- (BOOL)_timeDesignatorAppearsBeforeTime;
- (void)_updateTodayAndNoon;
- (struct CGSize { float x1; float x2; })amSize;
- (id)amString;
- (int)dateKeyForAbsoluteTime:(double)arg1;
- (id)dateStringForAbsoluteTime:(double)arg1 dateKey:(int)arg2;
- (void)dealloc;
- (id)init;
- (void)invalidateDateCache;
- (void)invalidateDateSizeCache;
- (struct CGSize { float x1; float x2; })mainTimeSizeForDateKey:(int)arg1;
- (double)noonAbsoluteTime;
- (struct CGSize { float x1; float x2; })pmSize;
- (id)pmString;
- (void)setMainTimeSize:(struct CGSize { float x1; float x2; })arg1 forDateKey:(int)arg2;
- (BOOL)timeDesignatorAppearsBeforeTime;
- (id)timeDesignatorFont;
- (id)timeDesignatorForAbsoluteTime:(double)arg1;
- (struct CGSize { float x1; float x2; })timeDesignatorSizeForAbsoluteTime:(double)arg1 forFont:(id)arg2;
- (double)todayAbsoluteTime;
- (BOOL)use24HourTime;

@end
