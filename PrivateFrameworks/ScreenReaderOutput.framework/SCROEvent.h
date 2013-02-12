/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@class NSMutableArray, NSMutableDictionary;

@interface SCROEvent : NSObject {
    NSMutableArray *_actions;
    NSMutableArray *_callbacks;
    NSMutableDictionary *_getDictionary;
    int _handlerType;
    BOOL _readOnly;
    NSMutableDictionary *_setDictionary;
}

+ (id)brailleEvent;

- (id)claimDictionary;
- (id)claimValueForKey:(int)arg1;
- (void)dealloc;
- (int)handlerType;
- (id)initForHandlerType:(int)arg1;
- (id)mainDictionary;
- (void)performWithHandler:(id)arg1 trusted:(BOOL)arg2;
- (void)requestPerformActionForKey:(int)arg1;
- (void)requestRegisterCallbackForKey:(int)arg1;
- (void)requestSetValue:(id)arg1 forKey:(int)arg2;
- (void)requestValueForKey:(int)arg1;
- (void)setClaimDictionary:(id)arg1;
- (void)setMainDictionary:(id)arg1;

@end
