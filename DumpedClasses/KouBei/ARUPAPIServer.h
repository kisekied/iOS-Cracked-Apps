//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ARUPAPIServer : NSObject
{
    NSString *_ip;
    NSString *_port;
}

@property(readonly, nonatomic) NSString *port; // @synthesize port=_port;
@property(readonly, nonatomic) NSString *ip; // @synthesize ip=_ip;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIP:(id)arg1 port:(id)arg2;

@end

