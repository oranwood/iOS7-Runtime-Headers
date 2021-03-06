/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITableView, NSString, UIImage, UIView, UILabel, UIColor;

@interface UITableViewHeaderFooterView : UIView <UITableViewSubviewReusing> {
    int _tableViewStyle;
    UIImage *_backgroundImage;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _frame;
    int _textAlignment;
    UITableView *_tableView;
    float _maxTitleWidth;
    NSString *_reuseIdentifier;
    UIView *_backgroundView;
    UILabel *_label;
    UILabel *_detailLabel;
    UIView *_contentView;
    UIColor *_tintColor;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _separatorInset;
    struct { 
        unsigned int isHeader : 1; 
        unsigned int labelBackgroundColorNeedsUpdate : 1; 
        unsigned int detailLabelBackgroundColorNeedsUpdate : 1; 
        unsigned int floating : 1; 
    } _headerFooterFlags;
}

@property(retain) UIColor * tintColor;
@property(readonly) UILabel * textLabel;
@property(readonly) UILabel * detailTextLabel;
@property(readonly) UIView * contentView;
@property(retain) UIView * backgroundView;
@property(copy) NSString * reuseIdentifier;
@property BOOL floating;
@property int tableViewStyle;
@property(retain) UIImage * backgroundImage;
@property BOOL sectionHeader;
@property UITableView * tableView;
@property int textAlignment;
@property(copy) NSString * text;
@property float maxTitleWidth;
@property(getter=_marginWidth,setter=_setMarginWidth:) float marginWidth;
@property(getter=_rightMarginWidth,setter=_setRightMarginWidth:) float rightMarginWidth;

+ (id)_defaultFontForTableViewStyle:(int)arg1 isSectionHeader:(BOOL)arg2;

- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)contentView;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (void)setOpaque:(BOOL)arg1;
- (id)text;
- (void)dealloc;
- (float)maxTitleWidth;
- (BOOL)floating;
- (void)_updateDetailLabelBackgroundColorIfNeeded;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_detailLabelFrame;
- (void)_updateLabelBackgroundColorIfNeeeded;
- (void)_updateContentAndBackgroundView;
- (void)_updateLayerContents;
- (struct CGSize { float x1; float x2; })_detailTextSizeForWidth:(float)arg1;
- (struct CGSize { float x1; float x2; })_textSizeForWidth:(float)arg1;
- (id)_label:(BOOL)arg1;
- (void)_updateDetailLabelBackgroundColor;
- (void)_updateLabelBackgroundColor;
- (BOOL)_useDetailText;
- (BOOL)sectionHeader;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_backgroundRect;
- (void)_invalidateDetailLabelBackgroundColor;
- (void)_invalidateLabelBackgroundColor;
- (id)tableView;
- (void)_setupBackgroundView;
- (float)_rightMarginWidth;
- (int)tableViewStyle;
- (struct CGSize { float x1; float x2; })_sizeThatFits:(struct CGSize { float x1; float x2; })arg1 stripPaddingForAbuttingView:(BOOL)arg2 isTopHeader:(BOOL)arg3;
- (void)setBackgroundImage:(id)arg1;
- (int)textAlignment;
- (float)_marginWidth;
- (id)backgroundView;
- (void)_tableViewDidUpdateMarginWidth;
- (id)detailTextLabel;
- (id)textLabel;
- (void)setReuseIdentifier:(id)arg1;
- (void)prepareForReuse;
- (void)setBackgroundView:(id)arg1;
- (id)reuseIdentifier;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)_setBackgroundViewColor:(id)arg1;
- (void)_setupLabelAppearance;
- (void)setTextAlignment:(int)arg1;
- (void)_setRightMarginWidth:(float)arg1;
- (void)_setMarginWidth:(float)arg1;
- (void)setTableView:(id)arg1;
- (void)setSectionHeader:(BOOL)arg1;
- (void)setTableViewStyle:(int)arg1;
- (void)setFloating:(BOOL)arg1;
- (void)setMaxTitleWidth:(float)arg1;
- (void)setText:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_labelFrame;
- (void)_updateBackgroundImage;
- (id)backgroundImage;
- (id)_scriptingInfo;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (void)layoutSubviews;

@end
