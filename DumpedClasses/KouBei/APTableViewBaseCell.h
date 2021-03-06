//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APTableViewCell.h"

@class UIColor, UIImageView, UILabel, UISwitch;

@interface APTableViewBaseCell : APTableViewCell
{
    UIColor *selectedBackground;
    double _leftMargin;
    _Bool _highlightable;
    UIImageView *_cellBackgroundImageView;
    UIColor *normalBackground;
    UILabel *_cellTitle;
    UILabel *_cellInfo;
    UIImageView *_cellLogo;
    UIImageView *_cellInfoImg;
    UIImageView *_arrowImageView;
    UIImageView *_topLineImageView;
    UIImageView *_bottomLineImageView;
    UIImageView *_separatorLineImageView;
    UISwitch *_cellSwitch;
    double _imageSize;
    double _infoWidth;
    double _infoMargin;
    struct CGSize _infoImageSize;
}

+ (float)cellHeight;
@property(nonatomic) double infoMargin; // @synthesize infoMargin=_infoMargin;
@property(nonatomic) double infoWidth; // @synthesize infoWidth=_infoWidth;
@property(nonatomic) struct CGSize infoImageSize; // @synthesize infoImageSize=_infoImageSize;
@property(nonatomic) double imageSize; // @synthesize imageSize=_imageSize;
@property(readonly, nonatomic) UISwitch *cellSwitch; // @synthesize cellSwitch=_cellSwitch;
@property(retain, nonatomic) UIImageView *separatorLineImageView; // @synthesize separatorLineImageView=_separatorLineImageView;
@property(retain, nonatomic) UIImageView *bottomLineImageView; // @synthesize bottomLineImageView=_bottomLineImageView;
@property(retain, nonatomic) UIImageView *topLineImageView; // @synthesize topLineImageView=_topLineImageView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIImageView *cellInfoImg; // @synthesize cellInfoImg=_cellInfoImg;
@property(retain, nonatomic) UIImageView *cellLogo; // @synthesize cellLogo=_cellLogo;
@property(retain, nonatomic) UILabel *cellInfo; // @synthesize cellInfo=_cellInfo;
@property(retain, nonatomic) UILabel *cellTitle; // @synthesize cellTitle=_cellTitle;
@property(retain, nonatomic) UIColor *normalBackground; // @synthesize normalBackground;
@property(retain, nonatomic) UIImageView *cellBackgroundImageView; // @synthesize cellBackgroundImageView=_cellBackgroundImageView;
@property(nonatomic) _Bool highlightable; // @synthesize highlightable=_highlightable;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)addView:(id)arg1;
- (void)setSelectedBackground:(id)arg1;
- (_Bool)canBecomeFirstResponder;
- (long long)contentViewRightGap;
- (_Bool)isShowExtend;
- (void)setInfoDetail:(id)arg1;
- (void)setSwitchWithDefault:(_Bool)arg1 withTarget:(id)arg2 withSelector:(SEL)arg3;
- (void)setInfoImgWithUrl:(id)arg1 withDefault:(id)arg2;
- (void)setInfoImg:(id)arg1;
- (void)setInfoFontColor:(id)arg1;
- (void)setMarginBetweenInfoTitleAndImage:(double)arg1;
- (void)setInfoLabelWidth:(double)arg1;
- (void)setInfo:(id)arg1;
- (void)setTheme:(id)arg1 label:(id)arg2;
- (void)setExtendLogo;
- (void)setTitle:(id)arg1;
- (void)setLogoImgWithUrl:(id)arg1 withDefault:(id)arg2;
- (void)setLogoImg:(id)arg1;
- (void)enableSeparatorLineImageView:(_Bool)arg1;
- (void)enableLineImageView:(_Bool)arg1;
- (void)enableTopLineImageView:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelectionStyle:(long long)arg1;
- (void)reset;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

