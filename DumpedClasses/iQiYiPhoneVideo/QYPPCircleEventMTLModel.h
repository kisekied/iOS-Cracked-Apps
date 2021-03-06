//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSNumber, NSString;

@interface QYPPCircleEventMTLModel : MTLModel <MTLJSONSerializing>
{
    NSNumber *_circleEventId;
    NSNumber *_circleEventTodayHot;
    NSNumber *_circleEventHotNum;
    NSString *_circleEventName;
    NSString *_circleEventIcon;
    NSNumber *_circleEventType;
    NSNumber *_circleEventValid;
    struct _NSRange _range;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(retain, nonatomic) NSNumber *circleEventValid; // @synthesize circleEventValid=_circleEventValid;
@property(retain, nonatomic) NSNumber *circleEventType; // @synthesize circleEventType=_circleEventType;
@property(copy, nonatomic) NSString *circleEventIcon; // @synthesize circleEventIcon=_circleEventIcon;
@property(copy, nonatomic) NSString *circleEventName; // @synthesize circleEventName=_circleEventName;
@property(retain, nonatomic) NSNumber *circleEventHotNum; // @synthesize circleEventHotNum=_circleEventHotNum;
@property(retain, nonatomic) NSNumber *circleEventTodayHot; // @synthesize circleEventTodayHot=_circleEventTodayHot;
@property(retain, nonatomic) NSNumber *circleEventId; // @synthesize circleEventId=_circleEventId;
- (void).cxx_destruct;

@end

