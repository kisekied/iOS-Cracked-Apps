//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableData, NSObject<OS_dispatch_semaphore>, NSString;

@interface AWEVideoCacheDiskData : NSObject <NSCoding>
{
    NSObject<OS_dispatch_semaphore> *_sem;
    unsigned long long _fileLength;
    NSString *_mimeType;
    NSMutableData *_data;
}

@property(retain, nonatomic) NSMutableData *data; // @synthesize data=_data;
@property(copy) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property unsigned long long fileLength; // @synthesize fileLength=_fileLength;
- (void).cxx_destruct;
- (id)subdataWithRange:(struct _NSRange)arg1;
- (unsigned long long)dataLength;
- (void)appendData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

