//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class WPMovieScreenModel, WPSwitchScrollView;

@interface WPCinemaDateSwitchCell : UITableViewCell
{
    WPSwitchScrollView *_switchScrollView;
    WPMovieScreenModel *_movieScreenModel;
    long long _selectedIndex;
}

@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) WPMovieScreenModel *movieScreenModel; // @synthesize movieScreenModel=_movieScreenModel;
@property(nonatomic) __weak WPSwitchScrollView *switchScrollView; // @synthesize switchScrollView=_switchScrollView;
- (void).cxx_destruct;
- (void)setupWithMovieScreenModel:(id)arg1 index:(long long)arg2 switchScrollViewDelegate:(id)arg3;
- (void)awakeFromNib;

@end

