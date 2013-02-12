/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class CoreDAVBulkRequestsItem, NSDictionary;

@interface CoreDAVBulkRequestsSetItem : CoreDAVItem {
    CoreDAVBulkRequestsItem *_crudItem;
    CoreDAVBulkRequestsItem *_simpleItem;
}

@property(retain) CoreDAVBulkRequestsItem * crudItem;
@property(readonly) NSDictionary * dictRepresentation;
@property(retain) CoreDAVBulkRequestsItem * simpleItem;

- (id)copyParseRules;
- (id)crudItem;
- (void)dealloc;
- (id)description;
- (id)dictRepresentation;
- (id)init;
- (void)setCrudItem:(id)arg1;
- (void)setSimpleItem:(id)arg1;
- (id)simpleItem;

@end
