/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@class UIColor;

@interface SFCircleProgressLayer : CALayer  {
    float _progressLineWidth;
    float _oneFullRotation;
    BOOL _showProgressTray;
    int _progressStartPoint;
    UIColor *_progressColor;
    UIColor *_progressBackgroundColor;
}

@property int progressStartPoint;
@property(retain) UIColor * progressColor;
@property(retain) UIColor * progressBackgroundColor;
@property float progressLineWidth;
@property BOOL showProgressTray;
@property float progress;

+ (BOOL)needsDisplayForKey:(id)arg1;

- (BOOL)showProgressTray;
- (float)progressLineWidth;
- (id)progressBackgroundColor;
- (id)progressColor;
- (int)progressStartPoint;
- (void)setShowProgressTray:(BOOL)arg1;
- (void)setProgressLineWidth:(float)arg1;
- (void)setProgressBackgroundColor:(id)arg1;
- (void)setProgressColor:(id)arg1;
- (void)setProgressStartPoint:(int)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)initWithLayer:(id)arg1;
- (id)init;
- (void).cxx_destruct;

@end
