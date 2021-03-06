/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOFeatureStyleAttributes : NSObject <NSCopying> {
    struct { 
        unsigned int key; 
        int value; 
    } v[16];
}


- (BOOL)isFreeway;
- (BOOL)isWalkable;
- (BOOL)isDrivable;
- (BOOL)isTunnel;
- (BOOL)shouldSuppress3DBuildingStrokes;
- (BOOL)isRailway;
- (int)rampDirection;
- (int)rampType;
- (BOOL)isRamp;
- (void)sort;
- (int)drivingSide;
- (BOOL)hasDrivingSide;
- (id)initWithAttributes:(unsigned int)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
