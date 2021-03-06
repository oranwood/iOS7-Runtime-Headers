/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class LSApplicationProxy, UIDocumentInteractionController;

@interface _UIOpenWithAppActivity : UIActivity  {
    LSApplicationProxy *_appProxy;
    BOOL _defaultApp;
    UIDocumentInteractionController *_documentInteractionController;
}

@property(getter=isDefaultApp) BOOL defaultApp;

+ (int)activityCategory;

- (void)dealloc;
- (void)setDefaultApp:(BOOL)arg1;
- (BOOL)isDefaultApp;
- (void)performActivity;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)initWithApplicationIdentifier:(id)arg1 documentInteractionController:(id)arg2;
- (id)activityType;
- (id)activityTitle;
- (id)_activityImage;

@end
