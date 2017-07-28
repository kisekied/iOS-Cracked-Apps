//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMSongCellBaseController.h"

#import "NMAllSelectionCellDelegate.h"
#import "NMMultipleManageSongViewControllerHelperDelegate.h"
#import "NMPlayAllSectionButtonDelegate.h"
#import "NMPlaylistSectionHeaderViewDelegate.h"
#import "NMSongManageCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NMMultipleManageSongViewControllerHelper, NMPlaylistManipulateView, NMPlaylistSectionHeaderView, NSMutableArray, NSMutableDictionary, NSString;

@interface NMRecentPlayMeidaListViewController : NMSongCellBaseController <UITableViewDataSource, UITableViewDelegate, NMPlayAllSectionButtonDelegate, NMPlaylistSectionHeaderViewDelegate, NMSongManageCellDelegate, NMAllSelectionCellDelegate, NMMultipleManageSongViewControllerHelperDelegate>
{
    _Bool _isLoading;
    NMPlaylistSectionHeaderView *_sectionHeaderView;
    NSMutableArray *_recentPlaySongs;
    NSMutableDictionary *_songDic;
    NSMutableDictionary *_privilegeDic;
    NMPlaylistManipulateView *_manipulateView;
    NMMultipleManageSongViewControllerHelper *_multipleManageHelper;
}

- (void).cxx_destruct;
- (void)refreshUIAfterResetMultiple;
- (void)removeFromPlaylist:(id)arg1;
- (void)updateSelectedSong:(id)arg1 checked:(_Bool)arg2;
- (void)songManageCell:(id)arg1 cellChecked:(_Bool)arg2;
- (void)onCheckBoxAll:(id)arg1;
- (void)scrollsToTop;
- (void)exitMultiple;
- (void)enterMultiple;
- (void)setBottomMarginX;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_doDeleteRecentPlaySong:(id)arg1 indexPath:(id)arg2;
- (id)_indexPathForSong:(id)arg1;
- (void)deleteCellSelected:(id)arg1;
- (void)recentPlayHolderUpdated:(id)arg1;
- (void)reachAbilityChanged:(id)arg1;
- (void)downloadStateChanged:(id)arg1;
- (void)ipodMatched:(id)arg1;
- (void)refreshDownloadStatus;
- (void)downloadChanged:(id)arg1;
- (void)tableReloadData:(id)arg1;
- (void)tableReloadData;
- (void)backAction:(id)arg1;
- (void)loadSongs:(_Bool)arg1;
- (void)firstLoadSongsAndSync;
- (void)loadSongs;
- (void)playAllButtonClicked;
- (void)refreshForVipStatusUpdated;
- (void)refreshDataForUMG;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)tableView;
- (id)recentPlayView;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
