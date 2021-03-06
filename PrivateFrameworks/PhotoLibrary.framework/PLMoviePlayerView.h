/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class AVPlayer, PLVideoOutBackgroundView, PLAVPlayerView, UIView, PLAirPlayBackgroundView;

@interface PLMoviePlayerView : UIView  {
    PLAVPlayerView *_avPlayerView;
    PLVideoOutBackgroundView *_videoOutView;
    PLAirPlayBackgroundView *_airPlayView;
    BOOL _destinationPlaceholderHidden;
    unsigned int _scaleMode;
}

@property(readonly) UIView * videoView;
@property(retain) AVPlayer * player;
@property unsigned int scaleMode;
@property(readonly) int destinationPlaceholderStyle;
@property(getter=isDestinationPlaceholderHidden) BOOL destinationPlaceholderHidden;


- (BOOL)isDestinationPlaceholderHidden;
- (void)setDestinationPlaceholderStyle:(int)arg1 airPlayDeviceName:(id)arg2;
- (void)_installBackgroundView:(id)arg1;
- (void)_clearAirPlayView;
- (void)_clearVideoView;
- (void)reattachVideoView;
- (void)setDestinationPlaceholderHidden:(BOOL)arg1;
- (int)destinationPlaceholderStyle;
- (void)setScaleMode:(unsigned int)arg1 duration:(double)arg2;
- (void)setScaleMode:(unsigned int)arg1;
- (unsigned int)scaleMode;
- (id)videoView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setPlayer:(id)arg1;
- (id)player;
- (void)dealloc;

@end
