/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray;

@interface ABModelRecord : NSObject {
    int _highlightIndex;
    BOOL _isGroup;
    NSArray *_namePieces;
    void *_record;
}

- (void)dealloc;
- (long)highlightIndex;
- (id)initWithRecord:(void*)arg1 highlightIndex:(long)arg2 group:(BOOL)arg3 namePieces:(id)arg4;
- (BOOL)isGroup;
- (id)namePieces;
- (void*)record;

@end
