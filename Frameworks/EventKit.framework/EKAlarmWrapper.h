/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAlarmWrapper : NSObject {
    struct CalAlarmOccurrence { } *_alarm;
}

+ (id)wrapperWithAlarmOccurrence:(struct CalAlarmOccurrence { }*)arg1;

- (void)dealloc;
- (id)description;
- (double)fireDate;
- (unsigned int)hash;
- (id)initWithAlarmOccurrence:(struct CalAlarmOccurrence { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)occurrence;

@end
