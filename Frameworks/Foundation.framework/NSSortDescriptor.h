/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSSortDescriptor : NSObject <NSCoding, NSCopying> {
    NSString *_key;
    SEL _selector;
    id _selectorOrBlock;
    unsigned int _sortDescriptorFlags;
}

+ (id)_defaultSelectorName;
+ (void)initialize;
+ (id)sortDescriptorWithKey:(id)arg1 ascending:(BOOL)arg2 comparator:(id)arg3;
+ (id)sortDescriptorWithKey:(id)arg1 ascending:(BOOL)arg2 selector:(SEL)arg3;
+ (id)sortDescriptorWithKey:(id)arg1 ascending:(BOOL)arg2;

- (BOOL)_isEqualToSortDescriptor:(id)arg1;
- (id)_selectorName;
- (void)_setAscending:(BOOL)arg1;
- (void)_setKey:(id)arg1;
- (void)_setSelectorName:(id)arg1;
- (BOOL)ascending;
- (id)comparator;
- (int)compareObject:(id)arg1 toObject:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 ascending:(BOOL)arg2 comparator:(id)arg3;
- (id)initWithKey:(id)arg1 ascending:(BOOL)arg2 selector:(SEL)arg3;
- (id)initWithKey:(id)arg1 ascending:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)key;
- (id)reversedSortDescriptor;
- (SEL)selector;

@end
