/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@class NSURL, NSString;

@interface CardDAVAddressBookContainer : CoreDAVContainer  {
    NSString *_maxResourceSize;
    NSString *_maxImageSize;
    NSURL *_meCardURL;
}

@property(retain) NSString * maxResourceSize;
@property(retain) NSString * maxImageSize;
@property(retain) NSURL * meCardURL;
@property(readonly) BOOL isAddressBook;
@property(readonly) BOOL isSharedAddressBook;
@property(readonly) BOOL isSearchAddressBook;

+ (id)copyPropertyMappingsForParser;

- (id)meCardURL;
- (BOOL)isSharedAddressBook;
- (BOOL)isSearchAddressBook;
- (BOOL)isAddressBook;
- (void)setMeCardURL:(id)arg1;
- (void)setMaxImageSize:(id)arg1;
- (void)setMaxResourceSize:(id)arg1;
- (id)maxImageSize;
- (id)maxResourceSize;
- (void)applyParsedProperties:(id)arg1;
- (void)dealloc;
- (id)description;

@end
