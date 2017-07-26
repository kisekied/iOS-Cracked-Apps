//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MTUseTabMonitor;

@interface MTUseMonitor : NSObject
{
    double _totalFgTime;
    double _enterFgTime;
    double _enterBgTime;
    double _bgShortTime;
    MTUseTabMonitor *_useTabMonitor;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (double)loadTotalTime;
- (void)saveTotalTime:(double)arg1;
- (id)tabMonitor;
- (void)onAppEnterFg;
- (void)onAppEnterBg;
- (void)onAppLaunch;
- (id)init;

@end
