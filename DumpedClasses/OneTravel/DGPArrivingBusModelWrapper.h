//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DGPArrivingBusModel, DGPMetroBusModel;

@interface DGPArrivingBusModelWrapper : NSObject
{
    DGPMetroBusModel *_owner;
    DGPArrivingBusModel *_arriving;
}

@property(retain, nonatomic) DGPArrivingBusModel *arriving; // @synthesize arriving=_arriving;
@property(retain, nonatomic) DGPMetroBusModel *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;

@end
