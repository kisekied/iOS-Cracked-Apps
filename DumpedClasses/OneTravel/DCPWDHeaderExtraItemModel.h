//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSString<Optional>;

@interface DCPWDHeaderExtraItemModel : JSONModel
{
    NSString<Optional> *_type;
    NSString<Optional> *_message;
    NSString<Optional> *_addmark_url;
}

@property(copy, nonatomic) NSString<Optional> *addmark_url; // @synthesize addmark_url=_addmark_url;
@property(copy, nonatomic) NSString<Optional> *message; // @synthesize message=_message;
@property(copy, nonatomic) NSString<Optional> *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end
