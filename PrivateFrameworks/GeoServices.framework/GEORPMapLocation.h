/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOLatLng, NSData, GEOMapRegion;

@interface GEORPMapLocation : PBCodable <NSCopying> {
    GEOLatLng *_coordinate;
    NSData *_image;
    GEOMapRegion *_mapRegion;
    float _zoomLevel;
    struct { 
        unsigned int zoomLevel : 1; 
    } _has;
}

@property(readonly) BOOL hasImage;
@property(retain) NSData * image;
@property(readonly) BOOL hasCoordinate;
@property(retain) GEOLatLng * coordinate;
@property BOOL hasZoomLevel;
@property float zoomLevel;
@property(readonly) BOOL hasMapRegion;
@property(retain) GEOMapRegion * mapRegion;


- (void)setHasZoomLevel:(BOOL)arg1;
- (void)setZoomLevel:(float)arg1;
- (float)zoomLevel;
- (BOOL)hasZoomLevel;
- (BOOL)hasCoordinate;
- (BOOL)hasImage;
- (void)setCoordinate:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)mapRegion;
- (BOOL)hasMapRegion;
- (void)setMapRegion:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (id)coordinate;
- (void)setImage:(id)arg1;
- (id)image;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
