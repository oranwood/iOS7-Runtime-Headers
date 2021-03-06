/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKAchievement;

@interface GKAchievementChallenge : GKChallenge  {
    GKAchievement *_achievement;
}

@property(retain) GKAchievement * achievement;

+ (BOOL)instancesRespondToSelector:(SEL)arg1;

- (id)titleText;
- (void)loadDetailsWithCompletionHandler:(id)arg1;
- (BOOL)detailsLoaded;
- (id)detailGoalTextForPlayer:(id)arg1 withAchievement:(id)arg2;
- (id)achievement;
- (void)setAchievement:(id)arg1;
- (void)setInternal:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)smallIconSource;
- (id)detailGoalText;
- (id)listGoalText;
- (id)listTitleText;
- (id)iconURLString;
- (id)smallIconURLString;
- (id)iconSource;
- (id)alertGoalText;
- (id)composeGoalText;

@end
