/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSMutableArray, NSString, PLImageTable;

@interface PLTemporaryImageTable : NSObject {
    int _imageFormat;
    PLImageTable *_imageTable;
    NSString *_imageTablePath;
    NSMutableArray *_itemIndexToThumbEntryMapping;
    unsigned int _nextTableEntryIndex;
}

- (void)_cleanup;
- (unsigned int)_imageTableIndexForItemIndex:(unsigned int)arg1;
- (id)dataForItemAtIndex:(unsigned int)arg1 widthOut:(int*)arg2 heightOut:(int*)arg3 bytesPerRowOut:(int*)arg4 dataWidthOut:(int*)arg5 dataHeightOut:(int*)arg6 imageDataOffset:(int*)arg7;
- (void)dealloc;
- (id)imageForItemAtIndex:(unsigned int)arg1;
- (id)initWithWithPath:(id)arg1 imageFormat:(int)arg2;
- (void)insertItemAtIndex:(unsigned int)arg1;
- (void)removeItemAtIndex:(unsigned int)arg1;
- (void)reset;
- (void)setImage:(id)arg1 videoDuration:(id)arg2 forItemAtIndex:(unsigned int)arg3;

@end
