/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class ML3AggregateQuery, ML3MusicLibrary, ML3Predicate, ML3QueryLoadOperation, NSArray, NSLock, NSMutableIndexSet, NSString;

@interface ML3Query : NSObject <NSFastEnumeration, NSCoding> {
    Class _entityClass;
    BOOL _hasLoadedEveryPersistentID;
    ML3MusicLibrary *_library;
    NSMutableIndexSet *_loadedAggregateCountArray;
    unsigned int *_loadedAggregatedCountArray;
    unsigned int _loadedArrayCapacity;
    NSMutableIndexSet *_loadedArrayIndexSet;
    NSLock *_loadedArrayLock;
    long long *_loadedPersistentIDArray;
    ML3AggregateQuery *_nonDirectAggregateQuery;
    NSArray *_orderingProperties;
    ML3Predicate *_predicate;
    BOOL _usingSections;
}

@property(readonly) unsigned int countOfEntities;
@property(readonly) unsigned int countOfEntitiesNoLoad;
@property(readonly) Class entityClass;
@property(readonly) BOOL hasEntities;
@property BOOL hasLoadedEveryPersistentID;
@property(readonly) ML3MusicLibrary * library;
@property(readonly) ML3QueryLoadOperation * loadEntitiesOperation;
@property(readonly) ML3AggregateQuery * nonDirectAggregateQuery;
@property(readonly) NSArray * orderingProperties;
@property(readonly) ML3Predicate * predicate;
@property(readonly) NSString * sectionProperty;
@property(retain,readonly) NSArray * sections;
@property(readonly) BOOL usingSections;

- (void)bindToCountSqlite3Statement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;
- (void)bindToPersistentIDsSqlite3Statement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;
- (void)bindToSectionsSqlite3Statement:(struct sqlite3_stmt { }*)arg1 bindingIndex:(inout int*)arg2;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (unsigned int)countOfEntities;
- (unsigned int)countOfEntitiesNoLoad;
- (void)dealloc;
- (id)description;
- (BOOL)distinctPersistentIDProperty;
- (void)encodeWithCoder:(id)arg1;
- (id)entityAtIndex:(unsigned int)arg1;
- (Class)entityClass;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 countedProperties:(id)arg2 ordered:(BOOL)arg3 cancelBlock:(id)arg4 usingBlock:(id)arg5;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 countedProperties:(id)arg2 ordered:(BOOL)arg3 usingBlock:(id)arg4;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 countedProperties:(id)arg2 usingBlock:(id)arg3;
- (void)enumeratePersistentIDsAndProperties:(id)arg1 usingBlock:(id)arg2;
- (void)enumeratePersistentIDsUsingBlock:(id)arg1;
- (void)enumerateSectionsUsingBlock:(id)arg1;
- (BOOL)getAggregatedCount:(unsigned int*)arg1 atIndex:(unsigned int)arg2;
- (BOOL)getPersistentID:(long long*)arg1 atIndex:(unsigned int)arg2;
- (void)growLoadedArraysForIndex:(unsigned int)arg1;
- (BOOL)hasEntities;
- (BOOL)hasLoadedEntitesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)hasLoadedEntityAtIndex:(unsigned int)arg1;
- (BOOL)hasLoadedEveryPersistentID;
- (unsigned int)indexOfEntity:(id)arg1;
- (unsigned int)indexOfPersistentID:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLibrary:(id)arg1 entityClass:(Class)arg2 predicate:(id)arg3 orderingProperties:(id)arg4 usingSections:(BOOL)arg5 nonDirectAggregateQuery:(id)arg6;
- (void)insertLoadedAggregatedCount:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)insertLoadedPersistentID:(long long)arg1 atIndex:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)library;
- (void)loadAggregateCountForEntityAtIndex:(unsigned int)arg1;
- (void)loadAllEntities;
- (id)loadEntitiesOperation;
- (id)loadEntitiesOperationForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 ordered:(BOOL)arg2 properties:(id)arg3 block:(id)arg4;
- (id)loadEntitiesOperationForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 ordered:(BOOL)arg2;
- (id)loadEntitiesOperationForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)loadEntityAtIndex:(unsigned int)arg1;
- (void)loadedAllPersisentIDs;
- (id)nonDirectAggregateQuery;
- (id)orderingProperties;
- (id)persistentIDProperty;
- (id)predicate;
- (id)sectionProperty;
- (id)sections;
- (id)selectCountSQL;
- (id)selectPersistentIDsSQL;
- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingProperties:(id)arg3 directionality:(id)arg4;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2 orderingProperties:(id)arg3;
- (id)selectSQLWithColumns:(id)arg1 groupBy:(id)arg2;
- (id)selectSQLWithColumns:(id)arg1 orderingProperties:(id)arg2 directionality:(id)arg3;
- (id)selectSQLWithColumns:(id)arg1 orderingProperties:(id)arg2;
- (id)selectSectionsSQL;
- (id)selectUnorderedPersistentIDsSQL;
- (void)setHasLoadedEveryPersistentID:(BOOL)arg1;
- (BOOL)usingSections;
- (id)valueForAggregateFunction:(id)arg1 onEntitiesForProperty:(id)arg2;
- (void)visitGroupMembersOfEntityAtIndex:(unsigned int)arg1 visitor:(int (*)())arg2 context:(void*)arg3;

@end
