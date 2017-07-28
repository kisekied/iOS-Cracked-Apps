//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NVMPayServices.h"

@class NSString;

@interface EPSPayServicesHandler : NSObject <NVMPayServices>
{
}

- (void)payViafreePasswordAlipayWithOrderID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)signAlipayWithUserID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)checkAlipaySignStatusForUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)onlinePayViewControllerWithMerchantOrderNo:(id)arg1 merchantOrderList:(id)arg2 merchantID:(id)arg3 restaurantID:(id)arg4 userID:(id)arg5 useNewPay:(_Bool)arg6 onlinePayResultHandler:(CDUnknownBlockType)arg7;
- (id)onlinePayViewControllerWithMerchantOrderNo:(id)arg1 merchantID:(id)arg2 restaurantID:(id)arg3 userID:(id)arg4 onlinePayResultHandler:(CDUnknownBlockType)arg5;
- (id)alipaySignActionSheetViewControllerWithUserID:(id)arg1;
- (id)alipaySignActionSheetViewController;
- (id)alipaySignStatusViewControllerWithUserID:(id)arg1;
- (id)alipaySignStatusViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
