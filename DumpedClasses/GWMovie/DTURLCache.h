//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLCache.h>

@interface DTURLCache : NSURLCache
{
}

+ (id)synthesisRequest:(id)arg1;
+ (_Bool)hasETagInResponse:(id)arg1;
+ (id)CalculateETag:(id)arg1;
+ (id)diskPath;
+ (id)sharedCache;
- (id)ETagForRequest:(id)arg1;
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;
- (id)cachedResponseForRequest:(id)arg1;

@end

