//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBaseComProtocol.h"
#import "SContainerOperateDelegate.h"
#import "SPageSwitchDelegate.h"

@class NSString, SPayBillCom;

@protocol SPayBillComProtocol <SBaseComProtocol, SPageSwitchDelegate, SContainerOperateDelegate>

@optional
- (void)payBill:(SPayBillCom *)arg1 loadDataForPage:(_Bool)arg2;
- (void)payBillRefreshModel:(SPayBillCom *)arg1;
- (void)payBill:(SPayBillCom *)arg1 keyBoardWillHidden:(_Bool)arg2;
- (void)payBill:(SPayBillCom *)arg1 keyBoradHeight:(unsigned long long)arg2;
- (void)payBill:(SPayBillCom *)arg1 inputFee:(NSString *)arg2;
@end

