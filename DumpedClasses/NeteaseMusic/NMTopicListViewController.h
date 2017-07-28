//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "NMHttpRequestDelegate.h"
#import "NMTopicSearchViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MCSearchBar, MCSearchBarContainerView, MCSearchDisplayController, NMAllTopiclistRequest, NMTopicSearchViewController, NSMutableArray, NSString, UITableView, UIView;

@interface NMTopicListViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, NMHttpRequestDelegate, NMTopicSearchViewControllerDelegate>
{
    NSMutableArray *_topicArray;
    NMAllTopiclistRequest *_topiclistRequest;
    _Bool _isLoading;
    double _browserBeginTime;
    _Bool _isTriggeredByInput;
    id <NMTopicListDelegate> _delegate;
    MCSearchBar *_searchBar;
    MCSearchBarContainerView *_searchBarContainerView;
    MCSearchDisplayController *_searchResultDisplayController;
    NMTopicSearchViewController *_searchViewController;
    UITableView *_toplistTableView;
    UIView *_headerView;
}

@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UITableView *toplistTableView; // @synthesize toplistTableView=_toplistTableView;
@property(retain, nonatomic) NMTopicSearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(retain, nonatomic) MCSearchDisplayController *searchResultDisplayController; // @synthesize searchResultDisplayController=_searchResultDisplayController;
@property(retain, nonatomic) MCSearchBarContainerView *searchBarContainerView; // @synthesize searchBarContainerView=_searchBarContainerView;
@property(retain, nonatomic) MCSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) _Bool isTriggeredByInput; // @synthesize isTriggeredByInput=_isTriggeredByInput;
@property(nonatomic) __weak id <NMTopicListDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)topicClicked:(id)arg1 NMTopicSearchViewController:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)requestFailed:(id)arg1;
- (void)requestCompleted:(id)arg1;
- (void)requstForToplistData;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)topicClicked:(id)arg1;
- (void)backAction:(id)arg1;
- (void)endRcordBrowsing;
- (void)startRecordBrowsing;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
