/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

@class UIButton, NSArray, SLFacebookAlbumManager, NSCache, <SLFacebookAlbumChooserViewControllerDelegate>;

@interface SLFacebookAlbumChooserViewController : UITableViewController <SLFacebookAlbumManagerDelegate> {
    NSCache *_coverImageCache;
    UIButton *_flipBackButton;
    SLFacebookAlbumManager *_albumManager;
    NSArray *_albums;
    <SLFacebookAlbumChooserViewControllerDelegate> *_delegate;
}

@property(retain) UIButton * flipBackButton;
@property(retain) SLFacebookAlbumManager * albumManager;
@property(retain) NSArray * albums;
@property <SLFacebookAlbumChooserViewControllerDelegate> * delegate;


- (void)setAlbums:(id)arg1;
- (id)albums;
- (void)setFlipBackButton:(id)arg1;
- (id)flipBackButton;
- (void)flipBackTapped:(id)arg1;
- (id)initWithAlbumManager:(id)arg1;
- (void)albumManager:(id)arg1 didFailLoadingCoverImageForAlbum:(id)arg2 withError:(id)arg3;
- (void)albumManager:(id)arg1 didLoadCoverImage:(id)arg2 forAlbum:(id)arg3;
- (void)albumManager:(id)arg1 didFailAlbumRefreshWithError:(id)arg2;
- (void)albumManager:(id)arg1 didRefreshAlbums:(id)arg2;
- (id)albumManager;
- (void)setAlbumManager:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
- (id)delegate;
- (void)viewDidUnload;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize { float x1; float x2; })contentSizeForViewInPopover;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end
