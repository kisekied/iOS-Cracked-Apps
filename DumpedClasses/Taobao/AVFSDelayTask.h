//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AVFSThreadTask.h"

@class NSString, NSTimer;

@interface AVFSDelayTask : NSObject <AVFSThreadTask>
{
    id userInfo;
    CDUnknownBlockType _execBlock;
    double _timeDelay;
    NSTimer *_eventTimer;
}

@property(retain, nonatomic) NSTimer *eventTimer; // @synthesize eventTimer=_eventTimer;
@property(nonatomic) double timeDelay; // @synthesize timeDelay=_timeDelay;
@property(copy, nonatomic) CDUnknownBlockType execBlock; // @synthesize execBlock=_execBlock;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)timerEventFunc:(id)arg1;
- (id)initWithDelay:(double)arg1 withBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

