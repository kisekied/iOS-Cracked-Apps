//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@interface GMSMarkerLayer : CALayer
{
    double _noFlickCheckBefore;
    double _noFlickCheckAfter;
}

+ (void)initialize;
+ (_Bool)needsDisplayForKey:(id)arg1;
- (_Bool)equalsLayer:(id)arg1;
- (void)display;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coord;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (id)actionForKey:(id)arg1;
- (void)didChangeValueForKey:(id)arg1;

// Remaining properties
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property float opacity; // @dynamic opacity;
@property(nonatomic) double rotation; // @dynamic rotation;

@end
