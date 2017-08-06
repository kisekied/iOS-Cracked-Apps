//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DRCCheckOrderUpdateModel, DRCOrderDetailModel, DRCOrderInfoViewModel, DRCOrderUpdateResultModel, RACCommand;

@interface DRCUpdateOrderViewModel : NSObject
{
    RACCommand *_submitCommand;
    RACCommand *_modifyAddressCommand;
    RACCommand *_modifyTimeCommand;
    DRCCheckOrderUpdateModel *_checkOrderUpdateModel;
    DRCOrderDetailModel *_orderDetailModel;
    DRCOrderInfoViewModel *_fetchOrderInfoViewModel;
    DRCOrderInfoViewModel *_returnOrderInfoViewModel;
    DRCOrderInfoViewModel *_originalFetchOrderInfoViewModel;
    DRCOrderInfoViewModel *_originalReturnOrderInfoViewModel;
    DRCOrderUpdateResultModel *_orderUpdateResultModel;
}

@property(retain, nonatomic) DRCOrderUpdateResultModel *orderUpdateResultModel; // @synthesize orderUpdateResultModel=_orderUpdateResultModel;
@property(retain, nonatomic) DRCOrderInfoViewModel *originalReturnOrderInfoViewModel; // @synthesize originalReturnOrderInfoViewModel=_originalReturnOrderInfoViewModel;
@property(retain, nonatomic) DRCOrderInfoViewModel *originalFetchOrderInfoViewModel; // @synthesize originalFetchOrderInfoViewModel=_originalFetchOrderInfoViewModel;
@property(retain, nonatomic) DRCOrderInfoViewModel *returnOrderInfoViewModel; // @synthesize returnOrderInfoViewModel=_returnOrderInfoViewModel;
@property(retain, nonatomic) DRCOrderInfoViewModel *fetchOrderInfoViewModel; // @synthesize fetchOrderInfoViewModel=_fetchOrderInfoViewModel;
@property(retain, nonatomic) DRCOrderDetailModel *orderDetailModel; // @synthesize orderDetailModel=_orderDetailModel;
@property(retain, nonatomic) DRCCheckOrderUpdateModel *checkOrderUpdateModel; // @synthesize checkOrderUpdateModel=_checkOrderUpdateModel;
@property(retain, nonatomic) RACCommand *modifyTimeCommand; // @synthesize modifyTimeCommand=_modifyTimeCommand;
@property(retain, nonatomic) RACCommand *modifyAddressCommand; // @synthesize modifyAddressCommand=_modifyAddressCommand;
@property(retain, nonatomic) RACCommand *submitCommand; // @synthesize submitCommand=_submitCommand;
- (void).cxx_destruct;
- (id)getUpdateOrderSucceedParams;
- (void)goToDeposit:(id)arg1;
- (void)showCostAlertWithData:(id)arg1;
- (void)handleErrorCode:(long long)arg1 message:(id)arg2;
- (void)fillRequestParams:(id)arg1;
- (_Bool)isOrderInfoModified;
- (void)requestUpdateOrder;
- (void)requestPreUpdateOrder;
- (void)requestModifyInfo;
- (void)changeReturnTime;
- (void)changeFetchTime;
- (_Bool)isShowModifyTipsMessage;
- (_Bool)isShowFetchInfoView;
- (void)saveOriginalOrderData;
- (void)initChildViewModels;
- (void)bind;
- (id)init;

@end
