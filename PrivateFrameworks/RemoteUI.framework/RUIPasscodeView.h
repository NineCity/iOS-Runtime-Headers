/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class RUIObjectModel, RUIPage, RUIPasscodeField, UILabel, UIView;

@interface RUIPasscodeView : RUIElement <RUITableFooterDelegate, RUIPasscodeFieldDelegate> {
    UIView *_footer;
    UILabel *_label;
    RUIObjectModel *_objectModel;
    RUIPage *_page;
    RUIPasscodeField *_passcodeField;
    UIView *_view;
}

@property RUIObjectModel * objectModel;
@property RUIPage * page;
@property(readonly) RUIPasscodeField * passcodeField;

- (void).cxx_destruct;
- (void)footerView:(id)arg1 activatedLinkWithURL:(id)arg2;
- (id)objectModel;
- (id)page;
- (void)passcodeField:(id)arg1 enteredPasscode:(id)arg2;
- (id)passcodeField;
- (id)passcodeView;
- (void)populatePostbackDictionary:(id)arg1;
- (void)setObjectModel:(id)arg1;
- (void)setPage:(id)arg1;
- (void)submitPIN;
- (void)viewDidLayout;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end