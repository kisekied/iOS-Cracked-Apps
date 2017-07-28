//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, NSTextAttachment, UIButton, UITableView;

@interface XYSortToolBar : UIView <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _showBorder;
    _Bool _hiddenTopBorder;
    UIView *_sortBar;
    UIView *_sortUnderBar;
    UIView *_sortBg;
    id <XYSortToolBarDelegate> _delegate;
    NSArray *_sortArray;
    NSArray *_sortDeatilArray;
    double _sortToolBarHeight;
    double _sortItemHeight;
    long long _selectedIndex;
    UIButton *_defaultSortButton;
    unsigned long long _sortTableShownPosition;
    UITableView *_underTableView;
    UIView *_topHorizontalLine;
    UIView *_bottomHorizontalLine;
    NSTextAttachment *_normalImageAttachment;
    NSTextAttachment *_selectedImageAttachment;
}

@property(retain, nonatomic) NSTextAttachment *selectedImageAttachment; // @synthesize selectedImageAttachment=_selectedImageAttachment;
@property(retain, nonatomic) NSTextAttachment *normalImageAttachment; // @synthesize normalImageAttachment=_normalImageAttachment;
@property(retain, nonatomic) UIView *bottomHorizontalLine; // @synthesize bottomHorizontalLine=_bottomHorizontalLine;
@property(retain, nonatomic) UIView *topHorizontalLine; // @synthesize topHorizontalLine=_topHorizontalLine;
@property(retain, nonatomic) UITableView *underTableView; // @synthesize underTableView=_underTableView;
@property(nonatomic) unsigned long long sortTableShownPosition; // @synthesize sortTableShownPosition=_sortTableShownPosition;
@property(retain, nonatomic) UIButton *defaultSortButton; // @synthesize defaultSortButton=_defaultSortButton;
@property(nonatomic) _Bool hiddenTopBorder; // @synthesize hiddenTopBorder=_hiddenTopBorder;
@property(nonatomic) _Bool showBorder; // @synthesize showBorder=_showBorder;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) double sortItemHeight; // @synthesize sortItemHeight=_sortItemHeight;
@property(nonatomic) double sortToolBarHeight; // @synthesize sortToolBarHeight=_sortToolBarHeight;
@property(retain, nonatomic) NSArray *sortDeatilArray; // @synthesize sortDeatilArray=_sortDeatilArray;
@property(retain, nonatomic) NSArray *sortArray; // @synthesize sortArray=_sortArray;
@property(nonatomic) id <XYSortToolBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *sortBg; // @synthesize sortBg=_sortBg;
@property(retain, nonatomic) UIView *sortUnderBar; // @synthesize sortUnderBar=_sortUnderBar;
@property(retain, nonatomic) UIView *sortBar; // @synthesize sortBar=_sortBar;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)arg1;
@property(readonly, nonatomic) _Bool underBarHidden;
- (void)hiddenSortToolBarUnderBar:(_Bool)arg1;
- (void)resetSortToolBar;
- (void)setDefaultSortButtonTitle:(id)arg1;
- (void)hiddenSortUnderBar:(_Bool)arg1;
- (void)defaultSortButtonEvent:(id)arg1;
- (void)sortBgSingleTapEvent;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
