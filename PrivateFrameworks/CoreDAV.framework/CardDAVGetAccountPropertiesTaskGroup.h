/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSSet;

@interface CardDAVGetAccountPropertiesTaskGroup : CoreDAVGetAccountPropertiesTaskGroup {
    NSSet *_addressBookHomes;
    NSSet *_directoryGatewayURLs;
}

@property(readonly) NSSet * addressBookHomes;
@property(readonly) NSSet * directoryGatewayURLs;

- (id)_copyAccountPropertiesPropFindElements;
- (void)_setPropertiesFromParsedResponses:(id)arg1;
- (id)addressBookHomes;
- (void)dealloc;
- (id)description;
- (id)directoryGatewayURL;
- (id)directoryGatewayURLs;
- (id)homeSet;

@end
