/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AggregateDictionary.framework/AggregateDictionary
 */

@class NSDateFormatter, NSMutableDictionary, NSString;

@interface ADCrashLogStore : NSObject {
    NSString *_crashLogPathPrefix;
    NSDateFormatter *_dateFormatter;
    NSMutableDictionary *_distributions;
    NSMutableDictionary *_scalars;
}

+ (id)_OSVersion;
+ (id)_crashLogDataFromDescription:(id)arg1 errorDescription:(id*)arg2;
+ (id)_deviceID;
+ (id)_lockdownStringForKey:(struct __CFString { }*)arg1;
+ (BOOL)_shouldIncludeSystemID;
+ (id)_systemID;

- (id)_crashLogPathForDate:(id)arg1;
- (void)addDistribution:(struct { double x1; double x2; double x3; double x4; int x5; }*)arg1 forKey:(id)arg2;
- (void)addScalar:(long long)arg1 forKey:(id)arg2;
- (int)daysSince1970ForLastCrashLogSerialized;
- (void)dealloc;
- (id)initWithCrashLogPathPrefix:(id)arg1;
- (id)initWithDefaultCrashLogPath;
- (void)serializeWithDate:(int)arg1;

@end
