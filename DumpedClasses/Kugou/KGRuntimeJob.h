//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KGDownloadQueue, KGFileHolder, KGRuntimeFile, KGRuntimeMgr, NSObject<OS_dispatch_queue>, NSString;

@interface KGRuntimeJob : NSObject
{
    KGRuntimeMgr *_mgr;
    NSObject<OS_dispatch_queue> *_notifyQueue;
    KGDownloadQueue *_queue;
    int _priority;
    int _property;
    int _stateNow;
    long long _jobId;
    long long _fileId;
    KGFileHolder *_holder;
    KGRuntimeFile *_downfile;
    NSString *_source;
}

@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) __weak KGRuntimeFile *downfile; // @synthesize downfile=_downfile;
@property(nonatomic) int stateNow; // @synthesize stateNow=_stateNow;
@property(retain, nonatomic) KGFileHolder *holder; // @synthesize holder=_holder;
@property(nonatomic) int property; // @synthesize property=_property;
@property(nonatomic) int priority; // @synthesize priority=_priority;
@property(nonatomic) long long fileId; // @synthesize fileId=_fileId;
@property(nonatomic) long long jobId; // @synthesize jobId=_jobId;
- (void).cxx_destruct;
- (id)description;
- (void)notifyState:(id)arg1 delay:(long long)arg2;
- (void)handleStateChanged:(id)arg1;
- (void)notifyProgress;
- (_Bool)pause:(id *)arg1;
- (_Bool)stop:(id *)arg1;
- (_Bool)start:(id *)arg1;
- (void)remove;
- (void)add;
- (id)info;
- (long long)sortByJobid:(id)arg1;
- (long long)sortByPriority:(id)arg1;
- (void)unsetRealProperty;
- (void)setRealProperty;
- (void)promotePriority;
- (void)resetPriority;
- (long long)generateJobId;
- (void)dealloc;
- (id)initWithFileId:(long long)arg1 stateNow:(int)arg2 holder:(id)arg3 queue:(id)arg4 source:(id)arg5 mgr:(id)arg6;

@end
