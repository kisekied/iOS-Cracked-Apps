//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBAaccsMonitorCenter : NSObject
{
    _Bool _haveBindApp;
}

+ (id)shareInstance;
@property(nonatomic) _Bool haveBindApp; // @synthesize haveBindApp=_haveBindApp;
- (void)markBindUser:(id)arg1 withStatus:(_Bool)arg2;
- (_Bool)canBindUser:(id)arg1;
- (_Bool)canBindApp;
- (id)binduserKey:(id)arg1;
- (void)accsSDKNotification:(id)arg1;
- (void)startMonitor;

@end
