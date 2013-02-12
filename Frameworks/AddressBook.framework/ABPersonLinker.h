/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@class NSMutableDictionary;

@interface ABPersonLinker : NSObject {
    void *_addressBook;
    NSMutableDictionary *_peopleByFirstName;
    NSMutableDictionary *_peopleByLastName;
    NSMutableDictionary *_peopleByOrganization;
}

+ (BOOL)isLinkDataValidForAddressBook:(void*)arg1;
+ (void)log:(id)arg1;
+ (BOOL)shouldLog;
+ (void)startAutoLinkingNewPeopleInAddressBook:(void*)arg1 inProcess:(BOOL)arg2;

- (void)addPerson:(void*)arg1 toDictionary:(id)arg2 withProperty:(int)arg3;
- (id)copyArrayOfAllPeopleWithROWIDGreatThan:(int)arg1 withLimit:(int)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithAddressBook:(void*)arg1;
- (void)linkNewlyAddedPerson:(void*)arg1;
- (void)linkRecentlyAddedPeople;
- (BOOL)linkRecentlyAddedPeopleWithLimit:(int)arg1;
- (void)makeInitialLinks;
- (void)makeInitialLinksCountingOuterIterations:(int*)arg1;
- (void)makeLinksForAddedPeople:(id)arg1 inInitialLinking:(BOOL)arg2 countingOuterIterations:(int*)arg3;
- (id)otherPeopleInArray:(id)arg1 matchingPerson:(void*)arg2;
- (id)otherPeopleInDatabaseMatchingPerson:(void*)arg1 notIncludingPeople:(id)arg2;
- (void)presortPeople:(id)arg1;
- (void)removeAllLinks;
- (BOOL)shouldLinkPerson:(void*)arg1 toPeopleInDatabase:(id)arg2 andNewlyAddedPeople:(id)arg3 inInitialLinking:(BOOL)arg4;
- (id)suggestedPeopleToLinkWithPerson:(void*)arg1 isInitialLinking:(BOOL)arg2;

@end
