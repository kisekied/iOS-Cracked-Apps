//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface PaymentCreditCardUpdateRequest : CTBusinessBean
{
    int serviceVersion;
    int platform;
    int cardTypeID;
    int cardInfoId;
    int cardTypeCategory;
    NSString *mobilephone;
}

@property(copy, nonatomic) NSString *mobilephone; // @synthesize mobilephone;
@property(nonatomic) int cardTypeCategory; // @synthesize cardTypeCategory;
@property(nonatomic) int cardInfoId; // @synthesize cardInfoId;
@property(nonatomic) int cardTypeID; // @synthesize cardTypeID;
@property(nonatomic) int platform; // @synthesize platform;
@property(nonatomic) int serviceVersion; // @synthesize serviceVersion;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)getAnnotationArray;
- (id)init;

@end

