//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPushVideoBottomView.h"

@interface QYPushVideoIpadBottomView : QYPushVideoBottomView
{
}

- (void)layoutSubviews;
- (void)setPushScreenMode:(int)arg1;
- (void)setVideoPushState:(int)arg1;
- (id)progressBar;
- (void)progressChange:(id)arg1 data:(id)arg2;
- (_Bool)isDragEnableForBroadcast:(id)arg1;
- (_Bool)isShowProgressForBroadcast:(id)arg1;
- (void)dismissProgressAlertView:(id)arg1;
- (long long)updateProgressAlertView:(id)arg1;
- (void)updatePushPlayingDuration:(long long)arg1;
- (void)updatePushEpisodes:(id)arg1;
- (void)updatePushPlayingTime:(long long)arg1;
- (void)updateNextEpisode:(id)arg1;
- (void)updatePlayingState:(_Bool)arg1;
- (void)updateProgressBarHiddenOrShow;
- (void)changBottomStyle;
- (id)init;

@end

