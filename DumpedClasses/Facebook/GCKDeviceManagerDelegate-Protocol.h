//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKApplicationMetadata, GCKDevice, GCKDeviceManager, NSError, NSString;

@protocol GCKDeviceManagerDelegate <NSObject>

@optional
- (void)deviceManagerDidPair:(GCKDeviceManager *)arg1 withGuestModeDevice:(GCKDevice *)arg2;
- (void)deviceManager:(GCKDeviceManager *)arg1 request:(long long)arg2 didFailWithError:(NSError *)arg3;
- (void)deviceManager:(GCKDeviceManager *)arg1 didReceiveStandbyStatus:(long long)arg2;
- (void)deviceManager:(GCKDeviceManager *)arg1 didReceiveActiveInputStatus:(long long)arg2;
- (void)deviceManager:(GCKDeviceManager *)arg1 volumeDidChangeToLevel:(float)arg2 isMuted:(_Bool)arg3;
- (void)deviceManager:(GCKDeviceManager *)arg1 didReceiveApplicationStatusText:(NSString *)arg2;
- (void)deviceManager:(GCKDeviceManager *)arg1 didReceiveApplicationMetadata:(GCKApplicationMetadata *)arg2;
- (void)deviceManager:(GCKDeviceManager *)arg1 didFailToStopApplicationWithError:(NSError *)arg2;
- (void)deviceManagerDidStopApplication:(GCKDeviceManager *)arg1;
- (void)deviceManager:(GCKDeviceManager *)arg1 didDisconnectFromApplicationWithError:(NSError *)arg2;
- (void)deviceManager:(GCKDeviceManager *)arg1 didFailToConnectToApplicationWithError:(NSError *)arg2;
- (void)deviceManager:(GCKDeviceManager *)arg1 didConnectToCastApplication:(GCKApplicationMetadata *)arg2 sessionID:(NSString *)arg3 launchedApplication:(_Bool)arg4;
- (void)deviceManagerDidResumeConnection:(GCKDeviceManager *)arg1 rejoinedApplication:(_Bool)arg2;
- (void)deviceManager:(GCKDeviceManager *)arg1 didSuspendConnectionWithReason:(long long)arg2;
- (void)deviceManager:(GCKDeviceManager *)arg1 didDisconnectWithError:(NSError *)arg2;
- (void)deviceManager:(GCKDeviceManager *)arg1 didFailToConnectWithError:(NSError *)arg2;
- (void)deviceManagerDidConnect:(GCKDeviceManager *)arg1;
@end

