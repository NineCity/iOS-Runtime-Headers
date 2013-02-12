/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@class NSMutableArray, NSURLCredential, UIAlertView;

@interface WebUIAuthenticationManager : NSObject {
    NSMutableArray *_authenticationChallenges;
    UIAlertView *_authenticationView;
    NSURLCredential *_credentials;
    id _delegate;
    BOOL _isShowingAuthenticationPanel;
}

- (void)addAuthenticationChallenge:(id)arg1 displayPanel:(BOOL)arg2;
- (void)addAuthenticationChallenge:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (id)authenticationChallenge;
- (void)cancelAuthentication;
- (void)dealloc;
- (void)removeAuthenticationChallenge:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShowingAuthentication:(BOOL)arg1;
- (void)sheetReturnKeyPressed:(id)arg1;

@end
