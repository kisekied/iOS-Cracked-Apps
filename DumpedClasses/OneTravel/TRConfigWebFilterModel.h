//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

@class NSArray<Optional>;

@interface TRConfigWebFilterModel : TRBaseModel
{
    NSArray<Optional> *_root_domain;
    NSArray<Optional> *_third_party_domain;
}

@property(retain, nonatomic) NSArray<Optional> *third_party_domain; // @synthesize third_party_domain=_third_party_domain;
@property(retain, nonatomic) NSArray<Optional> *root_domain; // @synthesize root_domain=_root_domain;
- (void).cxx_destruct;

@end
