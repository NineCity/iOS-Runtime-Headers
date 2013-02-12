/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, NSString, OADBlip;

@interface OADBlipRef : NSObject <NSCopying> {
    OADBlip *mBlip;
    NSMutableArray *mEffects;
    int mIndex;
    NSString *mName;
}

+ (int)blipTypeForExtension:(id)arg1;
+ (id)inflatedExtensionForGzippedExtension:(id)arg1;

- (void)addEffect:(id)arg1;
- (id)blip;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)effectAtIndex:(unsigned int)arg1;
- (unsigned int)effectCount;
- (id)effects;
- (unsigned int)hash;
- (long)index;
- (id)init;
- (id)initWithIndex:(long)arg1 name:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isNull;
- (id)name;
- (void)removeEffectAtIndex:(unsigned int)arg1;
- (void)setBlip:(id)arg1;
- (void)setFilename:(id)arg1 data:(id)arg2;
- (void)setFilenameAndDelayedContext:(id)arg1 context:(id)arg2 targetSize:(long)arg3;
- (void)setIndex:(long)arg1;
- (void)setName:(id)arg1;
- (void)setPath:(id)arg1;

@end
