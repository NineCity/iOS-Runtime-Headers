/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray;

@interface UIITunesStoreURLResolver : UIURLResolver {
    NSArray *_appStoreHostPatterns;
    NSArray *_appStorePathPatterns;
    NSArray *_appleStoreHostPatterns;
    NSArray *_appleStorePathPatterns;
    NSArray *_bookStoreHostPatterns;
    NSArray *_bookStorePathPatterns;
    NSArray *_hostWhiteList;
    NSArray *_musicStoreHostPatterns;
    NSArray *_musicStorePathPatterns;
}

+ (id)urlCacheChangedNotificationName;
+ (id)urlCacheName;

- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (BOOL)isAppleStoreURL:(id)arg1;
- (int)storeURLTypeForURL:(id)arg1;

@end
