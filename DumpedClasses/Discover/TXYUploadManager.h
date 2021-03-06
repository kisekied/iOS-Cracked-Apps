//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TXYUploadRequestDelegate.h"

@class NSMutableArray, NSOperationQueue, NSString, NSTimer, TXYUploadTaskQueue;

@interface TXYUploadManager : NSObject <TXYUploadRequestDelegate>
{
    NSTimer *_monitorTimer;
    TXYUploadTaskQueue *_fileLocalQueue;
    NSMutableArray *_commandLocalQueue;
    NSOperationQueue *_fileUploadQueue;
    NSOperationQueue *_commandUploadQueue;
    long long _cloudType;
}

+ (void)internalswitchEnvironment:(id)arg1;
+ (void)switchEnvironment:(_Bool)arg1;
+ (long long)daysFromCurrentDate:(id)arg1;
+ (_Bool)uploadLogFromDate:(id)arg1 numOfdays:(unsigned long long)arg2;
+ (id)getDeviceUniqueIdentifier;
+ (id)parseSignStringToMap:(id)arg1;
+ (long long)checkSign:(id)arg1 sign:(id)arg2;
+ (id)version;
+ (int)maxConcurrentCount:(long long)arg1;
+ (void)runRequests;
+ (id)uploadThread;
@property(nonatomic) long long cloudType; // @synthesize cloudType=_cloudType;
@property(retain, nonatomic) NSOperationQueue *commandUploadQueue; // @synthesize commandUploadQueue=_commandUploadQueue;
@property(retain, nonatomic) NSOperationQueue *fileUploadQueue; // @synthesize fileUploadQueue=_fileUploadQueue;
@property(retain, nonatomic) NSMutableArray *commandLocalQueue; // @synthesize commandLocalQueue=_commandLocalQueue;
@property(retain, nonatomic) TXYUploadTaskQueue *fileLocalQueue; // @synthesize fileLocalQueue=_fileLocalQueue;
- (void).cxx_destruct;
- (void)cancelRequestUnderCondition:(CDUnknownBlockType)arg1;
- (void)notifyPacket:(id)arg1 stateChange:(long long)arg2;
- (id)convertCommandToPacket:(id)arg1;
- (id)convertTaskToPacket:(id)arg1;
- (void)internalSendCommand:(id)arg1;
- (void)internalResumeAll;
- (void)internalResume:(id)arg1;
- (void)internalClear;
- (void)internalPauseAll;
- (void)internalPause:(id)arg1;
- (void)internalCancel:(id)arg1;
- (void)internalUpload:(id)arg1;
- (_Bool)isTaskCancelable:(long long)arg1;
- (_Bool)validateSigningInfo:(id)arg1;
- (_Bool)validateFileTask:(id)arg1;
- (_Bool)validateCommandTask:(id)arg1;
- (_Bool)sendCommand:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)uploadTasks;
- (void)resumeAll;
- (void)resume:(long long)arg1;
- (void)clear;
- (_Bool)cancel:(long long)arg1;
- (void)pauseAll;
- (_Bool)pause:(long long)arg1;
- (_Bool)upload:(id)arg1 complete:(CDUnknownBlockType)arg2 progress:(CDUnknownBlockType)arg3 stateChange:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (void)setupMembersWithPersistenceId:(id)arg1;
- (id)initWithCloudType:(long long)arg1 persistenceId:(id)arg2 appId:(id)arg3;
- (id)init;
- (void)notifyRequestCancel:(id)arg1;
- (void)notifyRequestFinish:(id)arg1;
- (void)notifyRequestStart:(id)arg1;
- (void)saveHistory;
- (_Bool)trySendNextCommand;
- (_Bool)tryUploadNextFile;
- (void)checkTimerStatus;
- (void)stopCheckTimer;
- (void)startCheckTimer;
- (void)checkReqeustStateInQueue:(id)arg1;
- (void)checkState;
- (void)applicationWillEnterForeground;
- (void)applicationWillEnterBackground;
- (void)applicationEventListen;
- (void)removeApplicationEventListen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

