//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBReqGeneralListModel.h"

@class NSString, TBGPSModel;

@interface TBReqGetPOIList : TBReqGeneralListModel
{
    unsigned int _coordinate;
    NSString *_keyword;
    TBGPSModel *_gps;
}

@property(retain, nonatomic) TBGPSModel *gps; // @synthesize gps=_gps;
@property(nonatomic) unsigned int coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void)dealloc;
- (id)getRequestPBData;

@end
