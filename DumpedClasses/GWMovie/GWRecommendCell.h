//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class GWMoviePolicyImageView, NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface GWRecommendCell : UITableViewCell
{
    UILabel *_timeLabel;
    UIView *_baseView;
    GWMoviePolicyImageView *_coverImageView;
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
    UILabel *_endTimeLabel;
    NSLayoutConstraint *_timeLabelTop;
    NSLayoutConstraint *_baseViewHeight;
    NSLayoutConstraint *_coverImageViewLeading;
    NSLayoutConstraint *_coverImageViewTrailing;
    NSLayoutConstraint *_coverImageViewTop;
    NSLayoutConstraint *_coverImageViewHeight;
    NSLayoutConstraint *_titleLabelLeading;
    NSLayoutConstraint *_titleLabelTrailing;
    NSLayoutConstraint *_titleLabelTop;
    NSLayoutConstraint *_iconImageViewTop;
    NSLayoutConstraint *_iconImageViewLeading;
    NSLayoutConstraint *_endTimeLabelBottom;
    NSLayoutConstraint *_endTimeLabelTrailing;
    NSLayoutConstraint *_endTimeLabelLeading;
    NSLayoutConstraint *_endTimeTop;
    NSLayoutConstraint *_timeLabelHeight;
}

@property(nonatomic) __weak NSLayoutConstraint *timeLabelHeight; // @synthesize timeLabelHeight=_timeLabelHeight;
@property(nonatomic) __weak NSLayoutConstraint *endTimeTop; // @synthesize endTimeTop=_endTimeTop;
@property(nonatomic) __weak NSLayoutConstraint *endTimeLabelLeading; // @synthesize endTimeLabelLeading=_endTimeLabelLeading;
@property(nonatomic) __weak NSLayoutConstraint *endTimeLabelTrailing; // @synthesize endTimeLabelTrailing=_endTimeLabelTrailing;
@property(nonatomic) __weak NSLayoutConstraint *endTimeLabelBottom; // @synthesize endTimeLabelBottom=_endTimeLabelBottom;
@property(nonatomic) __weak NSLayoutConstraint *iconImageViewLeading; // @synthesize iconImageViewLeading=_iconImageViewLeading;
@property(nonatomic) __weak NSLayoutConstraint *iconImageViewTop; // @synthesize iconImageViewTop=_iconImageViewTop;
@property(nonatomic) __weak NSLayoutConstraint *titleLabelTop; // @synthesize titleLabelTop=_titleLabelTop;
@property(nonatomic) __weak NSLayoutConstraint *titleLabelTrailing; // @synthesize titleLabelTrailing=_titleLabelTrailing;
@property(nonatomic) __weak NSLayoutConstraint *titleLabelLeading; // @synthesize titleLabelLeading=_titleLabelLeading;
@property(nonatomic) __weak NSLayoutConstraint *coverImageViewHeight; // @synthesize coverImageViewHeight=_coverImageViewHeight;
@property(nonatomic) __weak NSLayoutConstraint *coverImageViewTop; // @synthesize coverImageViewTop=_coverImageViewTop;
@property(nonatomic) __weak NSLayoutConstraint *coverImageViewTrailing; // @synthesize coverImageViewTrailing=_coverImageViewTrailing;
@property(nonatomic) __weak NSLayoutConstraint *coverImageViewLeading; // @synthesize coverImageViewLeading=_coverImageViewLeading;
@property(nonatomic) __weak NSLayoutConstraint *baseViewHeight; // @synthesize baseViewHeight=_baseViewHeight;
@property(nonatomic) __weak NSLayoutConstraint *timeLabelTop; // @synthesize timeLabelTop=_timeLabelTop;
@property(nonatomic) __weak UILabel *endTimeLabel; // @synthesize endTimeLabel=_endTimeLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak GWMoviePolicyImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(nonatomic) __weak UIView *baseView; // @synthesize baseView=_baseView;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (id)textWithStartDateTime:(id)arg1 endDateTime:(id)arg2;
- (void)showCellWithModel:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end
