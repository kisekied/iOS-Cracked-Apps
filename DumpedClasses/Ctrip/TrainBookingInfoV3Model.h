//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSMutableArray, NSString;

@interface TrainBookingInfoV3Model : CTBusinessBean
{
    NSString *trainNo;
    NSString *trainNumber;
    NSString *departStation;
    NSString *arriveStation;
    NSString *departTime;
    NSString *arriveTime;
    _Bool isStartStation;
    _Bool isEndStation;
    int runTime;
    NSString *preSaleTime;
    int takeDays;
    _Bool isBookable;
    NSMutableArray *seatList;
}

+ (id)modelContainerPropertyGenericClass;
@property(retain, nonatomic) NSMutableArray *seatList; // @synthesize seatList;
@property(nonatomic) _Bool isBookable; // @synthesize isBookable;
@property(nonatomic) int takeDays; // @synthesize takeDays;
@property(copy, nonatomic) NSString *preSaleTime; // @synthesize preSaleTime;
@property(nonatomic) int runTime; // @synthesize runTime;
@property(nonatomic) _Bool isEndStation; // @synthesize isEndStation;
@property(nonatomic) _Bool isStartStation; // @synthesize isStartStation;
@property(copy, nonatomic) NSString *arriveTime; // @synthesize arriveTime;
@property(copy, nonatomic) NSString *departTime; // @synthesize departTime;
@property(copy, nonatomic) NSString *arriveStation; // @synthesize arriveStation;
@property(copy, nonatomic) NSString *departStation; // @synthesize departStation;
@property(copy, nonatomic) NSString *trainNumber; // @synthesize trainNumber;
@property(copy, nonatomic) NSString *trainNo; // @synthesize trainNo;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end
