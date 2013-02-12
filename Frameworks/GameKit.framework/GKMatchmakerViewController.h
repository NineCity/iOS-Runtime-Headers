/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class <GKMatchmakerViewControllerDelegate>, GKMatchRequest, GKMatchmakerViewControllerPrivate;

@interface GKMatchmakerViewController : UINavigationController {
    GKMatchmakerViewControllerPrivate *_privateViewController;
}

@property(getter=isHosted) BOOL hosted;
@property(retain,readonly) GKMatchRequest * matchRequest;
@property <GKMatchmakerViewControllerDelegate> * matchmakerDelegate;
@property(retain) GKMatchmakerViewControllerPrivate * privateViewController;

- (void)dealloc;
- (id)initWithInvite:(id)arg1;
- (id)initWithMatchRequest:(id)arg1;
- (id)initWithPrivateViewController:(id)arg1;
- (BOOL)isHosted;
- (id)matchRequest;
- (id)matchmakerDelegate;
- (id)privateViewController;
- (void)setHosted:(BOOL)arg1;
- (void)setHostedPlayerReady:(id)arg1;
- (void)setMatchmakerDelegate:(id)arg1;
- (void)setPrivateViewController:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
