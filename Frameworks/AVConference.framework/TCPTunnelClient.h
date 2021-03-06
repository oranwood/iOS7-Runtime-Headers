/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableData, NSObject<OS_dispatch_source>, NSObject<OS_dispatch_queue>, TCPBufferPool, NSDictionary, NSString, NSData, NSMutableDictionary;

@interface TCPTunnelClient : NSObject <VideoConferenceRealTimeChannel> {
    int _connectState;
    int _connectedFD;
    int _isChannelBound;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _handler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _allocationResponseHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _terminationHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _bindingResponseHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _destroyHandler;

    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_readSource;
    NSObject<OS_dispatch_source> *_writeSource;
    unsigned char _writeSourceSuspended;
    NSObject<OS_dispatch_source> *_timer;
    float _fTimeout;
    NSString *_participantID;
    unsigned short _channelNumber;
    NSMutableDictionary *_reqRespDict;
    NSDictionary *_relayUpdateDict;
    struct tagIPPORT { 
        int iFlags; 
        BOOL szIfName[16]; 
        union { 
            unsigned int dwIPv4; 
            unsigned char abIPv6[16]; 
        } IP; 
        unsigned short wPort; 
    } _serverIPPort;
    NSData *_allocateReq;
    NSData *_channelBReq;
    double _allocationTimestamp;
    NSMutableData *_currentlyReadingMessage;
    int _currentlyReadingDataGoalLength;
    unsigned short _currentMsgType;
    int _currentPadding;
    char *_writeBuf;
    int _head;
    int _tail;
    TCPBufferPool *_bufferPool;
}

@property(copy) id receiveHandler;
@property(copy) id allocationResponseHandler;
@property(copy) id terminationHandler;
@property(copy) id bindingResponseHandler;
@property(copy) id destroyHandler;
@property(copy) NSString * participantID;


- (void)setParticipantID:(id)arg1;
- (id)participantID;
- (BOOL)isTunnelSocketClosed;
- (void)closeTunnelSocket;
- (void)unbindChannel;
- (BOOL)sendAllocateMsg:(id*)arg1;
- (unsigned int)connectionType;
- (id)initWithRelayRequestDictionary:(id)arg1 withCallID:(unsigned long)arg2 relayType:(unsigned char)arg3 errorCode:(int*)arg4;
- (void)vcArg:(id)arg1 sendRealTimeData:(id)arg2 toParticipantID:(id)arg3;
- (void)resetConnection;
- (void)processSocketReadSSL;
- (void)processSocketRead;
- (void)processSocketWrite:(unsigned char)arg1;
- (void)receivedSSLConnectionData:(id)arg1 recordType:(unsigned short)arg2;
- (BOOL)sendChannelBindingMsgWithDict:(id)arg1 error:(id*)arg2;
- (id)destroyHandler;
- (BOOL)sendRefreshMsg:(unsigned int)arg1 error:(id*)arg2;
- (id)bindingResponseHandler;
- (void)vcArg:(id)arg1 sendControlData:(id)arg2 isTypeSSL:(BOOL)arg3 withTimeout:(float)arg4 withDetail:(int)arg5;
- (id)allocationResponseHandler;
- (void)createDispatchTimer:(float)arg1 withDetailedError:(int)arg2;
- (void)sendTCPData:(const void*)arg1 bufSize:(int)arg2;
- (void)receivedControlData:(id)arg1;
- (id)receiveHandler;
- (void)reportErrorAndTerminate:(int)arg1 detail:(int)arg2 returnCode:(int)arg3 description:(id)arg4 reason:(id)arg5;
- (void)destroyDispatchTimer;
- (void)setDestroyHandler:(id)arg1;
- (void)setBindingResponseHandler:(id)arg1;
- (void)setAllocationResponseHandler:(id)arg1;
- (void)setReceiveHandler:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (void)setTerminationHandler:(id)arg1;
- (id)terminationHandler;

@end
