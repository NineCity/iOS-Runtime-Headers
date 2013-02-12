/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class <OADColorPalette>, NSMutableDictionary;

@interface OABReaderState : NSObject {
    NSMutableDictionary *mBlipIdMap;
    Class mClient;
    <OADColorPalette> *mColorPalette;
    NSMutableDictionary *mEshContentIdMap;
    NSMutableDictionary *mShapeIdMap;
}

- (Class)client;
- (id)colorPalette;
- (void)dealloc;
- (id)drawableForBlipId:(int)arg1;
- (id)drawableForShapeId:(int)arg1;
- (struct EshContent { }*)eshContentForId:(int)arg1;
- (id)init;
- (id)initWithClient:(Class)arg1;
- (void)setColorPalette:(id)arg1;
- (void)setDrawable:(id)arg1 forBlipId:(int)arg2;
- (void)setDrawable:(id)arg1 forShapeId:(int)arg2;
- (void)setEshContent:(struct EshContent { }*)arg1 forId:(int)arg2;

@end
