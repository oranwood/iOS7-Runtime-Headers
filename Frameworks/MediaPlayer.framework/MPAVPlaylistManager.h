/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPAVQueuePlayerFeeder, MPAVItem, NSString, MPQueuePlayer, <MPAVPlaylistFeeder>;

@interface MPAVPlaylistManager : NSObject <MPAVQueuePlayerFeederSource> {
    NSString *_audioSessionModeOverride;
    MPAVItem *_currentItem;
    MPAVQueuePlayerFeeder *_feeder;
    BOOL _goToTargetIndex;
    int _isChangingPlaylistFeeder;
    int _lastSelectionDirection;
    MPQueuePlayer *_player;
    <MPAVPlaylistFeeder> *_playlistFeeder;
    int _repeatMode;
    int _targetIndex;
    BOOL _updatedAudioSessionMode;
}

@property(readonly) BOOL canChangePlaylistFeeder;
@property(readonly) BOOL isChangingPlaylistFeeder;
@property(retain) <MPAVPlaylistFeeder> * playlistFeeder;
@property(readonly) MPQueuePlayer * player;
@property(readonly) MPAVItem * currentItem;
@property(readonly) int currentIndex;
@property(readonly) int lastSelectionDirection;
@property int repeatMode;
@property BOOL managesSystemDownloads;
@property BOOL forceSynchronousQueueFilling;
@property unsigned int minQueueDepth;
@property unsigned int maxQueueDepth;
@property(retain) NSString * audioSessionModeOverride;


- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)updateForSoundCheckDefaultsChange;
- (void)queuePlayerFeederFailedToQueueAnyItems:(id)arg1;
- (void)queuePlayerFeederDidUpdateQueue:(id)arg1 queuedItems:(id)arg2 dequeuedItems:(id)arg3;
- (BOOL)queuePlayerFeeder:(id)arg1 willInsertItem:(id)arg2;
- (void)queuePlayerFeeder:(id)arg1 willRemoveItem:(id)arg2;
- (id)queuePlayerFeeder:(id)arg1 itemToFollowItem:(id)arg2;
- (id)_audioSessionModeForMediaItem:(id)arg1;
- (id)_itemToFollowItemIndex:(int)arg1 skipUnavailableContent:(BOOL)arg2;
- (int)_nextItemIndex:(int)arg1 repeatMode:(int)arg2;
- (id)_feederItemForIndex:(int)arg1;
- (void)contentInvalidatedWithNewIndex:(unsigned int)arg1;
- (BOOL)canChangePlaylistFeeder;
- (int)_prepareToQueuePlaybackIndex:(int)arg1 selectionDirection:(int)arg2;
- (void)_updateAudioSessionMode;
- (void)setMinQueueDepth:(unsigned int)arg1;
- (unsigned int)minQueueDepth;
- (unsigned int)maxQueueDepth;
- (void)_reloadQueuedItemsIfPathBecameAvailable;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;
- (void)_assetCancelNotification:(id)arg1;
- (void)_downloadCancelledNotification:(id)arg1;
- (BOOL)managesSystemDownloads;
- (BOOL)forceSynchronousQueueFilling;
- (void)setMaxQueueDepth:(unsigned int)arg1;
- (BOOL)isChangingPlaylistFeeder;
- (void)setManagesSystemDownloads:(BOOL)arg1;
- (void)setPlaylistFeeder:(id)arg1;
- (id)playlistFeeder;
- (int)lastSelectionDirection;
- (void)setCurrentIndex:(int)arg1 selectionDirection:(int)arg2;
- (BOOL)setPlaylistFeeder:(id)arg1 startIndex:(int)arg2;
- (void)contentInvalidated;
- (id)_feeder;
- (void)setForceSynchronousQueueFilling:(BOOL)arg1;
- (void)setAudioSessionModeOverride:(id)arg1;
- (id)audioSessionModeOverride;
- (int)repeatMode;
- (void)setRepeatMode:(int)arg1;
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned int)arg1;
- (void)contentsDidChangeByRemovingRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)player;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)currentItem;
- (int)currentIndex;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
