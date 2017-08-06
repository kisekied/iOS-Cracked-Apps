//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ONEBaseBusiness.h"

@class NSMutableDictionary;

@interface SMapRouteBusiness : ONEBaseBusiness
{
    NSMutableDictionary *_makers;
    NSMutableDictionary *_walkLines;
}

@property(retain, nonatomic) NSMutableDictionary *walkLines; // @synthesize walkLines=_walkLines;
@property(retain, nonatomic) NSMutableDictionary *makers; // @synthesize makers=_makers;
- (void).cxx_destruct;
- (void)dealloc;
- (id)makerWithName:(id)arg1;
- (void)makeWalkingNavRouteInVisibleRectWithEdgeInsets:(struct UIEdgeInsets)arg1 animated:(_Bool)arg2 forName:(id)arg3;
- (void)makeRouteInVisibleRectWithEdgeInsets:(struct UIEdgeInsets)arg1 animated:(_Bool)arg2 forName:(id)arg3;
- (void)removeAllRoutes;
- (void)removeRoute;
- (void)removeRouteForName:(id)arg1;
- (void)changeRouteWithCustomBlock:(CDUnknownBlockType)arg1;
- (void)changeRouteWithCustomBlock:(CDUnknownBlockType)arg1 forName:(id)arg2;
- (void)implementRouteWithPointValues:(id)arg1 customBlock:(CDUnknownBlockType)arg2;
- (void)implementRouteWithPointValues:(id)arg1 customBlock:(CDUnknownBlockType)arg2 forName:(id)arg3;
- (void)navigateWalkingStraightLineWithRoutePoins:(id)arg1 name:(id)arg2;
- (void)navigateWalkingRouteWithStart:(struct CLLocationCoordinate2D)arg1 end:(struct CLLocationCoordinate2D)arg2 productId:(id)arg3 accessKey:(id)arg4 results:(CDUnknownBlockType)arg5 forName:(id)arg6 withOid:(id)arg7;
- (void)navigateWalkingRouteWithStart:(struct CLLocationCoordinate2D)arg1 end:(struct CLLocationCoordinate2D)arg2 productId:(id)arg3 accessKey:(id)arg4 results:(CDUnknownBlockType)arg5 forName:(id)arg6;
- (void)navigateWalkingRouteWithStart:(struct CLLocationCoordinate2D)arg1 end:(struct CLLocationCoordinate2D)arg2 results:(CDUnknownBlockType)arg3 forName:(id)arg4;
- (void)designRouteWithPointValues:(id)arg1 implementResults:(CDUnknownBlockType)arg2;
- (void)designRouteWithPointValues:(id)arg1 implementResults:(CDUnknownBlockType)arg2 forName:(id)arg3;

@end
