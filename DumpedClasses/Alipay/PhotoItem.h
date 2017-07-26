//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol.h"
#import "NSCoding.h"

@class NSString;

@interface PhotoItem : APPBGeneratedMessage <NSCoding, GeneratedMessageProtocol>
{
    _Bool _hasPhotoId;
    _Bool _hasMsgId;
    _Bool _hasUrl;
    NSString *_photoId;
    NSString *_msgId;
    NSString *_url;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
@property(retain, nonatomic) NSString *photoId; // @synthesize photoId=_photoId;
@property(readonly) _Bool hasUrl; // @synthesize hasUrl=_hasUrl;
@property(readonly) _Bool hasMsgId; // @synthesize hasMsgId=_hasMsgId;
@property(readonly) _Bool hasPhotoId; // @synthesize hasPhotoId=_hasPhotoId;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
