//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet;

@interface TReactComm : NSObject
{
    NSMutableDictionary *_requestQueues;
    NSMutableSet *_requestIDs;
}

+ (id)getInstance;
@property(retain, nonatomic) NSMutableSet *requestIDs; // @synthesize requestIDs=_requestIDs;
@property(retain, nonatomic) NSMutableDictionary *requestQueues; // @synthesize requestQueues=_requestQueues;
- (void).cxx_destruct;
- (int)parseMsgType0x210_0x9d:(const void *)arg1 DataLen:(int)arg2;
- (_Bool)sendRequest:(struct CPBMessageEncoder *)arg1 withCmd:(id)arg2 pSeq:(long long *)arg3 extraInfo:(id)arg4;
- (void)responseHandleForFetcheUpdateInfo:(id)arg1;
- (_Bool)fetchUpdateInfo:(id)arg1;
- (_Bool)preInitPACardRNView;
- (_Bool)updateLocalModules;
- (void)testupdate;
- (_Bool)downloadModuleWithID:(unsigned long long)arg1 andVersion:(unsigned long long)arg2;
- (void)dealloc;
- (id)init;

@end
