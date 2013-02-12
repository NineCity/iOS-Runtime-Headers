/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDBGPresentation : GQDRoot {
    struct CGSize { 
        float width; 
        float height; 
    BOOL mIsOldAssetNameMapInitialized;
    struct __CFDictionary { } *mOldAssetNameMap;
    } mSlideSize;
    struct __CFArray { } *mThemes;
}

+ (struct _xmlNs { struct _xmlNs {} *x1; int x2; char *x3; char *x4; void *x5; struct _xmlDoc {} *x6; }*)appNamespace;
+ (void)initialize;
+ (id)parseNumberOutOfBasename:(id)arg1 returningNumber:(int*)arg2;

- (void)addTheme:(id)arg1;
- (id)colorForMissingAppBundleResource:(struct __CFString { }*)arg1 processorBundle:(struct __CFBundle { }*)arg2;
- (struct __CFString { }*)createUpgradedAppBundleResourcePath:(struct __CFString { }*)arg1 processorBundle:(struct __CFBundle { }*)arg2;
- (struct __CFURL { }*)createUrlToAppBundleResource:(struct __CFString { }*)arg1 processorBundle:(struct __CFBundle { }*)arg2;
- (void)dealloc;
- (id)init;
- (void)initializeAppBundleResourcesUrl;
- (void)loadAppBundleResourceToColorMap;
- (struct CGSize { float x1; float x2; })slideSize;
- (struct __CFArray { }*)themes;

@end
