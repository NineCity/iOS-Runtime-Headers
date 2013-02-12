/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class NSData;

@interface GMMTile : PBCodable {
    int _face;
    BOOL _hasFace;
    NSData *_tileData;
    int _tileXIndex;
    int _tileYIndex;
}

@property int face;
@property(readonly) BOOL hasFace;
@property(retain) NSData * tileData;
@property int tileXIndex;
@property int tileYIndex;

+ (void*)createImageRefFromTileData:(const char *)arg1 length:(unsigned long)arg2;
+ (void*)createImageRefFromTileData:(id)arg1 isCompact:(BOOL)arg2;

- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)face;
- (BOOL)hasFace;
- (id)init;
- (BOOL)readFrom:(id)arg1;
- (void)setFace:(int)arg1;
- (void)setTileData:(id)arg1;
- (void)setTileXIndex:(int)arg1;
- (void)setTileYIndex:(int)arg1;
- (id)tileData;
- (int)tileXIndex;
- (int)tileYIndex;
- (void)writeTo:(id)arg1;

@end
