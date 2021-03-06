//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface QQPersonalThemeSelectionIndicatorView : UIView
{
    long long _selectedIndex;
    NSArray *_dotViews;
    int _xo;
    long long _selectionCount;
}

@property(readonly, nonatomic) long long selectionCount; // @synthesize selectionCount=_selectionCount;
@property(nonatomic) long long selectedIndex; // @dynamic selectedIndex;
- (id)initWithSelectionCount:(long long)arg1;
- (id)dotImageBlack;
- (id)dotImageWhite;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSArray *dotViews; // @dynamic dotViews;

@end

