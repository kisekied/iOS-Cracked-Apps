//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIViewController;

@protocol O2OSearchContainerVCDelegate <NSObject>

@optional
- (void)vc:(UIViewController *)arg1 needUpdateSearchQuery:(NSString *)arg2;
- (void)vc:(UIViewController *)arg1 didUpdateCityCode:(NSString *)arg2 businessAreaId:(NSString *)arg3;
- (void)vcDidCheckSpell:(UIViewController *)arg1 checkedQuery:(NSString *)arg2;
- (void)toUpdateHintWord:(NSString *)arg1 searchWord:(NSString *)arg2;
- (void)pullRefreshDidTrigger;
@end
