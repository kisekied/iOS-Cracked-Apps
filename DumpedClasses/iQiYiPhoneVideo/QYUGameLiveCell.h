//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYUCardBaseCell.h"

@class PosterImageView, QYHighLightLabel, UIButton, UIImageView, UILabel;

@interface QYUGameLiveCell : QYUCardBaseCell
{
    PosterImageView *_posterImg;
    QYHighLightLabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIButton *_actionBtn;
    UIImageView *_outerMark;
}

+ (id)getCellObjByContainer:(id)arg1 andIndex:(long long)arg2;
+ (long long)getLinesByCardData:(id)arg1 andShowNum:(long long)arg2;
+ (void)load;
+ (id)ptypeDicWithCell:(id)arg1 data:(id)arg2;
@property(retain, nonatomic) UIImageView *outerMark; // @synthesize outerMark=_outerMark;
@property(retain, nonatomic) UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) QYHighLightLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) PosterImageView *posterImg; // @synthesize posterImg=_posterImg;
- (void).cxx_destruct;
- (void)action:(long long)arg1;
- (void)playerActionBtnDidPressed:(id)arg1;
- (void)tapPosterImgView;
- (void)tapBg;
- (void)setCellModel:(id)arg1;
- (void)setupSubview;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

