/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableDictionary, NSMutableSet, NSDateFormatter, NSMapTable;

@interface PLMomentListClustering : NSObject  {
    unsigned int __defaultNumberOfAssetsRequiredForSeeding;
    unsigned int __defaultMaxFailuresForExpansion;
    unsigned int __minimumNumberOfAssetsToAvoidMegamomentAccumulation;
    unsigned int __minimumNumberOfAssetsToAvoidYearAccumulation;
    NSMutableDictionary *__clustersByYearAndMonth;
    NSMutableSet *__visitedMoments;
    NSMapTable *__cachedLocationsByMoment;
    NSDateFormatter *__debugDateFormatter;
    double __maximumTimeThreshold;
    double __maximumTimeThresholdBetweenMomentsWithLocation;
    double __maximumTimeThresholdFromPeakMatch;
    double __maximumTimeThresholdBetweenMomentsWithoutLocation;
    double __maximumTimeThresholdFromPeakWithoutLocation;
    double __maximumDistanceThresholdBetweenMoments;
    double __maximumDistanceThresholdFromPeak;
    double __maximumDistanceBetweenAccumulatedMoments;
    double __megamomentAccumulationMaximumTimeThreshold;
}

@property(readonly) double _maximumTimeThreshold;
@property(readonly) double _maximumTimeThresholdBetweenMomentsWithLocation;
@property(readonly) double _maximumTimeThresholdFromPeakMatch;
@property(readonly) double _maximumTimeThresholdBetweenMomentsWithoutLocation;
@property(readonly) double _maximumTimeThresholdFromPeakWithoutLocation;
@property(readonly) double _maximumDistanceThresholdBetweenMoments;
@property(readonly) double _maximumDistanceThresholdFromPeak;
@property(readonly) double _maximumDistanceBetweenAccumulatedMoments;
@property(readonly) unsigned int _defaultNumberOfAssetsRequiredForSeeding;
@property(readonly) unsigned int _defaultMaxFailuresForExpansion;
@property(readonly) double _megamomentAccumulationMaximumTimeThreshold;
@property(readonly) unsigned int _minimumNumberOfAssetsToAvoidMegamomentAccumulation;
@property(readonly) unsigned int _minimumNumberOfAssetsToAvoidYearAccumulation;
@property(readonly) NSMutableDictionary * _clustersByYearAndMonth;
@property(readonly) NSMutableSet * _visitedMoments;
@property(setter=_setCachedLocationsByMoment:,retain) NSMapTable * _cachedLocationsByMoment;
@property(readonly) NSDateFormatter * _debugDateFormatter;

+ (double)maximumTimeThresholdBetweenMoments;

- (id)_debugDateFormatter;
- (id)_visitedMoments;
- (id)_clustersByYearAndMonth;
- (unsigned int)_defaultMaxFailuresForExpansion;
- (double)_maximumTimeThreshold;
- (id)generateYearMomentListsForMoments:(id)arg1 earliestDate:(id)arg2 latestDate:(id)arg3 inManagedObjectContext:(id)arg4;
- (id)generateMegaMomentListsForMoments:(id)arg1 inManagedObjectContext:(id)arg2;
- (unsigned int)_minimumNumberOfAssetsToAvoidYearAccumulation;
- (double)_maximumDistanceBetweenAccumulatedMoments;
- (unsigned int)_minimumNumberOfAssetsToAvoidMegamomentAccumulation;
- (double)_megamomentAccumulationMaximumTimeThreshold;
- (void)_updateMegaMomentList:(id)arg1 withRejectedMoments:(id)arg2;
- (unsigned int)_expandMegaMomentList:(id)arg1 fromPeakMoment:(id)arg2 towardMoments:(id)arg3 forwards:(BOOL)arg4 outRejectedMoments:(id)arg5;
- (id)_insertNewMegaMomentListWithMoment:(id)arg1 inManagedObjectContext:(id)arg2;
- (unsigned int)_defaultNumberOfAssetsRequiredForSeeding;
- (void)_setCachedLocationsByMoment:(id)arg1;
- (void)_createMomentListClusterCacheForMoments:(id)arg1;
- (void)_verifyMomentsAreSorted:(id)arg1;
- (id)_cachedLocationsByMoment;
- (BOOL)_shouldMegaMomentList:(id)arg1 includeMoment:(id)arg2 withPeakMoment:(id)arg3 recentMoment:(id)arg4 recentMomentWithLocation:(id)arg5 forwards:(BOOL)arg6 haveRejectedMomentsForDistance:(BOOL)arg7;
- (double)_maximumTimeThresholdFromPeakWithoutLocation;
- (double)_maximumTimeThresholdBetweenMomentsWithoutLocation;
- (double)_maximumDistanceThresholdFromPeak;
- (double)_maximumDistanceThresholdBetweenMoments;
- (double)_maximumTimeThresholdFromPeakMatch;
- (BOOL)_isDateInMoment:(id)arg1 inDateRangeOfLastMoment:(id)arg2 withDelta:(double)arg3 forwards:(BOOL)arg4;
- (double)_maximumTimeThresholdBetweenMomentsWithLocation;
- (id)_cachedLocationForMoment:(id)arg1;
- (id)init;
- (void)dealloc;

@end
