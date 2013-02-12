/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, SUComposeTextFieldConfiguration, UITextField;

@interface SUComposeTextField : UIView <UITextFieldDelegate> {
    struct CGSize { 
        float width; 
        float height; 
    SUComposeTextFieldConfiguration *_configuration;
    int _currentTextLength;
    id _delegate;
    } _labelSize;
    int _style;
    UITextField *_textField;
}

@property(readonly) int composeReviewStyle;
@property(readonly) SUComposeTextFieldConfiguration * configuration;
@property id delegate;
@property(retain) NSString * text;
@property(readonly) UITextField * textField;
@property(getter=isValid,readonly) BOOL valid;

+ (void)_initializeSafeCategory;
+ (id)labelColorForStyle:(int)arg1;
+ (id)labelFontForStyle:(int)arg1;

- (void)_textChanged:(id)arg1;
- (struct CGPoint { float x1; float x2; })_textFieldOrigin;
- (int)composeReviewStyle;
- (id)configuration;
- (void)dealloc;
- (id)delegate;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithConfiguration:(id)arg1 style:(int)arg2;
- (BOOL)isValid;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (BOOL)textField:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (id)textField;

@end
