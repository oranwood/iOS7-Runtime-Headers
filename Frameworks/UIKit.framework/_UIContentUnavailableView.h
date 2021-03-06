/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class UIButton, _UIBackdropView, NSString, UIView, UILabel, NSLayoutConstraint;

@interface _UIContentUnavailableView : UIView  {
    unsigned int _style;
    NSString *_title;
    _UIBackdropView *_backdrop;
    UIView *_containerView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIButton *_actionButton;
    NSLayoutConstraint *titleToMessageConstraint;
    NSLayoutConstraint *messageToButtonConstraint;
    UIView *_fromSnapshot;
    UIView *_toSnapshot;
    struct CGSize { 
        float width; 
        float height; 
    } _fromSnapshotSize;
    NSString *_message;
    NSString *_buttonTitle;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _buttonAction;

}

@property(copy) NSString * title;
@property(copy) NSString * message;
@property(copy) NSString * buttonTitle;
@property(copy) id buttonAction;


- (void)setTitle:(id)arg1;
- (id)title;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)message;
- (void)dealloc;
- (id)buttonTitle;
- (void)setButtonTitle:(id)arg1;
- (void)windowDidRotateNotification:(id)arg1;
- (void)windowWillAnimateRotateNotification:(id)arg1;
- (void)windowWillRotateNotification:(id)arg1;
- (id)buttonAction;
- (id)_buttonBackgroundImageForStyle:(unsigned int)arg1;
- (void)_actionButtonPressed:(id)arg1;
- (void)_updateViewHierarchy;
- (void)setButtonAction:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 title:(id)arg2 style:(unsigned int)arg3;
- (void)setMessage:(id)arg1;
- (void)updateConstraints;
- (void)didMoveToWindow;

@end
