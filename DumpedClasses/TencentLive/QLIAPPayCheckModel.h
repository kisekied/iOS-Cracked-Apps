//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, QLASIHTTPRequest;

@interface QLIAPPayCheckModel : NSObject
{
    int _pf;
    int _pay_count;
    int _iaptype;
    NSString *_hlw_singlepayid;
    NSString *_product_key;
    NSString *_actid;
    NSString *_version;
    NSString *_ex_params;
    NSString *_aid;
    NSString *_offerid;
    NSString *_platform;
    NSString *_ip;
    NSString *_refer;
    CDUnknownBlockType _checkBlock;
    QLASIHTTPRequest *_orderRequest;
}

@property(retain, nonatomic) QLASIHTTPRequest *orderRequest; // @synthesize orderRequest=_orderRequest;
@property(copy, nonatomic) CDUnknownBlockType checkBlock; // @synthesize checkBlock=_checkBlock;
@property(nonatomic) int iaptype; // @synthesize iaptype=_iaptype;
@property(copy, nonatomic) NSString *refer; // @synthesize refer=_refer;
@property(copy, nonatomic) NSString *ip; // @synthesize ip=_ip;
@property(copy, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property(copy, nonatomic) NSString *offerid; // @synthesize offerid=_offerid;
@property(copy, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(nonatomic) int pay_count; // @synthesize pay_count=_pay_count;
@property(copy, nonatomic) NSString *ex_params; // @synthesize ex_params=_ex_params;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSString *actid; // @synthesize actid=_actid;
@property(nonatomic) int pf; // @synthesize pf=_pf;
@property(copy, nonatomic) NSString *product_key; // @synthesize product_key=_product_key;
@property(copy, nonatomic) NSString *hlw_singlepayid; // @synthesize hlw_singlepayid=_hlw_singlepayid;
- (void).cxx_destruct;
- (void)checkTimeOut;
- (void)doCheckBlockResult:(long long)arg1 tips:(id)arg2;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)requestDidFinishLoad:(id)arg1;
- (void)checkRequestBlock:(CDUnknownBlockType)arg1;
- (void)cancelRequest:(id)arg1;
- (id)init;

@end
