//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, QLJCESTDevInfo;

@interface QLJCENewLoginRequest : JceObjectV2
{
    int jcev2_p_1_o_from;
    unsigned int jcev2_p_3_o_dwAppType;
    NSArray *jcev2_p_0_o_curLoginTokenList__b0x9i_VOQLJCECurLoginToken;
    QLJCESTDevInfo *jcev2_p_2_o_stDevInfo;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_dwAppType, setter=setJce_dwAppType:) unsigned int jcev2_p_3_o_dwAppType; // @synthesize jcev2_p_3_o_dwAppType;
@property(retain, nonatomic, getter=jce_stDevInfo, setter=setJce_stDevInfo:) QLJCESTDevInfo *jcev2_p_2_o_stDevInfo; // @synthesize jcev2_p_2_o_stDevInfo;
@property(nonatomic, getter=jce_from, setter=setJce_from:) int jcev2_p_1_o_from; // @synthesize jcev2_p_1_o_from;
@property(retain, nonatomic, getter=jce_curLoginTokenList, setter=setJce_curLoginTokenList:) NSArray *jcev2_p_0_o_curLoginTokenList__b0x9i_VOQLJCECurLoginToken; // @synthesize jcev2_p_0_o_curLoginTokenList__b0x9i_VOQLJCECurLoginToken;
- (void).cxx_destruct;
- (id)init;

@end
