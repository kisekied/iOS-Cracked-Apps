//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface HotelNearByTourInfo : CTBusinessBean
{
    int _urlType;
    NSString *_title;
    NSString *_subTitle;
    NSString *_url;
    NSString *_image;
}

@property(copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int urlType; // @synthesize urlType=_urlType;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end
