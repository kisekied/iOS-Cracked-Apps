//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class CTDiscoverCityInfoModel, CTDiscoverHomeDataCenter, CTDiscoverPageControl, NSLayoutConstraint, NSMutableArray, NSString, UICollectionView, UIView;

@interface CTDiscoverTravelServiceSectionCell : UICollectionViewCell <UIScrollViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
{
    NSMutableArray *travelServices;
    UICollectionView *_mainCollectionView;
    UIView *_bottomView;
    NSLayoutConstraint *_onePxViewHeightConstraint;
    CTDiscoverCityInfoModel *_cityInfoModel;
    CTDiscoverPageControl *_pageControl;
    CTDiscoverHomeDataCenter *_dataCenter;
}

+ (double)viewHeight;
@property(retain, nonatomic) CTDiscoverHomeDataCenter *dataCenter; // @synthesize dataCenter=_dataCenter;
@property(retain, nonatomic) CTDiscoverPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) CTDiscoverCityInfoModel *cityInfoModel; // @synthesize cityInfoModel=_cityInfoModel;
@property(retain, nonatomic) NSLayoutConstraint *onePxViewHeightConstraint; // @synthesize onePxViewHeightConstraint=_onePxViewHeightConstraint;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UICollectionView *mainCollectionView; // @synthesize mainCollectionView=_mainCollectionView;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)addPageControl;
- (void)resetSectionCell:(id)arg1 city:(id)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
