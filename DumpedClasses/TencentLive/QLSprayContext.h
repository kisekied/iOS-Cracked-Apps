//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KKMediaPlayerActionDelegate.h"
#import "KKMediaPlayerDataSource.h"
#import "KKMediaPlayerEventProtocol.h"
#import "QLSprayContextDataSource.h"
#import "QLSprayContextFunctionDelgate.h"
#import "QLSprayContextViewAppearAndDisappear.h"
#import "QLSprayUIScrollViewDelegate.h"

@class KKMediaRootViewController, NSArray, NSData, NSDictionary, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, QLBaseViewController, QLHollywoodSprayVideoModel, QLJCEMiniProgramInfo, QLLiveV3PollHelper, QLMovieItem, QLSprayFloatPlayerContext, QLSprayPlayerEventHelper, QLSprayPlayerPlayNextHelper, QLSprayPlayerRecordHelper, QLSprayPlayerStatusInfoModel, QLSprayPlayerViewHelper, UIImage, UITableView, UIView<QLSprayViewCellActionDelegate>, UIViewController;

@interface QLSprayContext : NSObject <KKMediaPlayerEventProtocol, KKMediaPlayerActionDelegate, KKMediaPlayerDataSource, QLSprayUIScrollViewDelegate, QLSprayContextDataSource, QLSprayContextViewAppearAndDisappear, QLSprayContextFunctionDelgate>
{
    KKMediaRootViewController *_sprayPlayer;
    _Bool _hasClosePlayerWhenViewDisapear;
    _Bool _isPlayerInFullScreen;
    _Bool scrollingAutoPlay;
    _Bool showVolumeButton;
    _Bool _isAutoPlayerLocalOffSwitch;
    _Bool _isNeedShowFloatWindowLocalOffSwitch;
    UITableView *sprayContextTableView;
    NSArray *arraySprayDatas;
    QLBaseViewController *_viewController;
    unsigned long long _sprayContextType;
    id <QLSprayContextDelegate> _delegate;
    QLSprayFloatPlayerContext *_floatPlayerContext;
    QLHollywoodSprayVideoModel *_sprayPayVideoModel;
    QLSprayPlayerViewHelper *_playerViewHelper;
    QLSprayPlayerRecordHelper *_playerRecordHelper;
    QLSprayPlayerEventHelper *_playerEventHelper;
    QLSprayPlayerPlayNextHelper *_playerPlayNextHelper;
    UIView<QLSprayViewCellActionDelegate> *_viewCell;
    NSIndexPath *_indexPathPlayerCell;
    QLLiveV3PollHelper *_sprayPollHelper;
    NSMutableDictionary *_liveDetailModels;
    NSMutableDictionary *_coverDetailModels;
    NSMutableArray *_hasPreloadVideoItemData;
}

