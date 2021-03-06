/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVCaptureOutput, AVCaptureConnectionInternal, AVCaptureVideoPreviewLayer;

@interface AVCaptureConnection : NSObject  {
    AVCaptureConnectionInternal *_internal;
}

@property(readonly) NSArray * inputPorts;
@property(readonly) AVCaptureOutput * output;
@property(readonly) AVCaptureVideoPreviewLayer * videoPreviewLayer;
@property(getter=isEnabled) BOOL enabled;
@property(getter=isActive,readonly) BOOL active;
@property(readonly) NSArray * audioChannels;
@property(getter=isVideoMirroringSupported,readonly) BOOL supportsVideoMirroring;
@property(getter=isVideoMirrored) BOOL videoMirrored;
@property BOOL automaticallyAdjustsVideoMirroring;
@property(getter=isVideoOrientationSupported,readonly) BOOL supportsVideoOrientation;
@property int videoOrientation;
@property(getter=isVideoMinFrameDurationSupported,readonly) BOOL supportsVideoMinFrameDuration;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } videoMinFrameDuration;
@property(getter=isVideoMaxFrameDurationSupported,readonly) BOOL supportsVideoMaxFrameDuration;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } videoMaxFrameDuration;
@property(readonly) float videoMaxScaleAndCropFactor;
@property float videoScaleAndCropFactor;
@property(getter=isVideoStabilizationSupported,readonly) BOOL supportsVideoStabilization;
@property(getter=isVideoStabilizationEnabled,readonly) BOOL videoStabilizationEnabled;
@property BOOL enablesVideoStabilizationWhenAvailable;

+ (id)connectionWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2;
+ (id)connectionWithInputPorts:(id)arg1 output:(id)arg2;
+ (void)initialize;

- (void)setEnablesVideoStabilizationWhenAvailable:(BOOL)arg1;
- (void)setVideoRetainedBufferCountHint:(int)arg1;
- (BOOL)isVideoStabilizationEnabled;
- (void)setVideoScaleAndCropFactor:(float)arg1;
- (void)setVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (BOOL)isVideoMaxFrameDurationSet;
- (BOOL)isVideoMaxFrameDurationSupported;
- (void)setVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (BOOL)isVideoMinFrameDurationSet;
- (BOOL)isVideoMinFrameDurationSupported;
- (void)setVideoOrientation:(int)arg1;
- (void)setAutomaticallyAdjustsVideoMirroring:(BOOL)arg1;
- (void)_setVideoMirrored:(BOOL)arg1;
- (void)setVideoMirrored:(BOOL)arg1;
- (BOOL)isVideoMirrored;
- (void)removeInputPort:(id)arg1;
- (void)addInputPort:(id)arg1;
- (BOOL)isVideoRetainedBufferCountHintSupported;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_videoMaxFrameDuration;
- (void)_setVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_videoMinFrameDuration;
- (id)sourceDevice;
- (BOOL)isVideoOrientationSupported;
- (BOOL)isVideoMirroringSupported;
- (void)initCommonStorage;
- (BOOL)isVideoStabilizationSupported;
- (void)updateAudioChannelsArray;
- (void)inputPortFormatDescriptionChanged:(id)arg1;
- (BOOL)sourcesFromFrontFacingCamera;
- (id)mediaType;
- (id)initWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2;
- (id)initWithInputPorts:(id)arg1 output:(id)arg2;
- (BOOL)enablesVideoStabilizationWhenAvailable;
- (int)videoRetainedBufferCountHint;
- (float)videoScaleAndCropFactor;
- (float)videoMaxScaleAndCropFactor;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoMaxFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoMinFrameDuration;
- (int)videoOrientation;
- (BOOL)automaticallyAdjustsVideoMirroring;
- (id)audioChannels;
- (id)videoPreviewLayer;
- (id)output;
- (float)getPeakAudioLevelForChannel:(id)arg1;
- (float)getAvgAudioLevelForChannel:(id)arg1;
- (id)inputPorts;
- (BOOL)isLive;
- (BOOL)isActive;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)invalidate;
- (void)dealloc;
- (id)description;
- (id)session;
- (void)setActive:(BOOL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
