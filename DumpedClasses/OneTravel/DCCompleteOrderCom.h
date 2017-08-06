//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCBaseComponent.h"

@class DCCompleteOrderStore, DCOrderViewModel, ONEAlertView;

@interface DCCompleteOrderCom : DCBaseComponent
{
    DCOrderViewModel *_orderVModel;
    ONEAlertView *_alertView;
    DCCompleteOrderStore *_dataStore;
}

+ (id)alertViewModel:(id)arg1 message:(id)arg2 confirm:(id)arg3 cancel:(id)arg4;
@property(retain, nonatomic) DCCompleteOrderStore *dataStore; // @synthesize dataStore=_dataStore;
@property(retain, nonatomic) ONEAlertView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) DCOrderViewModel *orderVModel; // @synthesize orderVModel=_orderVModel;
- (void).cxx_destruct;
- (id)getToastInView;
- (void)clickedEmergeEvent:(id)arg1;
- (id)showOrderConfirmEmerge:(id)arg1 eventBlock:(CDUnknownBlockType)arg2;
- (id)showNumberConfigEmerge:(id)arg1 eventBlock:(CDUnknownBlockType)arg2;
- (id)showNumberSelectEmerge:(id)arg1 title:(id)arg2 subtitle:(id)arg3 eventBlock:(CDUnknownBlockType)arg4;
- (id)showCarpoolEmerge:(id)arg1 eventBlock:(CDUnknownBlockType)arg2;
- (id)showTimeSelectEmerge:(id)arg1 title:(id)arg2 subtitle:(id)arg3 eventBlock:(CDUnknownBlockType)arg4;
- (_Bool)isTopVC;
- (void)refreshOrderModel:(id)arg1;
- (id)analyticsEvent:(id)arg1;
- (id)analyticsParams;
- (void)stopRefresh;
- (void)beginRefresh;
- (void)arrivalRefreshTime;
- (void)comWillDisAppear;
- (void)comWillAppear;
- (void)showFreeAlert:(id)arg1;
- (void)reloadOrderGetInfo;
- (void)orderProcessOperation;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(nonatomic) __weak id <DCCompleteOrdeDelegate> delegate; // @dynamic delegate;

@end
