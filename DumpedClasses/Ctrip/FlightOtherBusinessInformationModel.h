//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString, PriceType;

@interface FlightOtherBusinessInformationModel : CTBusinessBean
{
    int businessType;
    NSString *title;
    NSString *descKey;
    NSString *url;
    PriceType *price;
    NSString *extend;
}

@property(copy, nonatomic) NSString *extend; // @synthesize extend;
@property(retain, nonatomic) PriceType *price; // @synthesize price;
@property(copy, nonatomic) NSString *url; // @synthesize url;
@property(copy, nonatomic) NSString *descKey; // @synthesize descKey;
@property(copy, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) int businessType; // @synthesize businessType;
- (void).cxx_destruct;
- (id)getAnnotationArray;
- (id)init;

@end
