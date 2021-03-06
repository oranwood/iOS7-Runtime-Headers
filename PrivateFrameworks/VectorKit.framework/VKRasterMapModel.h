/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VGLTexture, NSMutableArray, VGLRenderState;

@interface VKRasterMapModel : VKMapTileModel <VKMapLayer> {
    NSMutableArray *_sortedTiles;
    unsigned int _mapLayer;
    BOOL _rasterViewer;
    VGLRenderState *_renderState;
    VGLTexture *_clutTexture;
    BOOL _showingNoDataPlaceholders;
}

@property unsigned int mapLayerPosition;
@property BOOL rasterViewer;
@property(getter=isShowingNoDataPlaceholders,readonly) BOOL showingNoDataPlaceholders;

+ (BOOL)reloadOnStylesheetChange;

- (void)setupClutTextureForLevelOfDetail:(unsigned int)arg1 scale:(float)arg2;
- (BOOL)rasterViewer;
- (void)setRasterViewer:(BOOL)arg1;
- (void)stylesheetDidChange;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (unsigned int)supportedRenderPasses;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (id)stylesheet;
- (BOOL)isShowingNoDataPlaceholders;
- (void)setMapLayerPosition:(unsigned int)arg1;
- (unsigned int)mapLayerPosition;
- (void)reset;
- (id)init;
- (void)dealloc;

@end
