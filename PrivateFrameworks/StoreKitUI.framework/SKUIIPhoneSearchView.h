/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class UICollectionView, UIView;

@interface SKUIIPhoneSearchView : UIView  {
    UICollectionView *_collectionView;
    UIView *_noResultsView;
    float _relatedAdjustment;
}

@property(retain) UICollectionView * collectionView;
@property(retain) UIView * noResultsView;
@property float relatedAdjustment;


- (float)relatedAdjustment;
- (void)setRelatedAdjustment:(float)arg1;
- (id)noResultsView;
- (void)setNoResultsView:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void).cxx_destruct;
- (void)setCollectionView:(id)arg1;
- (id)collectionView;
- (void)layoutSubviews;

@end
