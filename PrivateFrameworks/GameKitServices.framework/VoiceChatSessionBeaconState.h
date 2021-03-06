/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface VoiceChatSessionBeaconState : NSObject  {
    struct tagVoiceChatBeacon { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *lastReceivedBeacon;
    unsigned int sentState;
    unsigned int receivedState;
    BOOL needsSend;
    unsigned int typeToSend;
}

@property unsigned int sentState;
@property unsigned int receivedState;
@property BOOL needsSend;
@property unsigned int typeToSend;


- (void)setTypeToSend:(unsigned int)arg1;
- (unsigned int)typeToSend;
- (void)setNeedsSend:(BOOL)arg1;
- (BOOL)needsSend;
- (void)setReceivedState:(unsigned int)arg1;
- (unsigned int)receivedState;
- (void)setSentState:(unsigned int)arg1;
- (unsigned int)sentState;
- (void)setLastReceivedBeacon:(struct tagVoiceChatBeacon { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)arg1;
- (struct tagVoiceChatBeacon { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; }*)lastReceivedBeacon;
- (id)init;
- (void)dealloc;

@end
