//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NetworkCheckerDelegate.h"

@class NSString, QLReachability;

@interface QLAppNetworkManager : NSObject <NetworkCheckerDelegate>
{
    NSString *_IPV6Pref;
    QLReachability *_internetReach;
}

+ (id)sharedInstance;
@property(retain, nonatomic) QLReachability *internetReach; // @synthesize internetReach=_internetReach;
@property(retain, nonatomic) NSString *IPV6Pref; // @synthesize IPV6Pref=_IPV6Pref;
- (void).cxx_destruct;
- (void)handleAppDidFinishLaunch;
- (void)updateIPV6Pref;
- (void)reachabilityChanged;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

