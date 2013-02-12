/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <EKPadAllDayViewDataSource>, <EKPadAllDayViewDelegate>, CalendarModel, EKDayOccurrenceView, EKPadAllDayViewContents, NSArray, NSMutableArray, UIScrollView;

@interface EKPadAllDayView : UIView <EKPadAllDayViewContentsDelegate, UIScrollViewDelegate> {
    struct { 
        int year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    unsigned int _drawsLeftBorder : 1;
    unsigned int _drawsAllBorders : 1;
    unsigned int _allowsOccurrenceSelection : 1;
    unsigned int _scrollbarShowsInside : 1;
    unsigned int _scrollingToOccurrence : 1;
    unsigned int _dimsNonSelectedItems : 1;
    } _contentFrame;
    EKPadAllDayViewContents *_contentView;
    <EKPadAllDayViewDataSource> *_dataSource;
    NSMutableArray *_dayDates;
    NSMutableArray *_dayNames;
    unsigned int _daysToDisplay;
    <EKPadAllDayViewDelegate> *_delegate;
    } _displayedDate;
    double _endDate;
    NSMutableArray *_layedOutRows;
    float _minimumHeight;
    CalendarModel *_model;
    float _occurrenceHRightInset;
    int _outlineStyle;
    UIScrollView *_scroller;
    unsigned int _selectedEventIndex;
    EKDayOccurrenceView *_selectedOccurrenceView;
    int _shouldAbbriviateDayNames;
    double _startDate;
    float _verticalTopMargin;
}

@property <EKPadAllDayViewDataSource> * dataSource;
@property <EKPadAllDayViewDelegate> * delegate;
@property BOOL dimsNonSelectedItems;
@property(readonly) NSArray * occurrenceViews;

+ (void)_initializeSafeCategory;

- (unsigned int)_calendarOrderForCalendar:(id)arg1;
- (id)_calendarOrderSortDescriptor;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })_dateForPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForOccurrenceBlock:(id)arg1 index:(unsigned int)arg2;
- (void)_localeChanged;
- (id)_numberOfDaysSortDescriptor;
- (float)_scrollbarOffset;
- (BOOL)_shouldAbbreviateDateTextLabels;
- (void)_significantTimeChanged;
- (void)_updateDayLabels;
- (float)bottomInset;
- (void)buildDayLabel;
- (id)dataSource;
- (void)dayOccurrenceViewClicked:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)dayOccurrenceViewDragExited:(id)arg1;
- (void)dayOccurrenceViewStartTouch:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (void)dealloc;
- (id)delegate;
- (BOOL)dimsNonSelectedItems;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })displayDate;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)emptySpaceClickForCalendarWeekDayEventContent:(id)arg1 atPoint:(struct CGPoint { float x1; float x2; })arg2;
- (unsigned int)eventIndexForView:(id)arg1;
- (id)getSortedBlocksFromOccurrenceBlocks:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 numberOfDaysToDisplay:(unsigned int)arg2 opaque:(BOOL)arg3 backgroundColor:(id)arg4 scrollbarShowsInside:(BOOL)arg5;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)makeAllDayLabel;
- (id)occurrenceViewForOccurrence:(id)arg1;
- (id)occurrenceViews;
- (id)occurrenceVisibleRect:(id)arg1;
- (void)reloadData;
- (void)scrollToEventIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)scrollToOccurrence:(id)arg1 animating:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)selectItemWithEventIndex:(unsigned int)arg1;
- (unsigned int)selectedEventIndex;
- (id)selectedOccurrenceView;
- (void)setAllowsOccurrenceSelection:(BOOL)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDimsNonSelectedItems:(BOOL)arg1;
- (void)setDisplayedDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1;
- (void)setDrawsLeftBorder:(BOOL)arg1;
- (void)setMinimumHeight:(float)arg1;
- (void)setOccurrenceHRightInset:(float)arg1;
- (void)setOutlineStyle:(int)arg1;
- (void)setViewsDimmed:(BOOL)arg1 forEventIndex:(unsigned int)arg2;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)updateDayLabels;
- (id)viewForEventIndex:(unsigned int)arg1;

@end
