/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSString;

@interface RTF_OIXMLNode : NSObject <NSCopying> {
    unsigned int _kind;
    NSString *_name;
    id _value;
}

+ (void)_escapeCharacters:(const unsigned short*)arg1 amount:(unsigned int)arg2 escapeWhiteSpaces:(BOOL)arg3 inString:(id)arg4 appendingToString:(struct __CFString { }*)arg5;
+ (void)_escapeHTMLAttributeCharacters:(id)arg1 withQuote:(unsigned short)arg2 appendingToString:(struct __CFString { }*)arg3;
+ (id)attributeWithName:(id)arg1 stringValue:(id)arg2;
+ (id)elementWithName:(id)arg1 stringValue:(id)arg2;
+ (id)elementWithName:(id)arg1;
+ (id)textWithStringValue:(id)arg1;

- (id)XMLString;
- (void)_appendXMLStringToString:(struct __CFString { }*)arg1;
- (id)closingTagString;
- (id)contentString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithKind:(unsigned int)arg1 name:(id)arg2 stringValue:(id)arg3;
- (id)initWithKind:(unsigned int)arg1;
- (unsigned int)kind;
- (id)name;
- (id)objectValue;
- (id)openingTagString;
- (void)setName:(id)arg1;
- (void)setObjectValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;

@end
