//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface LSLiveUserInfo : NSObject
{
    NSString *_userId;
    NSString *_loginId;
    NSString *_nickName;
    NSString *_headUrl;
    NSString *_gender;
}

+ (id)instanceWithModel:(id)arg1;
+ (id)instanceWithDic:(id)arg1;
@property(retain, nonatomic) NSString *gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSString *headUrl; // @synthesize headUrl=_headUrl;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *loginId; // @synthesize loginId=_loginId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

