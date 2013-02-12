/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class ISPropertyListProvider;

@interface SUStorePageDataProvider : ISDataProvider {
    int _outputType;
    ISPropertyListProvider *_propertyListDataProvider;
}

@property int outputType;
@property(copy) ISPropertyListProvider * propertyListDataProvider;

- (void)dealloc;
- (int)outputType;
- (BOOL)parseData:(id)arg1 returningError:(id*)arg2;
- (id)propertyListDataProvider;
- (void)setOutputType:(int)arg1;
- (void)setPropertyListDataProvider:(id)arg1;

@end
