/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaItem, NSString;

@interface MPMediaItemImageRequest : MPImageCacheRequest  {
    NSString *_artworkCacheID;
    int _artworkFormat;
    MPMediaItem *_mediaItem;
    unsigned int _placeHolderMediaType;
    double _retrievalTime;
    BOOL _usePlaceholderAsFallback;
    BOOL _crop;
    BOOL _fillToSquareAspectRatio;
    BOOL _canUseSurfaceBackedImage;
    BOOL _prefersScreenshot;
}

@property(readonly) MPMediaItem * mediaItem;
@property double retrievalTime;
@property BOOL crop;
@property BOOL fillToSquareAspectRatio;
@property BOOL canUseSurfaceBackedImage;
@property int artworkFormat;
@property(copy) NSString * artworkCacheID;
@property BOOL prefersScreenshot;
@property BOOL usePlaceholderAsFallback;
@property unsigned int placeHolderMediaType;

+ (id)placeholderImage;

- (void)setArtworkFormat:(int)arg1;
- (int)artworkFormat;
- (id)uniqueKey;
- (void)setPrefersScreenshot:(BOOL)arg1;
- (BOOL)prefersScreenshot;
- (void)setCanUseSurfaceBackedImage:(BOOL)arg1;
- (BOOL)canUseSurfaceBackedImage;
- (void)setPlaceHolderMediaType:(unsigned int)arg1;
- (unsigned int)placeHolderMediaType;
- (BOOL)usePlaceholderAsFallback;
- (double)retrievalTime;
- (void)setFillToSquareAspectRatio:(BOOL)arg1;
- (BOOL)fillToSquareAspectRatio;
- (void)setCrop:(BOOL)arg1;
- (BOOL)crop;
- (void)setArtworkCacheID:(id)arg1;
- (id)artworkCacheID;
- (void)composeUniqueKey;
- (void)setRetrievalTime:(double)arg1;
- (id)finalPlaceholderImage;
- (BOOL)canRequestSynchronously;
- (id)copyRawImageReturningError:(id*)arg1;
- (void)setRetrievalTimeForPlaybackTime:(double)arg1;
- (id)initWithMediaItem:(id)arg1;
- (void)setUsePlaceholderAsFallback:(BOOL)arg1;
- (id)mediaItem;
- (id)placeholderImage;
- (void).cxx_destruct;

@end
