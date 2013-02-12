/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSMutableDictionary;

@interface NSDateFormatter : NSFormatter {
    NSMutableDictionary *_attributes;
    unsigned int _counter;
    struct __CFDateFormatter { } *_formatter;
}

+ (id)dateFormatFromTemplate:(id)arg1 options:(unsigned int)arg2 locale:(id)arg3;
+ (unsigned int)defaultFormatterBehavior;
+ (void)initialize;
+ (id)localizedStringFromDate:(id)arg1 dateStyle:(unsigned int)arg2 timeStyle:(unsigned int)arg3;
+ (id)mf_formatDate:(id)arg1 shortStyle:(BOOL)arg2;
+ (void)setDefaultFormatterBehavior:(unsigned int)arg1;

- (id)AMSymbol;
- (id)PMSymbol;
- (id)_dateFormat;
- (void)_regenerateFormatter;
- (void)_reset;
- (void)_setDateFormat:(id)arg1;
- (void)_setIsLenient:(BOOL)arg1;
- (id)calendar;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateFormat;
- (id)dateFromString:(id)arg1;
- (unsigned int)dateStyle;
- (void)dealloc;
- (id)defaultDate;
- (BOOL)doesRelativeDateFormatting;
- (void)encodeWithCoder:(id)arg1;
- (id)eraSymbols;
- (void)finalize;
- (unsigned int)formatterBehavior;
- (BOOL)generatesCalendarDates;
- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout struct _NSRange { unsigned int x1; unsigned int x2; }*)arg3 error:(out id*)arg4;
- (id)gregorianStartDate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isLenient;
- (id)locale;
- (id)longEraSymbols;
- (id)monthSymbols;
- (id)quarterSymbols;
- (void)setAMSymbol:(id)arg1;
- (void)setCalendar:(id)arg1;
- (void)setDateFormat:(id)arg1;
- (void)setDateStyle:(unsigned int)arg1;
- (void)setDefaultDate:(id)arg1;
- (void)setDoesRelativeDateFormatting:(BOOL)arg1;
- (void)setEraSymbols:(id)arg1;
- (void)setFormatterBehavior:(unsigned int)arg1;
- (void)setGeneratesCalendarDates:(BOOL)arg1;
- (void)setGregorianStartDate:(id)arg1;
- (void)setLenient:(BOOL)arg1;
- (void)setLocale:(id)arg1;
- (void)setLongEraSymbols:(id)arg1;
- (void)setMonthSymbols:(id)arg1;
- (void)setPMSymbol:(id)arg1;
- (void)setQuarterSymbols:(id)arg1;
- (void)setShortMonthSymbols:(id)arg1;
- (void)setShortQuarterSymbols:(id)arg1;
- (void)setShortStandaloneMonthSymbols:(id)arg1;
- (void)setShortStandaloneQuarterSymbols:(id)arg1;
- (void)setShortStandaloneWeekdaySymbols:(id)arg1;
- (void)setShortWeekdaySymbols:(id)arg1;
- (void)setStandaloneMonthSymbols:(id)arg1;
- (void)setStandaloneQuarterSymbols:(id)arg1;
- (void)setStandaloneWeekdaySymbols:(id)arg1;
- (void)setTimeStyle:(unsigned int)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTwoDigitStartDate:(id)arg1;
- (void)setVeryShortMonthSymbols:(id)arg1;
- (void)setVeryShortStandaloneMonthSymbols:(id)arg1;
- (void)setVeryShortStandaloneWeekdaySymbols:(id)arg1;
- (void)setVeryShortWeekdaySymbols:(id)arg1;
- (void)setWeekdaySymbols:(id)arg1;
- (id)shortMonthSymbols;
- (id)shortQuarterSymbols;
- (id)shortStandaloneMonthSymbols;
- (id)shortStandaloneQuarterSymbols;
- (id)shortStandaloneWeekdaySymbols;
- (id)shortWeekdaySymbols;
- (id)standaloneMonthSymbols;
- (id)standaloneQuarterSymbols;
- (id)standaloneWeekdaySymbols;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromDate:(id)arg1;
- (unsigned int)timeStyle;
- (id)timeZone;
- (id)twoDigitStartDate;
- (id)veryShortMonthSymbols;
- (id)veryShortStandaloneMonthSymbols;
- (id)veryShortStandaloneWeekdaySymbols;
- (id)veryShortWeekdaySymbols;
- (id)weekdaySymbols;

@end
