//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCopying-Protocol.h"

@class FBMemModelObject, NSString, UIImage;

@interface FBProfileSingleSetStoryComponentModel : FBValueObject <NSCopying>
{
    NSString *_identifier;
    FBMemModelObject *_media;
    UIImage *_pendingImage;
    NSString *_caption;
}

@property(readonly, copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(readonly, copy, nonatomic) UIImage *pendingImage; // @synthesize pendingImage=_pendingImage;
@property(readonly, copy, nonatomic) FBMemModelObject *media; // @synthesize media=_media;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1 media:(id)arg2 pendingImage:(id)arg3 caption:(id)arg4;

@end

