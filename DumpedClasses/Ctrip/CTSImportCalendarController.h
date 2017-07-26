//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTRootViewController.h"

#import "CTSCalendarItemCellDelegate.h"
#import "CTSCalendarWidgetDelegate.h"
#import "CTSImportCalendarCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTSImportCalendarCacheBean, NSDate, NSMutableArray, NSString, UIButton, UITableView, UIView;

@interface CTSImportCalendarController : CTRootViewController <UITableViewDataSource, UITableViewDelegate, CTSCalendarItemCellDelegate, CTSImportCalendarCellDelegate, CTSCalendarWidgetDelegate>
{
    _Bool _isSwitchOn;
    _Bool _hasExistEvents;
    UITableView *_tableView;
    UIView *_headView;
    UIButton *_confirmButton;
    UIView *_indicatorView;
    NSMutableArray *_validCalendars;
    NSDate *_startDate;
    NSDate *_endDate;
    CTSImportCalendarCacheBean *_cacheBean;
}

@property(nonatomic) _Bool hasExistEvents; // @synthesize hasExistEvents=_hasExistEvents;
@property(retain, nonatomic) CTSImportCalendarCacheBean *cacheBean; // @synthesize cacheBean=_cacheBean;
@property(nonatomic) _Bool isSwitchOn; // @synthesize isSwitchOn=_isSwitchOn;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSMutableArray *validCalendars; // @synthesize validCalendars=_validCalendars;
@property(nonatomic) __weak UIView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) __weak UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(nonatomic) __weak UIView *headView; // @synthesize headView=_headView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)calendarWidgetToast:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)calendarWidgetTitle:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (void)calendarWidgetCanceled:(id)arg1;
- (void)calendarWidget:(id)arg1 selectedDate:(id)arg2 days:(long long)arg3;
- (void)deleteCardsService;
- (void)deleteAllCalendarMemo:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)setTableFooterView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)calendarItemCell:(id)arg1 isSelected:(_Bool)arg2;
- (void)importCellChangeTime:(id)arg1;
- (void)importCell:(id)arg1 isSwitchOn:(_Bool)arg2;
- (_Bool)hasCalendarEventsInTimeline;
- (void)goToTimeline;
- (void)sendServiceWithCardList:(id)arg1;
- (void)fetchEventsForSelectCalendars;
- (void)fetchCalendars;
- (void)confirmAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)initBaseData;
- (void)initBaseView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
