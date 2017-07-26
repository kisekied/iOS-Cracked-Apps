//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCacheBean.h"

@class CTFlightModifyINvoiceAndDeliveryViewModel, ContactInfoInOrderDetailModel, DeliverInfoInOrderDetailModel, NSMutableArray, NSString;

@interface CTIntlFlightOrderDetailCacheBean : CTCacheBean
{
    _Bool _isNeedModifyInvoice;
    _Bool _isNeedModifyDelivery;
    _Bool _isSendForFree;
    _Bool _iscombineInvoice;
    int _tripType;
    int _reimbursementOptype;
    int _IntInvoiceType;
    int _modityResult;
    int _operationType;
    long long _intOrderId;
    NSString *_token;
    DeliverInfoInOrderDetailModel *_deliverInfoModel;
    ContactInfoInOrderDetailModel *_contactInfoModel;
    NSString *_contact;
    NSString *_contactMobile;
    NSString *_estimateDeliveryDesc;
    NSString *_delivery;
    NSString *_gUID;
    NSMutableArray *_invoiceInfoList;
    CTFlightModifyINvoiceAndDeliveryViewModel *_needModifyInvoiceAndDeliveryModel;
    NSMutableArray *_deliveryList;
    NSMutableArray *_passengerList;
    NSMutableArray *_avaInvList;
    NSString *_resultMessage;
}

@property(nonatomic) int operationType; // @synthesize operationType=_operationType;
@property(retain, nonatomic) NSString *resultMessage; // @synthesize resultMessage=_resultMessage;
@property(nonatomic) int modityResult; // @synthesize modityResult=_modityResult;
@property(retain, nonatomic) NSMutableArray *avaInvList; // @synthesize avaInvList=_avaInvList;
@property(nonatomic) int IntInvoiceType; // @synthesize IntInvoiceType=_IntInvoiceType;
@property(retain, nonatomic) NSMutableArray *passengerList; // @synthesize passengerList=_passengerList;
@property(nonatomic) _Bool iscombineInvoice; // @synthesize iscombineInvoice=_iscombineInvoice;
@property(nonatomic) int reimbursementOptype; // @synthesize reimbursementOptype=_reimbursementOptype;
@property(nonatomic) _Bool isSendForFree; // @synthesize isSendForFree=_isSendForFree;
@property(retain, nonatomic) NSMutableArray *deliveryList; // @synthesize deliveryList=_deliveryList;
@property(retain, nonatomic) CTFlightModifyINvoiceAndDeliveryViewModel *needModifyInvoiceAndDeliveryModel; // @synthesize needModifyInvoiceAndDeliveryModel=_needModifyInvoiceAndDeliveryModel;
@property(retain, nonatomic) NSMutableArray *invoiceInfoList; // @synthesize invoiceInfoList=_invoiceInfoList;
@property(nonatomic) _Bool isNeedModifyDelivery; // @synthesize isNeedModifyDelivery=_isNeedModifyDelivery;
@property(nonatomic) _Bool isNeedModifyInvoice; // @synthesize isNeedModifyInvoice=_isNeedModifyInvoice;
@property(copy, nonatomic) NSString *gUID; // @synthesize gUID=_gUID;
@property(copy, nonatomic) NSString *delivery; // @synthesize delivery=_delivery;
@property(copy, nonatomic) NSString *estimateDeliveryDesc; // @synthesize estimateDeliveryDesc=_estimateDeliveryDesc;
@property(copy, nonatomic) NSString *contactMobile; // @synthesize contactMobile=_contactMobile;
@property(copy, nonatomic) NSString *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) ContactInfoInOrderDetailModel *contactInfoModel; // @synthesize contactInfoModel=_contactInfoModel;
@property(retain, nonatomic) DeliverInfoInOrderDetailModel *deliverInfoModel; // @synthesize deliverInfoModel=_deliverInfoModel;
@property(nonatomic) int tripType; // @synthesize tripType=_tripType;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) long long intOrderId; // @synthesize intOrderId=_intOrderId;
- (void).cxx_destruct;
- (void)save:(id)arg1 nextCacheBean:(id)arg2;

@end
