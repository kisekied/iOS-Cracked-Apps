//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQViewController.h"

#import "ChosenTagShowViewDlegate.h"
#import "TagSetsViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, UILabel, UIScrollView, UIView, UserSummaryChosenTagShowView, UserSummaryTagScrollView;

@interface UserSummaryCardTagEditingViewController : QQViewController <TagSetsViewDelegate, ChosenTagShowViewDlegate, UIScrollViewDelegate>
{
    NSString *_uin;
    UIView *_bgView;
    UILabel *_tagTitleLabel;
    UILabel *_countLabel;
    UserSummaryTagScrollView *_labelSetView;
    UserSummaryChosenTagShowView *_labelShowView;
    UIScrollView *_scrollView;
    NSMutableArray *selectedTagAry;
    NSMutableArray *tagsetViews;
    UIView *_nightModeMaskView;
}

@property(copy, nonatomic) NSString *uin; // @synthesize uin=_uin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
