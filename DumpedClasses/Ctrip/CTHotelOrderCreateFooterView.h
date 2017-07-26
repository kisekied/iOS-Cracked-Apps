//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface CTHotelOrderCreateFooterView : UIView
{
    _Bool _useCoupon;
    UIButton *_checkButton;
    _Bool _useCouponChecked;
    id <CTHotelOrderCreateFooterViewDelegate> _delegate;
}

@property(nonatomic) __weak id <CTHotelOrderCreateFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool useCouponChecked; // @synthesize useCouponChecked=_useCouponChecked;
- (void).cxx_destruct;
- (void)sellingPointViewClicked:(id)arg1;
- (void)cashToPerpay:(id)arg1;
- (void)helpButtonClicked:(id)arg1;
- (void)checkButtonClicked:(id)arg1;
- (double)createSellingPointViewByHeight:(double)arg1;
- (double)createStraightBackRemark:(id)arg1 offsetY:(double)arg2;
- (double)createCoupon:(id)arg1 useCoupon:(_Bool)arg2 quanCouponRemark:(id)arg3 offsetY:(double)arg4;
- (id)createLabelWithstraightBackRemark:(id)arg1 fontSize:(int)arg2 inFrame:(struct CGRect)arg3 superView:(id)arg4;
- (double)createCashToPrepay:(id)arg1 offsetY:(double)arg2;
- (id)initWithCanUseCoupon:(_Bool)arg1 isUseCoupon:(_Bool)arg2 couponAmount:(id)arg3 quanCouponRemark:(id)arg4 straightBackRemark:(id)arg5 guranteeRemark:(id)arg6 delegate:(id)arg7 cashToPrepay:(_Bool)arg8 cashToPrepayRemark:(id)arg9 isShowSellingPoint:(_Bool)arg10;

@end
