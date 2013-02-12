/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSDictionary, NSString;

@interface ABITunesRingtone : NSObject {
    NSString *_identifier;
    NSString *_name;
    NSString *_path;
    NSDictionary *_playbackProperties;
    BOOL _purchased;
}

@property(retain) NSString * identifier;
@property(retain) NSString * name;
@property(retain) NSString * path;
@property(retain) NSDictionary * playbackProperties;
@property(getter=isPurchased) BOOL purchased;

- (void)dealloc;
- (id)identifier;
- (BOOL)isPurchased;
- (BOOL)loadFromPropertyList:(id)arg1;
- (id)name;
- (id)path;
- (id)playbackProperties;
- (void)setIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setPlaybackProperties:(id)arg1;
- (void)setPurchased:(BOOL)arg1;

@end
