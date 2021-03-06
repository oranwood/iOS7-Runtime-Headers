/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUMescalSession, NSString;

@interface SUAccountViewController : SUStorePageViewController  {
    BOOL _failed;
    int _style;
    SUMescalSession *_mescalSession;
    int _mescalState;
    NSString *_primingSignature;
}

@property int style;
@property(getter=_mescalSession,readonly) SUMescalSession * _mescalSession;

+ (id)_latestAccountViewController;

- (void)_closeMescalSession;
- (id)initWithExternalAccountURL:(id)arg1;
- (id)_authenticationQueryParametersForStyle:(int)arg1;
- (void)_mescalDidOpenWithSession:(id)arg1 error:(id)arg2;
- (id)_bagKeyForStyle:(int)arg1;
- (id)_mescalSession;
- (void)handleFailureWithError:(id)arg1;
- (id)newViewControllerForPage:(id)arg1 ofType:(int)arg2 returningError:(id*)arg3;
- (id)newFetchOperation;
- (void)enqueueFetchOperation;
- (id)copyArchivableContext;
- (void)setStyle:(int)arg1;
- (int)style;
- (id)init;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)arg1;

@end
