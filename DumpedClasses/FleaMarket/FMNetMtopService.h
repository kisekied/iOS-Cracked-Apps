//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FMNetProtocol.h"

@class NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString;

@interface FMNetMtopService : NSObject <FMNetProtocol>
{
    NSRecursiveLock *_handlerLock;
    NSMutableDictionary *_mtopAPIHanderMap;
    NSMutableSet *_responseFilterHandlerSet;
    id <FMCacheProtocol> _responseCache;
}

+ (void)initMtopService;
@property(retain, nonatomic) id <FMCacheProtocol> responseCache; // @synthesize responseCache=_responseCache;
@property(retain, nonatomic) NSMutableSet *responseFilterHandlerSet; // @synthesize responseFilterHandlerSet=_responseFilterHandlerSet;
@property(retain, nonatomic) NSMutableDictionary *mtopAPIHanderMap; // @synthesize mtopAPIHanderMap=_mtopAPIHanderMap;
@property(retain, nonatomic) NSRecursiveLock *handlerLock; // @synthesize handlerLock=_handlerLock;
- (void).cxx_destruct;
- (id)cacheKeyForRequestModel:(id)arg1;
- (void)filterResponseModel:(id)arg1 withRequestModel:(id)arg2 completeHandler:(CDUnknownBlockType)arg3;
- (void)preProccessForRequestModel:(id)arg1;
- (void)removeResponseFilterHandler:(CDUnknownBlockType)arg1;
- (void)addResponseFilterHandler:(CDUnknownBlockType)arg1;
- (void)removeMtopHandler:(CDUnknownBlockType)arg1 for:(id)arg2;
- (void)addMtopHandler:(CDUnknownBlockType)arg1 for:(id)arg2;
- (id)sendRequestWithMtopRequestModel:(id)arg1 completeHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

