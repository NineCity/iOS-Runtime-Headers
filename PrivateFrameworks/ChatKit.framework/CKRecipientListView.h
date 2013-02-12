/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKAtomListView, UIImageView, UIScrollView;

@interface CKRecipientListView : UIView <CKOverlayViewProtocol> {
    struct CGSize { 
        float width; 
        float height; 
    } _contentSize;
    id _delegate;
    UIScrollView *_recipientScrollView;
    UIImageView *_recipientSeparatorShadow;
    CKAtomListView *_toField;
}

@property(readonly) struct CGSize { float width; float height; } contentSize;
@property id delegate;

- (void)_adjustContentSize;
- (void)_clearToField;
- (void)_setupToFieldWithRecipients:(id)arg1;
- (void)addressAtomClicked:(id)arg1;
- (void)atomListView:(id)arg1 sizeDidChange:(struct CGSize { float x1; float x2; })arg2;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)dealloc;
- (id)delegate;
- (float)heightWithoutSeparator;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toFieldRecipients:(id)arg2 delegate:(id)arg3;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(BOOL)arg1 animate:(BOOL)arg2;

@end
