/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <CDXClientSessionDelegate>, CDXClient, NSData, NSIndexSet, NSMutableIndexSet;

@interface CDXClientSession : NSObject {
    CDXClient *CDXClient_;
    unsigned short *ack_;
    <CDXClientSessionDelegate> *delegate_;
    id inboundHandler_;
    NSData *lastSent_;
    NSMutableIndexSet *participantsInFlight_;
    unsigned char pid_;
    int retransmitAttempts_;
    struct dispatch_source_s { } *retransmitTimer_;
    unsigned short seq_;
    NSData *sessionKeyPrepped_;
    NSData *sessionKey_;
    NSData *ticket_;
}

@property(retain,readonly) CDXClient * CDXClient;
@property <CDXClientSessionDelegate> * delegate;
@property(copy) id inboundHandler;
@property(copy,readonly) NSIndexSet * participantsInFlight;
@property(copy,readonly) NSData * sessionKey;
@property(copy) NSData * ticket;

- (id)CDXClient;
- (void)dealloc;
- (id)decrypt:(id)arg1 ticket:(id)arg2;
- (id)delegate;
- (id)encrypt:(id)arg1;
- (id)inboundHandler;
- (id)initWithCDXClient:(id)arg1 ticket:(id)arg2 sessionKey:(id)arg3;
- (void)invalidate;
- (id)participantsInFlight;
- (void)recvRaw:(id)arg1 ticket:(id)arg2;
- (void)resetRetransmitTimer;
- (BOOL)retransmitEvent;
- (BOOL)sendData:(id)arg1 toParticipants:(id)arg2;
- (BOOL)sendData:(id)arg1;
- (BOOL)sendRaw:(id)arg1 toParticipants:(id)arg2;
- (id)sessionKey;
- (void)setDelegate:(id)arg1;
- (void)setInboundHandler:(id)arg1;
- (void)setTicket:(id)arg1;
- (void)stopRetransmitTimer;
- (id)ticket;

@end
