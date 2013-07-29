/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface _MPRadioStaticProfileConnectionObserver : NSObject <MCProfileConnectionObserver> {
    BOOL _isProfileExplicitContentRestricted;
}

@property(readonly) BOOL isProfileExplicitContentRestricted;


- (BOOL)isProfileExplicitContentRestricted;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (id)init;
- (void)dealloc;

@end