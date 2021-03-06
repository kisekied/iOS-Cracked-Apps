//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, TXCreateFlowCardOrderModel, TXCreateOrderModel, TXLastMtopInfo, TXPhoneFlowMsg, TXSelectedChaorenFlowItemInfo, TXSelectedEcardItemInfo, TXSelectedFlowItemInfo;

@interface TXRechargeEngine : NSObject
{
    _Bool _focus;
    _Bool _isTelFeeFirstLoad;
    _Bool _isFlowFirstLoad;
    TXPhoneFlowMsg *_sendMsg;
    long long _selectedTab;
    NSString *_clientSource;
    NSString *_subSource;
    NSString *_defaultPhoneNumber;
    NSString *_defaultFace;
    NSString *_sceneCode;
    TXCreateOrderModel *_createOrderModel;
    TXCreateFlowCardOrderModel *_createFlowCardOrderModel;
    TXLastMtopInfo *_lastQueryContactListInfo;
    TXLastMtopInfo *_lastQueryEcardInfo;
    TXLastMtopInfo *_lastQueryFlowCardInfo;
    NSMutableArray *_sendEventQueue;
    NSString *_selectedPhone;
    TXSelectedEcardItemInfo *_selectedEcardItemInfo;
    TXSelectedFlowItemInfo *_selectedFlowItemInfo;
    TXSelectedChaorenFlowItemInfo *_selectedChaorenFlowItemInfo;
}

@property(nonatomic) _Bool isFlowFirstLoad; // @synthesize isFlowFirstLoad=_isFlowFirstLoad;
@property(nonatomic) _Bool isTelFeeFirstLoad; // @synthesize isTelFeeFirstLoad=_isTelFeeFirstLoad;
@property(retain, nonatomic) TXSelectedChaorenFlowItemInfo *selectedChaorenFlowItemInfo; // @synthesize selectedChaorenFlowItemInfo=_selectedChaorenFlowItemInfo;
@property(retain, nonatomic) TXSelectedFlowItemInfo *selectedFlowItemInfo; // @synthesize selectedFlowItemInfo=_selectedFlowItemInfo;
@property(retain, nonatomic) TXSelectedEcardItemInfo *selectedEcardItemInfo; // @synthesize selectedEcardItemInfo=_selectedEcardItemInfo;
@property(retain, nonatomic) NSString *selectedPhone; // @synthesize selectedPhone=_selectedPhone;
@property(retain, nonatomic) NSMutableArray *sendEventQueue; // @synthesize sendEventQueue=_sendEventQueue;
@property(retain, nonatomic) TXLastMtopInfo *lastQueryFlowCardInfo; // @synthesize lastQueryFlowCardInfo=_lastQueryFlowCardInfo;
@property(retain, nonatomic) TXLastMtopInfo *lastQueryEcardInfo; // @synthesize lastQueryEcardInfo=_lastQueryEcardInfo;
@property(retain, nonatomic) TXLastMtopInfo *lastQueryContactListInfo; // @synthesize lastQueryContactListInfo=_lastQueryContactListInfo;
@property(retain, nonatomic) TXCreateFlowCardOrderModel *createFlowCardOrderModel; // @synthesize createFlowCardOrderModel=_createFlowCardOrderModel;
@property(retain, nonatomic) TXCreateOrderModel *createOrderModel; // @synthesize createOrderModel=_createOrderModel;
@property(nonatomic) _Bool focus; // @synthesize focus=_focus;
@property(copy, nonatomic) NSString *sceneCode; // @synthesize sceneCode=_sceneCode;
@property(copy, nonatomic) NSString *defaultFace; // @synthesize defaultFace=_defaultFace;
@property(copy, nonatomic) NSString *defaultPhoneNumber; // @synthesize defaultPhoneNumber=_defaultPhoneNumber;
@property(copy, nonatomic) NSString *subSource; // @synthesize subSource=_subSource;
@property(copy, nonatomic) NSString *clientSource; // @synthesize clientSource=_clientSource;
@property(nonatomic) long long selectedTab; // @synthesize selectedTab=_selectedTab;
@property(nonatomic) __weak TXPhoneFlowMsg *sendMsg; // @synthesize sendMsg=_sendMsg;
- (void).cxx_destruct;
- (void)addSendEventToQueue:(id)arg1;
- (_Bool)telFeeEcardList:(id)arg1 hasFace:(id)arg2;
- (long long)getUserId;
- (void)sendQueryFlowError;
- (void)queryFlowCard:(id)arg1;
- (void)flowPay:(id)arg1;
- (void)startFlowPay;
- (void)clickFlowPay:(id)arg1;
- (void)sendErrorFlowModel:(id)arg1;
- (void)sendFlowModelAndDefaultSelectedItem:(id)arg1 phoneNume:(id)arg2;
- (void)flowTabClicked;
- (void)pageEnterFlow;
- (void)sendQueryEcardError;
- (void)queryEcard:(id)arg1;
- (void)telFeePay:(id)arg1;
- (void)sendErrorTelFeeModel:(id)arg1;
- (void)sendTelFeeModelAndDefaultSelectedItem:(id)arg1 phoneNume:(id)arg2;
- (void)startTelFeePay;
- (void)clickTelFeePay:(id)arg1;
- (void)telFeeTabClicked;
- (void)pageEnterTelFee;
- (void)toAlipay:(id)arg1;
- (void)loadingEnd;
- (void)loadingStart;
- (void)clickTelFeeFlowTab;
- (void)removeHistoryContact:(id)arg1;
- (void)inputCompletedUIEvent;
- (void)startInput;
- (void)queryStockoutActivityInfo;
- (void)queryCommonConfig;
- (void)paySuccessBackToCurPage;
- (_Bool)hasCouponInSelectedItem;
- (id)pageUserInfo;
- (void)receiveUIEvent:(id)arg1;
- (id)getSendEventQueue;
- (void)moveSendEventFromQueue:(id)arg1;
- (void)pay_Fail_Notification:(id)arg1;
- (void)pay_Success_Notification:(id)arg1;
- (id)init;
- (void)dealloc;

@end

