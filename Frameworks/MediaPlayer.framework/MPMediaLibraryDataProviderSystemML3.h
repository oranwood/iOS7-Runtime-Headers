/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class NSObject<OS_dispatch_queue>;

@interface MPMediaLibraryDataProviderSystemML3 : MPMediaLibraryDataProviderML3  {
    long long _currentRevision;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)_localizedCloudGeniusErrorForError:(id)arg1;
+ (id)_localizedGeniusErrorForError:(id)arg1;
+ (BOOL)_isGeniusEnabled;

- (id)initWithLibrary:(id)arg1;
- (BOOL)_formatCanUsePipeline:(unsigned int)arg1;
- (id)_screenshotCacheIDForItemIdentifier:(long long)arg1;
- (void)_loadArtworkImageForMLArtworkFormatID:(unsigned int)arg1 artworkCacheID:(id)arg2 canUseSurfaceBackedImage:(BOOL)arg3 completionBlock:(id)arg4;
- (id)_itemArtworkCacheIDForItemIdentifier:(long long)arg1;
- (void)_loadArtworkImageDataForMLArtworkFormatID:(unsigned int)arg1 artworkCacheID:(id)arg2 completionBlock:(id)arg3;
- (id)_itemArtworkCacheIDForItemIdentifier:(long long)arg1 atPlaybackTime:(double)arg2;
- (BOOL)_formatShouldUseNativeSize:(unsigned int)arg1;
- (void)_seedCloudPlaylistWithTrack:(id)arg1 container:(id)arg2 completionBlock:(id)arg3;
- (void)_initInstanceVariableOnce;
- (BOOL)supportsEntityChangeTrackingForMediaEntityType:(int)arg1 collectionGroupingType:(int)arg2 dataProviderClass:(out Class*)arg3;
- (void)updateEntitesToCurrentRevision;
- (long long*)generateItemIdentifiersForGeniusClusterPlaylist:(void*)arg1 count:(unsigned int*)arg2 error:(id*)arg3;
- (void*)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long*)arg1 count:(unsigned int)arg2 error:(id*)arg3;
- (void)releaseGeniusClusterPlaylist:(void*)arg1;
- (void)seedPlaylistWithIdentifier:(long long)arg1 withItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (id)artworkCacheIDForItemWithIdentifier:(long long)arg1 atPlaybackTime:(double)arg2;
- (void)loadBestArtworkImageDataForSize:(struct CGSize { float x1; float x2; })arg1 ofItemWithIdentifier:(long long)arg2 atPlaybackTime:(double)arg3 completionBlock:(id)arg4;
- (void)loadBestArtworkImageForSize:(struct CGSize { float x1; float x2; })arg1 forArtworkCacheID:(id)arg2 completionBlock:(id)arg3;
- (void)loadArtworkImageForFormat:(int)arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;
- (void)loadArtworkImageForFormat:(int)arg1 ofItemWithArtworkCacheID:(id)arg2 canUseSurfaceBackedImage:(BOOL)arg3 completionBlock:(id)arg4;
- (BOOL)shouldAsynchrounouslyLoadArtworkForItemWithIdentifier:(long long)arg1 artworkSize:(struct CGSize { float x1; float x2; })arg2 artworkCacheID:(id)arg3;
- (BOOL)shouldAsynchrounouslyLoadArtworkForItemWithIdentifier:(long long)arg1 artworkFormat:(int)arg2 artworkCacheID:(id)arg3;
- (BOOL)hasArtworkImageForItemWithIdentifier:(long long)arg1;
- (id)errorResolverForMediaItem:(id)arg1;
- (BOOL)isGeniusEnabled;
- (BOOL)isArtworkImageIdenticalForItemWithIdentifier:(long long)arg1 otherItemWithIdentifier:(long long)arg2 compareRepresentativeItemArtwork:(BOOL)arg3 missingAlwaysComparesEqual:(BOOL)arg4;
- (void).cxx_destruct;

@end
