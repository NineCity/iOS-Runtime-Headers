/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, UIView<UITextSelectingContainer>;

@interface NSObject <NSObject> {
    Class isa;
}

@property(readonly) BOOL _isSecurityEnabled;
@property(readonly) BOOL _isSecurityNormal;
@property(readonly) BOOL _mapkit_hasPanoramaID;
@property(readonly) UIView<UITextSelectingContainer> * _textSelectingContainer;
@property struct CGRect { struct CGPoint { float x; float y; } origin; struct CGSize { float width; float height; } size; } accessibilityFrame;
@property(copy) NSString * accessibilityHint;
@property(copy) NSString * accessibilityLabel;
@property(retain) NSString * accessibilityLanguage;
@property unsigned long long accessibilityTraits;
@property(copy) NSString * accessibilityValue;
@property BOOL isAccessibilityElement;

+ (int (*)())CA_getterForType:(int)arg1;
+ (int (*)())CA_setterForType:(int)arg1;
+ (int (*)())instanceMethodForSelector:(SEL)arg1;
+ (int (*)())methodForSelector:(SEL)arg1;
+ (id)CA_CAMLPropertyForKey:(id)arg1;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (BOOL)CA_encodePropertyConditionally:(unsigned int)arg1 type:(int)arg2;
+ (void)_accessibilityCalDetailStringForEvent:(id)arg1 inDateString:(id*)arg2 inTimeString:(id*)arg3;
+ (void)_accessibilityCalGetHourDesignatorsForAM:(id*)arg1 andPM:(id*)arg2;
+ (BOOL)_accessibilityCalHourDesignatorsAreBeforeHour;
+ (BOOL)_accessibilityCalShow24Hours;
+ (BOOL)_accessibilityCalSpaceBetweenDesignatorsAndHour;
+ (id)_accessibilityStringForDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1;
+ (id)_accessibilityStringForDayOfWeek:(int)arg1;
+ (id)_accessibilityTextChecker;
+ (id)_copyDescription;
+ (id)_createMutableArrayValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createMutableSetValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createOtherValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createOtherValueSetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createValueGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createValuePrimitiveGetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createValuePrimitiveSetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (id)_createValueSetterWithContainerClassID:(id)arg1 key:(id)arg2;
+ (void)_initializeSafeCategory;
+ (id)_keysForValuesAffectingValueForKey:(id)arg1;
+ (BOOL)_shouldAddObservationForwardersForKey:(id)arg1;
+ (BOOL)accessInstanceVariablesDirectly;
+ (id)accessibilityBundles;
+ (void)accessibilityInitializeBundle;
+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)autorelease;
+ (void)cancelPreviousPerformRequestsWithNonRetainedTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
+ (void)cancelPreviousPerformRequestsWithNonRetainedTarget:(id)arg1;
+ (void)cancelPreviousPerformRequestsWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3;
+ (void)cancelPreviousPerformRequestsWithTarget:(id)arg1;
+ (Class)class;
+ (id)classFallbacksForKeyedArchiver;
+ (Class)classForKeyedUnarchiver;
+ (BOOL)conformsToProtocol:(id)arg1;
+ (id)copy;
+ (id)copyWithZone:(struct _NSZone { }*)arg1;
+ (void)dealloc;
+ (id)debugDescription;
+ (id)description;
+ (void)doesNotRecognizeSelector:(SEL)arg1;
+ (void)finalize;
+ (void)forwardInvocation:(id)arg1;
+ (id)forwardingTargetForSelector:(SEL)arg1;
+ (unsigned int)hash;
+ (BOOL)implementsSelector:(SEL)arg1;
+ (id)init;
+ (void)initialize;
+ (void)initialize;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)instancesImplementSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (BOOL)isAncestorOfObject:(id)arg1;
+ (BOOL)isEqual:(id)arg1;
+ (BOOL)isFault;
+ (BOOL)isKeyExcludedFromWebScript:(const char *)arg1;
+ (BOOL)isKindOfClass:(Class)arg1;
+ (BOOL)isMemberOfClass:(Class)arg1;
+ (BOOL)isProxy;
+ (BOOL)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (BOOL)isSubclassOfClass:(Class)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (void)load;
+ (void)load;
+ (id)methodSignatureForSelector:(SEL)arg1;
+ (void)mf_clearLocks;
+ (id)mutableCopy;
+ (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
+ (id)new;
+ (BOOL)overridesSelector:(SEL)arg1 ofBaseClass:(Class)arg2;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
+ (id)performSelector:(SEL)arg1 withObject:(id)arg2;
+ (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 count:(unsigned long)arg3 objects:(id)arg4;
+ (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 waitTime:(double)arg3 cancelMask:(unsigned long)arg4 count:(unsigned long)arg5 objects:(id)arg6;
+ (id)performSelector:(SEL)arg1;
+ (void)performSelectorWithNonRetainedTarget:(id)arg1 selector:(SEL)arg2 withObject:(id)arg3 afterDelay:(double)arg4;
+ (oneway void)release;
+ (BOOL)resolveClassMethod:(SEL)arg1;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (BOOL)respondsToSelector:(SEL)arg1;
+ (id)retain;
+ (unsigned int)retainCount;
+ (id)self;
+ (void)setKeys:(id)arg1 triggerChangeNotificationsForDependentKey:(id)arg2;
+ (void)setVersion:(int)arg1;
+ (Class)superclass;
+ (int)version;
+ (struct _NSZone { }*)zone;

- (int (*)())methodForSelector:(SEL)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (float)CA_distanceToValue:(id)arg1;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const struct ValueInterpolator { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; boolx10; }*)arg4;
- (void)CA_prepareRenderValue;
- (void)_ICSStringWithOptions:(unsigned int)arg1 appendingToString:(id)arg2;
- (id)_ICSStringWithOptions:(unsigned int)arg1;
- (BOOL)__accessibilityEscape;
- (id)__accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)__crossedTimeMarkerNotification:(id)arg1;
- (id)_accessibilityAbsoluteValue;
- (void)_accessibilityAddMispellingsToAttributedString:(id)arg1;
- (float)_accessibilityAllowedGeometryOverlap;
- (BOOL)_accessibilityAlwaysOrderedFirst;
- (id)_accessibilityAncestorIsKindOf:(Class)arg1;
- (id)_accessibilityApplication;
- (id)_accessibilityAttributedValueForRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1;
- (id)_accessibilityAutomaticIdentifier;
- (BOOL)_accessibilityBackingElementIsValid;
- (BOOL)_accessibilityBookShowsDualPages;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_accessibilityBoundsForRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_accessibilityCheckBorderHit:(BOOL)arg1 left:(BOOL)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_accessibilityClassicModeFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_accessibilityContainerInDirection:(BOOL)arg1 originalElement:(id)arg2;
- (id)_accessibilityContainingParentForOrdering;
- (id)_accessibilityContentLanguage;
- (void)_accessibilityCopy;
- (void)_accessibilityCut;
- (void)_accessibilityDecreaseSelection:(id)arg1;
- (void)_accessibilityDelete;
- (BOOL)_accessibilityEscape;
- (void)_accessibilityFinalize;
- (id)_accessibilityFindDescendant:(id)arg1;
- (void)_accessibilityFindSearchResult:(BOOL)arg1 withString:(id)arg2;
- (id)_accessibilityFirstVisibleItem;
- (id)_accessibilityFuzzyHitTestElements;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_accessibilityGesturePracticeRegion;
- (void)_accessibilityHandleATFocused:(BOOL)arg1;
- (BOOL)_accessibilityHandlePublicScroll:(int)arg1;
- (void)_accessibilityHandleUnregisterContainer;
- (BOOL)_accessibilityHasDescendantOfType:(Class)arg1;
- (BOOL)_accessibilityHasOrderedChildren;
- (BOOL)_accessibilityHasTextOperations;
- (id)_accessibilityHeaderElement;
- (id)_accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (id)_accessibilityHitTestSupplementaryViews:(id)arg1 point:(struct CGPoint { float x1; float x2; })arg2 withEvent:(id)arg3;
- (void)_accessibilityIgnoreNextNotification:(unsigned int)arg1;
- (void)_accessibilityIgnoreNextPostPasteboardTextOperation:(id)arg1;
- (void)_accessibilityIncreaseSelection:(id)arg1;
- (BOOL)_accessibilityIsDescendantOfElement:(id)arg1;
- (BOOL)_accessibilityIsFirstSibling;
- (BOOL)_accessibilityIsFirstSiblingForTrait:(unsigned long long)arg1;
- (BOOL)_accessibilityIsFrameOutOfBounds;
- (BOOL)_accessibilityIsLastSibling;
- (BOOL)_accessibilityIsLastSiblingForTrait:(unsigned long long)arg1;
- (BOOL)_accessibilityIsMainWindow;
- (BOOL)_accessibilityIsNotFirstElement;
- (BOOL)_accessibilityIsScrollAncestor;
- (BOOL)_accessibilityIsScrollable;
- (BOOL)_accessibilityIsTableCell;
- (BOOL)_accessibilityIsTitleElement;
- (BOOL)_accessibilityIsTouchContainer;
- (BOOL)_accessibilityIsVisible;
- (id)_accessibilityLineEndMarker:(id)arg1;
- (int)_accessibilityLineEndPosition;
- (id)_accessibilityLineNumberAndColumnForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_accessibilityLineRangeForPosition:(unsigned int)arg1;
- (id)_accessibilityLineStartMarker:(id)arg1;
- (int)_accessibilityLineStartPosition;
- (id)_accessibilityMarkerForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)_accessibilityMarkerLineEndsForMarkers:(id)arg1;
- (id)_accessibilityMarkersForPoints:(id)arg1;
- (struct CGPoint { float x1; float x2; })_accessibilityMaxScrubberPosition;
- (float)_accessibilityMaxValue;
- (struct CGPoint { float x1; float x2; })_accessibilityMinScrubberPosition;
- (float)_accessibilityMinValue;
- (id)_accessibilityNextElementsWithCount:(unsigned long)arg1 originalElement:(id)arg2;
- (id)_accessibilityNextMarker:(id)arg1;
- (id)_accessibilityObjectForTextMarker:(id)arg1;
- (BOOL)_accessibilityObscuresScreen;
- (id)_accessibilityPageContent;
- (int)_accessibilityPageControlCount;
- (int)_accessibilityPageControlIndex;
- (id)_accessibilityParentForSubview:(id)arg1;
- (id)_accessibilityParentView;
- (void)_accessibilityPaste;
- (void)_accessibilityPostNotificationHelper:(id)arg1;
- (void)_accessibilityPostPasteboardTextForOperation:(id)arg1;
- (id)_accessibilityPreviousElementsWithCount:(unsigned long)arg1 originalElement:(id)arg2;
- (id)_accessibilityPreviousMarker:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_accessibilityRangeForLineNumberAndColumn:(id)arg1;
- (BOOL)_accessibilityReadAllContinuesWithScroll;
- (void)_accessibilityReloadMediaStrings;
- (void)_accessibilityReplace;
- (void)_accessibilityResetContainerElements;
- (id)_accessibilityResponderElement;
- (id)_accessibilityScrollAncestor;
- (id)_accessibilityScrollAncestorForSelector:(SEL)arg1;
- (void)_accessibilityScrollDownPage;
- (void)_accessibilityScrollLeftPage;
- (id)_accessibilityScrollParent;
- (void)_accessibilityScrollRightPage;
- (id)_accessibilityScrollStatus;
- (void)_accessibilityScrollToFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forView:(id)arg2;
- (void)_accessibilityScrollToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_accessibilityScrollToVisible;
- (void)_accessibilityScrollUpPage;
- (BOOL)_accessibilityScrollingEnabled;
- (void)_accessibilitySelect;
- (void)_accessibilitySelectAll;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_accessibilitySelectedNSRangeForObject;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_accessibilitySelectedTextRange;
- (BOOL)_accessibilityServesAsContainingParentForOrdering;
- (BOOL)_accessibilityServesAsFirstElement;
- (BOOL)_accessibilityServesAsFirstResponder;
- (void)_accessibilitySetCurrentGesture:(id)arg1;
- (void)_accessibilitySetCurrentWordInPageContext:(id)arg1;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_accessibilitySetTextSelection:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_accessibilitySetValue:(id)arg1 forAttribute:(int)arg2;
- (void)_accessibilitySetValue:(id)arg1;
- (id)_accessibilitySupplementaryFooterViews;
- (id)_accessibilitySupplementaryHeaderViews;
- (BOOL)_accessibilitySupportsActivateAction;
- (void)_accessibilitySwitchOrderedChildrenFrom:(id)arg1;
- (id)_accessibilityTextChecker;
- (id)_accessibilityTextMarkerRange;
- (id)_accessibilityTextMarkerRangeForSelection;
- (void)_accessibilityTextOperationAction:(id)arg1;
- (id)_accessibilityTextOperations;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)_accessibilityTouchContainer;
- (id)_accessibilityUnignoredDescendant;
- (void)_accessibilityUnregister;
- (id)_accessibilityUserTestingChildren;
- (id)_accessibilityUserTestingElementAttributes;
- (id)_accessibilityUserTestingElementBaseType;
- (id)_accessibilityUserTestingElementType;
- (BOOL)_accessibilityUserTestingIsBackNavButton;
- (BOOL)_accessibilityUserTestingIsCancelButton;
- (BOOL)_accessibilityUserTestingIsDefaultButton;
- (BOOL)_accessibilityUserTestingIsRightNavButton;
- (id)_accessibilityUserTestingParent;
- (id)_accessibilityUserTestingVisibleCells;
- (id)_accessibilityUserTestingVisibleSections;
- (BOOL)_accessibilityUsesScrollParentForOrdering;
- (BOOL)_accessibilityUsesSpecialKeyboardDismiss;
- (id)_accessibilityValueForRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1;
- (id)_accessibilityVisibleItemInList;
- (BOOL)_accessibilityWebSearchResultsActive;
- (BOOL)_accessibilityWindowVisible;
- (void)_addObserver:(id)arg1 forProperty:(id)arg2 options:(unsigned int)arg3 context:(void*)arg4;
- (id)_axDebugTraits;
- (id)_axSuperviews;
- (void)_ay_performSelector:(SEL)arg1 inThread:(id)arg2 beforeDate:(id)arg3;
- (void)_ay_performSelector:(SEL)arg1 inThread:(id)arg2;
- (void)_ay_performSelector:(SEL)arg1 withObject:(id)arg2 inThread:(id)arg3 beforeDate:(id)arg4;
- (void)_ay_performSelector:(SEL)arg1 withObject:(id)arg2 inThread:(id)arg3;
- (void)_ay_performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 inThread:(id)arg4 beforeDate:(id)arg5;
- (void)_ay_performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3 inThread:(id)arg4;
- (unsigned long)_cfTypeID;
- (void)_changeValueForKey:(id)arg1 usingBlock:(id)arg2;
- (unsigned short)_characterAfterCaretSelection;
- (unsigned short)_characterBeforeCaretSelection;
- (unsigned short)_characterInRelationToCaretSelection:(int)arg1;
- (unsigned short)_characterInRelationToRangedSelection:(int)arg1;
- (id)_clampedpositionFromPosition:(id)arg1 offset:(int)arg2;
- (id)_copyDescription;
- (void)_deleteBackwardAndNotify:(BOOL)arg1;
- (void)_deleteByWord;
- (void)_deleteToEndOfLine;
- (void)_deleteToStartOfLine;
- (void)_didChangeValuesForKeys:(id)arg1;
- (void)_disableScrollingIfNecessary;
- (unsigned int)_elementForColumn:(int)arg1;
- (void)_enableScrollingIfNecessary;
- (void)_expandSelectionToStartOfWordBeforeCaretSelection;
- (void)_extendCurrentSelection:(int)arg1;
- (id)_fontForCaretSelection;
- (id)_fullText;
- (id)_getRetainedValueForKeyPath:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3 copy:(BOOL)arg4;
- (id)_getRetainedValueForKeyPathOnMainThread:(id)arg1 copy:(BOOL)arg2;
- (BOOL)_hasMarkedTextOrRangedSelection;
- (id)_implicitObservationInfo;
- (int)_indexForTextPosition:(id)arg1;
- (BOOL)_isEmptySelection;
- (BOOL)_isKVOA;
- (BOOL)_isSecurityEnabled;
- (BOOL)_isSecurityNormal;
- (id)_keyInput;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_lastRectForRange:(id)arg1;
- (BOOL)_mapkit_hasPanoramaID;
- (BOOL)_mapkit_isInternalAnnotation;
- (BOOL)_mapkit_isInternalAnnotationView;
- (void)_mf_checkToAllowExclusiveLocksWithLock:(id)arg1;
- (void)_mf_checkToAllowLock:(id)arg1;
- (void)_mf_checkToAllowOrderingWithLock:(id)arg1;
- (void)_mf_checkToAllowStrictProgressionWithLock:(id)arg1;
- (id)_mf_lockOrderingForType:(int)arg1;
- (BOOL)_mf_ntsIsLocked;
- (void)_moveCurrentSelection:(int)arg1;
- (id)_moveDown:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveLeft:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveRight:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfDocument:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfLine:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToEndOfWord:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfDocument:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfLine:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfParagraph:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveToStartOfWord:(BOOL)arg1 withHistory:(id)arg2;
- (id)_moveUp:(BOOL)arg1 withHistory:(id)arg2;
- (id)_newPhraseBoundaryGestureRecognizer;
- (void)_nonRetainingPerformSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4;
- (void)_notifyObserversForKeyPath:(id)arg1 change:(id)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_nsrangeForTextRange:(id)arg1;
- (void)_phraseBoundaryGesture:(id)arg1;
- (id)_positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3 withAffinityDownstream:(BOOL)arg4;
- (id)_rangeOfEnclosingWord:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_rectContainingCaretSelection;
- (void)_removeObserver:(id)arg1 forProperty:(id)arg2;
- (void)_replaceCurrentWordWithText:(id)arg1;
- (void)_scr_safeGetValueForBlock:(id)arg1 lock:(id)arg2;
- (void)_scr_safeGetValueForKeyPath:(id)arg1 lock:(id)arg2;
- (void)_scr_safeGetValueForKeyPath:(id)arg1;
- (void)_scr_safeGetValueForSelector:(id)arg1 lock:(id)arg2;
- (void)_scrollRectToVisible:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (id)_selectableText;
- (int)_selectionAffinity;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_selectionAsNSRange;
- (BOOL)_selectionAtDocumentEnd;
- (BOOL)_selectionAtDocumentStart;
- (BOOL)_selectionAtWordStart;
- (void)_setAccessibilityIgnoresMouseEvents:(BOOL)arg1;
- (void)_setAccessibilityIsMainWindow:(BOOL)arg1;
- (void)_setAccessibilityIsNotFirstElement:(BOOL)arg1;
- (void)_setAccessibilityObscuresScreen:(BOOL)arg1;
- (void)_setAccessibilityServesAsContainingParentForOrdering:(BOOL)arg1;
- (void)_setAccessibilityWindowVisible:(BOOL)arg1;
- (void)_setGestureRecognizers;
- (id)_setHistory:(id)arg1 withExtending:(BOOL)arg2 withAnchor:(int)arg3 withAffinityDownstream:(BOOL)arg4;
- (void)_setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)_setScrollViewOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)_setSelectedTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (id)_setSelectionRangeWithHistory:(id)arg1;
- (void)_shutterButtonClicked;
- (id)_textColorForCaretSelection;
- (id)_textSelectingContainer;
- (void)_unmarkText;
- (void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (id)_webkit_invokeOnMainThread;
- (void)_willChangeValuesForKeys:(id)arg1;
- (id)_wordContainingCaretSelection;
- (void)_zoomToNextLevel:(int)arg1 tapCentroid:(struct CGPoint { float x1; float x2; })arg2;
- (void)accessibilityActivate;
- (id)accessibilityArrayOfTextForTextMarkers:(id)arg1;
- (id)accessibilityAttributeValue:(int)arg1 forParameter:(id)arg2;
- (id)accessibilityAttributeValue:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityBoundsForTextMarkers:(id)arg1;
- (struct CGPoint { float x1; float x2; })accessibilityCenterPoint;
- (struct _NSRange { unsigned int x1; unsigned int x2; })accessibilityColumnRange;
- (int)accessibilityCompareGeometry:(id)arg1;
- (id)accessibilityContainer;
- (id)accessibilityContainer;
- (id)accessibilityContainerElements;
- (void)accessibilityDecrement;
- (void)accessibilityDecrement;
- (BOOL)accessibilityEditOperationAction:(id)arg1;
- (id)accessibilityElementAtIndex:(int)arg1;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (int)accessibilityElementCount;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (void)accessibilityElementDidLoseFocus;
- (id)accessibilityElementForRow:(int)arg1 andColumn:(int)arg2;
- (BOOL)accessibilityElementIsFocused;
- (BOOL)accessibilityElementIsFocused;
- (id)accessibilityEscapeAction;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityHeaderElements;
- (id)accessibilityHint;
- (id)accessibilityHint;
- (id)accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1;
- (id)accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1;
- (id)accessibilityIdentification;
- (id)accessibilityIdentifier;
- (void)accessibilityIncrement;
- (void)accessibilityIncrement;
- (void)accessibilityInitialize;
- (BOOL)accessibilityIsComboBox;
- (id)accessibilityLabel;
- (id)accessibilityLabel;
- (id)accessibilityLabelForRange:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg1;
- (id)accessibilityLanguage;
- (id)accessibilityLanguage;
- (id)accessibilityLinkedElement;
- (id)accessibilityLiteContent;
- (BOOL)accessibilityPerformAction:(int)arg1 withValue:(id)arg2;
- (id)accessibilityPlaceholderValue;
- (void)accessibilityPostNotification:(unsigned int)arg1 withObject:(id)arg2 afterDelay:(double)arg3;
- (BOOL)accessibilityRequired;
- (id)accessibilityRootElement;
- (struct _NSRange { unsigned int x1; unsigned int x2; })accessibilityRowRange;
- (BOOL)accessibilityScroll:(int)arg1;
- (BOOL)accessibilityScrollDownPageSupported;
- (BOOL)accessibilityScrollLeftPageSupported;
- (BOOL)accessibilityScrollRightPageSupported;
- (BOOL)accessibilityScrollUpPageSupported;
- (void)accessibilitySetIdentification:(id)arg1;
- (void)accessibilitySetIdentification:(id)arg1;
- (BOOL)accessibilityStartStopToggle;
- (id)accessibilityStringForTextMarkers:(id)arg1;
- (id)accessibilityTitleElement;
- (unsigned long long)accessibilityTraits;
- (unsigned long long)accessibilityTraits;
- (BOOL)accessibilityTreeHidden;
- (id)accessibilityURL;
- (id)accessibilityUserDefinedCenterPoint;
- (id)accessibilityUserDefinedFrame;
- (id)accessibilityUserDefinedHint;
- (id)accessibilityUserDefinedIdentifier;
- (id)accessibilityUserDefinedIgnoresMouseEvents;
- (id)accessibilityUserDefinedIsMainWindow;
- (id)accessibilityUserDefinedLabel;
- (id)accessibilityUserDefinedLanguage;
- (id)accessibilityUserDefinedLiteContent;
- (id)accessibilityUserDefinedNotFirstElement;
- (id)accessibilityUserDefinedServesAsContainingParentForOrdering;
- (id)accessibilityUserDefinedSize;
- (id)accessibilityUserDefinedTraits;
- (id)accessibilityUserDefinedValue;
- (id)accessibilityUserDefinedWindowVisible;
- (id)accessibilityValue;
- (id)accessibilityValue;
- (void)accessibilityZoomInAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)addNullRunLoopSourceAndPerformSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned int)arg3 context:(void*)arg4;
- (void)allowSafePerformSelector;
- (id)autoContentAccessingProxy;
- (id)autorelease;
- (id)awakeAfterUsingCoder:(id)arg1;
- (void)awakeFromNib;
- (long)becomeActive;
- (long)becomeInactive;
- (id)blockingMainThreadProxy;
- (struct CalEventOccurrence { }*)cachedOccurrenceAtIndex:(int)arg1;
- (void)cameraShutterClicked:(id)arg1;
- (Class)class;
- (Class)classForArchiver;
- (Class)classForCoder;
- (Class)classForKeyedArchiver;
- (id)className;
- (BOOL)conformsToProtocol:(id)arg1;
- (struct { double x1; double x2; })convertPoint:(struct CGPoint { float x1; float x2; })arg1 toCoordinateFromView:(id)arg2;
- (id)copy;
- (id)copyValueForKeyPath:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3;
- (id)copyValueForKeyPath:(id)arg1 forThreadKey:(id)arg2;
- (id)copyValueForKeyPathOnMainThread:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (unsigned long long)defaultAccessibilityTraits;
- (id)delayedProxy:(double)arg1;
- (id)description;
- (id)dictionaryWithValuesForKeys:(id)arg1;
- (void)didChange:(unsigned int)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)didChangeValueForKey:(id)arg1 withSetMutation:(unsigned int)arg2 usingObjects:(id)arg3;
- (void)didChangeValueForKey:(id)arg1;
- (void)disallowSafePerformSelector;
- (void)doesNotRecognizeSelector:(SEL)arg1;
- (unsigned int)duration;
- (void)finalize;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)fromMainThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)fromNotifySafeThreadPerformSelector:(SEL)arg1 withObject:(id)arg2;
- (void)fromNotifySafeThreadPostNotificationName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (void)handleFailoversForClassNamed:(id)arg1;
- (unsigned int)hash;
- (id)imageIdentifier;
- (id)imageIdentifier;
- (BOOL)implementsSelector:(SEL)arg1;
- (int)indexOfAccessibilityElement:(id)arg1;
- (int)indexOfAccessibilityElement:(id)arg1;
- (id)init;
- (BOOL)isAXAttributedString;
- (BOOL)isAccessibilityElement;
- (BOOL)isAccessibilityElement;
- (BOOL)isAccessibilityElementByDefault;
- (id)isAccessibilityUserDefinedElement;
- (id)isAccessibilityUserDefinedObscuresScreen;
- (id)isAccessibilityUserDefinedScrollAncestor;
- (id)isAccessibilityUserDefinedWindow;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFault;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isNSArray__;
- (BOOL)isNSData__;
- (BOOL)isNSDate__;
- (BOOL)isNSDictionary__;
- (BOOL)isNSNumber__;
- (BOOL)isNSOrderedSet__;
- (BOOL)isNSSet__;
- (BOOL)isNSString__;
- (BOOL)isNSTimeZone__;
- (BOOL)isNSValue__;
- (BOOL)isNull;
- (BOOL)isProxy;
- (id)mainThreadProxy;
- (BOOL)messageEntryView:(id)arg1 contentSizeChanged:(struct CGSize { float x1; float x2; })arg2 animate:(BOOL)arg3;
- (void)messageEntryViewSendButtonHit:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)mf_exclusiveLocks;
- (void)mf_lock;
- (id)mf_lockOrdering;
- (void)mf_lockWithPriority;
- (void)mf_performOnewaySelectorInMainThread:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)mf_performSelectorInMainThread:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)mf_strictLockOrdering;
- (BOOL)mf_tryLock;
- (BOOL)mf_tryLockWithPriority;
- (void)mf_unlock;
- (id)mutableArrayValueForKey:(id)arg1;
- (id)mutableArrayValueForKeyPath:(id)arg1;
- (id)mutableCopy;
- (id)mutableSetValueForKey:(id)arg1;
- (id)mutableSetValueForKeyPath:(id)arg1;
- (void*)observationInfo;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (int)occurrenceIndexFromIndexPath:(id)arg1;
- (BOOL)okToNotifyFromThisThread;
- (id)pep_afterDelay:(double)arg1;
- (id)pep_getInvocation:(id*)arg1;
- (id)pep_getNonRetainingInvocation:(id*)arg1;
- (id)pep_onDetachedThread;
- (id)pep_onMainThread;
- (id)pep_onMainThreadIfNecessary;
- (id)pep_onOperationQueue:(id)arg1 priority:(int)arg2;
- (id)pep_onOperationQueue:(id)arg1;
- (id)pep_onThread:(id)arg1 immediateForMatchingThread:(BOOL)arg2;
- (id)pep_onThread:(id)arg1;
- (void)performSelector:(SEL)arg1 object:(id)arg2 afterDelay:(double)arg3;
- (void)performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(BOOL)arg4 modes:(id)arg5;
- (void)performSelector:(SEL)arg1 onThread:(id)arg2 withObject:(id)arg3 waitUntilDone:(BOOL)arg4;
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 ignoreMenuTracking:(BOOL)arg4;
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3 inModes:(id)arg4;
- (void)performSelector:(SEL)arg1 withObject:(id)arg2 afterDelay:(double)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)performSelector:(SEL)arg1 withObject:(id)arg2;
- (id)performSelector:(SEL)arg1 withObjectsAsArray:(id)arg2;
- (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 count:(unsigned long)arg3 objects:(id)arg4;
- (double)performSelector:(SEL)arg1 withThreadKey:(id)arg2 waitTime:(double)arg3 cancelMask:(unsigned long)arg4 count:(unsigned long)arg5 objects:(id)arg6;
- (id)performSelector:(SEL)arg1;
- (void)performSelectorInBackground:(SEL)arg1 withObject:(id)arg2;
- (void)performSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(BOOL)arg3 modes:(id)arg4;
- (void)performSelectorOnMainThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(BOOL)arg3;
- (void)playSlideshowClicked:(id)arg1;
- (void)postNotificationWithDescription:(id)arg1;
- (void)postSecurityLevelChangeFrom:(int)arg1 to:(int)arg2;
- (void)registerForTimeMarkerNotificationsIfNecessary;
- (oneway void)release;
- (void)releaseOnMainThread;
- (void)reloadStrings;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (id)replacementObjectForArchiver:(id)arg1;
- (id)replacementObjectForCoder:(id)arg1;
- (id)replacementObjectForKeyedArchiver:(id)arg1;
- (id)responderChainProxy:(id)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)retain;
- (unsigned int)retainCount;
- (id)safeValueForKey:(id)arg1;
- (id)safeValueForKeyPath:(id)arg1;
- (int)securityLevel;
- (id)self;
- (void)setAccessibilityCenterPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setAccessibilityContainer:(id)arg1;
- (void)setAccessibilityContainer:(id)arg1;
- (void)setAccessibilityEscapeAction:(id)arg1;
- (void)setAccessibilityFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAccessibilityFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setAccessibilityLanguage:(id)arg1;
- (void)setAccessibilityLanguage:(id)arg1;
- (void)setAccessibilityLiteContent:(id)arg1;
- (void)setAccessibilitySize:(struct CGSize { float x1; float x2; })arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setAccessibilityTraits:(unsigned long long)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setCenterCoordinate:(struct { double x1; double x2; })arg1 animated:(BOOL)arg2;
- (void)setIsAccessibilityElement:(BOOL)arg1;
- (void)setIsAccessibilityElement:(BOOL)arg1;
- (void)setIsAccessibilityScrollAncestor:(BOOL)arg1;
- (void)setIsAccessibilityWindow:(BOOL)arg1;
- (void)setNilValueForKey:(id)arg1;
- (void)setObservationInfo:(void*)arg1;
- (void)setSecurityLevel:(int)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setValuesForKeysWithDictionary:(id)arg1;
- (void)smsComposeControllerAppeared:(id)arg1;
- (void)smsComposeControllerCancelled:(id)arg1;
- (void)smsComposeControllerDataInserted:(id)arg1;
- (void)smsComposeControllerSendStarted:(id)arg1;
- (void)stopVideoCapture;
- (Class)superclass;
- (id)threadDescription;
- (void)unregisterForTimeMarkerNotifications;
- (BOOL)validateValue:(id*)arg1 forKey:(id)arg2 error:(id*)arg3;
- (BOOL)validateValue:(id*)arg1 forKeyPath:(id)arg2 error:(id*)arg3;
- (id)valueForBlock:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3;
- (id)valueForKey:(id)arg1;
- (id)valueForKeyPath:(id)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3;
- (id)valueForKeyPath:(id)arg1 forThreadKey:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKeyPathOnMainThread:(id)arg1;
- (id)valueForSelector:(SEL)arg1 forThreadKey:(id)arg2 waitTime:(double)arg3 copyValue:(BOOL)arg4 withObjects:(id)arg5;
- (id)valueForUndefinedKey:(id)arg1;
- (id)webThreadMainThreadProxy;
- (id)webThreadProxy;
- (void)willChange:(unsigned int)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)willChangeValueForKey:(id)arg1 withSetMutation:(unsigned int)arg2 usingObjects:(id)arg3;
- (void)willChangeValueForKey:(id)arg1;
- (id)xmlStringWithBag:(id)arg1;
- (struct _NSZone { }*)zone;

@end
