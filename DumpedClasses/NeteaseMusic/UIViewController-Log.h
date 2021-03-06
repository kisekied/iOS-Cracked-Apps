//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSString;

@interface UIViewController (Log)
+ (void)load;
@property(nonatomic) _Bool isSubPage;
@property(nonatomic) _Bool disableManuallyLog;
@property(nonatomic) _Bool disableViewLifeCircleLog;
@property(nonatomic) double showTime;
- (id)extraBIDescInfo;
- (void)viewWillDisappearAndLogForSubView;
- (void)viewWillAppearAndLogForSubView;
- (void)_addDisappearLog;
@property(readonly, nonatomic) NSString *pageName;
@property(readonly, nonatomic) NSString *customClassIdString;
- (void)_addAppearLog;
- (void)addViewDisappearLogManually;
- (void)addViewAppearLogManually;
- (void)addViewWillDisappearLog;
- (void)addViewWillAppearLog;
- (_Bool)needLifeTimeLog;
- (void)viewWillDisappear_log:(_Bool)arg1;
- (void)viewWillAppear_log:(_Bool)arg1;
@end

