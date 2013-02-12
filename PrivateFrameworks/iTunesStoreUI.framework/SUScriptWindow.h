/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSNumber, NSString, SUScriptCanvasFunction, SUScriptFunction, SUScriptViewController, SUScriptWindowContext, WebScriptObject;

@interface SUScriptWindow : SUScriptObject {
    id _backViewController;
    SUScriptWindowContext *_context;
    id _frontViewController;
    id _height;
    SUScriptCanvasFunction *_maskFunction;
    id _shadowOpacity;
    id _shadowRadius;
    SUScriptFunction *_shouldDismissFunction;
    id _style;
    id _width;
    id _windowParentViewController;
}

@property(getter=_backViewController,setter=set_backViewController:,retain) SUScriptViewController * backViewController;
@property(readonly) SUScriptWindowContext * context;
@property(getter=_frontViewController,setter=set_frontViewController:,retain) SUScriptViewController * frontViewController;
@property(getter=_height,readonly) NSNumber * height;
@property(getter=_maskFunction,setter=set_maskFunction:,retain) WebScriptObject * maskFunction;
@property(getter=_shadowOpacity,setter=set_shadowOpacity:,retain) NSNumber * shadowOpacity;
@property(getter=_shadowRadius,setter=set_shadowRadius:,retain) NSNumber * shadowRadius;
@property(getter=_shouldDismissFunction,setter=set_shouldDismissFunction:,retain) WebScriptObject * shouldDismissFunction;
@property(getter=_style,setter=set_style:,retain) NSString * style;
@property(getter=_width,readonly) NSNumber * width;
@property(getter=_windowParentViewController,readonly) SUScriptViewController * windowParentViewController;

+ (void)_dismissWindowsAnimated:(BOOL)arg1;
+ (void)dismissWindowsWithOptions:(id)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_backViewController;
- (id)_backgroundViewController:(BOOL)arg1;
- (id)_className;
- (id)_copyBackViewController;
- (id)_copyFrontViewController;
- (id)_copySafeTransitionOptionsFromOptions:(id)arg1;
- (id)_copyShouldDismissFunction;
- (id)_copyWindowParentViewController;
- (void)_dismiss:(id)arg1;
- (void)_flip:(id)arg1;
- (id)_frontViewController;
- (id)_height;
- (float)_mainThreadShadowOpacity;
- (float)_mainThreadShadowRadius;
- (id)_maskFunction;
- (id)_newOverlayTransitionWithOptions:(id)arg1;
- (void)_overlayDidDismissNotification:(id)arg1;
- (void)_overlayDidFlipNotification:(id)arg1;
- (void)_overlayDidShowNotification:(id)arg1;
- (struct CGSize { float x1; float x2; })_overlaySize;
- (id)_overlayViewController:(BOOL)arg1;
- (void)_registerForOverlayNotifications;
- (void)_reloadVisibility;
- (void)_setBackViewController:(id)arg1;
- (void)_setFrontViewController:(id)arg1;
- (void)_setHeight:(float)arg1;
- (void)_setMaskFunction:(id)arg1;
- (void)_setShadowOpacity:(float)arg1;
- (void)_setShadowRadius:(float)arg1;
- (void)_setShouldDismissFunction:(id)arg1;
- (void)_setWidth:(float)arg1;
- (id)_shadowOpacity;
- (id)_shadowRadius;
- (id)_shouldDismissFunction;
- (void)_show:(id)arg1;
- (id)_style;
- (id)_width;
- (id)_windowParentViewController;
- (id)context;
- (void)dealloc;
- (void)dismiss:(id)arg1;
- (void)flip:(id)arg1;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)set_backViewController:(id)arg1;
- (void)set_frontViewController:(id)arg1;
- (void)set_height:(id)arg1;
- (void)set_maskFunction:(id)arg1;
- (void)set_shadowOpacity:(id)arg1;
- (void)set_shadowRadius:(id)arg1;
- (void)set_shouldDismissFunction:(id)arg1;
- (void)set_style:(id)arg1;
- (void)set_width:(id)arg1;
- (void)set_windowParentViewController:(id)arg1;
- (void)show:(id)arg1;

@end
