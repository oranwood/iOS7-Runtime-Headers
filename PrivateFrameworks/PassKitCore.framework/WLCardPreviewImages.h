/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class PKImage;

@interface WLCardPreviewImages : PKPassImages  {
    PKImage *_iconImage;
}

@property(retain) PKImage * iconImage;

+ (id)archiveName;
+ (int)imageSet;
+ (int)currentVersion;
+ (BOOL)supportsSecureCoding;

- (id)initWithCardURL:(id)arg1 displayProfile:(id)arg2;
- (void)preheatImages;
- (void)setIconImage:(id)arg1;
- (void)dealloc;
- (id)iconImage;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
