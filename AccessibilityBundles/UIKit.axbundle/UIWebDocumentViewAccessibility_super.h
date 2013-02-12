/* Generated by RuntimeBrowser
   Image: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
 */

@interface UIWebDocumentViewAccessibility_super : UIAccessibilitySafeCategory {
}

- (BOOL)_accessibilityHasTextOperations;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)_accessibilityIsScrollAncestor;
- (id)_accessibilityResponderElement;
- (id)_accessibilityScrollStatus;
- (void)_accessibilityScrollToFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forView:(id)arg2;
- (BOOL)_accessibilityScrollingEnabled;
- (id)_accessibilitySupplementaryHeaderViews;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityZoomInAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)clearSelection;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (int)indexOfAccessibilityElement:(id)arg1;
- (BOOL)isAccessibilityElement;
- (void)paste:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)setSelectedDOMRange:(id)arg1 affinity:(int)arg2;
- (void)setSelectedTextRange:(id)arg1;
- (void)stopLoading:(id)arg1;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 willShowFullScreenForPlugInView:(id)arg2;

@end
