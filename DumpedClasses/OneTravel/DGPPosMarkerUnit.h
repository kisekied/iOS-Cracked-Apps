//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBaseComponent.h"

#import "DiDiLocationManagerDelegate.h"
#import "ONECityListProtocol.h"
#import "SBottomContainerViewSource.h"
#import "SFormCellModelDelegate.h"
#import "SPosMarkerBusinessDelegate.h"

@class DiDiPOIEntityModel, NSDate, NSString, ONESBaseMapEntrance, ONEXPassagerBubbleView, SPosMarkerBusiness;

@interface DGPPosMarkerUnit : SBaseComponent <DiDiLocationManagerDelegate, ONECityListProtocol, SBottomContainerViewSource, SPosMarkerBusinessDelegate, SFormCellModelDelegate>
{
    _Bool _shouldStopUpdateBubble;
    _Bool _isInConfirmOrder;
    _Bool _isHaveUserLocation;
    ONESBaseMapEntrance *_mapEntrance;
    unsigned long long _poiOrderType;
    SPosMarkerBusiness *_posMarkerBusiness;
    DiDiPOIEntityModel *_recommandPoiModel;
    ONEXPassagerBubbleView *_bubbleView;
    NSDate *_enterBackgroundDate;
    struct CGRect _lastBubbleFrame;
}

@property(retain, nonatomic) NSDate *enterBackgroundDate; // @synthesize enterBackgroundDate=_enterBackgroundDate;
@property(nonatomic) _Bool isHaveUserLocation; // @synthesize isHaveUserLocation=_isHaveUserLocation;
@property(nonatomic) _Bool isInConfirmOrder; // @synthesize isInConfirmOrder=_isInConfirmOrder;
@property(nonatomic) struct CGRect lastBubbleFrame; // @synthesize lastBubbleFrame=_lastBubbleFrame;
@property(retain, nonatomic) ONEXPassagerBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) DiDiPOIEntityModel *recommandPoiModel; // @synthesize recommandPoiModel=_recommandPoiModel;
@property(nonatomic) _Bool shouldStopUpdateBubble; // @synthesize shouldStopUpdateBubble=_shouldStopUpdateBubble;
@property(retain, nonatomic) SPosMarkerBusiness *posMarkerBusiness; // @synthesize posMarkerBusiness=_posMarkerBusiness;
@property(nonatomic) unsigned long long poiOrderType; // @synthesize poiOrderType=_poiOrderType;
@property(nonatomic) __weak ONESBaseMapEntrance *mapEntrance; // @synthesize mapEntrance=_mapEntrance;
- (void).cxx_destruct;
- (void)showRecommendedPoi;
- (void)recognitionFinishAndProvideData:(id)arg1;
- (void)destPoiAddrSelected:(id)arg1;
- (void)didiLocationManagerDidUpdateDistance:(double)arg1 distanceFilter:(double)arg2;
- (void)omgClickRecommendModel:(id)arg1;
- (void)omgRecommendModel:(id)arg1;
- (void)omgEventId:(id)arg1 WithPOIModel:(id)arg2 defaultAddr:(id)arg3 isFrom:(_Bool)arg4;
- (id)endPosDisplayNameForBusiness:(id)arg1;
- (id)startPosDisplayNameForBusiness:(id)arg1;
- (id)endPosImageForBusiness:(id)arg1;
- (id)startPosImageForBusiness:(id)arg1;
- (void)triggerEvent:(unsigned long long)arg1 params:(id)arg2;
- (id)viewForContainerView:(id)arg1 expand:(_Bool)arg2;
- (void)checkStartPosFromOthterBiz:(id)arg1;
- (void)destPoiConfirm:(id)arg1;
- (void)destPoiAddrSelected;
- (void)fromPoiConfirm:(id)arg1;
- (void)fromPoiAddrSelected;
- (id)endPosDefaultText:(id)arg1;
- (id)startPosDefaultText:(id)arg1;
- (id)tipDefaultText:(id)arg1;
- (id)endAirportDefaultText:(id)arg1;
- (id)startFlightDefaultText:(id)arg1;
- (id)getFormCellModel:(id)arg1;
- (void)cleanEndPosMapMarker;
- (void)cleanOnPosMapMarker;
- (void)adjustMapRegion:(_Bool)arg1 withUserLocation:(_Bool)arg2;
- (void)setupEndPosMapMarker;
- (void)updatePositionCalloutView:(id)arg1;
- (void)setupOnPosMapMarkerWithCalloutView:(id)arg1;
- (void)setupOnPosMapMarker;
- (void)updateBubbleContentWithDesc:(id)arg1;
- (void)updateBubbleContentWithDescAttr:(id)arg1 withType:(unsigned long long)arg2;
- (void)updateBubbleContentWithDesc:(id)arg1 withType:(unsigned long long)arg2;
- (void)updateBubbleContent:(id)arg1 unit:(id)arg2 desc:(id)arg3 withType:(unsigned long long)arg4;
- (id)defaultBubbleDesc;
- (void)clearRadarView;
- (void)showRadarAnimation:(struct CLLocationCoordinate2D)arg1;
- (void)dealloc;
- (void)removeUserLocation;
- (void)updateUserLocation:(struct CLLocationCoordinate2D)arg1;
- (id)initWithDataSource:(id)arg1 config:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
