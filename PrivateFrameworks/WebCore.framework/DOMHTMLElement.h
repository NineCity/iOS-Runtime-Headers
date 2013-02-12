/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMHTMLCollection, NSString;

@interface DOMHTMLElement : DOMElement {
}

@property(retain,readonly) DOMHTMLCollection * children;
@property(copy) NSString * className;
@property(copy) NSString * contentEditable;
@property(copy) NSString * dir;
@property(copy) NSString * idName;
@property(copy) NSString * innerHTML;
@property(copy) NSString * innerText;
@property(readonly) BOOL isContentEditable;
@property(copy) NSString * lang;
@property(copy) NSString * outerHTML;
@property(copy) NSString * outerText;
@property int tabIndex;
@property(copy) NSString * title;
@property(copy,readonly) NSString * titleDisplayString;

- (void)absolutePosition:(int*)arg1 :(int*)arg2 :(int*)arg3 :(int*)arg4;
- (id)children;
- (id)className;
- (id)contentEditable;
- (id)dir;
- (BOOL)draggable;
- (id)idName;
- (id)innerHTML;
- (id)innerText;
- (id)insertAdjacentElement:(id)arg1 element:(id)arg2;
- (void)insertAdjacentHTML:(id)arg1 html:(id)arg2;
- (void)insertAdjacentText:(id)arg1 text:(id)arg2;
- (BOOL)isContentEditable;
- (id)lang;
- (id)outerHTML;
- (id)outerText;
- (int)scrollXOffset;
- (int)scrollYOffset;
- (void)setClassName:(id)arg1;
- (void)setContentEditable:(id)arg1;
- (void)setDir:(id)arg1;
- (void)setDraggable:(BOOL)arg1;
- (void)setIdName:(id)arg1;
- (void)setInnerHTML:(id)arg1;
- (void)setInnerText:(id)arg1;
- (void)setLang:(id)arg1;
- (void)setOuterHTML:(id)arg1;
- (void)setOuterText:(id)arg1;
- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2 adjustForPurpleCaret:(BOOL)arg3;
- (void)setScrollXOffset:(int)arg1 scrollYOffset:(int)arg2;
- (void)setTabIndex:(int)arg1;
- (void)setTitle:(id)arg1;
- (int)structuralComplexityContribution;
- (int)tabIndex;
- (id)title;
- (id)titleDisplayString;

@end
