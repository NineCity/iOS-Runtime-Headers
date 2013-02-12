/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class AccessibilityObjectWrapper;

@interface AccessibilityObjectWrapper : NSObject {
    struct AccessibilityObject { int (**x1)(); int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { 
            unsigned int m_size; 
            struct VectorBuffer<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { 
                struct RefPtr<WebCore::AccessibilityObject> {} *m_buffer; 
                unsigned int m_capacity; 
            } m_buffer; 
        } x4; boolx5; int x6; struct RetainPtr<AccessibilityObjectWrapper> { 
            AccessibilityObjectWrapper *m_ptr; 
    unsigned long long m_accessibilityTraitsFromAncestor;
    int m_isAccessibilityElement;
        } x7; } *m_object;
}

+ (void)_initializeSafeCategory;

- (struct AccessibilityTableCell { int (**x1)(); int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { unsigned int x_4_1_1; struct VectorBuffer<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { struct RefPtr<WebCore::AccessibilityObject> {} *x_2_2_1; unsigned int x_2_2_2; } x_4_1_2; } x4; boolx5; int x6; struct RetainPtr<AccessibilityObjectWrapper> { id x_7_1_1; } x7; struct RenderObject {} *x8; int x9; boolx10; int x11; int x12; }*)tableCellParent;
- (struct AccessibilityTable { int (**x1)(); int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { unsigned int x_4_1_1; struct VectorBuffer<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { struct RefPtr<WebCore::AccessibilityObject> {} *x_2_2_1; unsigned int x_2_2_2; } x_4_1_2; } x4; boolx5; int x6; struct RetainPtr<AccessibilityObjectWrapper> { id x_7_1_1; } x7; struct RenderObject {} *x8; int x9; boolx10; int x11; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { unsigned int x_12_1_1; struct VectorBuffer<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { struct RefPtr<WebCore::AccessibilityObject> {} *x_2_2_1; unsigned int x_2_2_2; } x_12_1_2; } x12; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { unsigned int x_13_1_1; struct VectorBuffer<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { struct RefPtr<WebCore::AccessibilityObject> {} *x_2_2_1; unsigned int x_2_2_2; } x_13_1_2; } x13; struct AccessibilityTableHeaderContainer {} *x14; boolx15; }*)tableParent;
- (struct AccessibilityObject { int (**x1)(); int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { unsigned int x_4_1_1; struct VectorBuffer<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { struct RefPtr<WebCore::AccessibilityObject> {} *x_2_2_1; unsigned int x_2_2_2; } x_4_1_2; } x4; boolx5; int x6; struct RetainPtr<AccessibilityObjectWrapper> { id x_7_1_1; } x7; }*)accessibilityObject;
- (void)_accessibilityActivate;
- (id)_accessibilityAncestorForSiblingsWithTraits:(unsigned long long)arg1;
- (id)_accessibilityConvertDataArrayToTextMarkerArray:(id)arg1;
- (id)_accessibilityConvertTextMarkersToDataArray:(id)arg1;
- (void)_accessibilityDecreaseSelection:(id)arg1;
- (void)_accessibilityIncreaseSelection:(id)arg1;
- (BOOL)_accessibilityIsFirstSibling;
- (BOOL)_accessibilityIsFirstSiblingForTrait:(unsigned long long)arg1;
- (BOOL)_accessibilityIsLandmarkRole:(int)arg1;
- (BOOL)_accessibilityIsLastSibling;
- (BOOL)_accessibilityIsLastSiblingForTrait:(unsigned long long)arg1;
- (id)_accessibilityLandmarkAncestor;
- (id)_accessibilityLineEndMarker:(id)arg1;
- (id)_accessibilityLinePosition:(BOOL)arg1 withMarker:(id)arg2;
- (id)_accessibilityLineStartMarker:(id)arg1;
- (id)_accessibilityListAncestor;
- (id)_accessibilityMarkerForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_accessibilityMarkerPosition:(BOOL)arg1 withMarker:(id)arg2;
- (void)_accessibilityModifySelection:(id)arg1 increase:(BOOL)arg2;
- (id)_accessibilityNextElementsWithCount:(unsigned long)arg1 originalElement:(id)arg2;
- (id)_accessibilityNextElementsWithCount:(unsigned long)arg1;
- (id)_accessibilityNextMarker:(id)arg1;
- (id)_accessibilityObjectForTextMarker:(id)arg1;
- (id)_accessibilityParentForSubview:(id)arg1;
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)arg1 originalElement:(id)arg2;
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)arg1;
- (id)_accessibilityPreviousMarker:(id)arg1;
- (void)_accessibilityScrollToVisible;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_accessibilitySelectedNSRangeForObject;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (BOOL)_accessibilitySiblingWithAncestor:(id)arg1 isFirst:(BOOL)arg2 isLast:(BOOL)arg3 sawAXElement:(BOOL*)arg4;
- (BOOL)_accessibilitySiblingWithAncestor:(id)arg1 isFirst:(BOOL)arg2 isLast:(BOOL)arg3;
- (BOOL)_accessibilitySupportsActivateAction;
- (id)_accessibilityTableAncestor;
- (id)_accessibilityTextMarkerRange;
- (id)_accessibilityTextMarkerRangeForSelection;
- (id)_accessibilityTextViewTextOperationResponder;
- (unsigned long long)_accessibilityTraitsFromAncestors;
- (id)_accessibilityWebDocumentView;
- (BOOL)_addAccessibilityObject:(struct AccessibilityObject { int (**x1)(); int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { unsigned int x_4_1_1; struct VectorBuffer<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { struct RefPtr<WebCore::AccessibilityObject> {} *x_2_2_1; unsigned int x_2_2_2; } x_4_1_2; } x4; boolx5; int x6; struct RetainPtr<AccessibilityObjectWrapper> { id x_7_1_1; } x7; }*)arg1 toTextMarkerArray:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_convertIntRectToScreenCoordinates:(struct IntRect { struct IntPoint { int x_1_1_1; int x_1_1_2; } x1; struct IntSize { int x_2_1_1; int x_2_1_2; } x2; })arg1;
- (struct PassRefPtr<WebCore::Range> { struct Range {} *x1; })_convertToDOMRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_convertToNSRange:(struct Range { int x1; struct RefPtr<WebCore::Document> { struct Document {} *x_2_1_1; } x2; struct RangeBoundaryPoint { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_3_1_1; int x_3_1_2; struct Node {} *x_3_1_3; } x3; struct RangeBoundaryPoint { struct RefPtr<WebCore::Node> { struct Node {} *x_1_2_1; } x_4_1_1; int x_4_1_2; struct Node {} *x_4_1_3; } x4; }*)arg1;
- (BOOL)_isCheckBox;
- (BOOL)_prepareAccessibilityCall;
- (void)_repostWebSelectionChange;
- (void)accessibilityActivate;
- (id)accessibilityArrayOfTextForTextMarkers:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityBoundsForTextMarkers:(id)arg1;
- (BOOL)accessibilityCanFuzzyHitTest;
- (struct CGPoint { float x1; float x2; })accessibilityCenterPoint;
- (struct _NSRange { unsigned int x1; unsigned int x2; })accessibilityColumnRange;
- (id)accessibilityContainer;
- (void)accessibilityDecreaseSelection:(int)arg1;
- (void)accessibilityDecrement;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (void)accessibilityElementDidBecomeFocused;
- (id)accessibilityElementForRow:(int)arg1 andColumn:(int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityElementRect;
- (id)accessibilityFocusedUIElement;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHeaderElements;
- (id)accessibilityHint;
- (id)accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1;
- (void)accessibilityIncreaseSelection:(int)arg1;
- (void)accessibilityIncrement;
- (BOOL)accessibilityIsComboBox;
- (id)accessibilityLabel;
- (id)accessibilityLanguage;
- (id)accessibilityLinkedElement;
- (void)accessibilityModifySelection:(int)arg1 increase:(BOOL)arg2;
- (id)accessibilityObjectForTextMarker:(id)arg1;
- (id)accessibilityPlaceholderValue;
- (id)accessibilityPostProcessHitTest:(struct CGPoint { float x1; float x2; })arg1;
- (void)accessibilityPostedNotification:(int)arg1;
- (BOOL)accessibilityRequired;
- (struct _NSRange { unsigned int x1; unsigned int x2; })accessibilityRowRange;
- (void)accessibilitySetPostedNotificationCallback:(int (*)())arg1 withContext:(void*)arg2;
- (id)accessibilityStringForTextMarkers:(id)arg1;
- (id)accessibilityTitleElement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityURL;
- (id)accessibilityValue;
- (void)accessibilityZoomInAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)arrayOfTextForTextMarkers:(id)arg1;
- (id)attachmentView;
- (BOOL)containsUnnaturallySegmentedChildren;
- (void)dealloc;
- (id)description;
- (void)detach;
- (BOOL)determineIsAccessibilityElement;
- (struct _NSRange { unsigned int x1; unsigned int x2; })elementTextRange;
- (id)elementsForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForTextMarkers:(id)arg1;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)initWithAccessibilityObject:(struct AccessibilityObject { int (**x1)(); int x2; unsigned int x3; struct Vector<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { unsigned int x_4_1_1; struct VectorBuffer<WTF::RefPtr<WebCore::AccessibilityObject>,0ul> { struct RefPtr<WebCore::AccessibilityObject> {} *x_2_2_1; unsigned int x_2_2_2; } x_4_1_2; } x4; boolx5; int x6; struct RetainPtr<AccessibilityObjectWrapper> { id x_7_1_1; } x7; }*)arg1;
- (BOOL)isAccessibilityElement;
- (BOOL)isAttachment;
- (BOOL)isScreenReaderRunning;
- (id)lineEndMarkerForMarker:(id)arg1;
- (id)lineStartMarkerForMarker:(id)arg1;
- (id)nextMarkerForMarker:(id)arg1;
- (int)positionForTextMarker:(id)arg1;
- (void)postFocusChangeNotification;
- (void)postLayoutChangeNotification;
- (void)postScreenChangeNotification;
- (void)postSelectedTextChangeNotification;
- (id)previousMarkerForMarker:(id)arg1;
- (id)screenReaderVersion;
- (id)selectedTextMarker;
- (id)selectionRangeString;
- (id)stringForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)stringForTextMarkers:(id)arg1;
- (BOOL)stringValueShouldBeUsedInLabel;
- (id)textMarkerForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)textMarkerForPosition:(int)arg1;
- (id)textMarkerRange;
- (id)textMarkerRangeForSelection;

@end
