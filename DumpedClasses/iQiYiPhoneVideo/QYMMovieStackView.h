//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface QYMMovieStackView : UIView
{
    double _totalWidth;
    double _height;
    double _spacing;
    long long _alignment;
    NSMutableArray *_stacksubViews;
    UIView *_contentBgview;
}

@property(retain, nonatomic) UIView *contentBgview; // @synthesize contentBgview=_contentBgview;
@property(retain, nonatomic) NSMutableArray *stacksubViews; // @synthesize stacksubViews=_stacksubViews;
@property(readonly, nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) double spacing; // @synthesize spacing=_spacing;
- (void).cxx_destruct;
- (void)sizeToFitSubviews;
@property(readonly, copy, nonatomic) NSArray *arrangedSubviews;
- (void)adjustSubviewsWith:(long long)arg1;
- (void)removeAllSubViews;
- (void)addItemView:(id)arg1 limitedToWidth:(double)arg2 alignment:(long long)arg3 spaceWidth:(double)arg4;
- (void)setSubViewsWithArray:(id)arg1 alignment:(long long)arg2 limitedToWidth:(double)arg3;
- (void)setSubViewsWithArray:(id)arg1 alignment:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

