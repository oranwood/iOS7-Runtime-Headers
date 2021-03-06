/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@class NSArray, NSString, NSDictionary;

@interface BKSApplicationLaunchSettings : NSObject <NSCopying, BKSXPCCoding> {
    BOOL _waitForDebugger;
    BOOL _disableASLR;
    BOOL _checkForLeaks;
    NSDictionary *_environment;
    NSDictionary *_containerEnvironment;
    NSString *_containerPath;
    NSArray *_arguments;
    NSString *_standardOut;
    NSString *_standardError;
}

@property(retain) NSDictionary * environment;
@property(retain) NSDictionary * containerEnvironment;
@property(retain) NSString * containerPath;
@property(retain) NSArray * arguments;
@property(copy) NSString * standardOut;
@property(copy) NSString * standardError;
@property BOOL waitForDebugger;
@property BOOL disableASLR;
@property BOOL checkForLeaks;


- (void)setStandardOut:(id)arg1;
- (void)setCheckForLeaks:(BOOL)arg1;
- (void)setDisableASLR:(BOOL)arg1;
- (void)setWaitForDebugger:(BOOL)arg1;
- (void)setContainerPath:(id)arg1;
- (void)setContainerEnvironment:(id)arg1;
- (id)initWithSettings:(id)arg1 zone:(struct _NSZone { }*)arg2;
- (id)standardError;
- (id)standardOut;
- (BOOL)checkForLeaks;
- (BOOL)disableASLR;
- (BOOL)waitForDebugger;
- (id)containerPath;
- (id)containerEnvironment;
- (id)environment;
- (id)initWithXPCDictionary:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setStandardError:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setArguments:(id)arg1;
- (id)arguments;

@end
