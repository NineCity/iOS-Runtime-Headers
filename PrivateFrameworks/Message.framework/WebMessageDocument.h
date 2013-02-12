/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MimeBody, MimePart, NSData, NSDictionary, NSMutableDictionary;

@interface WebMessageDocument : MFWebAttachmentSource {
    unsigned int _downloadRemoteURLs : 1;
    unsigned int _containsRemoteContent : 1;
    NSMutableDictionary *_attachmentsByURL;
    NSData *_htmlData;
    MimePart *_htmlPart;
    BOOL _messageIsFromEntourage;
    MimeBody *_mimeBody;
    NSDictionary *_partsByFilename;
    NSDictionary *_partsByURL;
    unsigned int _preferredCharset;
}

- (id)_initWithMimePart:(id)arg1 htmlData:(id)arg2;
- (void)appendHTMLData:(id)arg1;
- (id)attachmentForURL:(id)arg1;
- (id)attachmentsInDocument;
- (BOOL)containsRemoteContent;
- (void)dealloc;
- (id)description;
- (BOOL)downloadRemoteURLs;
- (id)fileWrapper;
- (id)htmlData;
- (id)init;
- (id)initWithMimeBody:(id)arg1;
- (id)initWithMimePart:(id)arg1 htmlData:(id)arg2 encoding:(unsigned long)arg3;
- (id)initWithMimePart:(id)arg1;
- (BOOL)messageIsFromEntourage;
- (id)mimeBody;
- (id)mimePart;
- (id)mimePartForURL:(id)arg1;
- (id)preferredCharacterSet;
- (void)setContainsRemoteContent:(BOOL)arg1;
- (void)setDownloadRemoteURLs:(BOOL)arg1;
- (void)setMessageIsFromEntourage:(BOOL)arg1;
- (void)setPreferredEncoding:(unsigned long)arg1;

@end
