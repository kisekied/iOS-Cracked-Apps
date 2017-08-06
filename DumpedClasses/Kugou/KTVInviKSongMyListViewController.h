//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KTVViewController.h"

#import "EGORefreshTableHeaderDelegate.h"
#import "FFPullToLoadMoreViewDelegate.h"
#import "KTVInviteKSongLoadMoreCellDelegate.h"
#import "KTVInviteKSongSeleCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class EGORefreshTableHeaderView, FFPullToLoadMoreView, KTVKSongHotListViewModel, KTVKSongInvitedListViewModel, NSIndexPath, NSMutableArray, NSObject<OS_dispatch_group>, NSString, UITableView, UIView;

@interface KTVInviKSongMyListViewController : KTVViewController <EGORefreshTableHeaderDelegate, FFPullToLoadMoreViewDelegate, KTVInviteKSongSeleCellDelegate, KTVInviteKSongLoadMoreCellDelegate, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _ownerAccess;
    _Bool _needRefreshData;
    UIView *_emptyView;
    UIView *_netErrorView;
    _Bool _isShowAllResponsorySong;
    int _playerID;
    int _playerSex;
    unsigned long long _enteranceType;
    KTVKSongInvitedListViewModel *_inviListVM;
    CDUnknownBlockType _selectedBlock;
    UITableView *_listTableView;
    EGORefreshTableHeaderView *_refreshTableHeader;
    FFPullToLoadMoreView *_loadMoreFooterView;
    NSIndexPath *_marked_MenuIndexPath;
    NSMutableArray *_invitedSongListArr;
    NSMutableArray *_hotSongListArr;
    long long _curLoadStatus;
    unsigned long long _inviKSongMyListType;
    KTVKSongHotListViewModel *_songHotListVM;
    NSObject<OS_dispatch_group> *_taskGroup;
}

@property(nonatomic) _Bool isShowAllResponsorySong; // @synthesize isShowAllResponsorySong=_isShowAllResponsorySong;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *taskGroup; // @synthesize taskGroup=_taskGroup;
@property(retain, nonatomic) KTVKSongHotListViewModel *songHotListVM; // @synthesize songHotListVM=_songHotListVM;
@property(nonatomic) unsigned long long inviKSongMyListType; // @synthesize inviKSongMyListType=_inviKSongMyListType;
@property(nonatomic) long long curLoadStatus; // @synthesize curLoadStatus=_curLoadStatus;
@property(retain, nonatomic) NSMutableArray *hotSongListArr; // @synthesize hotSongListArr=_hotSongListArr;
@property(retain, nonatomic) NSMutableArray *invitedSongListArr; // @synthesize invitedSongListArr=_invitedSongListArr;
@property(retain, nonatomic) NSIndexPath *marked_MenuIndexPath; // @synthesize marked_MenuIndexPath=_marked_MenuIndexPath;
@property(nonatomic) __weak FFPullToLoadMoreView *loadMoreFooterView; // @synthesize loadMoreFooterView=_loadMoreFooterView;
@property(nonatomic) __weak EGORefreshTableHeaderView *refreshTableHeader; // @synthesize refreshTableHeader=_refreshTableHeader;
@property(nonatomic) __weak UITableView *listTableView; // @synthesize listTableView=_listTableView;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
@property(retain, nonatomic) KTVKSongInvitedListViewModel *inviListVM; // @synthesize inviListVM=_inviListVM;
@property(nonatomic) unsigned long long enteranceType; // @synthesize enteranceType=_enteranceType;
@property(nonatomic) int playerSex; // @synthesize playerSex=_playerSex;
@property(nonatomic) int playerID; // @synthesize playerID=_playerID;
- (void).cxx_destruct;
- (void)didSelectedLodMoreCell:(id)arg1;
- (long long)showPlayBarWay;
- (void)kSongListNeedRefreshNotification:(id)arg1;
- (void)registerNotifications;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)insertUserSongMenuCellUsingAnimationAtIndexPath:(id)arg1;
- (void)ffPullToLoadMoreViewDidTriggerRefresh;
- (_Bool)ffPullToLoadMoreViewDataSourceIsLoading;
- (id)egoRefreshTableHeaderDataSourceLastUpdated:(id)arg1;
- (_Bool)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)searchViewTap;
- (void)ktvInviteKSongSeleCell:(id)arg1 didClickToChooseSong:(int)arg2;
- (void)ktvInviteKSongSeleCell:(id)arg1 didClickToShowCellEditedMenu:(_Bool)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)clickedErrorBtnAction:(id)arg1;
- (void)hideNetErrorView;
- (void)showNetErrorView;
- (void)hideEmptyView;
- (void)showEmptyView;
- (void)pullLatestSingRecords;
- (void)startPullingSongListWithLoadingType:(unsigned long long)arg1;
- (void)clickedAddSongBtn:(id)arg1;
- (void)KGUsingControllerState:(int)arg1;
- (void)viewDidLoad;
- (id)initWithPlayerID:(int)arg1 sex:(int)arg2 enteranceType:(unsigned long long)arg3 selectedBlock:(CDUnknownBlockType)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
