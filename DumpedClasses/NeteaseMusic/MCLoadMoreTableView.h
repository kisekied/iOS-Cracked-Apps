//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

@class MCLoadMoreTableFooterView;

@interface MCLoadMoreTableView : UITableView
{
    MCLoadMoreTableFooterView *_loadMoreView;
    double _footerEdgeInset;
}

@property(nonatomic) double footerEdgeInset; // @synthesize footerEdgeInset=_footerEdgeInset;
@property(readonly, retain, nonatomic) MCLoadMoreTableFooterView *loadMoreView; // @synthesize loadMoreView=_loadMoreView;
- (void)dealloc;
@property(nonatomic) id <MCLoadMoreTableFooterViewDelegate> loadmoreDelegate; // @dynamic loadmoreDelegate;
- (void)setContentSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)internalInit;

@end
