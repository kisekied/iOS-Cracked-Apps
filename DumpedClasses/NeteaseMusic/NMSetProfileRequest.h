//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMBaseRequest.h"

@class NSNumber, NSString;

@interface NMSetProfileRequest : NMBaseRequest
{
    NSString *_userId;
    NSString *_nickName;
    NSString *_avatarUrl;
    NSNumber *_birthday;
}

@property(retain, nonatomic) NSNumber *birthday; // @synthesize birthday=_birthday;
- (void)dealloc;
@property(retain, nonatomic) NSString *avatarUrl; // @dynamic avatarUrl;
@property(retain, nonatomic) NSString *nickName; // @dynamic nickName;
- (id)init;

@end

