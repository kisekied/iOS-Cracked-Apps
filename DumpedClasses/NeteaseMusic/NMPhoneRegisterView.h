//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NMPhoneNumberView, NMThirdPartLoginPanelView, UITextField;

@interface NMPhoneRegisterView : UIView
{
    NMPhoneNumberView *_phoneNumberView;
    NMThirdPartLoginPanelView *_thirdPartLoginView;
    id _delegate;
}

- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isValidNumber;
@property(readonly, nonatomic) UITextField *passwordInput;
@property(readonly, nonatomic) UITextField *phoneNumberInput; // @dynamic phoneNumberInput;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

