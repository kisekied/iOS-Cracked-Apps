//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPPFeedDetailBaseItemView.h"

@class QYPPFeedRelatedVideosView, UIView;

@interface QYPPFeedDetailVideoCollectionItemView : QYPPFeedDetailBaseItemView
{
    QYPPFeedRelatedVideosView *_relatedVideoView;
    UIView *_topSeperatorGrayView;
}

+ (double)calculateViewHeight:(id)arg1 viewLogic:(id)arg2 maxWidth:(double)arg3;
@property(retain, nonatomic) UIView *topSeperatorGrayView; // @synthesize topSeperatorGrayView=_topSeperatorGrayView;
@property(retain, nonatomic) QYPPFeedRelatedVideosView *relatedVideoView; // @synthesize relatedVideoView=_relatedVideoView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)createSubViews;
- (void)updateViewWithViewLogic:(id)arg1 maxWidth:(double)arg2;

@end

