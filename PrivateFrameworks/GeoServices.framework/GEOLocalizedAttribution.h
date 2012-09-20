/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSMutableArray;

@interface GEOLocalizedAttribution : PBCodable  {
    NSString *_displayName;
    NSString *_language;
    NSMutableArray *_logoURLs;
    NSMutableArray *_snippetLogoURLs;
}

@property(readonly) BOOL hasLanguage;
@property(retain) NSString * language;
@property(readonly) BOOL hasDisplayName;
@property(retain) NSString * displayName;
@property(retain) NSMutableArray * logoURLs;
@property(retain) NSMutableArray * snippetLogoURLs;


- (void)setLanguage:(id)arg1;
- (id)language;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)displayName;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)bestURLForLogos:(id)arg1;
- (id)snippetLogoURLs;
- (id)logoURLs;
- (id)snippetLogoURLsAtIndex:(unsigned int)arg1;
- (void)clearSnippetLogoURLs;
- (unsigned int)snippetLogoURLsCount;
- (id)logoURLsAtIndex:(unsigned int)arg1;
- (void)clearLogoURLs;
- (unsigned int)logoURLsCount;
- (BOOL)hasDisplayName;
- (BOOL)hasLanguage;
- (void)addSnippetLogoURLs:(id)arg1;
- (void)addLogoURLs:(id)arg1;
- (void)setSnippetLogoURLs:(id)arg1;
- (void)setLogoURLs:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (BOOL)readFrom:(id)arg1;

@end