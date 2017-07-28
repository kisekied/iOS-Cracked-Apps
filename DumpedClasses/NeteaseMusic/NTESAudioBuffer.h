//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_semaphore>;

@interface NTESAudioBuffer : NSObject
{
    _Bool _end;
    NSObject<OS_dispatch_semaphore> *_lock;
    unsigned long long _count;
    unsigned long long _maxBufferBlockNumber;
    void *_head;
    void *_tail;
    void *_reuse;
}

@property(nonatomic) unsigned long long maxBufferBlockNumber; // @synthesize maxBufferBlockNumber=_maxBufferBlockNumber;
@property(nonatomic) _Bool end; // @synthesize end=_end;
- (void).cxx_destruct;
- (void)cleanBuffer;
- (void)writeBytes:(const void *)arg1 length:(unsigned long long)arg2 sampleNumber:(unsigned long long)arg3 sampleIndex:(unsigned long long)arg4;
- (_Bool)readBytes:(void *)arg1 length:(unsigned long long *)arg2 sampleNumber:(unsigned long long *)arg3 sampleIndex:(unsigned long long *)arg4;
@property(readonly, nonatomic) _Bool full; // @dynamic full;
@property(readonly, nonatomic) unsigned long long blockCount;
- (void)dealloc;
- (id)init;

@end
