/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptApplication : SUScriptObject {
}

@property(getter=isDelayingTerminate,readonly) id delayingTerminate;
@property(retain) id iconBadgeNumber;
@property(getter=isRunningInStoreDemoMode,readonly) id runningInStoreDemoMode;
@property(readonly) id screenHeight;
@property(readonly) id screenWidth;

+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (struct CGSize { float x1; float x2; })_applicationFrame;
- (id)_copyIconBadgeNumber;
- (void)_loadNativeObject;
- (void)_setIconBadgeNumber:(int)arg1;
- (id)attributeKeys;
- (void)beginDelayingTerminate;
- (void)endDelayingTerminate;
- (id)iconBadgeNumber;
- (id)init;
- (id)isDelayingTerminate;
- (id)isRunningInStoreDemoMode;
- (id)screenHeight;
- (id)screenWidth;
- (id)scriptAttributeKeys;
- (void)setIconBadgeNumber:(id)arg1;

@end
