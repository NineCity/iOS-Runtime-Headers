/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSDictionary, NSString;

@interface SSRemoteNotification : NSObject {
    NSDictionary *_userInfo;
}

@property(readonly) int actionType;
@property(readonly) NSString * alertBodyString;
@property(readonly) id badgeValue;
@property(readonly) NSDictionary * notificationUserInfo;
@property(readonly) NSString * soundFileName;

- (int)actionType;
- (id)alertBodyString;
- (id)badgeValue;
- (void)dealloc;
- (id)initWithNotificationUserInfo:(id)arg1;
- (id)notificationUserInfo;
- (id)soundFileName;
- (id)valueForKey:(id)arg1;

@end
