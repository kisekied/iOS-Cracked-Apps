//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTJSONModel.h"

@class NSString;

@interface CTTourXItemCouponModel : CTJSONModel
{
    NSString *_promotionId;
    NSString *_recieveStatus;
}

+ (id)modelCustomPropertyMapper;
@property(copy, nonatomic) NSString *recieveStatus; // @synthesize recieveStatus=_recieveStatus;
@property(copy, nonatomic) NSString *promotionId; // @synthesize promotionId=_promotionId;
- (void).cxx_destruct;

@end

