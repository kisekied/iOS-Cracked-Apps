//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBBizNetworkLogicDelegate.h"

@class NSMutableDictionary, NSString, TBUIDNetworkLogic;

@interface TBUIDService : NSObject <TBBizNetworkLogicDelegate>
{
    TBUIDNetworkLogic *_networkLogic;
    NSMutableDictionary *_cacheDict;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *cacheDict; // @synthesize cacheDict=_cacheDict;
- (id)keyForUnionIDCache;
- (void)saveUnionIDData;
- (void)readUnionIDData;
- (unsigned long long)requestBatchUpdateUserInfo:(unsigned int)arg1 withID:(id)arg2 withUserData:(id)arg3 withDelegate:(id)arg4;
- (id)getUnionIDWithCache:(id)arg1;
- (void)didRequestFail:(unsigned long long)arg1 requestModel:(id)arg2 error:(id)arg3;
- (void)didReceivedData:(unsigned long long)arg1 requestModel:(id)arg2 classModel:(id)arg3;
- (unsigned long long)requestBatchUpdateUserInfoWithUnionIDs:(id)arg1 withUserData:(id)arg2 withDelegate:(id)arg3;
- (unsigned long long)requestBatchUpdateUserInfoWithUins:(id)arg1 withUserData:(id)arg2 withDelegate:(id)arg3;
- (unsigned long long)requestUpdateUserInfoByUin:(id)arg1 orUnionID:(id)arg2 withUserData:(id)arg3 withDelegate:(id)arg4;
- (void)asyncGetBatchUserInfoWithUnionID:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)asyncGetBatchUserInfoWithUin:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (_Bool)isSelfUnionID:(id)arg1;
- (void)addUnionID:(id)arg1 forUin:(id)arg2;
- (id)getUinForUnionID:(id)arg1;
- (id)getSelfUserInfoCache;
- (id)getMyUnionID;
- (id)getUnionIDForUin:(id)arg1 isQQUser:(_Bool)arg2;
- (id)getUnionIDForUin:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
