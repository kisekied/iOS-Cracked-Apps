//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, QYSayingTextView, UIButton, UIImageView, UILabel, UITextField;

@interface QYInfoEditCell : UITableViewCell <UITextFieldDelegate>
{
    int _cellType;
    UITextField *_tfInfoValue;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UIButton *_qyAccessoryView;
    UILabel *_contentLabel;
    QYSayingTextView *_sayTextView;
    UILabel *_tfPlaceholder;
}

@property(retain, nonatomic) UILabel *tfPlaceholder; // @synthesize tfPlaceholder=_tfPlaceholder;
@property(retain, nonatomic) QYSayingTextView *sayTextView; // @synthesize sayTextView=_sayTextView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIButton *qyAccessoryView; // @synthesize qyAccessoryView=_qyAccessoryView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) int cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) UITextField *tfInfoValue; // @synthesize tfInfoValue=_tfInfoValue;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)ShowPH;
- (void)HidePH;
- (void)setContentTfInfoText:(id)arg1;
- (void)setContentLabelText:(id)arg1 withIsHighlighted:(_Bool)arg2;
- (void)setTitleText:(id)arg1;
- (void)setTextFieldDelegate:(id)arg1;
- (void)setTextViewDelegate:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

