//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NSCoding.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, UIImage, UIScrollView, XYPageControl;

@interface FMHorListView : UIView <NSCoding, UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    long long _columns;
    double _height;
    NSMutableArray *_columnRects;
    struct _SRange _visibleRange;
    struct CGRect _visibleRect;
    NSMutableArray *_visibleListCells;
    NSMutableDictionary *_reusableListCells;
    _Bool scrolled;
    _Bool pageChanged;
    _Bool _pageEnable;
    _Bool _pageControlEnable;
    UIScrollView *_scrollView;
    XYPageControl *_pageControl;
    id <FMHorListViewDelegate> _delegate;
    id <FMHorListViewDataSource> _dataSource;
    UIImage *_activeImage;
    UIImage *_inactiveImage;
    long long _leftPadding;
}

@property(nonatomic) long long leftPadding; // @synthesize leftPadding=_leftPadding;
@property(nonatomic) _Bool pageControlEnable; // @synthesize pageControlEnable=_pageControlEnable;
@property(retain, nonatomic) UIImage *inactiveImage; // @synthesize inactiveImage=_inactiveImage;
@property(retain, nonatomic) UIImage *activeImage; // @synthesize activeImage=_activeImage;
@property(nonatomic) _Bool pageEnable; // @synthesize pageEnable=_pageEnable;
@property(nonatomic) id <FMHorListViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) id <FMHorListViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) XYPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)didSelectedCell:(id)arg1 index:(long long)arg2;
- (void)scrollViewDidTap:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)inqueueReusableWithView:(id)arg1;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (void)reLayoutSubViewsWithOffset:(double)arg1;
- (id)requestCellWithIndex:(long long)arg1 direction:(int)arg2;
- (void)reloadData;
- (void)loadData;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)imageViewCell;
- (id)voiceViewCell;
- (id)videoViewCell;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

