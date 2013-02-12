/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OIXMLElement : OIXMLNode {
    id _attributes;
    id _children;
    BOOL _hasMultipleAttributes;
    BOOL _hasMultipleChildren;
}

+ (void)_initEmptyHTMLNames;
+ (BOOL)isEmptyHTMLElement:(id)arg1;

- (void)_appendXMLStringToString:(struct __CFString { }*)arg1 level:(int)arg2;
- (void)addAttribute:(id)arg1;
- (void)addChild:(id)arg1;
- (int)attributeCount;
- (int)childrenCount;
- (id)closingTagString;
- (id)contentString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithName:(id)arg1 stringValue:(id)arg2;
- (void)insertChild:(id)arg1 atIndex:(unsigned int)arg2;
- (id)objectValue;
- (id)openingTagString;
- (void)setObjectValue:(id)arg1;
- (id)stringValue;

@end
