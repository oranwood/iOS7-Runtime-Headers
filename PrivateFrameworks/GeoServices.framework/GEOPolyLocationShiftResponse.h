/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPolyLocationShiftResponse : PBCodable <NSCopying> {
    struct { 
        double *list; 
        unsigned int count; 
        unsigned int size; 
    } _parameters;
    double _radius;
    int _status;
}

@property int status;
@property(readonly) unsigned int parametersCount;
@property(readonly) double* parameters;
@property double radius;


- (void)setParameters:(double*)arg1 count:(unsigned int)arg2;
- (void)setRadius:(double)arg1;
- (void)addParameters:(double)arg1;
- (double)parametersAtIndex:(unsigned int)arg1;
- (void)clearParameters;
- (unsigned int)parametersCount;
- (double*)parameters;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (double)radius;
- (int)status;
- (void)setStatus:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
