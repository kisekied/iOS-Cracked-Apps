//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DiDiPOIEntityModel, NSDate, SDDJMultiDriForm, SDDJPeriodItem, SDDJSingleDriForm;

@interface SDDJFormStore : NSObject
{
    _Bool _isTakeCarPlaceGetting;
    _Bool _isPaymentChanged;
    long long _selDriCount;
    SDDJSingleDriForm *_singleForm;
    SDDJMultiDriForm *_multiForm;
    DiDiPOIEntityModel *_startCityAddr;
    DiDiPOIEntityModel *_destCityAddr;
    NSDate *_startDate;
    SDDJPeriodItem *_selPeriodItem;
    long long _tripType;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isPaymentChanged; // @synthesize isPaymentChanged=_isPaymentChanged;
@property(nonatomic) _Bool isTakeCarPlaceGetting; // @synthesize isTakeCarPlaceGetting=_isTakeCarPlaceGetting;
@property(nonatomic) long long tripType; // @synthesize tripType=_tripType;
@property(retain, nonatomic) SDDJPeriodItem *selPeriodItem; // @synthesize selPeriodItem=_selPeriodItem;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) DiDiPOIEntityModel *destCityAddr; // @synthesize destCityAddr=_destCityAddr;
@property(copy, nonatomic) DiDiPOIEntityModel *startCityAddr; // @synthesize startCityAddr=_startCityAddr;
@property(retain, nonatomic) SDDJMultiDriForm *multiForm; // @synthesize multiForm=_multiForm;
@property(retain, nonatomic) SDDJSingleDriForm *singleForm; // @synthesize singleForm=_singleForm;
@property(nonatomic) long long selDriCount; // @synthesize selDriCount=_selDriCount;
- (void).cxx_destruct;
- (_Bool)isDatesBothAvailable;
- (void)clearFormData;
- (void)userLogout;
- (void)resetCityServiceState;
- (void)resetNormalServiceState;
- (_Bool)isMultiDrivers;
- (_Bool)isEnterprisePaymentType;
- (_Bool)isSatisfyEnterpriseForm;
- (_Bool)canSatisfyConfirmPageWithSubType:(long long)arg1;
- (_Bool)canSatisfyEstimateWithSubType:(long long)arg1;
- (_Bool)isCrossCityState;
@property(copy, nonatomic) NSDate *reservationDate;
@property(copy, nonatomic) DiDiPOIEntityModel *destAddr;
@property(copy, nonatomic) DiDiPOIEntityModel *startAddr;
- (id)init;

@end

