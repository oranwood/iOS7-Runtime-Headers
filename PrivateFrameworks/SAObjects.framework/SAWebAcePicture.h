/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString;

@interface SAWebAcePicture : AceObject <SAAceSerializable> {
}

@property(copy) NSString * format;
@property(copy) NSNumber * height;
@property(copy) NSNumber * width;

+ (id)acePictureWithDictionary:(id)arg1 context:(id)arg2;
+ (id)acePicture;

- (void)setFormat:(id)arg1;
- (id)encodedClassName;
- (void)setHeight:(id)arg1;
- (void)setWidth:(id)arg1;
- (id)height;
- (id)width;
- (id)format;
- (id)groupIdentifier;

@end