@property(retain, nonatomic) NSMutableArray *hasPreloadVideoItemData; // @synthesize hasPreloadVideoItemData=_hasPreloadVideoItemData;
@property(retain, nonatomic) NSMutableDictionary *coverDetailModels; // @synthesize coverDetailModels=_coverDetailModels;
@property(retain, nonatomic) NSMutableDictionary *liveDetailModels; // @synthesize liveDetailModels=_liveDetailModels;
@property(retain, nonatomic) QLLiveV3PollHelper *sprayPollHelper; // @synthesize sprayPollHelper=_sprayPollHelper;
@property(retain, nonatomic) NSIndexPath *indexPathPlayerCell; // @synthesize indexPathPlayerCell=_indexPathPlayerCell;
@property(nonatomic) __weak UIView<QLSprayViewCellActionDelegate> *viewCell; // @synthesize viewCell=_viewCell;
@property(nonatomic) _Bool isNeedShowFloatWindowLocalOffSwitch; // @synthesize isNeedShowFloatWindowLocalOffSwitch=_isNeedShowFloatWindowLocalOffSwitch;
@property(nonatomic) _Bool isAutoPlayerLocalOffSwitch; // @synthesize isAutoPlayerLocalOffSwitch=_isAutoPlayerLocalOffSwitch;
@property(retain, nonatomic) QLSprayPlayerPlayNextHelper *playerPlayNextHelper; // @synthesize playerPlayNextHelper=_playerPlayNextHelper;
@property(retain, nonatomic) QLSprayPlayerEventHelper *playerEventHelper; // @synthesize playerEventHelper=_playerEventHelper;
@property(retain, nonatomic) QLSprayPlayerRecordHelper *playerRecordHelper; // @synthesize playerRecordHelper=_playerRecordHelper;
@property(retain, nonatomic) QLSprayPlayerViewHelper *playerViewHelper; // @synthesize playerViewHelper=_playerViewHelper;
@property(retain, nonatomic) QLHollywoodSprayVideoModel *sprayPayVideoModel; // @synthesize sprayPayVideoModel=_sprayPayVideoModel;
@property(retain, nonatomic) QLSprayFloatPlayerContext *floatPlayerContext; // @synthesize floatPlayerContext=_floatPlayerContext;
@property(nonatomic) __weak id <QLSprayContextDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long sprayContextType; // @synthesize sprayContextType=_sprayContextType;
@property(nonatomic) __weak QLBaseViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) _Bool showVolumeButton; // @synthesize showVolumeButton;
@property(nonatomic) _Bool scrollingAutoPlay; // @synthesize scrollingAutoPlay;
@property(nonatomic) __weak NSArray *arraySprayDatas; // @synthesize arraySprayDatas;
@property(nonatomic) __weak UITableView *sprayContextTableView; // @synthesize sprayContextTableView;
- (void).cxx_destruct;
- (void)forceClosePlayerForADJump;
- (_Bool)checkRotateConditioWhenMultiPlayerExits:(id)arg1;
- (_Bool)askPlayerPlayLastVideoInCoverPoster:(id)arg1;
- (void)needToCleanCoverDetailModels;
- (id)registerCidVideoListItem:(id)arg1;
- (double)getFloatPlayerHeight;
- (void)unRegisterLiveDetailModel:(id)arg1;
- (id)registerLiveDetailModel:(id)arg1;
- (id)sprayVideoViewofPlayCell;
- (long long)getCurrentPlayLiveStatus;
@property(readonly, nonatomic) NSString *shareSubTitle;
@property(readonly, nonatomic) NSString *shareFromPage;
@property(readonly, nonatomic) unsigned long long shareDataType;
@property(readonly, nonatomic) NSString *shareURL;
@property(readonly, nonatomic) NSString *shareTitle;
@property(readonly, nonatomic) NSString *shareID;
- (_Bool)enableAddListBtn;
- (id)getCurrentAttentionItem;
- (_Bool)shouldSaveRecord;
- (void)kkPlayer:(id)arg1 didClickButton:(unsigned long long)arg2;
- (void)visibleCellsDisAppear;
- (void)visibleCellsAppear;
- (void)forceClosePlayer:(unsigned long long)arg1;
- (void)removeTableViewTouchDelay;
- (void)flushPageNotify;
- (void)didMediaPlayerScreenChanged:(id)arg1 fullScreen:(_Bool)arg2;
- (_Bool)qlShouldAutorotate;
- (void)playActionNotifyFromItem:(id)arg1;
- (void)playIndexChanged:(id)arg1;
- (void)tryPlayActionNotify;
- (void)didMediaPlayerEventOccur:(int)arg1 userInfo:(id)arg2;
- (void)didMediaPlayerStateChanged:(int)arg1 error:(id)arg2 playerCtl:(id)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)qlsprayItemCellPrepareToReuse:(id)arg1;
- (void)qlSprayViewEnterForeground:(id)arg1;
- (void)qlSprayViewEnterBackground:(id)arg1;
- (void)qlSprayViewDisappear:(_Bool)arg1;
- (void)qlSprayViewAppear:(_Bool)arg1;
- (void)didReceivePlayerToggleToSmallScreenNotification:(id)arg1;
- (void)didReceivePlayerToggleToFullScreenNotification:(id)arg1;
- (void)__doesNotRepeatCallIteratorSprayContextTableViewVisibleCells;
- (void)iteratorSprayContextTableViewVisibleCells;
- (void)showTheBiggerAreaCellPlayingVideoThenPreloadVideoForCacheModelByVisableCell:(id)arg1;
- (void)preloadLiveVideoWithPreviewBoard:(id)arg1;
- (void)stopPreloadVideos;
- (void)preloadVideoForCacheModel:(id)arg1;
@property(readonly, nonatomic) __weak QLSprayPlayerStatusInfoModel *sprayPlayerModel;
- (void)dealloc;
- (_Bool)handleFlashAutoPlaying:(_Bool)arg1;
- (id)getSprayPlayer;
@property(retain, nonatomic) KKMediaRootViewController *sprayPlayer; // @dynamic sprayPlayer;
- (id)initWithViewController:(id)arg1 withSprayContextType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool needShare;
@property(readonly, nonatomic) NSString *shareActionUrl;
@property(readonly, nonatomic) NSString *shareContent;
@property(readonly, nonatomic) NSString *shareContentTail;
@property(readonly, nonatomic) UIViewController *shareController;
@property(readonly, nonatomic) NSString *shareCopyContent;
@property(readonly, nonatomic) NSDictionary *shareExtendInfo;
@property(readonly, nonatomic) NSData *shareGifData;
@property(readonly, nonatomic) UIImage *shareImage;
@property(readonly, nonatomic) NSString *shareImageURL;
@property(readonly, nonatomic) QLJCEMiniProgramInfo *shareMiniProgramInfo;
@property(readonly, nonatomic) NSData *shareOriImgData;
@property(readonly, nonatomic) NSArray *sharePictureList;
@property(readonly, nonatomic) unsigned long long sharePlatformMask;
@property(readonly, nonatomic) NSDictionary *shareReportInfo;
@property(readonly, nonatomic) NSString *shareSingleTitle;
@property(readonly, nonatomic) unsigned long long shareStyle;
@property(readonly, nonatomic) QLMovieItem *shareVideoInfo;
@property(readonly) Class superclass;

@end

