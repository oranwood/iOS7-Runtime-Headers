/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
 */

@class NSMutableArray;

@interface IDSAppleIDNotificationCenter : NSObject  {
    NSMutableArray *_availableNotifications;
    NSMutableArray *_usageNotifications;
}

+ (id)sharedInstance;

- (void)addUsageNotificationForSession:(id)arg1 appleID:(id)arg2 alias:(id)arg3 deviceName:(id)arg4 serviceType:(id)arg5;
- (void)addAvailableNotificationForSession:(id)arg1 appleID:(id)arg2 alias:(id)arg3 deviceName:(id)arg4 serviceType:(id)arg5 completionBlock:(id)arg6;
- (void)_noteNewUsageNotification:(id)arg1;
- (void)_noteNewAvailableNotification:(id)arg1;
- (void)_processUsageNotifications;
- (void)_processAvailableNotifications;
- (void)_postUsageNotificationForSessions:(id)arg1 appleID:(id)arg2 aliases:(id)arg3 deviceName:(id)arg4 serviceTypes:(id)arg5;
- (void)_postAvailableNotificationForSessions:(id)arg1 appleID:(id)arg2 aliases:(id)arg3 deviceName:(id)arg4 serviceTypes:(id)arg5 blockMap:(id)arg6;
- (id)init;
- (void)dealloc;

@end
