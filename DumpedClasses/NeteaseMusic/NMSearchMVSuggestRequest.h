//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@class NSString;

@interface NMSearchMVSuggestRequest : NMBaseRequest
{
    NSString *_keyword;
    unsigned long long _limit;
}

@property(readonly, nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(readonly, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;
- (id)initWithKeyword:(id)arg1 limit:(unsigned long long)arg2;

@end

