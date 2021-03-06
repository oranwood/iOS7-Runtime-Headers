/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class UIColor, UISegmentedControl, NSMutableArray, SUClientInterface, NSString, SUSimpleMenuViewController, UIPopoverController, NSArray;

@interface SUSegmentedControl : UIControl <SUMenuViewControllerDelegate, UIPopoverControllerDelegate> {
    BOOL _autosizesText;
    NSString *_cancelButtonTitle;
    SUClientInterface *_clientInterface;
    BOOL _hidingPopoverForRotation;
    NSMutableArray *_items;
    int _maximumNumberOfItems;
    float _maximumWidth;
    SUSimpleMenuViewController *_menuViewController;
    NSString *_moreListTitle;
    UIPopoverController *_popoverController;
    UISegmentedControl *_segmentedControl;
    int _selectionIndex;
    BOOL _showsMoreListAutomatically;
    int _tintStyle;
}

@property(copy) NSArray * items;
@property int maximumNumberOfItems;
@property float maximumWidth;
@property(copy) NSString * cancelButtonTitle;
@property(copy) NSString * moreListTitle;
@property(readonly) int numberOfVisibleSegments;
@property int segmentedControlStyle;
@property int selectedItemIndex;
@property(readonly) int selectedSegmentIndex;
@property BOOL showsMoreListAutomatically;
@property(retain) UIColor * tintColor;
@property int tintStyle;
@property(retain) SUClientInterface * clientInterface;


- (id)_titlesForMoreList;
- (void)_presentPopoverAnimated:(BOOL)arg1;
- (int)numberOfVisibleSegments;
- (void)_destroyPopoverController;
- (void)_destroyMenuViewController;
- (void)_showMoreList:(BOOL)arg1;
- (void)_setValue:(id)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (void)_applyStyling;
- (void)_valueChangedEvent:(id)arg1;
- (BOOL)showsMoreListAutomatically;
- (void)setShowsMoreListAutomatically:(BOOL)arg1;
- (void)setMaximumNumberOfItems:(int)arg1;
- (int)maximumNumberOfItems;
- (void)showPopover:(id)arg1 fromSegmentIndex:(int)arg2 animated:(BOOL)arg3;
- (void)showMoreList:(BOOL)arg1 animated:(BOOL)arg2;
- (id)cancelButtonTitle;
- (void)setCancelButtonTitle:(id)arg1;
- (void)_windowWillRotateNotification:(id)arg1;
- (void)_windowDidRotateNotification:(id)arg1;
- (void)sizeToFitWithMinimumSegmentWidth:(float)arg1 maximumTotalWidth:(float)arg2;
- (void)menuViewControllerDidCancel:(id)arg1;
- (void)menuViewController:(id)arg1 didSelectItemAtIndex:(int)arg2;
- (void)sizeToFitUserInterfaceIdiom;
- (void)setSelectedItemIndex:(int)arg1;
- (int)selectedItemIndex;
- (void)setTintStyle:(int)arg1;
- (int)tintStyle;
- (id)moreListTitle;
- (void)setMoreListTitle:(id)arg1;
- (void)setClientInterface:(id)arg1;
- (id)clientInterface;
- (id)items;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)_reloadData;
- (id)titleTextAttributesForState:(unsigned int)arg1;
- (id)dividerImageForLeftSegmentState:(unsigned int)arg1 rightSegmentState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned int)arg2 rightSegmentState:(unsigned int)arg3 barMetrics:(int)arg4;
- (id)backgroundImageForState:(unsigned int)arg1 barMetrics:(int)arg2;
- (int)selectedSegmentIndex;
- (void)setImage:(id)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned int)arg2;
- (int)segmentedControlStyle;
- (void)setSegmentedControlStyle:(int)arg1;
- (float)maximumWidth;
- (void)setMaximumWidth:(float)arg1;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned int)arg2 barMetrics:(int)arg3;
- (void)setItems:(id)arg1;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned int)arg2;
- (void)setTintColor:(id)arg1;
- (id)tintColor;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;

@end
