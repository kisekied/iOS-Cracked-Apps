//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface JceStream : NSObject
{
    char *_streamBuffer;
    unsigned long long _streamSize;
    unsigned long long _cursor;
}

@property(nonatomic) unsigned long long cursor; // @synthesize cursor=_cursor;
@property(nonatomic) unsigned long long streamSize; // @synthesize streamSize=_streamSize;
@property(nonatomic) char *streamBuffer; // @synthesize streamBuffer=_streamBuffer;
- (id)description;
- (id)data;
- (id)init;

@end
