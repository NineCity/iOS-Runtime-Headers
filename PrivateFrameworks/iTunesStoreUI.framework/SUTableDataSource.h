/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class ISURLOperationPool, NSArray, SUImageCache, SUVariableCellConfigurationCache;

@interface SUTableDataSource : NSObject {
    id _cellReuseSource;
    int _columnCount;
    SUVariableCellConfigurationCache *_configurationCache;
    int _preferringUserInteractionCount;
}

@property id cellReuseSource;
@property int columnCount;
@property(readonly) SUImageCache * imageCache;
@property(readonly) ISURLOperationPool * imagePool;
@property(readonly) int numberOfSections;
@property(getter=isPreferringUserInteraction,readonly) BOOL preferringUserInteraction;
@property(readonly) NSArray * sectionIndexTitles;
@property(readonly) int tableViewStyle;

- (void)beginPreferringUserInteraction;
- (id)cachedConfigurationForClass:(Class)arg1 index:(int)arg2;
- (BOOL)canDeleteIndexPath:(id)arg1;
- (BOOL)canDoubleTapIndexPath:(id)arg1;
- (BOOL)canSelectIndexPath:(id)arg1;
- (id)cellContextForConfigurationClass:(Class)arg1;
- (id)cellForIndexPath:(id)arg1;
- (float)cellHeightForIndexPath:(id)arg1;
- (id)cellReuseSource;
- (int)columnCount;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (void)configurePlaceholderCell:(id)arg1 forIndexPath:(id)arg2;
- (void)dealloc;
- (BOOL)deleteIndexPath:(id)arg1;
- (void)didBeginPreferringUserInteraction;
- (void)didEndPreferringUserInteraction;
- (void)endPreferringUserInteraction;
- (id)headerViewForSection:(int)arg1;
- (float)heightForPlaceholderCells;
- (id)imageCache;
- (id)imagePool;
- (id)init;
- (BOOL)isPreferringUserInteraction;
- (int)numberOfColumnsInSection:(int)arg1;
- (int)numberOfRowsInSection:(int)arg1;
- (int)numberOfSections;
- (id)placeholderCellForIndexPath:(id)arg1;
- (void)reloadCellContexts;
- (void)reloadData;
- (void)resetCaches;
- (void)resetLayoutCaches;
- (int)sectionIndexForIndexTitle:(id)arg1 atIndex:(int)arg2;
- (id)sectionIndexTitles;
- (void)setCellReuseSource:(id)arg1;
- (void)setColumnCount:(int)arg1;
- (int)tableViewStyle;
- (id)titleForDeleteConfirmationForIndexPath:(id)arg1;
- (id)titleForHeaderInSection:(int)arg1;

@end
