//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDictionary, NSString;

@interface TencentBaseMessageObj : NSObject <NSCoding>
{
    long long _nVersion;
    NSString *_sName;
    NSDictionary *_dictExpandInfo;
    int _xo;
}

- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)isVaild;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVersion:(unsigned long long)arg1;

// Remaining properties
@property(retain, nonatomic) NSDictionary *dictExpandInfo; // @dynamic dictExpandInfo;
@property(nonatomic) long long nVersion; // @dynamic nVersion;
@property(retain, nonatomic) NSString *sName; // @dynamic sName;

@end
