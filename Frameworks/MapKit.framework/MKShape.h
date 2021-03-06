/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MapKit.framework/MapKit
 */

@class NSString;

@interface MKShape : NSObject <MKAnnotation> {
    NSString *_title;
    NSString *_subtitle;
}

@property(copy) NSString * title;
@property(copy) NSString * subtitle;
@property(readonly) struct { double x1; double x2; } coordinate;


- (void)setTitle:(id)arg1;
- (id)title;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;

@end
