//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSString;

@protocol WloginTranCallbackProtocol <NSObject>
- (void)tranFailed:(int)arg1 withMsg:(NSString *)arg2;
- (void)tranSuccessWithData:(NSData *)arg1;
@end

