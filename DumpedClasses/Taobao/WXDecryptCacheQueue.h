//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSRecursiveLock, WXHashObject;

@interface WXDecryptCacheQueue : NSObject
{
    WXHashObject *_first;
    WXHashObject *_last;
    long long _maxCount;
    NSMutableDictionary *_cacheDict;
    NSRecursiveLock *_objectLock;
}

@property(retain, nonatomic) NSRecursiveLock *objectLock; // @synthesize objectLock=_objectLock;
@property(retain, nonatomic) NSMutableDictionary *cacheDict; // @synthesize cacheDict=_cacheDict;
@property(nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
@property(nonatomic) __weak WXHashObject *last; // @synthesize last=_last;
@property(nonatomic) __weak WXHashObject *first; // @synthesize first=_first;
- (void).cxx_destruct;
- (void)takeObjectToFirst:(id)arg1;
- (void)removeAll;
- (void)addCache:(id)arg1 andCipherData:(id)arg2;
- (id)getCache:(id)arg1;
- (id)initWithMaxCount:(long long)arg1;
- (id)init;

@end
