//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APDPBGeneratedMessage.h"

@class NSString, mobilelbsDistrictInfoPB;

@interface mobilelbsLocateOptimizeResponsePB : APDPBGeneratedMessage
{
}

+ (CDStruct_af61540b *)_fieldInfos;

// Remaining properties
@property(nonatomic) double accuracy; // @dynamic accuracy;
@property(retain, nonatomic) mobilelbsDistrictInfoPB *districtInfo; // @dynamic districtInfo;
@property(readonly) _Bool hasAccuracy; // @dynamic hasAccuracy;
@property(readonly) _Bool hasDistrictInfo; // @dynamic hasDistrictInfo;
@property(readonly) _Bool hasLatitude; // @dynamic hasLatitude;
@property(readonly) _Bool hasLongitude; // @dynamic hasLongitude;
@property(readonly) _Bool hasMessage; // @dynamic hasMessage;
@property(readonly) _Bool hasStatusCode; // @dynamic hasStatusCode;
@property(readonly) _Bool hasSuccess; // @dynamic hasSuccess;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(retain, nonatomic) NSString *message; // @dynamic message;
@property(nonatomic) int statusCode; // @dynamic statusCode;
@property(nonatomic) _Bool success; // @dynamic success;

@end
