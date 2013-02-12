/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class <MFAddressAtomDelegate>, MFSlicedImageView, NSString, UITextLabel;

@interface MFAddressAtom : UIControl {
    struct { 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } left; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } middle; 
        struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } right; 
    unsigned int _addressIsPhoneNumber : 1;
    unsigned int _needsToSendMouseUpEvents : 1;
    unsigned int _dragging : 1;
    unsigned int _updatedABPerson : 1;
    UITextLabel *_addressLabel;
    } _atomImageSlices;
    MFSlicedImageView *_center;
    <MFAddressAtomDelegate> *_delegate;
    NSString *_displayString;
    NSString *_fullAddress;
    int _identifier;
    MFSlicedImageView *_leftCap;
    unsigned int _maxWidth;
    void *_person;
    MFSlicedImageView *_rightCap;
}

+ (void)_initializeSafeCategory;
+ (void)initialize;

- (void*)ABPerson;
- (int)ABPropertyType;
- (void)_addressBookRecordDidChange;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (void)_registerForNotifications;
- (void)_unregisterForNotifications;
- (void)_updateABPerson;
- (void)_updateDisplayStringIncludingABPerson:(BOOL)arg1;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)dealloc;
- (id)displayString;
- (int)identifier;
- (id)initWithAddress:(id)arg1 isPhoneNumber:(BOOL)arg2 maxWidth:(float)arg3 useDisplayString:(BOOL)arg4;
- (BOOL)isAccessibilityElement;
- (void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setMaxWidth:(unsigned int)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)sizeToFit;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)unmodifiedAddressString;

@end
