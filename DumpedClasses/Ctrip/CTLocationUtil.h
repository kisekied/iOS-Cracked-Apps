//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CTCoordinate2D, CTCtripCity, CTGeoAddress, NSDate, NSDictionary, NSString;

@interface CTLocationUtil : NSObject
{
    _Bool _isCountryCodeCN;
    _Bool _isInternationalIP;
    _Bool _isVersionB;
    NSString *_BDMapSDKKey;
    NSString *_BDMapSDKmcode;
    CTGeoAddress *_cachedGeoAddress;
    NSDate *_cachedGeoAddressTimestamp;
    CTCtripCity *_cachedCtripCity;
    NSString *_ctripCitySOAURLString;
    NSDictionary *_ctripCitySOAParams;
    NSDate *_cachedCtripCityTimestamp;
    CTCoordinate2D *_cachedCTCoordinate2D;
    NSDate *_cachedCoordinateTimestamp;
    NSString *_geoAndCtripCitySOAURLString;
    struct CLLocationCoordinate2D _simulatedCoordinate;
}

+ (id)locateFaildDescriptionByType:(int)arg1;
+ (void)setBDMapSDKKey:(id)arg1 mcode:(id)arg2;
+ (void)setCtripCitySOAEnviornment:(id)arg1 params:(id)arg2;
+ (void)searchNearbyPoisByBDMap:(struct CLLocationCoordinate2D)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (void)reverseGeoCoding:(struct CLLocationCoordinate2D)arg1 coordinateType:(int)arg2 resultBlock:(CDUnknownBlockType)arg3;
+ (void)reverseGeoCoding:(struct CLLocationCoordinate2D)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (int)cachedCoordinateType;
+ (int)cachedHMTType;
+ (_Bool)isLocationInHMT;
+ (int)cachedCountryType;
+ (id)cachedCtripCity;
+ (id)cachedFormatedAddress;
+ (id)cachedGeoAddress;
+ (id)cachedCTCoordinate2D;
+ (struct CLLocationCoordinate2D)cachedCoordinate;
+ (_Bool)isCacheOverdue:(id)arg1 timeout:(double)arg2;
+ (struct CLLocationCoordinate2D)offsetCoordinateIfNeed:(struct CLLocationCoordinate2D)arg1;
+ (_Bool)isLocationValid:(struct CLLocationCoordinate2D)arg1;
+ (double)currentLocationAccuracy;
+ (_Bool)isLocationEnabled;
+ (_Bool)isInternationalIP;
+ (id)geoAndCtripCityForFAT;
+ (id)geoAndCtripCityForUAT;
+ (id)geoAndCtripCityURLForProduct;
+ (id)GoogleMapAPIURL;
+ (id)ctripCityURLForUAT;
+ (id)ctripCityURLForProduct;
+ (_Bool)isCTSLocationValid:(struct CLLocationCoordinate2D)arg1;
+ (id)parseGeoAddressFromDict:(id)arg1;
+ (void)reverseGeoAddressAndCtripCity:(id)arg1 needCtripCity:(_Bool)arg2 result:(CDUnknownBlockType)arg3;
+ (_Bool)isVersionB;
+ (_Bool)isCountryCodeCN;
+ (void)updateCountryCodeCN:(_Bool)arg1;
+ (_Bool)isWifiConnected;
+ (void)updateCachedCtripCity:(id)arg1;
+ (void)updateCachedGeoAddress:(id)arg1;
+ (void)updateCachedCTCoordinate2D:(id)arg1;
+ (void)reverseCtripCity:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (id)parseCtripCityResponseData:(id)arg1;
+ (void)reverseGeoCodingByBDMap:(struct CLLocationCoordinate2D)arg1 coordinateType:(int)arg2 resultBlock:(CDUnknownBlockType)arg3;
+ (id)checkedString:(id)arg1;
+ (void)reverseGeoCodingByGoogle:(struct CLLocationCoordinate2D)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (void)finishGeoCodeingByGoogle:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
+ (id)coordinateType:(struct CLLocationCoordinate2D)arg1;
+ (id)parseGoogleResponseData:(id)arg1 inCoordinate:(struct CLLocationCoordinate2D)arg2 startTimestamp:(double)arg3;
+ (id)sharedLocationUtil;
+ (void)setSimulatedCoordinate:(struct CLLocationCoordinate2D)arg1;
+ (struct CLLocationCoordinate2D)simulatedCoordinate;
+ (_Bool)isLongitude:(double)arg1 latitude:(double)arg2 inRect:(struct CT_Coordinate (*)[2])arg3;
+ (_Bool)isLocationMacau:(struct CLLocationCoordinate2D)arg1;
+ (_Bool)isLocationHongkong:(struct CLLocationCoordinate2D)arg1;
+ (_Bool)isLocationTaiwan:(struct CLLocationCoordinate2D)arg1;
+ (_Bool)isLocationMainland:(struct CLLocationCoordinate2D)arg1;
+ (_Bool)isLocationDemostic:(struct CLLocationCoordinate2D)arg1;
+ (_Bool)isLocationOversea:(struct CLLocationCoordinate2D)arg1;
+ (double)distanceFrom:(struct CLLocationCoordinate2D)arg1 toPoint:(struct CLLocationCoordinate2D)arg2;
+ (struct CLLocationCoordinate2D)offsetWSGCoordinate:(struct CLLocationCoordinate2D)arg1;
@property _Bool isVersionB; // @synthesize isVersionB=_isVersionB;
@property _Bool isInternationalIP; // @synthesize isInternationalIP=_isInternationalIP;
@property(copy) NSString *geoAndCtripCitySOAURLString; // @synthesize geoAndCtripCitySOAURLString=_geoAndCtripCitySOAURLString;
@property _Bool isCountryCodeCN; // @synthesize isCountryCodeCN=_isCountryCodeCN;
@property struct CLLocationCoordinate2D simulatedCoordinate; // @synthesize simulatedCoordinate=_simulatedCoordinate;
@property(retain) NSDate *cachedCoordinateTimestamp; // @synthesize cachedCoordinateTimestamp=_cachedCoordinateTimestamp;
@property(retain) CTCoordinate2D *cachedCTCoordinate2D; // @synthesize cachedCTCoordinate2D=_cachedCTCoordinate2D;
@property(retain) NSDate *cachedCtripCityTimestamp; // @synthesize cachedCtripCityTimestamp=_cachedCtripCityTimestamp;
@property(retain) NSDictionary *ctripCitySOAParams; // @synthesize ctripCitySOAParams=_ctripCitySOAParams;
@property(copy) NSString *ctripCitySOAURLString; // @synthesize ctripCitySOAURLString=_ctripCitySOAURLString;
@property(retain) CTCtripCity *cachedCtripCity; // @synthesize cachedCtripCity=_cachedCtripCity;
@property(retain) NSDate *cachedGeoAddressTimestamp; // @synthesize cachedGeoAddressTimestamp=_cachedGeoAddressTimestamp;
@property(retain) CTGeoAddress *cachedGeoAddress; // @synthesize cachedGeoAddress=_cachedGeoAddress;
@property(copy, nonatomic) NSString *BDMapSDKmcode; // @synthesize BDMapSDKmcode=_BDMapSDKmcode;
@property(copy, nonatomic) NSString *BDMapSDKKey; // @synthesize BDMapSDKKey=_BDMapSDKKey;
- (void).cxx_destruct;
- (id)init;

@end
