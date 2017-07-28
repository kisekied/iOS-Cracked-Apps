//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NELivePlayerController.h"

@class NMTableViewVideoReceiverObject, NSString, UIActivityIndicatorView;

@interface NELivePlayerController (NMTableViewVideo)
+ (void)load;
@property(copy, nonatomic) NSString *managedUUID;
@property(nonatomic) _Bool shutingDown;
@property(retain, nonatomic) UIActivityIndicatorView *waitingView;
@property(retain, nonatomic) NMTableViewVideoReceiverObject *receiverObject;
- (void)stopWaiting;
- (void)startWaiting;
- (void)nmvideo_playerLoadStateChanged:(id)arg1;
- (void)dealloc_nmvideo;
- (id)initWithContentURL_nmvideo:(id)arg1;
@end
