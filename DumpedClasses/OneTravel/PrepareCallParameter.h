//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PrepareCallParameter : NSObject
{
    _Bool _enableShowGuideAlert;
    NSString *_token;
    NSString *_srcTel;
    NSString *_bindData;
    NSString *_sid;
    NSString *_oid;
    unsigned long long _clientType;
}

@property(nonatomic) _Bool enableShowGuideAlert; // @synthesize enableShowGuideAlert=_enableShowGuideAlert;
@property(nonatomic) unsigned long long clientType; // @synthesize clientType=_clientType;
@property(copy, nonatomic) NSString *oid; // @synthesize oid=_oid;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(copy, nonatomic) NSString *bindData; // @synthesize bindData=_bindData;
@property(copy, nonatomic) NSString *srcTel; // @synthesize srcTel=_srcTel;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;

@end
