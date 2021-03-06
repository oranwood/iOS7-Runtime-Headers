/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIImage, NSString, UIViewController, <SUActivityDelegate>;

@interface SUActivity : UIActivity  {
    <SUActivityDelegate> *_delegate;
    UIImage *_suActivityImage;
    NSString *_suActivityTitle;
    NSString *_suActivityType;
    UIViewController *_suActivityViewController;
}

@property <SUActivityDelegate> * ITunesStoreDelegate;


- (id)ITunesStoreDelegate;
- (void)setITunesStoreDelegate:(id)arg1;
- (void)setActivityImage:(id)arg1;
- (void)setActivityTitle:(id)arg1;
- (void)setActivityType:(id)arg1;
- (void)dealloc;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setActivityViewController:(id)arg1;
- (id)activityViewController;
- (id)activityImage;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)activityType;
- (id)activityTitle;

@end
