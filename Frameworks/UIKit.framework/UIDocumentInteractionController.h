/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIDocumentInteractionControllerDelegate>, NSArray, NSString, NSURL, UIActionSheet, UIBarButtonItem, UIPopoverController, UIView, UIViewController, _UIPreviewItemProxy;

@interface UIDocumentInteractionController : NSObject <UIActionSheetDelegate> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGSize { 
        float width; 
        float height; 
    struct { 
        unsigned int delegateViewControllerForPreview : 1; 
        unsigned int delegateRectForPreview : 1; 
        unsigned int delegateViewForPreview : 1; 
        unsigned int transitionImageForPreview : 1; 
        unsigned int delegateWillBeginPreview : 1; 
        unsigned int delegateDidEndPreviewPreview : 1; 
        unsigned int delegateWillPresentOptionsMenu : 1; 
        unsigned int delegateDidDismissOptionsMenu : 1; 
        unsigned int delegateWillPresentOpenInMenu : 1; 
        unsigned int delegateDidDismissOpenInMenu : 1; 
        unsigned int delegateWillBeginSendingToApplication : 1; 
        unsigned int delegateDidEndSendingToApplication : 1; 
        unsigned int delegateCanPerformAction : 1; 
        unsigned int delegatePerformAction : 1; 
        unsigned int delegateUnzipURL : 1; 
        unsigned int delegateShouldRemoveUnzippedDocument : 1; 
        unsigned int delegateDidUnzipDocumentAtURL : 1; 
    NSString *_UTI;
    int _alternateOpenButtonIndex;
    id _annotation;
    id _applicationToOpen;
    NSArray *_availableApplications;
    int _copyButtonIndex;
    int _defaultOpenButtonIndex;
    <UIDocumentInteractionControllerDelegate> *_delegate;
    } _documentInteractionControllerFlags;
    NSArray *_gestureRecognizers;
    NSArray *_icons;
    UIActionSheet *_openInMenu;
    } _openInTableViewSize;
    UIViewController *_openInViewController;
    UIActionSheet *_optionsMenu;
    UIPopoverController *_popoverController;
    UIBarButtonItem *_presentItem;
    } _presentRect;
    UIView *_presentView;
    UIViewController *_presentingViewController;
    id _previewController;
    id _previewItemProxy;
    int _printButtonIndex;
    int _quickLookButtonIndex;
    BOOL _shouldUnzipDocument;
    NSString *_uniqueIdentifier;
    NSURL *_unzippedDocumentURL;
}

@property(retain) NSURL * URL;
@property(copy) NSString * UTI;
@property(retain) id annotation;
@property <UIDocumentInteractionControllerDelegate> * delegate;
@property(readonly) NSArray * gestureRecognizers;
@property(readonly) NSArray * icons;
@property(copy) NSString * name;
@property(readonly) UIPopoverController * popoverController;
@property(readonly) id previewController;
@property(readonly) _UIPreviewItemProxy * previewItemProxy;
@property BOOL shouldUnzipDocument;
@property(retain) NSString * uniqueIdentifier;

+ (void)initialize;
+ (id)interactionControllerWithURL:(id)arg1;

- (id)URL;
- (id)UTI;
- (id)_applicationToOpen;
- (id)_applications:(BOOL)arg1;
- (BOOL)_canUnzipDocument;
- (void)_cleanUpUnzippedDocument;
- (BOOL)_delegateExistsAndImplementsRequiredMethods:(id*)arg1;
- (void)_finishedCopyingResource;
- (void)_interfaceOrientationWillChange:(id)arg1;
- (void)_invalidate;
- (BOOL)_isFilenameValidForUnzipping:(id)arg1;
- (BOOL)_isValidURL:(id)arg1;
- (void)_openDocumentWithApplication:(id)arg1;
- (void)_openDocumentWithCurrentApplication;
- (void)_presentOpenIn:(id)arg1;
- (void)_presentOpenInForPhoneInView:(id)arg1;
- (void)_presentOptionsMenu:(id)arg1;
- (void)_presentPreview:(id)arg1;
- (void)_setApplicationToOpen:(id)arg1;
- (void)_setUnzippedDocumentURL:(id)arg1;
- (BOOL)_setupForOpenInMenu;
- (BOOL)_setupForOptionsMenu;
- (BOOL)_setupPreviewController;
- (void)_unzipDocument;
- (void)_unzipDocumentToDirectory:(id)arg1;
- (id)_unzippedDocumentURL;
- (void)_zipOperationCompleted;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheetCancel:(id)arg1;
- (id)annotation;
- (unsigned int)applicationCount;
- (void)dealloc;
- (id)delegate;
- (void)dismissMenuAnimated:(BOOL)arg1;
- (void)dismissPreviewAnimated:(BOOL)arg1;
- (id)gestureRecognizers;
- (id)icons;
- (id)initWithURL:(id)arg1;
- (id)name;
- (int)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)openDocumentWithDefaultApplication;
- (void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2;
- (id)popoverController;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (BOOL)presentOpenInMenuFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (BOOL)presentOpenInMenuFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (BOOL)presentOptionsMenuFromBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (BOOL)presentOptionsMenuFromRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inView:(id)arg2 animated:(BOOL)arg3;
- (BOOL)presentPreviewAnimated:(BOOL)arg1;
- (id)presentingNavigationController;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3;
- (id)previewController:(id)arg1 previewItemAtIndex:(int)arg2;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3;
- (id)previewController;
- (void)previewControllerDidDismiss:(id)arg1;
- (id)previewItemProxy;
- (void)setAnnotation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPreviewURLOverride:(id)arg1;
- (void)setShouldUnzipDocument:(BOOL)arg1;
- (void)setURL:(id)arg1;
- (void)setUTI:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (BOOL)shouldUnzipDocument;
- (id)uniqueIdentifier;
- (void)updatePopoverContentSizeForPresentationOfTableViewHack;

@end
