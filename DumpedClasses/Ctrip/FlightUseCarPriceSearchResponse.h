//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class FlightCarQueryResultInformationModel, NSMutableArray, NSString;

@interface FlightUseCarPriceSearchResponse : CTBusinessBean
{
    int result;
    NSString *resultMsg;
    FlightCarQueryResultInformationModel *queryResultModel;
    NSMutableArray *noteList;
}

@property(retain, nonatomic) NSMutableArray *noteList; // @synthesize noteList;
@property(retain, nonatomic) FlightCarQueryResultInformationModel *queryResultModel; // @synthesize queryResultModel;
@property(copy, nonatomic) NSString *resultMsg; // @synthesize resultMsg;
@property(nonatomic) int result; // @synthesize result;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end
