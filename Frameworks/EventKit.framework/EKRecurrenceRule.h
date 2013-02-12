/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class EKRecurrenceEnd, NSArray, NSDate, NSString;

@interface EKRecurrenceRule : NSObject {
    NSDate *_cachedEndDate;
    NSArray *_daysOfTheMonth;
    NSArray *_daysOfTheWeek;
    NSArray *_daysOfTheYear;
    unsigned int _dirtyFlags;
    int _firstDayOfTheWeek;
    int _frequency;
    int _interval;
    NSArray *_monthsOfTheYear;
    id _owner;
    EKRecurrenceEnd *_recurrenceEnd;
    NSArray *_setPositions;
    NSArray *_weeksOfTheYear;
}

@property(readonly) NSString * calendarIdentifier;
@property(readonly) NSArray * daysOfTheMonth;
@property(readonly) NSArray * daysOfTheWeek;
@property(readonly) NSArray * daysOfTheYear;
@property(readonly) int firstDayOfTheWeek;
@property int frequency;
@property int interval;
@property(readonly) NSArray * monthsOfTheYear;
@property(copy) EKRecurrenceEnd * recurrenceEnd;
@property(readonly) NSArray * setPositions;
@property(readonly) NSArray * weeksOfTheYear;

+ (id)iCalendarValueFromDate:(id)arg1 isDateOnly:(BOOL)arg2 isFloating:(BOOL)arg3;
+ (id)iCalendarValueFromDayOfTheWeek:(unsigned int)arg1;
+ (id)iCalendarValueFromRecurrenceType:(int)arg1;
+ (id)recurrenceRuleWithType:(int)arg1 interval:(unsigned int)arg2 end:(id)arg3;

- (id)cachedEndDate;
- (id)calendarIdentifier;
- (id)daysOfTheMonth;
- (id)daysOfTheWeek;
- (id)daysOfTheYear;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)firstDayOfTheWeek;
- (int)frequency;
- (struct { int x1; int x2; int x3; int x4; int x5; double x6; })gregorianUnits;
- (unsigned int)hash;
- (id)init;
- (id)initRecurrenceWithFrequency:(int)arg1 interval:(int)arg2 daysOfTheWeek:(id)arg3 daysOfTheMonth:(id)arg4 monthsOfTheYear:(id)arg5 weeksOfTheYear:(id)arg6 daysOfTheYear:(id)arg7 setPositions:(id)arg8 end:(id)arg9;
- (id)initRecurrenceWithFrequency:(int)arg1 interval:(unsigned int)arg2 end:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecurrenceRef:(void*)arg1;
- (int)interval;
- (BOOL)isDirty;
- (BOOL)isEqual:(id)arg1;
- (id)monthsOfTheYear;
- (id)owner;
- (id)recurrenceEnd;
- (void)setCachedEndDate:(id)arg1;
- (void)setFrequency:(int)arg1;
- (void)setInterval:(int)arg1;
- (void)setOwner:(id)arg1;
- (id)setPositions;
- (void)setRecurrenceEnd:(id)arg1;
- (BOOL)shouldPinMonthDays;
- (id)stringValueAsDateOnly:(BOOL)arg1 isFloating:(BOOL)arg2;
- (void)updateRecurrenceRef:(void*)arg1 ignoreDirty:(BOOL)arg2;
- (id)weeksOfTheYear;

@end
