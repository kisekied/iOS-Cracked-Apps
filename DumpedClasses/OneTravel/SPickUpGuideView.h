//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SPickUpGuideModel, UIImageView, UILabel;

@interface SPickUpGuideView : UIView
{
    SPickUpGuideModel *_guideModel;
    UILabel *_guideTitleLabel;
    UILabel *_guideContentLabel;
    UIImageView *_guideImageView;
}

@property(retain, nonatomic) UIImageView *guideImageView; // @synthesize guideImageView=_guideImageView;
@property(retain, nonatomic) UILabel *guideContentLabel; // @synthesize guideContentLabel=_guideContentLabel;
@property(retain, nonatomic) UILabel *guideTitleLabel; // @synthesize guideTitleLabel=_guideTitleLabel;
@property(retain, nonatomic) SPickUpGuideModel *guideModel; // @synthesize guideModel=_guideModel;
- (void).cxx_destruct;
@property(readonly, nonatomic) double guideViewHeight;
- (void)layoutSubviews;
- (void)initializeControl;
- (id)initWithFrame:(struct CGRect)arg1;

@end
