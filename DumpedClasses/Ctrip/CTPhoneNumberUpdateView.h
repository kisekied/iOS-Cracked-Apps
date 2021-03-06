//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class NSString, UIButton, UILabel, UITextField;

@interface CTPhoneNumberUpdateView : UIView <UITextFieldDelegate>
{
    _Bool _isAdjustForKeyword;
    UILabel *_labelTitle;
    UILabel *_labelMessage;
    UITextField *_textFieldInput;
    UIView *_viewButtonContainer;
    UIButton *_buttonCancel;
    UIButton *_buttonConfirm;
    CDUnknownBlockType _updatePhoneNumberActionBlock;
    CDUnknownBlockType _cancelActionBlock;
    UIView *_viewHorizontalLine;
    UIView *_viewVerticalLine;
    UIView *_textFieldBg;
}

+ (id)PhoneNumberView;
@property(retain, nonatomic) UIView *textFieldBg; // @synthesize textFieldBg=_textFieldBg;
@property(nonatomic) _Bool isAdjustForKeyword; // @synthesize isAdjustForKeyword=_isAdjustForKeyword;
@property(retain, nonatomic) UIView *viewVerticalLine; // @synthesize viewVerticalLine=_viewVerticalLine;
@property(retain, nonatomic) UIView *viewHorizontalLine; // @synthesize viewHorizontalLine=_viewHorizontalLine;
@property(copy, nonatomic) CDUnknownBlockType cancelActionBlock; // @synthesize cancelActionBlock=_cancelActionBlock;
@property(copy, nonatomic) CDUnknownBlockType updatePhoneNumberActionBlock; // @synthesize updatePhoneNumberActionBlock=_updatePhoneNumberActionBlock;
@property(retain, nonatomic) UIButton *buttonConfirm; // @synthesize buttonConfirm=_buttonConfirm;
@property(retain, nonatomic) UIButton *buttonCancel; // @synthesize buttonCancel=_buttonCancel;
@property(retain, nonatomic) UIView *viewButtonContainer; // @synthesize viewButtonContainer=_viewButtonContainer;
@property(retain, nonatomic) UITextField *textFieldInput; // @synthesize textFieldInput=_textFieldInput;
@property(retain, nonatomic) UILabel *labelMessage; // @synthesize labelMessage=_labelMessage;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
- (void).cxx_destruct;
- (id)checkNumber:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)phoneNumber;
- (void)onUpdateButtonClicked:(id)arg1;
- (void)onCancelButtonClicked:(id)arg1;
- (id)editText;
- (void)setupViewWithTitle:(id)arg1 message:(id)arg2 updateAction:(CDUnknownBlockType)arg3 cancelAction:(CDUnknownBlockType)arg4;
- (void)didMoveToSuperview;
- (void)setupContent;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

