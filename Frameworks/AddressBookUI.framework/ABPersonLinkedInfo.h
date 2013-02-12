/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSString;

@interface ABPersonLinkedInfo : NSObject {
    NSString *_name;
    void *_person;
    NSString *_type;
    BOOL _unified;
}

@property(retain) NSString * name;
@property void* person;
@property(retain) NSString * type;
@property(getter=isUnified) BOOL unified;

+ (id)linkedInfoForPeople:(id)arg1 peopleForUnifiedCard:(id)arg2 accountsManager:(id)arg3;

- (void)dealloc;
- (BOOL)isUnified;
- (id)name;
- (void*)person;
- (void)setName:(id)arg1;
- (void)setPerson:(void*)arg1;
- (void)setType:(id)arg1;
- (void)setUnified:(BOOL)arg1;
- (id)type;

@end
