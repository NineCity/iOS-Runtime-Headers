/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSMutableArray, NSMutableDictionary, NSMutableString, NSSQLAdapter, NSSQLStatement, NSSQLStoreMappingGenerator;

@interface _NSSQLGenerator : NSObject {
    NSSQLAdapter *_adapter;
    NSMutableDictionary *_aliasMap;
    NSSQLStoreMappingGenerator *_aliasNamer;
    BOOL _allowToManyKeyPath;
    BOOL _autoDistinct;
    NSMutableArray *_comparisonPredicateScopedItem;
    NSMutableString *_joinClause;
    NSMutableString *_orderByClause;
    unsigned int _scopedByORPredicate;
    NSMutableString *_selectList;
    NSMutableString *_sqlString;
    NSSQLStatement *_statement;
    BOOL _useDistinct;
    NSMutableString *_whereClause;
}

+ (void)initialize;

- (void)_addBindVarForConstVal1:(id)arg1;
- (void)_addBindVarForConstVal2:(id)arg1;
- (void)_appendWhereClauseForConstVal:(id)arg1;
- (void)_appendWhereClauseForConstantCollection:(id)arg1;
- (void)_appendWhereClauseForExpressionCollection:(id)arg1;
- (BOOL)_isForeignObjectExpression:(id)arg1;
- (BOOL)_isNullExpression:(id)arg1;
- (id)_newPredicateWithInheritanceForFetchRequest:(id)arg1;
- (id)_newWildSubStringForGlob:(id)arg1 wildStart:(BOOL)arg2 wildEnd:(BOOL)arg3;
- (void)_prepareConst:(id)arg1 inAttribute:(id)arg2 sensitiveOptions:(unsigned int)arg3;
- (void)_prepareConst:(id)arg1 inManyToMany:(id)arg2;
- (void)_prepareConst:(id)arg1 inToMany:(id)arg2;
- (BOOL)_prepareFunctionExpression:(id)arg1;
- (void)_preparePredicate:(id)arg1;
- (void)_preparePredicateExpression:(id)arg1;
- (void)_preparePredicateOperator:(id)arg1;
- (void)_prepareString:(id)arg1 expressionPath:(id)arg2 sensitiveOptions:(unsigned int)arg3 wildStart:(BOOL)arg4 wildEnd:(BOOL)arg5 allowToMany:(BOOL)arg6;
- (void)_prepareSubstringWith:(id)arg1 wildStart:(BOOL)arg2 wildEnd:(BOOL)arg3;
- (id)_reducedSubpredicates:(id)arg1;
- (id)_retainedPrimaryKeyNumberForObject:(id)arg1;
- (id)_retainedPrimaryKeyNumberForObjectID:(struct _NSScalarObjectID { Class x1; }*)arg1;
- (void)_startSQL:(id)arg1;
- (id)addJoinForDirectToManyToMany:(id)arg1;
- (void)addJoinForManyToManyRelationship:(id)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3;
- (void)addJoinForToManyRelationship:(id)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3;
- (void)addJoinForToOneRelationship:(id)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3;
- (void)appendClause:(id)arg1 forKeyPath:(id)arg2 allowToMany:(BOOL)arg3;
- (void)appendClause:(id)arg1 forKeyPathExpression:(id)arg2 allowToMany:(BOOL)arg3;
- (void)appendClause:(id)arg1 forProperty:(id)arg2 keypath:(id)arg3;
- (void)appendCountClause:(id)arg1 forToManyKeyPath:(id)arg2;
- (void)appendJoinClauseToSQL;
- (void)appendLimitClauseToSQL:(unsigned int)arg1;
- (void)appendOrderByClauseToSQL;
- (void)appendSQL:(id)arg1;
- (void)appendSelectListToSQLForRequest:(id)arg1;
- (void)appendWhereClause:(id)arg1;
- (void)appendWhereClauseToSQL;
- (BOOL)autoDistinct;
- (void)buildOrderByClauseWithSortDescriptors:(id)arg1;
- (void)buildWhereClauseForRow:(id)arg1 optLock:(long long)arg2;
- (void)buildWhereClauseWithSelectPredicate:(id)arg1;
- (void)buildWhereClauseWithSimplePredicate:(id)arg1;
- (void)dealloc;
- (BOOL)foldComparisonPredicate:(id)arg1;
- (id)initWithStatement:(id)arg1 forAdapter:(id)arg2;
- (BOOL)isToManyCountKeyPath:(id)arg1;
- (void)prepareBeginsWith:(id)arg1;
- (void)prepareBetween:(id)arg1;
- (void)prepareComparisonPredicate:(id)arg1;
- (void)prepareCountStatementWithFetchRequest:(id)arg1;
- (void)prepareDeleteStatementWithCorrelation:(id)arg1;
- (void)prepareDeleteStatementWithRow:(id)arg1;
- (void)prepareEndsWith:(id)arg1;
- (void)prepareIn:(id)arg1 swap:(BOOL)arg2;
- (void)prepareInsertStatementWithCorrelation:(id)arg1;
- (void)prepareInsertStatementWithRow:(id)arg1;
- (void)prepareLike:(id)arg1;
- (void)prepareMatches:(id)arg1;
- (void)prepareSelectStatementWithFetchRequest:(id)arg1 ignoreInheritance:(BOOL)arg2;
- (void)prepareUpdateStatementWithRow:(id)arg1 originalRow:(id)arg2;
- (void)setAutoDistinct:(BOOL)arg1;
- (id)sqlString;
- (unsigned int)sqlTypeForExpressionConstantValue:(id)arg1;
- (unsigned int)sqlTypeForPropertyAtEndOfKeyPath:(id)arg1;
- (id)whereClause;

@end
