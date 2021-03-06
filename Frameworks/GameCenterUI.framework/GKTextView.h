/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
 */

@class NSString, GKTextStyle, GKLabel;

@interface GKTextView : UITextView  {
    GKTextStyle *__baseStyle;
    GKTextStyle *_appliedStyle;
    GKLabel *_placeholderLabel;
}

@property(retain) NSString * placeholderText;
@property(retain) GKTextStyle * _baseStyle;
@property(retain) GKTextStyle * appliedStyle;
@property GKLabel * placeholderLabel;

+ (void)initialize;

- (void)setPlaceholderText:(id)arg1;
- (id)placeholderText;
- (void)setAppliedStyle:(id)arg1;
- (id)appliedStyle;
- (id)_baseStyle;
- (void)_gkTextViewDidChange;
- (void)setPlaceholderLabel:(id)arg1;
- (void)replayAndApplyStyle;
- (void)updatePlaceholderVisibility;
- (id)placeholderLabel;
- (void)set_baseStyle:(id)arg1;
- (void)applyTextStyle:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2;
- (id)insertDictationResultPlaceholder;
- (void)setText:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)layoutSubviews;

@end
