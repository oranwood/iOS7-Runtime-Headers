/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSArray;

@interface SAUIAcePronunciationItem : AceObject <SAAceSerializable> {
}

@property(copy) NSArray * commands;
@property(copy) NSString * title;
@property(copy) NSString * tts;

+ (id)acePronunciationItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)acePronunciationItem;

- (void)setTts:(id)arg1;
- (id)tts;
- (id)encodedClassName;
- (id)commands;
- (void)setCommands:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)groupIdentifier;

@end
