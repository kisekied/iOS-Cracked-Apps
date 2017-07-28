//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMGeneralPageTableComponent.h"

@class FMMyCityCardTopViewComponent, FMQueueViewComponent, FMSearchParameter;

@interface FMMyCityViewModel : FMGeneralPageTableComponent
{
    _Bool _refreshHead;
    FMMyCityCardTopViewComponent *_cityComponent;
    FMSearchParameter *_searchCondition;
    FMQueueViewComponent *_headViewComponent;
    long long _statusBarStyle;
}

@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(retain, nonatomic) FMQueueViewComponent *headViewComponent; // @synthesize headViewComponent=_headViewComponent;
@property(nonatomic) _Bool refreshHead; // @synthesize refreshHead=_refreshHead;
@property(retain, nonatomic) FMSearchParameter *searchCondition; // @synthesize searchCondition=_searchCondition;
@property(nonatomic) __weak FMMyCityCardTopViewComponent *cityComponent; // @synthesize cityComponent=_cityComponent;
- (void).cxx_destruct;
- (void)requestSuccessHandle:(id)arg1;
- (id)getParameters;
- (void)refreshHeaderData:(CDUnknownBlockType)arg1;
- (void)refreshAllDataWithBlock:(CDUnknownBlockType)arg1;
- (void)saveCityInfo:(id)arg1;
- (void)updateCity:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)initLocationAndRequestData:(CDUnknownBlockType)arg1;
- (id)init;
- (_Bool)isNeedLogin;
- (double)cacheTime;
- (Class)returnClass;
- (id)mtopApiVersion;
- (id)mtopApi;

@end
