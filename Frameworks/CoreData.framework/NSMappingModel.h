/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableArray, NSMutableDictionary;

@interface NSMappingModel : NSObject {
    struct __modelMappingFlags { 
        unsigned int _isInUse : 1; 
        unsigned int _reservedModelMapping : 31; 
    NSMutableArray *_entityMappings;
    NSMutableDictionary *_entityMappingsByName;
    } _modelMappingFlags;
    void *_reserved1;
    void *_reserved2;
    void *_reserved;
}

+ (BOOL)_isInferredMappingModel:(id)arg1;
+ (id)_modelPathsFromBundles:(id)arg1;
+ (id)inferredMappingModelForSourceModel:(id)arg1 destinationModel:(id)arg2 error:(id*)arg3;
+ (void)initialize;
+ (id)mappingModelFromBundles:(id)arg1 forSourceModel:(id)arg2 destinationModel:(id)arg3;
+ (int)migrationDebugLevel;
+ (void)setMigrationDebugLevel:(int)arg1;

- (void)_addEntityMapping:(id)arg1;
- (void)_createCachesAndOptimizeState;
- (id)_destinationEntityVersionHashesByName;
- (id)_initWithEntityMappings:(id)arg1;
- (void)_setIsEditable:(BOOL)arg1;
- (id)_sourceEntityVersionHashesByName;
- (void)_throwIfNotEditable;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entityMappings;
- (id)entityMappingsByName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1;
- (BOOL)isEditable;
- (BOOL)isEqual:(id)arg1;
- (void)setEntityMappings:(id)arg1;

@end
