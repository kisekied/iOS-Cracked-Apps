//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol FAChartsKeyProviderProtocol <NSObject>
- (NSString *)getRankingPKKey;
- (NSString *)getRankingPraiseKey;
- (NSString *)getRankingSongKey;
- (NSString *)getRankingHotKey;
- (NSString *)getRankingRichKey;
- (NSString *)getRankingStarKey;

@optional
- (NSString *)getListNameKeyWithType:(unsigned long long)arg1;
@end
