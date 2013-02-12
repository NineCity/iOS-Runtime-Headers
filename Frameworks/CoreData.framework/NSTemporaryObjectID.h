/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSEntityDescription;

@interface NSTemporaryObjectID : NSManagedObjectID {
    int _cd_rc;
    int _counter;
    NSEntityDescription *_entity;
}

+ (void)_release_1;
+ (id)_retain_1;
+ (void)_storeDeallocated;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (unsigned int)allocateBatch:(id*)arg1 forEntity:(id)arg2 count:(unsigned int)arg3;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (Class)classForStore:(id)arg1;
+ (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;
+ (id)initWithEntity:(id)arg1;
+ (void)initialize;
+ (void)release;
+ (id)retain;
+ (void)setObjectStoreIdentifier:(id)arg1;
+ (int)version;

- (id)URIRepresentation;
- (BOOL)_isPersistentStoreAlive;
- (id)_referenceData;
- (id)_retainedURIString;
- (void)_setPersistentStore:(id)arg1;
- (id)_storeIdentifier;
- (void)dealloc;
- (id)entity;
- (void)finalize;
- (unsigned int)hash;
- (id)initWithEntity:(id)arg1 andUUIDString:(id)arg2;
- (id)initWithEntity:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isTemporaryID;
- (id)persistentStore;
- (void)release;
- (id)retain;
- (unsigned int)retainCount;

@end
