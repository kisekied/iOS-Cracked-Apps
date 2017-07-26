//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZIntelligenceBannerBaseView.h"

@class NSMutableArray, UIImageView, UILabel, UIView;

@interface QZPassiveBannerView : QZIntelligenceBannerBaseView
{
    UILabel *_desLabel;
    NSMutableArray *_avatarViewArray;
    UIView *_avatarViews;
    UIImageView *_backgroundView;
    UIImageView *_arrowView;
}

- (void).cxx_destruct;
- (void)reportClose;
- (void)reportClick;
- (void)reportDisplay;
- (id)countInfo;
- (void)updateAvatarViews;
- (void)updateDesLabel;
- (void)updateArrowView;
- (void)updateBackgroundView;
- (void)updateViewFrame;
- (void)updateBanner;
- (long long)bannerType;
- (id)initWithFrame:(struct CGRect)arg1;

@end
