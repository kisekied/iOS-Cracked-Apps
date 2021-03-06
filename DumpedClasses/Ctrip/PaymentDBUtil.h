//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTServiceController, NSArray, NSDictionary, NSString;

@interface PaymentDBUtil : NSObject
{
    _Bool _needRegetCountry;
    _Bool _needRegetText;
    NSString *_serverDataVersion;
    NSString *_serverBankDataVersion;
    CTServiceController *_serviceController;
    NSArray *_allCountries;
    NSDictionary *_allTextDic;
}

+ (id)getBindParamsDicWithData:(id)arg1 dataType:(long long)arg2 operateType:(long long)arg3;
+ (id)getSqlWithDataType:(long long)arg1 operateType:(long long)arg2;
+ (_Bool)writeExtendData:(id)arg1 type:(long long)arg2;
+ (id)selectStandPayTextFromDB;
+ (id)selectAllCountryFromDB;
+ (_Bool)updatePayVersion:(int)arg1 versionName:(id)arg2;
+ (id)getCardNameByCardTypeID:(int)arg1;
+ (_Bool)arrayEmptyOrNull:(id)arg1;
+ (void)updateDebitCardData:(id)arg1;
+ (id)getOverseaCardInfoListForAll:(id)arg1;
+ (id)addAliCreditCardModelList:(id)arg1 SubID_DC_array:(id)arg2;
+ (id)changeMapByCreditCardList:(id)arg1;
+ (void)regetAllTextFromDB;
+ (void)regetAllCountryFromDB;
+ (void)regetAllCardsFromDB;
+ (id)getAllIDCardTypesFromDB;
+ (id)getCardBankNameWithCardBankId:(int)arg1;
+ (id)getCardTableModelWithCardTypeId:(int)arg1;
+ (id)getCardTableModelWithCard:(id)arg1;
+ (id)getAllCardsFromDB;
+ (id)sharedLock;
+ (id)getOverseaCardInfoFromDB:(id)arg1;
+ (id)addCardInfoFromDB:(id)arg1;
+ (void)updateExtendData:(id)arg1;
+ (id)getRapidPayTextForBusinessType:(int)arg1;
+ (id)getStandPayTextFromDB;
+ (id)getAllCountryFromDB;
+ (int)getIsNeedUpdateByName:(id)arg1;
+ (int)getVersionByName:(id)arg1;
+ (id)getAssociateCardForCredit:(id)arg1 keywords:(id)arg2;
+ (id)getCardInfoListForUsedCard:(id)arg1;
+ (id)getCardInfoMap:(id)arg1 cardType:(int)arg2 supportPayType:(int)arg3;
+ (id)shareInstance;
@property(nonatomic) _Bool needRegetText; // @synthesize needRegetText=_needRegetText;
@property(nonatomic) _Bool needRegetCountry; // @synthesize needRegetCountry=_needRegetCountry;
@property(retain, nonatomic) NSDictionary *allTextDic; // @synthesize allTextDic=_allTextDic;
@property(retain, nonatomic) NSArray *allCountries; // @synthesize allCountries=_allCountries;
@property(retain, nonatomic) CTServiceController *serviceController; // @synthesize serviceController=_serviceController;
@property(copy, nonatomic) NSString *serverBankDataVersion; // @synthesize serverBankDataVersion=_serverBankDataVersion;
@property(copy, nonatomic) NSString *serverDataVersion; // @synthesize serverDataVersion=_serverDataVersion;
- (void).cxx_destruct;
- (void)syncExtendData;
- (void)syncDebitCardData;
- (void)checkAndUpdateWithType:(long long)arg1;
- (void)checkAndUpdate;
- (id)init;

@end

