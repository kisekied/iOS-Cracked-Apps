//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TRBaseModel.h"

#import "NSCoding.h"

@class NSNumber<Optional>, NSString<Optional>;

@interface SComInfo : TRBaseModel <NSCoding>
{
    NSString<Optional> *_cname;
    NSString<Optional> *_pname;
    NSNumber<Optional> *_cid;
    NSString<Optional> *_open;
    NSString<Optional> *_desc;
    NSString<Optional> *_params;
}

@property(copy, nonatomic) NSString<Optional> *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString<Optional> *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString<Optional> *open; // @synthesize open=_open;
@property(copy, nonatomic) NSNumber<Optional> *cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSString<Optional> *pname; // @synthesize pname=_pname;
@property(copy, nonatomic) NSString<Optional> *cname; // @synthesize cname=_cname;
- (void).cxx_destruct;

@end
