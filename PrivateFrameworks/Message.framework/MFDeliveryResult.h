/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFDeliveryResult : NSObject  {
    int _status;
    double _duration;
    unsigned int _bytesSent;
    BOOL _isWifi;
}

@property int status;
@property double duration;
@property unsigned int bytesSent;
@property BOOL isWifi;


- (void)setIsWifi:(BOOL)arg1;
- (BOOL)isWifi;
- (unsigned int)bytesSent;
- (void)setBytesSent:(unsigned int)arg1;
- (id)initWithStatus:(int)arg1;
- (void)setDuration:(double)arg1;
- (int)status;
- (void)setStatus:(int)arg1;
- (id)description;
- (double)duration;

@end
