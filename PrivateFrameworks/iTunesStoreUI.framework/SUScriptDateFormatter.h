/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSDateFormatter, NSString;

@interface SUScriptDateFormatter : SUScriptObject  {
    NSDateFormatter *_dateFormatter;
}

@property(copy) NSString * dateFormat;
@property unsigned int dateStyle;
@property(copy) NSString * localeIdentifier;
@property unsigned int timeStyle;
@property(readonly) unsigned int dateFormatterFullStyle;
@property(readonly) unsigned int dateFormatterLongStyle;
@property(readonly) unsigned int dateFormatterMediumStyle;
@property(readonly) unsigned int dateFormatterNoStyle;
@property(readonly) unsigned int dateFormatterShortStyle;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (unsigned int)dateFormatterShortStyle;
- (unsigned int)dateFormatterNoStyle;
- (unsigned int)dateFormatterMediumStyle;
- (unsigned int)dateFormatterLongStyle;
- (unsigned int)dateFormatterFullStyle;
- (id)_className;
- (id)scriptAttributeKeys;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setDateFormat:(id)arg1;
- (id)stringFromDate:(id)arg1;
- (id)attributeKeys;
- (id)init;
- (id)localeIdentifier;
- (void)dealloc;
- (double)dateFromString:(id)arg1;
- (unsigned int)timeStyle;
- (unsigned int)dateStyle;
- (void)setTimeStyle:(unsigned int)arg1;
- (void)setDateStyle:(unsigned int)arg1;
- (id)dateFormat;

@end
