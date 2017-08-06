//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, UIButton, UIControl, UILabel, UIPickerView;
@protocol GWChooseCityPickerViewDelegate;

@interface GWChooseCityPickerView : UIView <UIPickerViewDelegate, UIPickerViewDataSource>
{
    long long _pickerRow;
    long long _pickerComponent;
    UIButton *_cancelbtn;
    UIButton *_surebtn;
    id <GWChooseCityPickerViewDelegate> _delegate;
    UILabel *_screenLabel;
    NSString *_dpid;
    NSMutableArray *_screenArray;
    UIPickerView *_picker;
    UIControl *_backgroundCoverView;
    NSDictionary *_pickerDic;
    NSArray *_provinceArray;
    NSArray *_cityArray;
    NSArray *_townArray;
    NSArray *_selectedArray;
}

@property(retain, nonatomic) NSArray *selectedArray; // @synthesize selectedArray=_selectedArray;
@property(retain, nonatomic) NSArray *townArray; // @synthesize townArray=_townArray;
@property(retain, nonatomic) NSArray *cityArray; // @synthesize cityArray=_cityArray;
@property(retain, nonatomic) NSArray *provinceArray; // @synthesize provinceArray=_provinceArray;
@property(retain, nonatomic) NSDictionary *pickerDic; // @synthesize pickerDic=_pickerDic;
@property(retain, nonatomic) UIControl *backgroundCoverView; // @synthesize backgroundCoverView=_backgroundCoverView;
@property(retain, nonatomic) UIPickerView *picker; // @synthesize picker=_picker;
@property(retain, nonatomic) NSMutableArray *screenArray; // @synthesize screenArray=_screenArray;
@property(copy, nonatomic) NSString *dpid; // @synthesize dpid=_dpid;
@property(retain, nonatomic) UILabel *screenLabel; // @synthesize screenLabel=_screenLabel;
@property(nonatomic) __weak id <GWChooseCityPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *surebtn; // @synthesize surebtn=_surebtn;
@property(retain, nonatomic) UIButton *cancelbtn; // @synthesize cancelbtn=_cancelbtn;
- (void).cxx_destruct;
- (void)setSelectProvinceName:(id)arg1 cityName:(id)arg2 countrys:(id)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (void)dismmis;
- (void)show;
- (void)selectbtn:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)getPickerDataWithDpid:(id)arg1 withList:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 withDpid:(id)arg2 withProvieList:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
