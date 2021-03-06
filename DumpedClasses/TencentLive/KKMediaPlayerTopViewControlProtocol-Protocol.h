//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, QLMovieItem, UIView;

@protocol KKMediaPlayerTopViewControlProtocol <NSObject>
- (_Bool)fromDownloadPage;
- (void)updateHeadViewWhenPlayAd;
- (_Bool)shouldShowMomentInSharePanel;
- (void)clickJumpAdsAndEnterHollywood;
- (void)showNavbar:(_Bool)arg1;
- (void)resetPlayerIgnore3G:(long long)arg1 withHistory:(_Bool)arg2;
- (void)forceResetPlayer:(long long)arg1 withHistory:(_Bool)arg2;
- (void)resetPlayer:(long long)arg1 withHistory:(_Bool)arg2;
- (void)setModelLoaded:(_Bool)arg1;
- (_Bool)isViewVisible;
- (void)setBForcePlay:(_Bool)arg1;
- (_Bool)bForcePlay;
- (void)setShouldAutoPlay:(_Bool)arg1;
- (_Bool)shouldAutoPlay;
- (void)setLastPlayIndex:(long long)arg1;
- (long long)lastPlayIndex;
- (void)setVideoID:(NSString *)arg1;

@optional
- (struct CGRect)rectForSmallPlayView;
- (void)airplayActivated:(_Bool)arg1;
- (QLMovieItem *)detailMovieItem;
- (NSArray *)arrayWithCurentRelyMarkScoreDesc;
- (NSArray *)arrayWithCurentRelyVideoList;
- (NSArray *)arrayWithVarietyRelyVideoList;
- (void)resetPlayerWithSubIndex:(long long)arg1;
- (_Bool)payCanbePlayedWithIndex:(int)arg1;
- (void)showSmallPlayer;
- (void)updateTryWatchTimeWhenFullScreenSwitchVideoIndex:(long long)arg1;
- (_Bool)willPlayNextWithCoverID:(NSString *)arg1;
- (void)handleBecomeVipButtonHidden:(_Bool)arg1;
- (_Bool)shouldShowChinaVoiceVoteByPlayTime:(double)arg1;
- (_Bool)shouldShowChinaVoiceVote;
- (_Bool)shouldShowControlViewInZhiBo;
- (void)showLiveMutilCameraView;
- (UIView *)viewForCurrentPoster;
- (void)forceRereshPayBillForPayVideo;
- (_Bool)shouldAutoPlayWhenEnterFullScreen;
- (long long)payStateForCurrentVideoWithIndex:(unsigned long long)arg1;
@end

