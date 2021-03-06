/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, UIColor, UIImage;

@interface UIImageView : UIView  {
    id _storage;
    UIImage *_decompressingImage;
    UIImage *_decompressingHighlightedImage;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _cachedEdgeInsetsForEffects;
    BOOL _edgeInsetsForEffectsAreValid;
    BOOL __animatesContents;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _edgeInsetsForEffects;
}

@property(retain) UIImage * image;
@property(retain) UIImage * highlightedImage;
@property(getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property(getter=isHighlighted) BOOL highlighted;
@property(copy) NSArray * animationImages;
@property(copy) NSArray * highlightedAnimationImages;
@property double animationDuration;
@property int animationRepeatCount;
@property(retain) UIColor * tintColor;
@property int drawMode;
@property(setter=_setTemplateImageRenderingEffects:) unsigned int _templateImageRenderingEffects;
@property(setter=_setAnimatesContents:) BOOL _animatesContents;
@property(setter=_setDefaultRenderingMode:) int _defaultRenderingMode;
@property(readonly) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } _edgeInsetsForEffects;
@property(setter=_setEdgeInsetsForEffectsAreValid:) BOOL _edgeInsetsForEffectsAreValid;
@property(setter=_setMasksTemplateImages:) BOOL _masksTemplateImages;


- (void)setBackgroundColor:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (double)animationDuration;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithImage:(id)arg1;
- (void)setImage:(id)arg1;
- (id)image;
- (void)dealloc;
- (void)_applySettingsForLegibilityStyle:(int)arg1;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isAccessibilityElementByDefault;
- (unsigned long long)defaultAccessibilityTraits;
- (void)_setAnimatesContents:(BOOL)arg1;
- (void)_setEdgeInsetsForEffectsAreValid:(BOOL)arg1;
- (BOOL)_edgeInsetsForEffectsAreValid;
- (void)setAnimating:(BOOL)arg1;
- (void)setCGImageRef:(struct CGImage { }*)arg1;
- (void)setDrawMode:(int)arg1;
- (int)drawMode;
- (void)_setMasksTemplateImages:(BOOL)arg1;
- (int)animationRepeatCount;
- (void)setHighlightedAnimationImages:(id)arg1;
- (void)setAnimationImages:(id)arg1;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (void)startAnimating;
- (void)_templateSettingsDidChange;
- (void)_updateMasking;
- (BOOL)_shouldTreatImageAsTemplate:(id)arg1;
- (id)_activeImage;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_edgeInsetsForEffects;
- (void)_setViewGeometry:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forMetric:(int)arg2;
- (BOOL)_recomputePretilingState;
- (void)_updateTemplateProperties;
- (void)_updateState;
- (BOOL)_animatesContents;
- (void)_updatePretiledImageCacheForImage:(id)arg1;
- (void)_clearPretiledImageCacheForImage:(id)arg1;
- (void)stopAnimating;
- (BOOL)_setImageViewContents:(id)arg1;
- (BOOL)isAnimating;
- (void)_drawImageEffectsForImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (BOOL)_needsImageEffectsForImage:(id)arg1 suppressColorizing:(BOOL)arg2;
- (id)_effectiveTintColorWithImage:(id)arg1;
- (BOOL)_needsImageEffectsForImage:(id)arg1;
- (id)_cachedPretiledImageForImage:(id)arg1;
- (BOOL)_shouldDrawImage:(id)arg1;
- (BOOL)_masksTemplateImages;
- (int)_defaultRenderingMode;
- (void)setHighlightedImage:(id)arg1;
- (id)highlightedImage;
- (id)highlightedAnimationImages;
- (id)animationImages;
- (BOOL)isHighlighted;
- (void)setHighlighted:(BOOL)arg1;
- (void)_setTemplateImageRenderingEffects:(unsigned int)arg1;
- (unsigned int)_templateImageRenderingEffects;
- (void)_setDefaultRenderingMode:(int)arg1;
- (void)setAnimationRepeatCount:(int)arg1;
- (void)tintColorDidChange;
- (id)_generateBackdropMaskImage;
- (BOOL)_canDrawContent;
- (BOOL)useBlockyMagnificationInClassic;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (struct CGImage { }*)imageRef;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })alignmentRectInsets;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (void)setAnimationDuration:(double)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (void)layoutSubviews;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)pu_extractPlayOverlayBackgroundImageFromCenter:(struct CGPoint { float x1; float x2; })arg1 asynchronously:(BOOL)arg2 handler:(id)arg3;

@end
