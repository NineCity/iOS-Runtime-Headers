/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */



@interface ICSDateValue : NSObject <NSCoding>
{
    NSInteger _year;
    NSInteger _month;
    NSInteger _day;
}

@property(readonly) NSInteger day; /* unknown property attribute: V_day */
@property(readonly) NSInteger month; /* unknown property attribute: V_month */
@property(readonly) NSInteger year; /* unknown property attribute: V_year */

+ (id)dateFromICSString:(id)arg1;
+ (id)dateFromICSUTF8String:(const char *)arg1;

- (id)initWithYear:(NSInteger)arg1 month:(NSInteger)arg2 day:(NSInteger)arg3;
- (id)components;
- (NSInteger)compare:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (NSInteger)day;
- (NSInteger)month;
- (NSInteger)year;
- (void)_ICSStringWithOptions:(NSUInteger)arg1 appendingToString:(id)arg2;
- (NSInteger)dateType;

@end