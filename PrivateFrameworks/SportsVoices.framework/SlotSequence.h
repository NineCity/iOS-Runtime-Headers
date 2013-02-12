/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsVoices.framework/SportsVoices
 */

@class NSMutableArray;

@interface SlotSequence : Slot {
    NSMutableArray *_slots;
}

@property(retain) NSMutableArray * slots;

+ (id)emptySlotSequence;
+ (id)slotSequenceWithArray:(id)arg1;

- (int)count;
- (void)dealloc;
- (id)description;
- (BOOL)empty;
- (id)first;
- (id)indicesOfOccurrencesInTarget:(id)arg1;
- (id)initFromPlist:(id)arg1;
- (id)initWithArray:(id)arg1;
- (BOOL)matches:(id)arg1;
- (id)occurrenceOfSequence:(id)arg1 atIndex:(int)arg2;
- (id)overlayedOn:(id)arg1;
- (id)portionFollowingOccurrenceOfSequence:(id)arg1 atIndex:(int)arg2;
- (id)portionPrecedingOccurrenceOfSequence:(id)arg1 atIndex:(int)arg2;
- (id)rest;
- (id)reversed;
- (void)setSlots:(id)arg1;
- (id)slotSubsequenceFromIndex:(int)arg1;
- (id)slots;
- (id)subsequenceFromIndex:(int)arg1;

@end
