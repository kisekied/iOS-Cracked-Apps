//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, QLJCECacheItem;

@protocol QLOfflineSelectControllerDataSource <NSObject>
- (struct CGSize)headerSizeForSection:(long long)arg1;
- (struct UIEdgeInsets)insetsForSection:(long long)arg1;
- (double)minimumInteritemSpacingForSection:(long long)arg1;
- (double)minimumLineSpacingForSection:(long long)arg1;
- (struct CGSize)sizeAtIndexPath:(NSIndexPath *)arg1;
- (QLJCECacheItem *)cacheItemAtIndexPath:(NSIndexPath *)arg1;
- (unsigned long long)cellStateAtIndexPath:(NSIndexPath *)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (_Bool)isPreCacheForIndexPath:(NSIndexPath *)arg1;
@end

