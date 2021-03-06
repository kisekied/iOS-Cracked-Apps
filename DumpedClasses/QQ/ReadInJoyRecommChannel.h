//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface ReadInJoyRecommChannel : NSObject <NSCoding>
{
    unsigned int _channel_id;
    unsigned int _channel_type;
    unsigned int _channel_isBold;
    unsigned int _channel_showIcon;
    unsigned int _channel_frame_color;
    unsigned int _channel_font_color;
    NSString *_channel_name;
    NSArray *_child_channel_list;
    NSString *_channel_jump_url;
    NSString *_channel_ark_config;
    NSArray *_search_word;
}

@property(retain, nonatomic) NSArray *search_word; // @synthesize search_word=_search_word;
@property(retain, nonatomic) NSString *channel_ark_config; // @synthesize channel_ark_config=_channel_ark_config;
@property(retain, nonatomic) NSString *channel_jump_url; // @synthesize channel_jump_url=_channel_jump_url;
@property(nonatomic) unsigned int channel_font_color; // @synthesize channel_font_color=_channel_font_color;
@property(nonatomic) unsigned int channel_frame_color; // @synthesize channel_frame_color=_channel_frame_color;
@property(retain, nonatomic) NSArray *child_channel_list; // @synthesize child_channel_list=_child_channel_list;
@property(retain, nonatomic) NSString *channel_name; // @synthesize channel_name=_channel_name;
@property(nonatomic) unsigned int channel_showIcon; // @synthesize channel_showIcon=_channel_showIcon;
@property(nonatomic) unsigned int channel_isBold; // @synthesize channel_isBold=_channel_isBold;
@property(nonatomic) unsigned int channel_type; // @synthesize channel_type=_channel_type;
@property(nonatomic) unsigned int channel_id; // @synthesize channel_id=_channel_id;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

