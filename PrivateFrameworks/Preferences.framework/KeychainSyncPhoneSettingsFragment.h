/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSArray, NSString, PSEditableTableCell, PSSpecifier, <KeychainSyncPhoneSettingsFragmentDelegate>;

@interface KeychainSyncPhoneSettingsFragment : NSObject  {
    NSArray *_specifiers;
    PSSpecifier *_phoneNumberSpecifier;
    PSSpecifier *_countryCodeSpecifier;
    NSString *_phoneNumber;
    NSString *_countryCode;
    <KeychainSyncPhoneSettingsFragmentDelegate> *_delegate;
}

@property(readonly) NSArray * specifiers;
@property(retain) NSString * phoneNumber;
@property(retain) NSString * countryCode;
@property(readonly) PSEditableTableCell * phoneNumberCell;
@property(readonly) PSEditableTableCell * countryCodeCell;
@property <KeychainSyncPhoneSettingsFragmentDelegate> * delegate;


- (void)reloadSpecifiers;
- (id)specifiers;
- (id)initWithListController:(id)arg1;
- (id)unformattedPhoneNumber;
- (id)countryCodeCell;
- (id)phoneNumberCell;
- (id)phoneNumberForSpecifier:(id)arg1;
- (void)setPhoneNumber:(id)arg1 forSpecifier:(id)arg2;
- (id)countryCodeForSpecifier:(id)arg1;
- (void)setCountryCode:(id)arg1 forSpecifier:(id)arg2;
- (void)textFieldChanged:(id)arg1;
- (id)countryCode;
- (void)setCountryCode:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)resignFirstResponder;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)phoneNumber;

@end