//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSNumber<Optional>, NSString<Optional>;

@interface TRMatchFrined : JSONModel
{
    NSNumber<Optional> *_degree;
    NSString<Optional> *_degree_des;
    NSString<Optional> *_head_url;
}

@property(copy, nonatomic) NSString<Optional> *head_url; // @synthesize head_url=_head_url;
@property(copy, nonatomic) NSString<Optional> *degree_des; // @synthesize degree_des=_degree_des;
@property(retain, nonatomic) NSNumber<Optional> *degree; // @synthesize degree=_degree;
- (void).cxx_destruct;

@end
