/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@class PKPassImages, NSMutableSet;

@interface PKImageSetCacheItem : NSObject  {
    PKPassImages *_images;
    NSMutableSet *_cardUniqueIDs;
}

@property(retain) PKPassImages * images;
@property(retain) NSMutableSet * cardUniqueIDs;


- (void)setCardUniqueIDs:(id)arg1;
- (id)cardUniqueIDs;
- (id)initWithImages:(id)arg1 cardUniqueID:(id)arg2;
- (void)dealloc;
- (void)setImages:(id)arg1;
- (id)images;

@end