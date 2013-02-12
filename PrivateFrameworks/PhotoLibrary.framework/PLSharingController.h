/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class MFMailComposeViewController, NSArray, NSMutableArray, NSMutableDictionary, UIView, UIViewController;

@interface PLSharingController : NSObject <MFMailComposeViewControllerDelegate> {
    unsigned int _didDisplayComposeSheet : 1;
    unsigned int _didSlideImageDown : 1;
    unsigned int _isAnimatingSendToEmail : 1;
    unsigned int _delegateWillSetComposeFrame : 1;
    unsigned int _delegateDidFinishMail : 1;
    unsigned int _delegateViewForPhoto : 1;
    UIView *_animationSuperview;
    NSArray *_attachmentIdentifiers;
    MFMailComposeViewController *_composeController;
    BOOL _composeSheetIsReady;
    UIViewController *_parentController;
    SEL _photoAction;
    NSArray *_photos;
    UIView *_referenceView;
    int _sendingEmailCount;
    NSMutableDictionary *_trimmedFilePaths;
    NSMutableArray *_views;
}

+ (BOOL)canSendEmail;
+ (void)copyItemsToPasteboard:(id)arg1;

- (id)_addAudio:(id)arg1 toCompositionContext:(id)arg2;
- (id)_addPhoto:(id)arg1 toCompositionContext:(id)arg2 index:(unsigned int)arg3;
- (id)_addVideo:(id)arg1 toCompositionContext:(id)arg2;
- (void)_animateSendToEmail;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_animationDestinationRectForImageSize:(struct CGSize { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_animationDestinationRectForView:(id)arg1;
- (void)_autosaveMailComposition;
- (void)_commonDidFinishEmailAnimation:(BOOL)arg1;
- (void)_composeSheetDidDisplay;
- (void)_discardTrimmedFiles;
- (void)_dismissMailComposeController;
- (void)_displayComposeSheet;
- (void)_finishedSlidingImageUp:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_finishedSlidingImagesDown:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_performSendViaEmail;
- (void)_reallySendViaEmail:(id)arg1 animated:(BOOL)arg2;
- (void)_setComposeParentViewController:(id)arg1;
- (void)_showMailComposeSheetForAutosavedMessage;
- (void)_slideImagesOverMessage;
- (void)composeMailForPhotos:(id)arg1;
- (void)dealloc;
- (void)emailPhotos:(id)arg1;
- (id)initWithController:(id)arg1 photos:(id)arg2 views:(id)arg3;
- (BOOL)isComposeSheetReady;
- (void)mailComposeController:(id)arg1 bodyFinishedLoadingWithResult:(BOOL)arg2 error:(id)arg3;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3;
- (void)setTrimmedPath:(id)arg1 forVideo:(id)arg2;
- (id)views;

@end
