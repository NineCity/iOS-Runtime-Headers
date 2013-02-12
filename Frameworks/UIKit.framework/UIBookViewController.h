/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UIBookViewControllerDelegate>, UIView, UIViewController;

@interface UIBookViewController : UIViewController {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    int _animatedPageTurns;
    } _contentInset;
    UIView *_contentView;
    <UIBookViewControllerDelegate> *_delegate;
    UIViewController *_evenPage;
    UIViewController *_newEvenPage;
    UIViewController *_newOddPage;
    UIViewController *_oddPage;
    int _turnCount;
    double _turnDuration;
    float _turnMargin;
}

@property struct UIEdgeInsets { float top; float left; float bottom; float right; } contentInset;
@property <UIBookViewControllerDelegate> * delegate;
@property(retain) UIViewController * evenPage;
@property(retain) UIViewController * oddPage;
@property double turnDuration;
@property float turnMargin;

- (void)_positionPage:(id)arg1 isLeft:(BOOL)arg2;
- (void)_setNewPage:(id)arg1 isLeft:(BOOL)arg2;
- (void)_setupContentViewIfNecessary;
- (void)_setupCurlFilters;
- (void)_startCurlAnimation;
- (void)_turnAllPagesNonAnimated;
- (void)_turnSinglePageAnimated;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })contentInset;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)evenPage;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)oddPage;
- (void)setContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setEvenPage:(id)arg1;
- (void)setOddPage:(id)arg1;
- (void)setTurnDuration:(double)arg1;
- (void)setTurnMargin:(float)arg1;
- (double)turnDuration;
- (float)turnMargin;
- (void)turnPages:(int)arg1 animated:(BOOL)arg2;
- (id)view;

@end
