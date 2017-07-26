//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Train6BaseModel.h"

@class NSString;

@interface TrainOrderCreateTicket : Train6BaseModel
{
    NSString *_TrainNumber;
    NSString *_DeparturStationName;
    NSString *_DepartureDateTime;
    NSString *_ArrivalStationName;
    NSString *_ArrivalDateTime;
    long long _RouteSequence;
    double _TicketPrice;
}

@property(nonatomic) double TicketPrice; // @synthesize TicketPrice=_TicketPrice;
@property(nonatomic) long long RouteSequence; // @synthesize RouteSequence=_RouteSequence;
@property(retain, nonatomic) NSString *ArrivalDateTime; // @synthesize ArrivalDateTime=_ArrivalDateTime;
@property(retain, nonatomic) NSString *ArrivalStationName; // @synthesize ArrivalStationName=_ArrivalStationName;
@property(retain, nonatomic) NSString *DepartureDateTime; // @synthesize DepartureDateTime=_DepartureDateTime;
@property(retain, nonatomic) NSString *DeparturStationName; // @synthesize DeparturStationName=_DeparturStationName;
@property(retain, nonatomic) NSString *TrainNumber; // @synthesize TrainNumber=_TrainNumber;
- (void).cxx_destruct;
- (id)init;

@end
