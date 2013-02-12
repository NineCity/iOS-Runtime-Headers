/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@interface WebPDFView : WAKView <WebPDFDocumentView, WebPDFDocumentRepresentation> {
    struct CGRect { struct CGPoint { 
            float x; 
            float y; 
        } x1; struct CGSize { 
            float width; 
            float height; 
    struct CGPDFDocument { } *_PDFDocument;
        } x2; } *_pageRects;
    BOOL dataSourceHasBeenSet;
}

+ (void)_initializeSafeCategory;
+ (struct CGColor { }*)backgroundColor;
+ (struct CGColor { }*)shadowColor;
+ (id)supportedMIMETypes;

- (id)_accessibilityPages;
- (void)_checkPDFTitle;
- (void)_computePageRects;
- (id)_pagesInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)accessibilityContainer;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (id)accessibilityHitTest:(struct CGPoint { float x1; float x2; })arg1;
- (id)accessibilityRootElement;
- (BOOL)canProvideDocumentSource;
- (void)dataSourceUpdated:(id)arg1;
- (void)dealloc;
- (struct CGPDFDocument { }*)doc;
- (id)documentSource;
- (void)drawPage:(struct CGPDFPage { }*)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)finishedLoadingWithDataSource:(id)arg1;
- (BOOL)hasSpaces:(struct CGPDFTextString { }*)arg1;
- (int)indexOfAccessibilityElement:(id)arg1;
- (void)layout;
- (unsigned int)pageNumberForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)receivedData:(id)arg1 withDataSource:(id)arg2;
- (void)receivedError:(id)arg1 withDataSource:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForPageNumber:(unsigned int)arg1;
- (void)setDataSource:(id)arg1;
- (void)setNeedsLayout:(BOOL)arg1;
- (id)title;
- (unsigned int)totalPages;
- (void)viewDidMoveToHostWindow;
- (void)viewWillMoveToHostWindow:(id)arg1;

@end
