/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface SpeexEndpointer : NSObject <Endpointer> {
    double mStartWaitTime;
    double mInterspeechWaitTime;
    double mEndWaitTime;
    int mEndpointMode;
    unsigned long mFrameRate;
    int mLastStatus;
    void *_impl;
}

@property int endpointMode;
@property double startWaitTime;
@property double interspeechWaitTime;
@property double endWaitTime;


- (double)endWaitTime;
- (double)interspeechWaitTime;
- (double)startWaitTime;
- (int)endpointMode;
- (int)getStatus:(struct AudioQueueBuffer { unsigned int x1; void *x2; unsigned int x3; void *x4; unsigned int x5; struct AudioStreamPacketDescription {} *x6; unsigned int x7; }*)arg1;
- (BOOL)configureWithSampleRate:(double)arg1 andFrameRate:(unsigned long)arg2;
- (void)setEndWaitTime:(double)arg1;
- (void)setInterspeechWaitTime:(double)arg1;
- (void)setStartWaitTime:(double)arg1;
- (void)setEndpointMode:(int)arg1;
- (int)getStatus:(float*)arg1 count:(unsigned long)arg2;
- (void)reset;
- (id)init;
- (void)dealloc;

@end
