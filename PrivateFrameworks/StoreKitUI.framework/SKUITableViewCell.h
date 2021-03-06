/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UIColor, SKUIBorderView;

@interface SKUITableViewCell : UITableViewCell  {
    SKUIBorderView *_bottomBorderView;
    SKUIBorderView *_topBorderView;
    float _titlePaddingLeft;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _textLabelInsets;
    float _borderPaddingLeft;
}

@property(copy) UIColor * bottomBorderColor;
@property(copy) UIColor * topBorderColor;
@property float borderPaddingLeft;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } textLabelInsets;


- (id)topBorderColor;
- (id)bottomBorderColor;
- (void)setTopBorderColor:(id)arg1;
- (void)setBottomBorderColor:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })textLabelInsets;
- (float)borderPaddingLeft;
- (void)_reloadBorderVisibility;
- (void)setTextLabelInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setBorderPaddingLeft:(float)arg1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end
