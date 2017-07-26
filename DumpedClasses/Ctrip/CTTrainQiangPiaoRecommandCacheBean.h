//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCacheBean.h"

@class NSMutableArray, NSString;

@interface CTTrainQiangPiaoRecommandCacheBean : CTCacheBean
{
    int _retCode;
    NSString *_successRate;
    NSString *_minRate;
    NSString *_maxRate;
    NSString *_currentRate;
    NSString *_smartRecomendTitle;
    NSString *_smartRecomendSubTitle;
    NSMutableArray *_recommendTrainList;
    NSMutableArray *_recommendSeatList;
}

@property(retain, nonatomic) NSMutableArray *recommendSeatList; // @synthesize recommendSeatList=_recommendSeatList;
@property(retain, nonatomic) NSMutableArray *recommendTrainList; // @synthesize recommendTrainList=_recommendTrainList;
@property(copy, nonatomic) NSString *smartRecomendSubTitle; // @synthesize smartRecomendSubTitle=_smartRecomendSubTitle;
@property(copy, nonatomic) NSString *smartRecomendTitle; // @synthesize smartRecomendTitle=_smartRecomendTitle;
@property(copy, nonatomic) NSString *currentRate; // @synthesize currentRate=_currentRate;
@property(copy, nonatomic) NSString *maxRate; // @synthesize maxRate=_maxRate;
@property(copy, nonatomic, getter=minRate) NSString *minRate; // @synthesize minRate=_minRate;
@property(nonatomic) int retCode; // @synthesize retCode=_retCode;
@property(copy, nonatomic) NSString *successRate; // @synthesize successRate=_successRate;
- (void).cxx_destruct;
- (void)initCache;
- (id)init;

@end
