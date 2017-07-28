//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBCDNImageConfigProtocol.h"

@class NSString;

@interface OrangeConfigDefault : NSObject <TBCDNImageConfigProtocol>
{
    NSString *_orangeGroupName;
    NSString *_orangeGroupNameNoticeKey;
}

@property(retain, nonatomic) NSString *orangeGroupNameNoticeKey; // @synthesize orangeGroupNameNoticeKey=_orangeGroupNameNoticeKey;
@property(retain, nonatomic) NSString *orangeGroupName; // @synthesize orangeGroupName=_orangeGroupName;
- (void).cxx_destruct;
- (id)initWithGroupFileName:(id)arg1;
- (id)init;
- (id)getConfigUpdateNoticeName;
- (id)getConfigContent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
